// FUN_011df22c @ 011df22c size=256 calls_out=1 calls_in=0
// strings: 

byte FUN_011df22c(int *param_1,undefined4 *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  int local_1c;
  undefined4 *local_18;
  byte local_14;
  byte local_13;
  
  iVar3 = *param_1;
  local_1c = iVar3 + 0xc;
  local_14 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_004147af,0xd);
  local_13 = 0;
  local_18 = param_2;
  uVar2 = FUN_00fb2258(&local_18,&DAT_004147bc,5,iVar3,FUN_00f3679c);
  FUN_00fb2258(uVar2,&DAT_00418447,5,&local_1c,FUN_00f2fb24);
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

