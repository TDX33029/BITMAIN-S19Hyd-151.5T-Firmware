// FUN_01674238 @ 01674238 size=228 calls_out=2 calls_in=3
// strings: 

void FUN_01674238(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,uint param_7)

{
  uint uVar1;
  undefined4 uVar2;
  double dVar3;
  double dVar4;
  undefined4 local_1c [3];
  
  dVar3 = (double)FUN_01bf0e80(param_5,param_6);
  uVar1 = param_7;
  if ((int)param_7 < 0) {
    uVar1 = -param_7;
  }
  while (0x134 < uVar1) {
    if (dVar3 == 0.0) goto LAB_016742fc;
    if (param_7 < 0x80000000) goto LAB_016742d8;
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
LAB_016742d8:
      local_1c[0] = 0xe;
      uVar2 = FUN_012c6bfc(param_2,local_1c);
      param_1[1] = uVar2;
      uVar2 = 1;
      goto LAB_01674310;
    }
  }
LAB_016742fc:
  uVar2 = 0;
  dVar4 = -dVar3;
  if (param_3 != 0) {
    dVar4 = dVar3;
  }
  *(double *)(param_1 + 2) = dVar4;
LAB_01674310:
  *param_1 = uVar2;
  return;
}

