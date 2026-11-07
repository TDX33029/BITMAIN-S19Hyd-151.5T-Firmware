// FUN_0163360c @ 0163360c size=204 calls_out=1 calls_in=2
// strings: netlink_packet_route::link::link_info::mac_vlan | netlink_packet_route::link::link_info::mac_vlan

undefined8 FUN_0163360c(int param_1)

{
  undefined4 uVar1;
  int local_30;
  undefined1 *puStack_2c;
  code *pcStack_28;
  char *local_24;
  undefined4 local_20;
  char *local_1c;
  undefined4 local_18;
  undefined *local_14;
  
  puStack_2c = (undefined1 *)&local_30;
  uVar1 = 0;
  switch(param_1) {
  case 1:
    break;
  case 2:
    uVar1 = 1;
    break;
  case 4:
    uVar1 = 2;
    break;
  case 8:
    uVar1 = 3;
    break;
  default:
    if (param_1 == 0x10) {
      uVar1 = 4;
      break;
    }
  case 3:
  case 5:
  case 6:
  case 7:
    uVar1 = 5;
    if (1 < DAT_01d51b00) {
      pcStack_28 = FUN_012fd02c;
      local_18 = 0x2f;
      local_20 = 0x2f;
      local_1c = "netlink_packet_route::link::link_info::mac_vlan";
      local_24 = "netlink_packet_route::link::link_info::mac_vlan";
      local_14 = &DAT_01d06268;
      local_30 = param_1;
      FUN_0161d588(&DAT_0059eb53,&puStack_2c,2,&local_24);
    }
  }
  return CONCAT44(param_1,uVar1);
}

