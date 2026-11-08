// FUN_00703ebc @ 00703ebc size=240 calls_out=6 calls_in=1
// strings: 

void FUN_00703ebc(longlong *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  int local_30;
  uint local_2c;
  int local_28;
  uint local_24;
  
  FUN_00703b44(&local_30,param_2,param_3,0x198);
  FUN_00704260(&local_28,param_2,param_3,param_4);
  if (local_30 == 0) {
    uVar2 = local_2c;
    if (local_28 == 0) {
      FUN_01b46fd8(local_24);
    }
  }
  else {
    uVar2 = local_24;
    if (local_28 != 0) {
      *(int *)param_1 = local_28;
      *(uint *)((int)param_1 + 4) = local_24;
      return;
    }
  }
  iVar1 = FUN_01b47ba8(uVar2);
  if (iVar1 == 0) {
    lVar3 = 0xf0051d665;
  }
  else {
    lVar3 = FUN_00705238(iVar1,param_4);
    if ((int)lVar3 == 0) {
      iVar1 = FUN_01b455d0(iVar1);
      lVar3 = (ulonglong)uVar2 << 0x20;
      if (iVar1 == 1) goto LAB_00703fa0;
      lVar3 = 0x16005222d4;
    }
  }
  FUN_01b46fd8(uVar2);
LAB_00703fa0:
  *param_1 = lVar3;
  return;
}

