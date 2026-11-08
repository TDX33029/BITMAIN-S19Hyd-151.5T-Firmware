// FUN_00a037ac @ 00a037ac size=284 calls_out=1 calls_in=0
// strings: Attributes | parent

byte FUN_00a037ac(int *param_1,undefined4 *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  int local_1c;
  undefined4 *local_18;
  byte local_14;
  byte local_13;
  
  iVar3 = *param_1;
  local_1c = iVar3;
  local_14 = (**(code **)(param_2[1] + 0xc))(*param_2,"Attributes",10);
  local_13 = 0;
  local_18 = param_2;
  uVar2 = FUN_00fb2258(&local_18,&DAT_00569b78,8,iVar3 + 0x10,FUN_00a038ec);
  uVar2 = FUN_00fb2258(uVar2,&DAT_00414737,6,iVar3 + 0x14,FUN_00a06a6c);
  FUN_00fb2258(uVar2,"parent",6,&local_1c,FUN_00a068b4);
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

