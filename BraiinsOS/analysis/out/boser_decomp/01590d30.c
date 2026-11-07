// FUN_01590d30 @ 01590d30 size=372 calls_out=3 calls_in=1
// strings: 

bool FUN_01590d30(uint *param_1)

{
  uint uVar1;
  int iVar2;
  double dVar3;
  double *pdVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  bool bVar8;
  undefined4 uVar9;
  double in_d0;
  undefined4 extraout_s1;
  undefined4 extraout_s1_00;
  double dVar10;
  double dVar11;
  
  pdVar4 = (double *)(param_1 + 2);
  if ((*param_1 & 3) == 2) {
    dVar10 = *pdVar4;
    bVar8 = NAN(dVar10) || NAN(in_d0);
  }
  else {
    if (*param_1 == 0) {
      if (1.8446744073709552e+19 <= in_d0) {
        return false;
      }
      if (in_d0 < 0.0) {
        return true;
      }
      uVar5 = *(uint *)pdVar4;
      uVar6 = param_1[3];
      dVar3 = *pdVar4;
      uVar9 = FUN_01be6548(1);
      dVar10 = (double)CONCAT44(extraout_s1,uVar9);
      dVar11 = (double)FUN_01bf0b64(uVar9,extraout_s1);
      if (dVar10 < 0.0) {
        dVar11 = 0.0;
      }
      if (1.844674407370955e+19 < dVar10) {
        dVar11 = -NAN;
      }
      uVar1 = (uint)((ulonglong)dVar11 >> 0x20);
      if (dVar11 != dVar3) {
        return uVar1 < uVar6 || uVar6 - uVar1 < (uint)(SUB84(dVar11,0) <= uVar5);
      }
    }
    else {
      if (9.223372036854776e+18 <= in_d0) {
        return false;
      }
      if (in_d0 < -9.223372036854776e+18) {
        return true;
      }
      uVar5 = *(uint *)pdVar4;
      uVar6 = param_1[3];
      dVar3 = *pdVar4;
      uVar9 = FUN_01be6548(1);
      dVar10 = (double)CONCAT44(extraout_s1_00,uVar9);
      dVar11 = (double)FUN_01bf0bf8(uVar9,extraout_s1_00);
      if (dVar10 < -9.223372036854776e+18) {
        dVar11 = -0.0;
      }
      if (9.223372036854775e+18 < dVar10) {
        dVar11 = NAN;
      }
      if (NAN(dVar10)) {
        dVar11 = 0.0;
      }
      iVar2 = (int)((ulonglong)dVar11 >> 0x20);
      if (dVar11 != dVar3) {
        bVar7 = uVar5 < SUB84(dVar11,0);
        bVar8 = SBORROW4(uVar6,iVar2) != SBORROW4(uVar6 - iVar2,(uint)bVar7);
        bVar7 = (int)(uVar6 - (iVar2 + (uint)bVar7)) < 0;
        goto LAB_01590df0;
      }
    }
    bVar8 = NAN(dVar10) || NAN(in_d0);
  }
  bVar7 = dVar10 < in_d0;
LAB_01590df0:
  return bVar7 == bVar8;
}

