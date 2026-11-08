// FUN_00604af8 @ 00604af8 size=320 calls_out=9 calls_in=2
// strings: 

void FUN_00604af8(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  int local_30;
  int iStack_2c;
  int local_28;
  int local_24;
  
  FUN_016e1d94(&local_28);
  local_30 = local_28;
  iStack_2c = local_24;
  iVar1 = FUN_016ea010(&local_30);
  if (iVar1 != 0) {
    iVar2 = FUN_0173a71c();
    if (iVar2 == 0x198) {
      FUN_00604c44(&local_28,param_2,param_3,param_4);
      param_1[1] = iVar1;
      if (local_28 == 0) {
        FUN_01739ee4(local_24);
      }
      goto LAB_00604bac;
    }
    FUN_01739ee4(iVar1);
  }
  FUN_00604c44(&local_28,param_2,param_3,param_4);
  *param_1 = local_28;
  param_1[1] = local_24;
  iVar1 = local_24;
  if (local_28 != 0) {
    return;
  }
LAB_00604bac:
  iVar2 = FUN_0173acc0(iVar1);
  iVar4 = 0xf;
  puVar5 = &DAT_0040c738;
  if ((iVar2 != 0) && (iVar3 = FUN_0172ca8c(), iVar3 != 0)) {
    iVar4 = FUN_0172c684();
    if (iVar4 == param_4) {
      iVar2 = FUN_017374c4(iVar2);
      if (iVar2 == 1) {
        *param_1 = 0;
        return;
      }
      iVar4 = 0x16;
      puVar5 = &DAT_0040b115;
    }
    else {
      iVar4 = 0xe;
      puVar5 = &DAT_0033d8d2;
    }
  }
  *param_1 = (int)puVar5;
  param_1[1] = iVar4;
  FUN_01739ee4(iVar1);
  return;
}

