// FUN_00f66ac0 @ 00f66ac0 size=1040 calls_out=3 calls_in=2
// strings: i64 is out of range for i32 | out of range operation | out of range date time

void FUN_00f66ac0(int *param_1,uint *param_2,uint param_3,uint param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  int iVar4;
  uint *puVar5;
  char *pcVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  uint *puVar17;
  int iVar18;
  uint uVar19;
  bool bVar20;
  ulonglong uVar21;
  undefined8 uVar22;
  
  if (*(char *)((int)param_2 + 0x2d) == '\x02') {
    *param_1 = (int)param_2;
    param_1[2] = 0x3b9aca10;
    return;
  }
  uVar14 = *param_2;
  uVar15 = param_2[1];
  uVar7 = param_2[8];
  puVar5 = param_2 + 4;
  uVar19 = *puVar5;
  iVar11 = uVar15 - uVar7;
  iVar18 = ((int)uVar15 >> 0x1f) - (((int)uVar7 >> 0x1f) + (uint)(uVar15 < uVar7));
  iVar12 = uVar14 - uVar19;
  iVar8 = ((int)uVar14 >> 0x1f) - (((int)uVar19 >> 0x1f) + (uint)(uVar14 < uVar19));
  uVar7 = param_4 - (param_3 < 0x38bc5d80);
  if ((int)(param_4 & (param_4 ^ uVar7)) < 0) {
    iVar8 = 0x16;
    pcVar6 = "out of range operation";
LAB_00f66d70:
    *param_1 = (int)pcVar6;
    param_1[1] = iVar8;
    param_1[2] = 0x3b9aca07;
    return;
  }
  uVar21 = FUN_01846048(param_3 + 0xc743a280,uVar7,0x15180,0);
  lVar1 = (uVar21 & 0xffffffff) * 0x15180;
  iVar16 = (int)(uVar7 - ((int)(uVar21 >> 0x20) * 0x15180 + (int)((ulonglong)lVar1 >> 0x20) +
                         (uint)(param_3 + 0xc743a280 < (uint)lVar1))) >> 0x1f;
  lVar1 = uVar21 + CONCAT44(iVar16,iVar16);
  uVar15 = (uint)lVar1;
  iVar9 = (int)((ulonglong)lVar1 >> 0x20);
  uVar21 = FUN_01846048(uVar15,iVar9,0x23ab1,0);
  lVar1 = (uVar21 & 0xffffffff) * 0x23ab1;
  uVar7 = (uint)lVar1;
  uVar14 = uVar15 - uVar7;
  iVar9 = iVar9 - ((int)(uVar21 >> 0x20) * 0x23ab1 + (int)((ulonglong)lVar1 >> 0x20) +
                  (uint)(uVar15 < uVar7));
  iVar16 = iVar9 + (uint)(0xfffdc54e < uVar14);
  uVar7 = uVar14 + 0x23ab1;
  if (-1 < iVar9) {
    iVar16 = iVar9;
    uVar7 = uVar14;
  }
  uVar22 = FUN_01846088(uVar7,iVar16,0x8eac,0);
  uVar14 = (uint)uVar22;
  if (2 < uVar14) {
    uVar14 = 3;
  }
  if ((int)((ulonglong)uVar22 >> 0x20) != 0) {
    uVar14 = 3;
  }
  uVar19 = (uint)((ulonglong)uVar14 * 0xffff7154);
  iVar4 = uVar19 + uVar7;
  uVar15 = iVar4 / 0x5b5;
  if (0x17 < (int)uVar15) {
    uVar15 = 0x18;
  }
  lVar1 = (longlong)(int)uVar15 * -0x5b5 +
          CONCAT44(((int)((ulonglong)uVar14 * 0xffff7154 >> 0x20) - uVar14) + iVar16 +
                   (uint)CARRY4(uVar19,uVar7),iVar4);
  uVar21 = uVar21 + CONCAT44(iVar9 >> 0x1f,iVar9 >> 0x1f);
  uVar2 = (uVar21 & 0xffffffff) * 400;
  iVar16 = (int)((ulonglong)((lVar1 << 0x20) + (longlong)(int)lVar1 * -0x4c73064f) >> 0x20);
  uVar19 = (iVar16 >> 8) - (iVar16 >> 0x1f);
  uVar7 = 3;
  if ((int)uVar19 < 3) {
    uVar7 = uVar19;
  }
  lVar1 = (longlong)(int)uVar7 * -0x16d + lVar1;
  iVar16 = (int)((ulonglong)lVar1 >> 0x20);
  lVar3 = (ulonglong)uVar14 * 100 +
          ((ulonglong)(uint)((int)(uVar21 >> 0x20) * 400 + (int)(uVar2 >> 0x20)) << 0x20 |
          uVar2 & 0xffffffff) + CONCAT44(((int)uVar15 >> 0x1f) << 2 | uVar15 >> 0x1e,uVar15 * 4);
  uVar15 = (uint)lVar3;
  uVar19 = uVar15 + uVar7;
  bVar20 = 0x131 < (uint)lVar1;
  uVar14 = 2000;
  if ((int)-(iVar16 + (uint)bVar20) < 0 != (SBORROW4(0,iVar16) != SBORROW4(-iVar16,(uint)bVar20))) {
    uVar14 = 0x7d1;
  }
  uVar13 = uVar19 + uVar14;
  if ((int)((ulonglong)lVar3 >> 0x20) + ((int)uVar7 >> 0x1f) + (uint)CARRY4(uVar15,uVar7) +
      (uint)CARRY4(uVar19,uVar14) + (uint)(0x7fffffff < uVar13) != 0) {
    iVar8 = 0x1b;
    pcVar6 = "i64 is out of range for i32";
    goto LAB_00f66d70;
  }
  if (0xfffffffb < uVar13 + 0x7ffffffe) {
    *param_1 = (int)"out of range date time";
    param_1[1] = 0x16;
    param_1[2] = 0x3b9aca07;
    return;
  }
  puVar17 = param_2 + 2;
  uVar22 = FUN_00f66edc(puVar17,uVar13,iVar12,iVar8);
  iVar16 = (int)((ulonglong)uVar22 >> 0x20);
  uVar7 = (uint)uVar22;
  puVar10 = param_2 + 3;
  uVar22 = FUN_00f66edc(puVar10,uVar13,iVar11,iVar18);
  iVar9 = (int)((ulonglong)uVar22 >> 0x20);
  uVar14 = (uint)uVar22;
  if ((int)(iVar9 - (iVar16 + (uint)(uVar14 < uVar7))) < 0 ==
      (SBORROW4(iVar9,iVar16) != SBORROW4(iVar9 - iVar16,(uint)(uVar14 < uVar7)))) {
    if ((int)(param_4 - (iVar16 + (uint)(param_3 < uVar7))) < 0 ==
        (SBORROW4(param_4,iVar16) != SBORROW4(param_4 - iVar16,(uint)(param_3 < uVar7)))) {
      if ((int)(param_4 - (iVar9 + (uint)(param_3 < uVar14))) < 0 ==
          (SBORROW4(param_4,iVar9) != SBORROW4(param_4 - iVar9,(uint)(param_3 < uVar14)))) {
        iVar16 = uVar13 + 1;
        uVar22 = FUN_00f66edc(puVar17,iVar16,iVar12,iVar8);
        iVar8 = (int)((ulonglong)uVar22 >> 0x20);
        bVar20 = param_3 < (uint)uVar22;
        if ((int)(param_4 - (iVar8 + (uint)bVar20)) < 0 !=
            (SBORROW4(param_4,iVar8) != SBORROW4(param_4 - iVar8,(uint)bVar20))) goto LAB_00f66ea8;
        goto LAB_00f66e74;
      }
    }
    else {
      iVar16 = uVar13 - 1;
      uVar22 = FUN_00f66edc(puVar10,iVar16,iVar11,iVar18);
      iVar11 = (int)((ulonglong)uVar22 >> 0x20);
      bVar20 = param_3 < (uint)uVar22;
      if ((int)(param_4 - (iVar11 + (uint)bVar20)) < 0 ==
          (SBORROW4(param_4,iVar11) != SBORROW4(param_4 - iVar11,(uint)bVar20))) goto LAB_00f66ea8;
LAB_00f66e20:
      uVar22 = FUN_00f66edc(puVar17,iVar16,iVar12,iVar8);
      iVar8 = (int)((ulonglong)uVar22 >> 0x20);
      bVar20 = param_3 < (uint)uVar22;
      if ((int)(param_4 - (iVar8 + (uint)bVar20)) < 0 !=
          (SBORROW4(param_4,iVar8) != SBORROW4(param_4 - iVar8,(uint)bVar20))) goto LAB_00f66ea8;
    }
  }
  else if ((int)(param_4 - (iVar9 + (uint)(param_3 < uVar14))) < 0 ==
           (SBORROW4(param_4,iVar9) != SBORROW4(param_4 - iVar9,(uint)(param_3 < uVar14)))) {
    if ((int)(param_4 - (iVar16 + (uint)(param_3 < uVar7))) < 0 !=
        (SBORROW4(param_4,iVar16) != SBORROW4(param_4 - iVar16,(uint)(param_3 < uVar7))))
    goto LAB_00f66ea8;
    iVar16 = uVar13 + 1;
    uVar22 = FUN_00f66edc(puVar10,iVar16,iVar11,iVar18);
    iVar11 = (int)((ulonglong)uVar22 >> 0x20);
    bVar20 = param_3 < (uint)uVar22;
    if ((int)(param_4 - (iVar11 + (uint)bVar20)) < 0 ==
        (SBORROW4(param_4,iVar11) != SBORROW4(param_4 - iVar11,(uint)bVar20))) goto LAB_00f66e20;
  }
  else {
    iVar16 = uVar13 - 1;
    uVar22 = FUN_00f66edc(puVar17,iVar16,iVar12,iVar8);
    iVar8 = (int)((ulonglong)uVar22 >> 0x20);
    bVar20 = param_3 < (uint)uVar22;
    if ((int)(param_4 - (iVar8 + (uint)bVar20)) < 0 !=
        (SBORROW4(param_4,iVar8) != SBORROW4(param_4 - iVar8,(uint)bVar20))) {
LAB_00f66e74:
      uVar22 = FUN_00f66edc(puVar10,iVar16,iVar11,iVar18);
      iVar8 = (int)((ulonglong)uVar22 >> 0x20);
      bVar20 = param_3 < (uint)uVar22;
      if ((int)(param_4 - (iVar8 + (uint)bVar20)) < 0 ==
          (SBORROW4(param_4,iVar8) != SBORROW4(param_4 - iVar8,(uint)bVar20))) goto LAB_00f66ea8;
    }
  }
  puVar5 = param_2 + 8;
LAB_00f66ea8:
  *param_1 = (int)puVar5;
  param_1[2] = 0x3b9aca10;
  return;
}

