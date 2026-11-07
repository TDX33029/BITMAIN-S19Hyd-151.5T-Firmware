// FUN_0134c168 @ 0134c168 size=244 calls_out=2 calls_in=2
// strings: 

void FUN_0134c168(undefined4 *param_1,int param_2,undefined4 param_3,uint param_4,int param_5,
                 int param_6)

{
  longlong lVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  undefined4 uVar5;
  int local_20;
  int local_1c;
  
  piVar3 = &local_20;
  uVar5 = 1;
  lVar1 = (ulonglong)param_4 * (ulonglong)((param_5 + param_6) - 1U & -param_5);
  uVar4 = (uint)lVar1;
  iVar2 = 4;
  if (((int)((ulonglong)lVar1 >> 0x20) != 0) || (0x80000000U - param_5 < uVar4)) {
    uVar4 = 0;
    goto LAB_0134c244;
  }
  if (param_2 == 0) {
    param_2 = 0;
    piVar3 = &local_1c;
  }
  else {
    param_2 = param_2 * param_6;
    local_1c = param_5;
  }
  *piVar3 = param_2;
  iVar2 = param_5;
  if (local_1c == 0) {
    if (uVar4 != 0) {
LAB_0134c21c:
      iVar2 = FUN_01298504(uVar4,param_5);
      goto LAB_0134c228;
    }
LAB_0134c230:
    param_1[1] = iVar2;
    uVar5 = 0;
  }
  else {
    if (local_20 == 0) {
      if (uVar4 != 0) goto LAB_0134c21c;
    }
    else {
      iVar2 = FUN_01298554(param_3,local_20,param_5,uVar4);
    }
LAB_0134c228:
    if (iVar2 != 0) goto LAB_0134c230;
    param_1[1] = param_5;
  }
  iVar2 = 8;
LAB_0134c244:
  *(uint *)((int)param_1 + iVar2) = uVar4;
  *param_1 = uVar5;
  return;
}

