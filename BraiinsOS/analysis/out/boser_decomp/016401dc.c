// FUN_016401dc @ 016401dc size=184 calls_out=1 calls_in=2
// strings: netlink_packet_route::link::vlan_protocol | netlink_packet_route::link::vlan_protocol

uint FUN_016401dc(uint param_1)

{
  undefined2 local_36;
  undefined2 *local_34;
  code *local_30;
  char *local_2c;
  code *local_28;
  char *local_24;
  undefined4 local_20;
  char *local_1c;
  undefined4 local_18;
  undefined *local_14;
  
  local_36 = (undefined2)param_1;
  if (((param_1 & 0xffff) != 0x88a8 && (param_1 & 0xffff) != 0x8100) &&
     (param_1 = 0x8100, 1 < DAT_01d51b00)) {
    local_34 = &local_36;
    local_2c = "";
    local_30 = FUN_012fcf18;
    local_1c = "netlink_packet_route::link::vlan_protocol";
    local_24 = "netlink_packet_route::link::vlan_protocol";
    local_18 = 0x29;
    local_20 = 0x29;
    local_28 = FUN_016402b0;
    local_14 = &DAT_01d062e8;
    FUN_0161d588(&DAT_005a78d5,&local_34,2,&local_24);
  }
  return param_1;
}

