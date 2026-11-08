// FUN_011e2dd0 @ 011e2dd0 size=736 calls_out=3 calls_in=2
// strings: 

bool FUN_011e2dd0(int *param_1,int *param_2)

{
  bool bVar1;
  double *pdVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 extraout_s1;
  undefined4 extraout_s1_00;
  undefined4 extraout_s1_01;
  double dVar9;
  undefined4 extraout_s1_02;
  double dVar10;
  undefined8 uVar11;
  
  pdVar2 = (double *)(param_1 + 2);
  iVar5 = *param_2;
  if (*param_1 == 2) {
    dVar10 = *pdVar2;
    if (iVar5 == 2) {
      return dVar10 == *(double *)(param_2 + 2);
    }
    if (iVar5 == 0) {
      if (dVar10 < 0.0) {
        return false;
      }
      if (1.8446744073709552e+19 <= dVar10) {
        return false;
      }
      uVar8 = FUN_016d62a0(SUB84(dVar10,0),0);
      dVar9 = (double)CONCAT44(extraout_s1,uVar8);
      uVar6 = param_2[2];
      uVar7 = param_2[3];
      uVar11 = FUN_01845b18(uVar8,extraout_s1);
      if (dVar9 < 0.0) {
        uVar11 = 0;
      }
      if (1.844674407370955e+19 < dVar9) {
        uVar11 = 0xffffffffffffffff;
      }
    }
    else {
      if (dVar10 < -9.223372036854776e+18) {
        return false;
      }
      if (9.223372036854776e+18 <= dVar10) {
        return false;
      }
      uVar8 = FUN_016d62a0(SUB84(dVar10,0),0);
      dVar9 = (double)CONCAT44(extraout_s1_01,uVar8);
      uVar6 = param_2[2];
      uVar7 = param_2[3];
      uVar11 = FUN_01845ca8(uVar8,extraout_s1_01);
      if (dVar9 < -9.223372036854776e+18) {
        uVar11 = 0x8000000000000000;
      }
      if (9.223372036854775e+18 < dVar9) {
        uVar11 = 0x7fffffffffffffff;
      }
      if (NAN(dVar9)) {
        uVar11 = 0;
      }
    }
    bVar1 = dVar10 == dVar9;
    uVar6 = (uint)uVar11 ^ uVar6 | (uint)((ulonglong)uVar11 >> 0x20) ^ uVar7;
  }
  else {
    if (*param_1 == 0) {
      uVar6 = *(uint *)pdVar2;
      uVar7 = param_1[3];
      pdVar2 = (double *)(param_2 + 2);
      if (iVar5 != 2) {
        if (iVar5 != 0) {
          return (uint)param_2[3] < 0x80000000 && (uVar6 == *(uint *)pdVar2 && uVar7 == param_2[3]);
        }
        uVar3 = *(uint *)pdVar2;
        uVar4 = param_2[3];
LAB_011e2ea8:
        return uVar6 == uVar3 && uVar7 == uVar4;
      }
      dVar10 = *pdVar2;
      if (dVar10 < 0.0) {
        return false;
      }
      if (1.8446744073709552e+19 <= dVar10) {
        return false;
      }
      uVar8 = FUN_016d62a0(SUB84(dVar10,0),0);
      dVar9 = (double)CONCAT44(extraout_s1_00,uVar8);
      uVar11 = FUN_01845b18(uVar8,extraout_s1_00);
      if (dVar9 < 0.0) {
        uVar11 = 0;
      }
      if (1.844674407370955e+19 < dVar9) {
        uVar11 = 0xffffffffffffffff;
      }
      uVar6 = uVar6 ^ (uint)uVar11 | uVar7 ^ (uint)((ulonglong)uVar11 >> 0x20);
    }
    else {
      uVar6 = *(uint *)pdVar2;
      uVar7 = param_1[3];
      if (iVar5 != 2) {
        if ((iVar5 == 0) && ((int)uVar7 < 0)) {
          return false;
        }
        uVar3 = param_2[2];
        uVar4 = param_2[3];
        goto LAB_011e2ea8;
      }
      dVar10 = *(double *)(param_2 + 2);
      if (dVar10 < -9.223372036854776e+18) {
        return false;
      }
      if (9.223372036854776e+18 <= dVar10) {
        return false;
      }
      uVar8 = FUN_016d62a0(SUB84(dVar10,0),0);
      dVar9 = (double)CONCAT44(extraout_s1_02,uVar8);
      uVar11 = FUN_01845ca8(uVar8,extraout_s1_02);
      if (dVar9 < -9.223372036854776e+18) {
        uVar11 = 0x8000000000000000;
      }
      if (9.223372036854775e+18 < dVar9) {
        uVar11 = 0x7fffffffffffffff;
      }
      if (!NAN(dVar9)) {
        uVar7 = uVar7 ^ (uint)((ulonglong)uVar11 >> 0x20);
        uVar6 = uVar6 ^ (uint)uVar11;
      }
      uVar6 = uVar6 | uVar7;
    }
    bVar1 = dVar9 == dVar10;
  }
  return bVar1 && uVar6 == 0;
}

