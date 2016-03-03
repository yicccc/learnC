#!/bin/bash

cat << ss >./dhcpd6.conf
default-lease-time 1800;
max-lease-time 7200;

subnet6 ${base_prefix}00::/64 {
  prefix6 ${base_prefix}a0:: ${base_prefix}f0:: /60;
}
ss

sdf
