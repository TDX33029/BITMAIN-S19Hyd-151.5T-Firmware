// FUN_01094d24 @ 01094d24 size=288 calls_out=1 calls_in=2
// strings: ClientSubnet | addressLabelMismatchArithmeticOverflow | source_prefix | scope_prefix

byte FUN_01094d24(int param_1,undefined4 *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int local_1c;
  undefined4 *local_18;
  byte local_14;
  byte local_13;
  
  local_1c = param_1 + 0x12;
  local_14 = (**(code **)(param_2[1] + 0xc))(*param_2,"ClientSubnet",0xc);
  local_13 = 0;
  local_18 = param_2;
  uVar2 = FUN_00fb2258(&local_18,"addressLabelMismatchArithmeticOverflow",7,param_1,&LAB_00fb8f8c);
  uVar2 = FUN_00fb2258(uVar2,"source_prefix",0xd,param_1 + 0x11,FUN_0078955c);
  FUN_00fb2258(uVar2,"scope_prefix",0xc,&local_1c,FUN_01135a50);
  if (local_13 != 1 || (local_14 & 1) != 0) {
    return (local_13 | local_14) & 1;
  }
  if ((*(byte *)((int)local_18 + 10) & 0x80) == 0) {
    bVar1 = (**(code **)(local_18[1] + 0xc))(*local_18," }",2);
    return bVar1 & 1;
  }
  bVar1 = (**(code **)(local_18[1] + 0xc))(*local_18,"}",1);
  return bVar1 & 1;
}

