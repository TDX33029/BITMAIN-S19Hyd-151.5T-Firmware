// FUN_00f66edc @ 00f66edc size=2400 calls_out=3 calls_in=1
// strings: 

undefined8 FUN_00f66edc(char *param_1,uint param_2,uint param_3,int param_4)

{
  byte bVar1;
  byte bVar2;
  short sVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int extraout_r2;
  uint uVar10;
  int extraout_r3;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  bool bVar15;
  longlong lVar16;
  undefined8 uVar17;
  longlong lVar18;
  longlong lVar19;
  int local_a8;
  uint local_a4;
  undefined4 local_90;
  undefined4 local_8c;
  uint local_88 [25];
  
  iVar12 = (int)param_2 >> 0x1f;
  if (*param_1 == '\0') {
    uVar8 = (uint)*(ushort *)(param_1 + 2);
    iVar14 = 6;
    if (uVar8 < 0xb6) {
      iVar14 = 0;
    }
    iVar13 = (iVar14 + 3) * 8;
    if (*(int *)(&DAT_0035c934 + iVar13) < (int)(uint)(*(uint *)(&DAT_0035c930 + iVar13) < uVar8)) {
      iVar14 = iVar14 + 3;
    }
    iVar13 = (iVar14 + 1) * 8;
    if (*(int *)(&DAT_0035c934 + iVar13) < (int)(uint)(*(uint *)(&DAT_0035c930 + iVar13) < uVar8)) {
      iVar14 = iVar14 + 1;
    }
    iVar13 = (iVar14 + 1) * 8;
    if (*(int *)(&DAT_0035c934 + iVar13) < (int)(uint)(*(uint *)(&DAT_0035c930 + iVar13) < uVar8)) {
      iVar14 = iVar14 + 1;
    }
    uVar5 = *(uint *)(&DAT_0035c930 + iVar14 * 8);
    uVar10 = uVar8 - 1;
    iVar13 = -(uint)(uVar8 == 0);
    iVar9 = *(int *)(&DAT_0035c934 + iVar14 * 8);
    uVar6 = (uint)((int)(iVar9 - (iVar13 + (uint)(uVar5 < uVar10))) < 0 !=
                  (SBORROW4(iVar9,iVar13) !=
                  SBORROW4(iVar9 + (uint)(uVar8 == 0),(uint)(uVar5 < uVar10))));
    if (uVar5 == uVar10 && iVar9 == iVar13) {
      uVar6 = uVar6 + 1;
    }
    uVar6 = uVar6 + iVar14;
    uVar5 = uVar6 - 1;
    if (0xb < uVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(uVar5,0xc,&DAT_0187ffdc);
    }
    uVar10 = uVar8 - *(uint *)(&DAT_0035c930 + uVar5 * 8);
    iVar14 = -(*(int *)(&DAT_0035c934 + uVar5 * 8) +
              (uint)(uVar8 < *(uint *)(&DAT_0035c930 + uVar5 * 8)));
  }
  else if (*param_1 == '\x01') {
    uVar8 = (uint)*(ushort *)(param_1 + 2);
    if (((int)param_2 % 400 == 0) ||
       (((param_2 & 3) == 0 &&
        (0x28f5c28 < (param_2 * -0x3d70a3d7 + 0x51eb850 >> 2 | param_2 * 0x40000000))))) {
      local_8c = 0xd5;
      local_90 = 0x98;
      local_88[0x16] = 0x14f;
      local_88[0x12] = 0x112;
      local_88[6] = 0x5b;
      local_88[4] = 0x3c;
      local_88[8] = 0x79;
      local_88[0xc] = 0xb6;
      local_88[0x10] = 0xf4;
      local_88[0x14] = 0x131;
    }
    else {
      local_8c = 0xd4;
      local_90 = 0x97;
      local_88[0x16] = 0x14e;
      local_88[0x12] = 0x111;
      local_88[6] = 0x5a;
      local_88[4] = 0x3b;
      local_88[8] = 0x78;
      local_88[0xc] = 0xb5;
      local_88[0x10] = 0xf3;
      local_88[0x14] = 0x130;
    }
    local_88[2] = 0x1f;
    iVar14 = 6;
    local_88[10] = local_90;
    if (uVar8 < local_88[0xc]) {
      iVar14 = 0;
    }
    iVar13 = iVar14 + 3;
    local_88[0x13] = 0;
    local_88[0xb] = 0;
    local_88[0xd] = 0;
    local_88[0xe] = local_8c;
    local_88[0xf] = 0;
    local_88[0x11] = 0;
    local_88[9] = 0;
    local_88[7] = 0;
    uVar6 = local_88[iVar13 * 2 + 1];
    local_88[5] = 0;
    local_88[0x17] = 0;
    local_88[0x15] = 0;
    if ((int)-(uVar6 + (uVar8 < local_88[iVar13 * 2])) < 0 ==
        (SBORROW4(0,uVar6) != SBORROW4(-uVar6,(uint)(uVar8 < local_88[iVar13 * 2])))) {
      iVar14 = iVar13;
    }
    iVar13 = iVar14 + 1;
    local_88[3] = 0;
    local_88[1] = 0;
    uVar6 = local_88[iVar13 * 2 + 1];
    local_88[0] = 0;
    if ((int)-(uVar6 + (uVar8 < local_88[iVar13 * 2])) < 0 ==
        (SBORROW4(0,uVar6) != SBORROW4(-uVar6,(uint)(uVar8 < local_88[iVar13 * 2])))) {
      iVar14 = iVar13;
    }
    iVar13 = iVar14 + 1;
    uVar6 = local_88[iVar13 * 2 + 1];
    if ((int)-(uVar6 + (uVar8 < local_88[iVar13 * 2])) < 0 ==
        (SBORROW4(0,uVar6) != SBORROW4(-uVar6,(uint)(uVar8 < local_88[iVar13 * 2])))) {
      iVar14 = iVar13;
    }
    uVar6 = (uint)((int)local_88[iVar14 * 2 + 1] < (int)(uint)(local_88[iVar14 * 2] < uVar8));
    if (local_88[iVar14 * 2] == uVar8 && local_88[iVar14 * 2 + 1] == 0) {
      uVar6 = uVar6 + 1;
    }
    uVar6 = uVar6 + iVar14;
    uVar5 = uVar6 - 1;
    if (0xb < uVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(uVar5,0xc,&DAT_0187ffec);
    }
    uVar7 = uVar8 - local_88[uVar5 * 2];
    uVar10 = uVar7 + 1;
    iVar14 = (uint)(0xfffffffe < uVar7) -
             (local_88[uVar5 * 2 + 1] + (uint)(uVar8 < local_88[uVar5 * 2]));
  }
  else {
    uVar6 = (uint)(byte)param_1[1];
    bVar1 = param_1[2];
    bVar2 = param_1[3];
    iVar14 = (int)param_2 % 400;
    if (iVar14 == 0) {
      uVar8 = 1;
    }
    else {
      uVar8 = 0;
      if ((param_2 & 3) == 0) {
        uVar8 = (uint)(0x28f5c28 < (param_2 * -0x3d70a3d7 + 0x51eb850 >> 2 | param_2 * 0x40000000));
      }
    }
    uVar5 = uVar6 - 1;
    if (0xb < uVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(uVar5,0xc,&DAT_0187fffc);
    }
    local_a4 = *(uint *)(&DAT_0035c9d8 + uVar5 * 8);
    local_a8 = *(int *)(&DAT_0035c9dc + uVar5 * 8);
    if (uVar6 == 2) {
      bVar15 = CARRY4(local_a4,uVar8);
      local_a4 = local_a4 + uVar8;
      local_a8 = local_a8 + (uint)bVar15;
      if (iVar14 == 0) {
        uVar8 = 1;
      }
      else {
        uVar8 = 0;
        if ((param_2 & 3) == 0) {
          uVar8 = (uint)(0x28f5c28 < (param_2 * -0x3d70a3d7 + 0x51eb850 >> 2 | param_2 * 0x40000000)
                        );
        }
      }
      lVar18 = (longlong)(int)param_2 * 0x16d + -0xaf8ca;
      if ((int)param_2 < 0x7b2) {
        uVar5 = iVar12 - (uint)(param_2 < 0x7b4);
        uVar8 = uVar5 >> 0x1e;
        iVar13 = uVar5 + CARRY4(param_2 - 0x7b4,uVar8);
        iVar14 = iVar12 - (uint)(param_2 < 2000);
        lVar19 = FUN_01846048(param_2 - 2000,iVar14,0xffffff9c,0xffffffff);
        lVar16 = FUN_01846048(param_2 - 2000,iVar14,400,0);
        lVar16 = lVar19 + lVar18 + CONCAT44(iVar13 >> 2,
                                            (param_2 - 0x7b4) + uVar8 >> 2 | iVar13 * 0x40000000) +
                 lVar16;
      }
      else {
        uVar10 = iVar12 - (uint)(param_2 < 0x7b0);
        uVar5 = param_2 - 0x7b0 >> 2 | uVar10 * 0x40000000;
        uVar7 = (uint)lVar18 + uVar5;
        uVar17 = FUN_01846088(param_2 - 0x76c,iVar12 - (uint)(param_2 < 0x76c),100,0);
        lVar16 = FUN_01846088(param_2 - 0x640,iVar12 - (uint)(param_2 < 0x640),400,0);
        lVar16 = lVar16 + CONCAT44(((int)((ulonglong)lVar18 >> 0x20) + (uVar10 >> 2) +
                                   (uint)CARRY4((uint)lVar18,uVar5)) -
                                   ((int)((ulonglong)uVar17 >> 0x20) + (uint)(uVar7 < (uint)uVar17))
                                   ,uVar7 - (uint)uVar17);
        uVar5 = (uint)lVar16;
        lVar16 = CONCAT44((int)((ulonglong)lVar16 >> 0x20) - (uint)(uVar5 < uVar8),uVar5 - uVar8);
      }
      lVar16 = lVar16 + 0x1f;
    }
    else {
      if (iVar14 == 0) {
        uVar8 = 1;
      }
      else {
        uVar8 = 0;
        if ((param_2 & 3) == 0) {
          uVar8 = (uint)(0x28f5c28 < (param_2 * -0x3d70a3d7 + 0x51eb850 >> 2 | param_2 * 0x40000000)
                        );
        }
      }
      lVar16 = (longlong)(int)param_2 * 0x16d + -0xaf8ca;
      if ((int)param_2 < 0x7b2) {
        uVar7 = iVar12 - (uint)(param_2 < 0x7b4);
        uVar10 = uVar7 >> 0x1e;
        iVar13 = uVar7 + CARRY4(param_2 - 0x7b4,uVar10);
        iVar14 = iVar12 - (uint)(param_2 < 2000);
        lVar18 = FUN_01846048(param_2 - 2000,iVar14,0xffffff9c,0xffffffff);
        lVar19 = FUN_01846048(param_2 - 2000,iVar14,400,0);
        lVar16 = lVar18 + lVar16 + CONCAT44(iVar13 >> 2,
                                            (param_2 - 0x7b4) + uVar10 >> 2 | iVar13 * 0x40000000) +
                 lVar19 + (ulonglong)(2 < uVar6 & uVar8);
      }
      else {
        uVar7 = iVar12 - (uint)(param_2 < 0x7b0);
        uVar10 = param_2 - 0x7b0 >> 2 | uVar7 * 0x40000000;
        uVar11 = (uint)lVar16 + uVar10;
        uVar17 = FUN_01846088(param_2 - 0x76c,iVar12 - (uint)(param_2 < 0x76c),100,0);
        lVar18 = FUN_01846088(param_2 - 0x640,iVar12 - (uint)(param_2 < 0x640),400,0);
        lVar18 = lVar18 + CONCAT44(((int)((ulonglong)lVar16 >> 0x20) + (uVar7 >> 2) +
                                   (uint)CARRY4((uint)lVar16,uVar10)) -
                                   ((int)((ulonglong)uVar17 >> 0x20) + (uint)(uVar11 < (uint)uVar17)
                                   ),uVar11 - (uint)uVar17);
        uVar10 = (uint)lVar18;
        uVar8 = uVar6 < 3 & uVar8;
        lVar16 = CONCAT44((int)((ulonglong)lVar18 >> 0x20) - (uint)(uVar10 < uVar8),uVar10 - uVar8);
      }
      lVar16 = lVar16 + *(longlong *)(&DAT_0035c930 + uVar5 * 8);
    }
    FUN_01846048((int)(lVar16 + 4),(int)((ulonglong)(lVar16 + 4) >> 0x20),7,0);
    iVar14 = extraout_r2;
    if (extraout_r3 < 0) {
      iVar14 = extraout_r2 + 7;
    }
    sVar3 = (short)(((uint)bVar2 - iVar14) * 0x4925 >> 0x10);
    uVar5 = (uint)(short)((short)((uint)bVar2 - iVar14) + ((sVar3 >> 1) - (sVar3 >> 0xf)) * -7);
    iVar14 = ((int)uVar5 >> 0x1f) + (uint)(0xfffffff8 < uVar5);
    uVar8 = uVar5 + 7;
    if (-1 < (int)uVar5) {
      iVar14 = (int)uVar5 >> 0x1f;
      uVar8 = uVar5;
    }
    lVar16 = (ulonglong)bVar1 * 7 + CONCAT44(iVar14,uVar8);
    uVar5 = (uint)lVar16;
    iVar14 = (int)((ulonglong)lVar16 >> 0x20);
    uVar8 = uVar5 - 6;
    iVar13 = iVar14 - (uint)(uVar5 < 6);
    uVar10 = uVar5 - 0xd;
    iVar14 = iVar14 - (uint)(uVar5 < 0xd);
    if ((int)(local_a8 - (iVar13 + (uint)(local_a4 < uVar8))) < 0 ==
        (SBORROW4(local_a8,iVar13) != SBORROW4(local_a8 - iVar13,(uint)(local_a4 < uVar8)))) {
      uVar10 = uVar8;
      iVar14 = iVar13;
    }
  }
  if ((int)param_2 % 400 == 0) {
    uVar8 = 1;
  }
  else {
    uVar8 = 0;
    if (((param_2 & 3) == 0) &&
       (0x28f5c28 < (param_2 * -0x3d70a3d7 + 0x51eb850 >> 2 | param_2 * 0x40000000))) {
      uVar8 = 1;
    }
  }
  lVar16 = (longlong)(int)param_2 * 0x16d + -0xaf8ca;
  if ((int)param_2 < 0x7b2) {
    uVar7 = iVar12 - (uint)(param_2 < 0x7b4);
    uVar5 = uVar7 >> 0x1e;
    iVar13 = uVar7 + CARRY4(param_2 - 0x7b4,uVar5);
    iVar12 = iVar12 - (uint)(param_2 < 2000);
    lVar18 = FUN_01846048(param_2 - 2000,iVar12,0xffffff9c,0xffffffff);
    lVar19 = FUN_01846048(param_2 - 2000,iVar12,400,0);
    lVar16 = lVar18 + lVar16 + CONCAT44(iVar13 >> 2,
                                        (param_2 - 0x7b4) + uVar5 >> 2 | iVar13 * 0x40000000) +
             lVar19 + (ulonglong)(2 < uVar6 & uVar8);
  }
  else {
    uVar7 = iVar12 - (uint)(param_2 < 0x7b0);
    uVar5 = param_2 - 0x7b0 >> 2 | uVar7 * 0x40000000;
    uVar11 = (uint)lVar16 + uVar5;
    uVar17 = FUN_01846088(param_2 - 0x76c,iVar12 - (uint)(param_2 < 0x76c),100,0);
    lVar18 = FUN_01846088(param_2 - 0x640,iVar12 - (uint)(param_2 < 0x640),400,0);
    lVar18 = lVar18 + CONCAT44(((int)((ulonglong)lVar16 >> 0x20) + (uVar7 >> 2) +
                               (uint)CARRY4((uint)lVar16,uVar5)) -
                               ((int)((ulonglong)uVar17 >> 0x20) + (uint)(uVar11 < (uint)uVar17)),
                               uVar11 - (uint)uVar17);
    uVar5 = (uint)lVar18;
    uVar8 = uVar6 < 3 & uVar8;
    lVar16 = CONCAT44((int)((ulonglong)lVar18 >> 0x20) - (uint)(uVar5 < uVar8),uVar5 - uVar8);
  }
  uVar4 = lVar16 + CONCAT44(iVar14,uVar10) +
          *(longlong *)("invalid day time second" + uVar6 * 8 + 0x14);
  lVar16 = (uVar4 & 0xffffffff) * 0x15180;
  uVar8 = (uint)lVar16;
  uVar6 = uVar8 + param_3;
  return CONCAT44(((int)(uVar4 >> 0x20) * 0x15180 + (int)((ulonglong)lVar16 >> 0x20) + param_4 +
                  (uint)CARRY4(uVar8,param_3)) - (uint)(uVar6 < 0x15180),uVar6 - 0x15180);
}

