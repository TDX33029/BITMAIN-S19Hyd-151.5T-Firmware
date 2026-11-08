// FUN_0161ad90 @ 0161ad90 size=152 calls_out=1 calls_in=1
// strings: netlink_packet_route::link::link_info::ipvlan | netlink_packet_route::link::link_info::ipvlan

undefined8 FUN_0161ad90(uint param_1)

{
  uint uVar1;
  undefined2 local_2e;
  undefined2 *puStack_2c;
  code *pcStack_28;
  char *local_24;
  undefined4 local_20;
  char *local_1c;
  undefined4 local_18;
  undefined *local_14;
  
  local_2e = (undefined2)param_1;
  uVar1 = param_1;
  if ((2 < (param_1 & 0xffff)) && (uVar1 = 3, 1 < DAT_01d51b00)) {
    puStack_2c = &local_2e;
    pcStack_28 = FUN_012fcf18;
    local_18 = 0x2d;
    local_20 = 0x2d;
    local_1c = "netlink_packet_route::link::link_info::ipvlan";
    local_24 = "netlink_packet_route::link::link_info::ipvlan";
    local_14 = &DAT_01d05fc0;
    FUN_0161d588(&DAT_00587183,&puStack_2c,2,&local_24);
  }
  return CONCAT44(param_1,uVar1);
}

