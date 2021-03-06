Domain Name Relay Daemon
========================

Features
 * Caching of DNS requests.
 * Support for backup DNS servers.
 * Uses random source port and random query ID's to prevent cache poisoning.
 * Support for simple routing - specify different forward DNS servers for different domains.
 * Force authorative or unauthorative answers for specified domains.
 * Share the /etc/hosts over the network.
 * Support for openbsd, freebsd and linux.
 * TCP support
 * DNS blacklist support

About DNRD
----------
The Domain Name Relay Daemon (DNRD) is a simple "proxy" nameserver.
It is meant to be used for home networks that can connect to the internet
using one of several ISP's.

DNRD is pretty simple.  It takes DNS queries from hosts, and forwards them
to the "real" DNS server.  It takes DNS replies from the DNS server, and
forwards them to the client.  What makes DNRD special is that it can be
configured to forward to different DNS servers depending on what ISP you
are dialing.

Before DNRD, there was no easy way to change the default nameserver on a Linux
system.  You can play games with /etc/resolv.conf, such as copying other
versions of this file in place depending on which ISP you're dialing into,
but that is a pain.  Instead, you can run DNRD on your dial-up machine.
Whenever you dial into an ISP, run dnrd with the appropriate DNS server
as an argument.  Here's an example of how you would run it:

    dnrd  -s 1.2.3.4

DNRD was originally designed to work in conjuction with mserver.  It works
very well with mserver, but works just fine with other dialup systems as well
as in other non-dialup environments.

Please read the INSTALL file for information on how to build & run dnrd.

Download
-------------------------
Latest release of dnrd is [2.20.4](https://github.com/benjaminpetrin/dnrd/releases/download/2.20.4/dnrd-2.20.4.tar.gz).

Use Github's release system to get [other versions](https://github.com/benjaminpetrin/dnrd/releases).
The last few version's tarbals have been migrated from the original
SourceForge project.

Alternatives
------------
 * If you don't want any caching: dnsproxy
 * If you dont need domain "routing": dproxy
 * If you want integrated DHCP support: dnsmasq
 * If you need to store the DNS cache to disk: pdnsd

Otherwise, use DNRD :)

Author
------
The original version of dnrd was written by Brad Garcia garsh@home.com. Other
contributors are listed in the HISTORY file included with the source code. This
project is in need of a maintainer. It's current maintainer (benjaminpetrin)
isn't active in this project.
