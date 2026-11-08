// FUN_01591500 @ 01591500 size=372 calls_out=3 calls_in=1
// strings: 

bool FUN_01591500(uint *param_1)

{
  int iVar1;
  uint uVar2;
  double dVar3;
  double *pdVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  byte bVar8;
  undefined4 uVar9;
  double in_d0;
  undefined4 extraout_s1;
  undefined4 extraout_s1_00;
  double dVar10;
  double dVar11;
  
  pdVar4 = (double *)(param_1 + 2);
  if ((*param_1 & 3) == 2) {
    bVar8 = (byte)(((uint)(*pdVar4 == in_d0) << 0x1e) >> 0x18) |
            (byte)(((uint)(in_d0 <= *pdVar4) << 0x1d) >> 0x18);
  }
  else {
    if (*param_1 == 0) {
      if (in_d0 < 0.0) {
        return false;
      }
      if (1.8446744073709552e+19 <= in_d0) {
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
      uVar2 = (uint)((ulonglong)dVar11 >> 0x20);
      if (dVar11 != dVar3) {
        return uVar6 < uVar2 || uVar2 - uVar6 < (uint)(uVar5 <= SUB84(dVar11,0));
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
      iVar1 = (int)((ulonglong)dVar11 >> 0x20);
      if (dVar11 != dVar3) {
        bVar7 = SUB84(dVar11,0) < uVar5;
        if ((int)(iVar1 - (uVar6 + bVar7)) < 0 ==
            (SBORROW4(iVar1,uVar6) != SBORROW4(iVar1 - uVar6,(uint)bVar7))) {
          return true;
        }
        return false;
      }
    }
    bVar8 = (byte)(((uint)(dVar10 == in_d0) << 0x1e) >> 0x18) |
            (byte)(((uint)(in_d0 <= dVar10) << 0x1d) >> 0x18);
  }
  return !(bool)(bVar8 >> 5 & 1) || (bool)(bVar8 >> 6);
}

