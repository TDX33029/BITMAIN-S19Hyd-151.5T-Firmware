// FUN_015a6f70 @ 015a6f70 size=180 calls_out=1 calls_in=0
// strings: DnsNameChange | intf_name | rr_type

void FUN_015a6f70(int *param_1,undefined4 param_2)

{
  int iVar1;
  int local_28;
  
  iVar1 = *param_1;
  local_28 = iVar1 + 0x18;
  FUN_01303f28(param_2,"DnsNameChange",0xd,&DAT_00570960,8,iVar1,&LAB_005fdc1c,&DAT_00570a00,8,
               iVar1 + 0xc,&LAB_005fdc1c,"rr_type",7,iVar1 + 0x24,&LAB_015a7044,"intf_name",9,
               &local_28,&LAB_01ad035c);
  return;
}

