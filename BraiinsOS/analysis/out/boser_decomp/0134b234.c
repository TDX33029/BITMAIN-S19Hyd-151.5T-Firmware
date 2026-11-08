// FUN_0134b234 @ 0134b234 size=248 calls_out=2 calls_in=5
// strings: 

void FUN_0134b234(undefined4 *param_1,int param_2,undefined4 param_3,uint param_4,int param_5,
                 int param_6)

{
  longlong lVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  undefined4 uVar5;
  int local_28;
  int local_24;
  
  piVar3 = &local_28;
  uVar5 = 1;
  lVar1 = (ulonglong)param_4 * (ulonglong)((param_5 + param_6) - 1U & -param_5);
  uVar4 = (uint)lVar1;
  iVar2 = 4;
  if (((int)((ulonglong)lVar1 >> 0x20) != 0) || (0x80000000U - param_5 < uVar4)) {
    uVar4 = 0;
    goto LAB_0134b314;
  }
  if (param_2 == 0) {
    param_2 = 0;
    piVar3 = &local_24;
  }
  else {
    param_2 = param_2 * param_6;
    local_24 = param_5;
  }
  *piVar3 = param_2;
  iVar2 = param_5;
  if (local_24 == 0) {
    if (uVar4 != 0) {
LAB_0134b2ec:
      iVar2 = FUN_01298504(uVar4,param_5);
      goto LAB_0134b2f8;
    }
LAB_0134b300:
    param_1[1] = iVar2;
    uVar5 = 0;
  }
  else {
    if (local_28 == 0) {
      if (uVar4 != 0) goto LAB_0134b2ec;
    }
    else {
      iVar2 = FUN_01298554(param_3,local_28,param_5,uVar4);
    }
LAB_0134b2f8:
    if (iVar2 != 0) goto LAB_0134b300;
    param_1[1] = param_5;
  }
  iVar2 = 8;
LAB_0134b314:
  *(uint *)((int)param_1 + iVar2) = uVar4;
  *param_1 = uVar5;
  return;
}

