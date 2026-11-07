// FUN_01529368 @ 01529368 size=752 calls_out=3 calls_in=0
// strings: 

bool FUN_01529368(int *param_1,char *param_2)

{
  bool bVar1;
  uint uVar2;
  double *pdVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 extraout_s1;
  undefined4 extraout_s1_00;
  undefined4 extraout_s1_01;
  double dVar8;
  undefined4 extraout_s1_02;
  double dVar9;
  undefined8 uVar10;
  
  if (*param_2 != '\x02') {
    return false;
  }
  pdVar3 = (double *)(param_2 + 0x10);
  iVar4 = *param_1;
  if ((*(uint *)(param_2 + 8) & 3) == 2) {
    dVar9 = *pdVar3;
    if (iVar4 == 0) {
      if (dVar9 < 0.0) {
        return false;
      }
      if (1.8446744073709552e+19 <= dVar9) {
        return false;
      }
      uVar7 = FUN_01be6548(SUB84(dVar9,0),0);
      dVar8 = (double)CONCAT44(extraout_s1_01,uVar7);
      uVar5 = param_1[2];
      uVar6 = param_1[3];
      uVar10 = FUN_01bf0b64(uVar7,extraout_s1_01);
      if (dVar8 < 0.0) {
        uVar10 = 0;
      }
      if (1.844674407370955e+19 < dVar8) {
        uVar10 = 0xffffffffffffffff;
      }
    }
    else {
      if (iVar4 == 2) {
        return dVar9 == *(double *)(param_1 + 2);
      }
      if (dVar9 < -9.223372036854776e+18) {
        return false;
      }
      if (9.223372036854776e+18 <= dVar9) {
        return false;
      }
      uVar7 = FUN_01be6548(SUB84(dVar9,0),0);
      dVar8 = (double)CONCAT44(extraout_s1_02,uVar7);
      uVar5 = param_1[2];
      uVar6 = param_1[3];
      uVar10 = FUN_01bf0bf8(uVar7,extraout_s1_02);
      if (dVar8 < -9.223372036854776e+18) {
        uVar10 = 0x8000000000000000;
      }
      if (9.223372036854775e+18 < dVar8) {
        uVar10 = 0x7fffffffffffffff;
      }
      if (NAN(dVar8)) {
        uVar10 = 0;
      }
    }
    bVar1 = dVar9 == dVar8;
    uVar5 = (uint)uVar10 ^ uVar5 | (uint)((ulonglong)uVar10 >> 0x20) ^ uVar6;
  }
  else {
    if (*(uint *)(param_2 + 8) == 0) {
      uVar5 = *(uint *)pdVar3;
      uVar6 = *(uint *)(param_2 + 0x14);
      pdVar3 = (double *)(param_1 + 2);
      if (iVar4 == 0) {
        uVar2 = *(uint *)pdVar3;
        uVar6 = uVar6 ^ param_1[3];
LAB_01529640:
        return uVar5 == uVar2 && uVar6 == 0;
      }
      if (iVar4 != 2) {
        return (uint)param_1[3] < 0x80000000 && (uVar5 == *(uint *)pdVar3 && uVar6 == param_1[3]);
      }
      dVar9 = *pdVar3;
      if (dVar9 < 0.0) {
        return false;
      }
      if (1.8446744073709552e+19 <= dVar9) {
        return false;
      }
      uVar7 = FUN_01be6548(SUB84(dVar9,0),0);
      dVar8 = (double)CONCAT44(extraout_s1,uVar7);
      uVar10 = FUN_01bf0b64(uVar7,extraout_s1);
      if (dVar8 < 0.0) {
        uVar10 = 0;
      }
      if (1.844674407370955e+19 < dVar8) {
        uVar10 = 0xffffffffffffffff;
      }
      uVar5 = uVar5 ^ (uint)uVar10 | uVar6 ^ (uint)((ulonglong)uVar10 >> 0x20);
    }
    else {
      uVar5 = *(uint *)pdVar3;
      uVar6 = *(uint *)(param_2 + 0x14);
      pdVar3 = (double *)(param_1 + 2);
      if (iVar4 == 0) {
        uVar5 = uVar5 ^ *(uint *)pdVar3 | uVar6 ^ param_1[3];
        bVar1 = uVar6 < 0x80000000;
        goto LAB_01529630;
      }
      if (iVar4 != 2) {
        uVar2 = *(uint *)pdVar3;
        uVar6 = uVar6 ^ param_1[3];
        goto LAB_01529640;
      }
      dVar9 = *pdVar3;
      if (dVar9 < -9.223372036854776e+18) {
        return false;
      }
      if (9.223372036854776e+18 <= dVar9) {
        return false;
      }
      uVar7 = FUN_01be6548(SUB84(dVar9,0),0);
      dVar8 = (double)CONCAT44(extraout_s1_00,uVar7);
      uVar10 = FUN_01bf0bf8(uVar7,extraout_s1_00);
      if (dVar8 < -9.223372036854776e+18) {
        uVar10 = 0x8000000000000000;
      }
      if (9.223372036854775e+18 < dVar8) {
        uVar10 = 0x7fffffffffffffff;
      }
      if (!NAN(dVar8)) {
        uVar6 = uVar6 ^ (uint)((ulonglong)uVar10 >> 0x20);
        uVar5 = uVar5 ^ (uint)uVar10;
      }
      uVar5 = uVar5 | uVar6;
    }
    bVar1 = dVar8 == dVar9;
  }
LAB_01529630:
  return (bool)(bVar1 & uVar5 == 0);
}

