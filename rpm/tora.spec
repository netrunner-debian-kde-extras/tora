# This specfile is Mandrake Linux specific
#
# This requires a working Oracle installation to build with a set ORACLE_HOME
# environment. Requires at least version 8.1.7 of Oracle.
#


%define _name           tora

%define _version        2.1.3
%define _release        1

%define _iconsdir       %{_datadir}/icons

# filter out oracle libraries because oracle-instantclient rpm doesn't provide them
%define _use_internal_dependency_generator 0
%{expand:%global __orig__find_requires %{__find_requires}}
%define __find_requires  %{_builddir}/%{?buildsubdir}/rpm/tora_filter_requires.sh %{__orig__find_requires}



Summary:                Toolkit for Oracle
Name:                   %{_name}
Version:                %{_version}
Release:                %{_release}%{?dist}
Source:                 %{_name}-%{_version}.tar.gz
URL:                    http://tora.sourceforge.net
Group:                  Development/Databases
Vendor:                 TOra
License:                GPL
BuildRoot:              %{_tmppath}/tora-root
BuildRequires: postgresql-devel
BuildRequires: oracle-instantclient11.2-devel
BuildRequires: qt4-devel >= 4.3.0
BuildRequires: openssl-devel
BuildRequires: perl
BuildRequires: cmake >= 2.4.0
BuildRequires: gcc-c++
Requires:      qt4 >= 4.3.0
Requires:      oracle-instantclient11.2-basic
%if ! 0%{?rhel} || 0%{?rhel} > 5
BuildRequires: qscintilla-devel >= 2.0.0
Requires:      qscintilla >= 2.0.0
%endif


#
# Description below is copied verbatim from the README file
#

%description

See README file from TOra distribution.

%package oracle
Summary:                Oracle specific plugins for %{_name}
Group:                  Development/Databases
Requires:               %{_name} = %{_version}
Autoreq:                0

%description oracle
Oracle specific plugins for %{_name}. This plugin will require a valid installation
of an Oracle Client of version 8.1 or later to function that can be downloaded by
a free registration from Oracle Technet from http://technet.oracle.com. NOTE: You
will require to download the entire server distribution to install the client, but
it is available as a choice in the installer.

%prep
%setup -q

%{__rm} -rf CMakeFiles CMakeCache.txt
perl -pi -e 's/SET \(VERSION_SUFFIX ".*"\)/SET (VERSION_SUFFIX "")/' CMakeLists.txt

export CFLAGS="$RPM_OPT_FLAGS"
export CXXFLAGS="$RPM_OPT_FLAGS"
unset ORACLE_HOME

%define oraincdir /usr/include/oracle
%define oralibdir /usr/lib/oracle
%define oraclientdir client

%ifarch x86_64 s390x
%define oraclientdir client64
%endif

%{__cmake} \
        -DCMAKE_INSTALL_PREFIX:PATH=%{_prefix} \
        -DORACLE_PATH_INCLUDES=$(ls -d -1 %{oraincdir}/*/%{oraclientdir} | tail -n 1) \
        -DORACLE_PATH_LIB=$(ls -d -1 %{oralibdir}/*/%{oraclientdir}/lib | tail -n 1) \
        -DPOSTGRESQL_PATH_INCLUDES=%{_includedir} \
%if  0%{?rhel} && 0%{?rhel} < 6
        -DWANT_INTERNAL_QSCINTILLA=1 \
%endif
        .

%build

%{__make}

# Ugly hack to remove version from libclntsh.so, if someone knows a better way please let me know
perl -pi -e 's/(libclntsh.so)(\.\d+\.\d+)/sprintf("%s%s",$1,"\0" x length($2))/ge' src/tora
#perl -pi -e 's/(libclntsh.so)(\.\d+\.\d+)/sprintf("%s%s",$1,"\0" x length($2))/ge' .libs/libtooracleconnection.so \


%install

%{__rm} -rf "${RPM_BUILD_ROOT}" 
%{__mkdir_p} "${RPM_BUILD_ROOT}%{_prefix}/bin"
%{__mkdir_p} "${RPM_BUILD_ROOT}%{_libdir}/tora/help"
%{__mkdir_p} "${RPM_BUILD_ROOT}%{_libdir}/tora/help/images"
%{__mkdir_p} "${RPM_BUILD_ROOT}%{_libdir}/tora/help/api"
%{__mkdir_p} "${RPM_BUILD_ROOT}%{_iconsdir}/hicolor/16x16/apps"
%{__mkdir_p} "${RPM_BUILD_ROOT}%{_iconsdir}/hicolor/32x32/apps"
%{__make} DESTDIR="${RPM_BUILD_ROOT}" install

%{__install} --mode=644 doc/help/*.html "${RPM_BUILD_ROOT}%{_libdir}/tora/help/"
%{__install} --mode=644 doc/help/images/*.png "${RPM_BUILD_ROOT}%{_libdir}/tora/help/images/"
#%{__install} --mode=644 doc/help/api/*.html "${RPM_BUILD_ROOT}%{_libdir}/tora/help/api/"

%{__install} --mode=644 src/icons/tora.xpm "${RPM_BUILD_ROOT}%{_iconsdir}/hicolor/32x32/apps/tora.xpm"
%{__install} --mode=644 src/icons/toramini.xpm "${RPM_BUILD_ROOT}%{_iconsdir}/hicolor/16x16/apps/tora.xpm"

%post

%postun


%files 
%defattr(-,root,root)
%{_prefix}/bin/*
%{_libdir}/tora
%{_iconsdir}/hicolor/*/apps/tora.xpm
%doc %{_defaultdocdir}/tora

%clean
%{__rm} -rf "${RPM_BUILD_ROOT}"

%changelog
* Tue Apr  6 2010 Michael Mraka <michael.mraka@redhat.com> 2.1.2-1
- updated to TOra 2.1.2
- updated instanclient to oracle-instantclient11.2

* Tue Nov 18 2008 Michael Mraka <michael.mraka@redhat.com> 2.1.0-1
- bumped to latest version
- uses oracle-instantclient11.1

* Tue Nov 18 2008 Michael Mraka <michael.mraka@redhat.com> 2.0.0-0.3100svn
- added cmake 2.4 patch

* Tue Oct  7 2008 Michael Mraka <michael.mraka@redhat.com> 2.0.0-0.3041svn
- changed to cmake driven build for 2.0.0 version
- built against oracle-instantclient 

* Mon Jun 29 2005 Nathan Neulinger <nneul@neulinger.org>
- standardize on a single tora spec file

