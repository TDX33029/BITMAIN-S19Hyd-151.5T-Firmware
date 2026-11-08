// FUN_0108866c @ 0108866c size=240 calls_out=1 calls_in=0
// strings: DeqNode

byte FUN_0108866c(int *param_1,undefined4 *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *local_18;
  byte local_14;
  byte local_13;
  
  iVar3 = *param_1;
  local_14 = (**(code **)(param_2[1] + 0xc))(*param_2,"DeqNode",7);
  local_13 = 0;
  local_18 = param_2;
  uVar2 = FUN_00fb2258(&local_18,&DAT_00569418,4,iVar3 + 4,FUN_01088774);
  FUN_00fb2258(uVar2,&DAT_00567b24,4,iVar3 + 8,FUN_01088774);
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

