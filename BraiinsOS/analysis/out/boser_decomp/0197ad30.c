// FUN_0197ad30 @ 0197ad30 size=180 calls_out=2 calls_in=25
// strings: 

void FUN_0197ad30(undefined4 *param_1,int param_2,undefined4 param_3,uint param_4,int param_5,
                 int param_6)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  
  uVar4 = 1;
  lVar1 = (ulonglong)param_4 * (ulonglong)((param_5 + param_6) - 1U & -param_5);
  uVar3 = (uint)lVar1;
  iVar2 = 4;
  if (((int)((ulonglong)lVar1 >> 0x20) != 0) || (0x80000000U - param_5 < uVar3)) {
    uVar3 = 0;
    goto LAB_0197add8;
  }
  if (param_2 == 0) {
    if (uVar3 == 0) {
      iVar2 = param_5;
    }
    else {
      iVar2 = FUN_01298504(uVar3,param_5);
      if (iVar2 == 0) goto LAB_0197adc0;
    }
LAB_0197adcc:
    param_1[1] = iVar2;
    uVar4 = 0;
  }
  else {
    iVar2 = FUN_01298554(param_3,param_6 * param_2,param_5,uVar3);
    if (iVar2 != 0) goto LAB_0197adcc;
LAB_0197adc0:
    param_1[1] = param_5;
  }
  iVar2 = 8;
LAB_0197add8:
  *(uint *)((int)param_1 + iVar2) = uVar3;
  *param_1 = uVar4;
  return;
}

