// FUN_015917d8 @ 015917d8 size=372 calls_out=3 calls_in=1
// strings: 

bool FUN_015917d8(uint *param_1)

{
  int iVar1;
  uint uVar2;
  double dVar3;
  double *pdVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  undefined4 uVar8;
  double in_d0;
  undefined4 extraout_s1;
  undefined4 extraout_s1_00;
  double dVar9;
  double dVar10;
  
  pdVar4 = (double *)(param_1 + 2);
  if ((*param_1 & 3) == 2) {
    dVar9 = *pdVar4;
  }
  else if (*param_1 == 0) {
    if (in_d0 < 0.0) {
      return false;
    }
    if (1.8446744073709552e+19 <= in_d0) {
      return true;
    }
    uVar5 = *(uint *)pdVar4;
    uVar6 = param_1[3];
    dVar3 = *pdVar4;
    uVar8 = FUN_01be6548(1);
    dVar9 = (double)CONCAT44(extraout_s1,uVar8);
    dVar10 = (double)FUN_01bf0b64(uVar8,extraout_s1);
    if (dVar9 < 0.0) {
      dVar10 = 0.0;
    }
    if (1.844674407370955e+19 < dVar9) {
      dVar10 = -NAN;
    }
    uVar2 = (uint)((ulonglong)dVar10 >> 0x20);
    if (dVar10 != dVar3) {
      return uVar6 <= uVar2 && (uint)(SUB84(dVar10,0) <= uVar5) <= uVar6 - uVar2;
    }
  }
  else {
    if (in_d0 < -9.223372036854776e+18) {
      return false;
    }
    if (9.223372036854776e+18 <= in_d0) {
      return true;
    }
    uVar5 = *(uint *)pdVar4;
    uVar6 = param_1[3];
    dVar3 = *pdVar4;
    uVar8 = FUN_01be6548(1);
    dVar9 = (double)CONCAT44(extraout_s1_00,uVar8);
    dVar10 = (double)FUN_01bf0bf8(uVar8,extraout_s1_00);
    if (dVar9 < -9.223372036854776e+18) {
      dVar10 = -0.0;
    }
    if (9.223372036854775e+18 < dVar9) {
      dVar10 = NAN;
    }
    if (NAN(dVar9)) {
      dVar10 = 0.0;
    }
    iVar1 = (int)((ulonglong)dVar10 >> 0x20);
    if (dVar10 != dVar3) {
      bVar7 = uVar5 < SUB84(dVar10,0);
      if ((int)(uVar6 - (iVar1 + (uint)bVar7)) < 0 ==
          (SBORROW4(uVar6,iVar1) != SBORROW4(uVar6 - iVar1,(uint)bVar7))) {
        return false;
      }
      return true;
    }
  }
  return dVar9 < in_d0;
}

