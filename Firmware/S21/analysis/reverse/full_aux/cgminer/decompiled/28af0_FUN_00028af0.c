// FUN_00028af0 @ 00028af0  size=384  callers=2
// program: cgminer


void FUN_00028af0(int param_1)

{
  int iVar1;
  double in_d0;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined8 uVar6;
  
  iVar1 = *(int *)(param_1 + 0x104);
  if (in_d0 == 0.0) {
    dVar4 = (double)FUN_0004acbc(*(undefined4 *)(param_1 + 0xb8),*(undefined4 *)(param_1 + 0xbc));
    dVar2 = (double)FUN_0004acbc(*(undefined4 *)(param_1 + 0xb0),*(undefined4 *)(param_1 + 0xb4));
    dVar3 = (double)FUN_0004acbc(*(undefined4 *)(param_1 + 0xa8),*(undefined4 *)(param_1 + 0xac));
    dVar5 = (double)FUN_0004acbc(*(undefined4 *)(param_1 + 0xa0),*(undefined4 *)(param_1 + 0xa4));
    dVar5 = dVar5 + dVar4 * 6.277101735386681e+57 + dVar2 * 3.402823669209385e+38 +
                    dVar3 * 1.8446744073709552e+19;
    if (dVar5 == 0.0) {
      in_d0 = 2.695953529101131e+67;
      uVar6 = 0xffffffffffffffff;
    }
    else {
      in_d0 = 2.695953529101131e+67 / dVar5;
      dVar2 = round(in_d0);
      uVar6 = FUN_0004ad88(SUB84(dVar2,0),(int)((ulonglong)dVar2 >> 0x20));
    }
    *(double *)(param_1 + 0x178) = in_d0;
  }
  else {
    *(double *)(param_1 + 0x178) = in_d0;
    dVar2 = round(in_d0);
    uVar6 = FUN_0004ad88(SUB84(dVar2,0),(int)((ulonglong)dVar2 >> 0x20));
  }
  *(double *)(iVar1 + 0x1e0) = in_d0;
  FUN_00028838((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),*(int *)(param_1 + 0x104) + 0x30,8,0);
  dVar2 = *(double *)(iVar1 + 0x1d0);
  if (dVar2 == in_d0) {
    *(int *)(iVar1 + 0x1e8) = *(int *)(iVar1 + 0x1e8) + 1;
LAB_00028b5c:
    dVar2 = *(double *)(iVar1 + 0x1d8);
  }
  else {
    if (dVar2 <= in_d0) {
      if (dVar2 != 0.0) goto LAB_00028b5c;
      *(double *)(iVar1 + 0x1d0) = in_d0;
      *(undefined4 *)(iVar1 + 0x1e8) = 1;
    }
    else {
      *(double *)(iVar1 + 0x1d0) = in_d0;
      *(undefined4 *)(iVar1 + 0x1e8) = 1;
    }
    dVar2 = *(double *)(iVar1 + 0x1d8);
  }
  if (dVar2 == in_d0) {
    *(int *)(iVar1 + 0x1ec) = *(int *)(iVar1 + 0x1ec) + 1;
    return;
  }
  if (dVar2 < in_d0) {
    *(double *)(iVar1 + 0x1d8) = in_d0;
    *(undefined4 *)(iVar1 + 0x1ec) = 1;
  }
  return;
}

