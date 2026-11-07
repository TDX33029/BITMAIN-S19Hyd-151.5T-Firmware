// FUN_012c4418 @ 012c4418 size=236 calls_out=2 calls_in=9
// strings: 

void FUN_012c4418(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4,
                 undefined4 param_5,undefined4 param_6,uint param_7)

{
  uint uVar1;
  undefined4 uVar2;
  double dVar3;
  double dVar4;
  undefined4 local_24 [3];
  
  dVar3 = (double)FUN_01bf0e80(param_5,param_6);
  uVar1 = param_7;
  if ((int)param_7 < 0) {
    uVar1 = -param_7;
  }
  while (0x134 < uVar1) {
    if (dVar3 == 0.0) goto LAB_012c44e4;
    if (param_7 < 0x80000000) goto LAB_012c44bc;
    dVar3 = dVar3 / 1e+308;
    param_7 = param_7 + 0x134;
    uVar1 = param_7;
    if ((int)param_7 < 0) {
      uVar1 = -param_7;
    }
  }
  if ((int)param_7 < 0) {
    dVar3 = dVar3 / *(double *)(&DAT_00524848 + uVar1 * 8);
  }
  else {
    dVar3 = dVar3 * *(double *)(&DAT_00524848 + uVar1 * 8);
    if (SUB84(dVar3,0) == 0 && ((uint)((ulonglong)dVar3 >> 0x20) & 0x7fffffff) == 0x7ff00000) {
LAB_012c44bc:
      local_24[0] = 0xe;
      uVar2 = FUN_01966fbc(local_24,param_2,param_3);
      param_1[1] = uVar2;
      uVar2 = 1;
      goto LAB_012c44f8;
    }
  }
LAB_012c44e4:
  uVar2 = 0;
  dVar4 = -dVar3;
  if (param_4 != 0) {
    dVar4 = dVar3;
  }
  *(double *)(param_1 + 2) = dVar4;
LAB_012c44f8:
  *param_1 = uVar2;
  return;
}

