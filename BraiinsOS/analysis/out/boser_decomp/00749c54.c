// FUN_00749c54 @ 00749c54 size=2436 calls_out=10 calls_in=2
// strings: 

void FUN_00749c54(uint param_1,uint param_2,uint param_3,uint param_4,int param_5,int param_6)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  bool bVar19;
  bool bVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  int local_14c;
  int local_148;
  uint local_144;
  uint local_140;
  uint local_13c;
  uint local_134;
  undefined1 auStack_130 [8];
  int local_128 [58];
  
  if (0x20 < param_2) {
    local_14c = param_6;
    uVar13 = param_2;
    do {
      while( true ) {
        if (param_5 == 0) {
          FUN_007628a8(param_1,uVar13,param_3,param_4,1);
          return;
        }
        uVar7 = (uVar13 >> 3) * 0x690 + param_1;
        uVar6 = param_1 + ((uVar13 >> 3) * 0x10 - (uVar13 >> 3)) * 0x40;
        if (uVar13 < 0x40) {
          iVar4 = *(int *)(param_1 + 0xe4) + 8;
          uVar23 = FUN_01404030(iVar4);
          uVar3 = (uint)((ulonglong)uVar23 >> 0x20);
          iVar2 = *(int *)(uVar6 + 0xe4);
          uVar24 = FUN_01404030();
          uVar15 = (uint)((ulonglong)uVar24 >> 0x20);
          uVar21 = FUN_01404030(iVar4);
          uVar17 = (uint)((ulonglong)uVar21 >> 0x20);
          iVar4 = *(int *)(uVar7 + 0xe4);
          uVar22 = FUN_01404030();
          uVar18 = (uint)((ulonglong)uVar22 >> 0x20);
          uVar8 = (int)uVar17 >> 0x1f;
          uVar17 = uVar8 >> 1 ^ uVar17;
          uVar10 = (int)uVar18 >> 0x1f;
          uVar18 = uVar10 >> 1 ^ uVar18;
          uVar5 = (int)uVar3 >> 0x1f;
          uVar3 = uVar5 >> 1 ^ uVar3;
          uVar9 = ((uint)((byte)((longlong)uVar23 >> 0x3f) & 1) << 0x1f | uVar5 >> 1) ^ (uint)uVar23
          ;
          uVar5 = (int)uVar15 >> 0x1f;
          uVar11 = ((uint)((byte)((longlong)uVar24 >> 0x3f) & 1) << 0x1f | uVar5 >> 1) ^
                   (uint)uVar24;
          uVar15 = uVar5 >> 1 ^ uVar15;
          bVar19 = (((uint)((byte)((longlong)uVar21 >> 0x3f) & 1) << 0x1f | uVar8 >> 1) ^
                   (uint)uVar21) <
                   (((uint)((byte)((longlong)uVar22 >> 0x3f) & 1) << 0x1f | uVar10 >> 1) ^
                   (uint)uVar22);
          uVar8 = param_1;
          if (((int)(uVar3 - (uVar15 + (uVar9 < uVar11))) < 0 !=
              (SBORROW4(uVar3,uVar15) != SBORROW4(uVar3 - uVar15,(uint)(uVar9 < uVar11)))) ==
              ((int)(uVar17 - (uVar18 + bVar19)) < 0 !=
              (SBORROW4(uVar17,uVar18) != SBORROW4(uVar17 - uVar18,(uint)bVar19)))) {
            uVar23 = FUN_01404030(iVar2 + 8);
            uVar5 = (uint)((ulonglong)uVar23 >> 0x20);
            uVar24 = FUN_01404030(iVar4 + 8);
            uVar17 = (uint)((ulonglong)uVar24 >> 0x20);
            uVar8 = (int)uVar5 >> 0x1f;
            uVar5 = uVar8 >> 1 ^ uVar5;
            uVar10 = (int)uVar17 >> 0x1f;
            uVar17 = uVar10 >> 1 ^ uVar17;
            bVar19 = (((uint)((byte)((longlong)uVar23 >> 0x3f) & 1) << 0x1f | uVar8 >> 1) ^
                     (uint)uVar23) <
                     (((uint)((byte)((longlong)uVar24 >> 0x3f) & 1) << 0x1f | uVar10 >> 1) ^
                     (uint)uVar24);
            uVar8 = uVar6;
            if (((int)(uVar3 - (uVar15 + (uVar9 < uVar11))) < 0 !=
                (SBORROW4(uVar3,uVar15) != SBORROW4(uVar3 - uVar15,(uint)(uVar9 < uVar11)))) !=
                ((int)(uVar5 - (uVar17 + bVar19)) < 0 !=
                (SBORROW4(uVar5,uVar17) != SBORROW4(uVar5 - uVar17,(uint)bVar19)))) {
              uVar8 = uVar7;
            }
          }
        }
        else {
          uVar8 = FUN_0078f898(param_1,uVar6,uVar7);
        }
        param_5 = param_5 + -1;
        FUN_01bed4e2(auStack_130,uVar8,0xf0);
        uVar7 = uVar8 - param_1 >> 4;
        if (local_14c == 0) break;
        uVar23 = FUN_01404030(*(int *)(local_14c + 0xe4) + 8);
        uVar10 = (uint)((ulonglong)uVar23 >> 0x20);
        uVar24 = FUN_01404030(*(int *)(uVar8 + 0xe4) + 8);
        uVar5 = (uint)((ulonglong)uVar24 >> 0x20);
        uVar6 = (int)uVar10 >> 0x1f;
        uVar10 = uVar6 >> 1 ^ uVar10;
        uVar8 = (int)uVar5 >> 0x1f;
        uVar5 = uVar8 >> 1 ^ uVar5;
        bVar19 = (((uint)((byte)((longlong)uVar23 >> 0x3f) & 1) << 0x1f | uVar6 >> 1) ^ (uint)uVar23
                 ) < (((uint)((byte)((longlong)uVar24 >> 0x3f) & 1) << 0x1f | uVar8 >> 1) ^
                     (uint)uVar24);
        if ((int)(uVar10 - (uVar5 + bVar19)) < 0 !=
            (SBORROW4(uVar10,uVar5) != SBORROW4(uVar10 - uVar5,(uint)bVar19))) break;
LAB_0074a0e8:
        if (param_4 < uVar13) goto LAB_0074a5bc;
        uVar5 = param_3 + uVar13 * 0xf0;
        uVar10 = 0;
        uVar6 = param_1;
        uVar8 = uVar7 * -0x11111111;
        while( true ) {
          for (; uVar6 < param_1 + uVar8 * 0xf0; uVar6 = uVar6 + 0xf0) {
            uVar23 = FUN_01404030(*(int *)(param_1 + uVar7 * 0x10 + 0xe4) + 8);
            uVar11 = (uint)((ulonglong)uVar23 >> 0x20);
            uVar24 = FUN_01404030(*(int *)(uVar6 + 0xe4) + 8);
            uVar15 = (uint)((ulonglong)uVar24 >> 0x20);
            uVar5 = uVar5 - 0xf0;
            uVar3 = (int)uVar11 >> 0x1f;
            uVar11 = uVar3 >> 1 ^ uVar11;
            uVar9 = (int)uVar15 >> 0x1f;
            uVar15 = uVar9 >> 1 ^ uVar15;
            bVar19 = (((uint)((byte)((longlong)uVar23 >> 0x3f) & 1) << 0x1f | uVar3 >> 1) ^
                     (uint)uVar23) <
                     (((uint)((byte)((longlong)uVar24 >> 0x3f) & 1) << 0x1f | uVar9 >> 1) ^
                     (uint)uVar24);
            uVar9 = uVar10;
            uVar3 = uVar5;
            if ((int)(uVar11 - (uVar15 + bVar19)) < 0 ==
                (SBORROW4(uVar11,uVar15) != SBORROW4(uVar11 - uVar15,(uint)bVar19))) {
              uVar9 = uVar10 + 1;
              uVar3 = param_3;
            }
            FUN_01bed4e2(uVar3 + uVar10 * 0xf0,uVar6,0xf0);
            uVar10 = uVar9;
          }
          if (uVar8 == uVar13) break;
          FUN_01bed4e2(param_3 + uVar10 * 0xf0,uVar6,0xf0);
          uVar6 = uVar6 + 0xf0;
          uVar10 = uVar10 + 1;
          uVar5 = uVar5 - 0xf0;
          uVar8 = uVar13;
        }
        FUN_01bed4e2(param_1,param_3,uVar10 * 0xf0);
        param_2 = uVar13 - uVar10;
        if (param_2 == 0) {
          return;
        }
        iVar4 = param_1 + uVar10 * 0xf0;
        iVar2 = (param_3 - 0xf0) + uVar13 * 0xf0;
        uVar7 = param_2;
        do {
          FUN_01bed4e2(iVar4,iVar2,0xf0);
          iVar2 = iVar2 + -0xf0;
          iVar4 = iVar4 + 0xf0;
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
        if (uVar13 < uVar10) {
                    /* WARNING: Subroutine does not return */
          FUN_012faff4(uVar10,uVar13,uVar13,&DAT_01d30598);
        }
        param_1 = param_1 + uVar10 * 0xf0;
        local_14c = 0;
        uVar13 = param_2;
        if (param_2 < 0x21) goto LAB_00749c84;
      }
      if (param_4 < uVar13) goto LAB_0074a5bc;
      param_2 = 0;
      uVar8 = param_3 + uVar13 * 0xf0;
      uVar10 = uVar7 * -0x11111111;
      uVar6 = param_1;
      while( true ) {
        for (; uVar6 < param_1 + uVar10 * 0xf0; uVar6 = uVar6 + 0xf0) {
          uVar23 = FUN_01404030(*(int *)(uVar6 + 0xe4) + 8);
          uVar9 = (uint)((ulonglong)uVar23 >> 0x20);
          uVar24 = FUN_01404030(*(int *)(param_1 + uVar7 * 0x10 + 0xe4) + 8);
          uVar11 = (uint)((ulonglong)uVar24 >> 0x20);
          uVar8 = uVar8 - 0xf0;
          uVar5 = (int)uVar9 >> 0x1f;
          uVar9 = uVar5 >> 1 ^ uVar9;
          uVar3 = (int)uVar11 >> 0x1f;
          uVar11 = uVar3 >> 1 ^ uVar11;
          bVar19 = (((uint)((byte)((longlong)uVar23 >> 0x3f) & 1) << 0x1f | uVar5 >> 1) ^
                   (uint)uVar23) <
                   (((uint)((byte)((longlong)uVar24 >> 0x3f) & 1) << 0x1f | uVar3 >> 1) ^
                   (uint)uVar24);
          uVar3 = param_2;
          uVar5 = uVar8;
          if ((int)(uVar9 - (uVar11 + bVar19)) < 0 !=
              (SBORROW4(uVar9,uVar11) != SBORROW4(uVar9 - uVar11,(uint)bVar19))) {
            uVar3 = param_2 + 1;
            uVar5 = param_3;
          }
          FUN_01bed4e2(uVar5 + param_2 * 0xf0,uVar6,0xf0);
          param_2 = uVar3;
        }
        if (uVar10 == uVar13) break;
        uVar8 = uVar8 - 0xf0;
        FUN_01bed4e2(uVar8 + param_2 * 0xf0,uVar6,0xf0);
        uVar6 = uVar6 + 0xf0;
        uVar10 = uVar13;
      }
      FUN_01bed4e2(param_1,param_3,param_2 * 0xf0);
      iVar2 = uVar13 - param_2;
      if (iVar2 != 0) {
        iVar12 = param_1 + param_2 * 0xf0;
        iVar14 = (param_3 - 0xf0) + uVar13 * 0xf0;
        iVar4 = iVar2;
        do {
          FUN_01bed4e2(iVar12,iVar14,0xf0);
          iVar14 = iVar14 + -0xf0;
          iVar12 = iVar12 + 0xf0;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
      if (param_2 == 0) goto LAB_0074a0e8;
      if (uVar13 < param_2) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb100(&DAT_0053349c,0x13,&DAT_01d30588);
      }
      FUN_00749c54(param_1 + param_2 * 0xf0,iVar2,param_3,param_4,param_5,auStack_130);
      uVar13 = param_2;
    } while (0x20 < param_2);
  }
LAB_00749c84:
  if (param_2 < 2) {
    return;
  }
  if (param_2 + 0x10 <= param_4) {
    local_134 = param_2 >> 1;
    iVar2 = local_134 * 0x10 - (param_2 >> 1);
    uVar13 = param_3 + iVar2 * 0x10;
    iVar2 = param_1 + iVar2 * 0x10;
    if (param_2 < 8) {
      FUN_01bed4e2(param_3,param_1,0xf0);
      FUN_01bed4e2(uVar13,iVar2,0xf0);
      uVar7 = 1;
    }
    else {
      FUN_00754bd8(param_1,param_3);
      FUN_00754bd8(iVar2,uVar13);
      uVar7 = 4;
    }
    local_128[0] = 0;
    iVar2 = 0;
    local_128[1] = local_134;
    do {
      iVar4 = local_128[iVar2];
      uVar6 = local_134;
      if (iVar4 != 0) {
        uVar6 = param_2 - local_134;
      }
      if (uVar7 < uVar6) {
        iVar12 = uVar6 - uVar7;
        iVar16 = param_1 + uVar7 * 0xf0 + iVar4 * 0xf0;
        iVar14 = param_3 + uVar7 * 0xf0 + iVar4 * 0xf0;
        do {
          FUN_01bed4e2(iVar14,iVar16,0xf0);
          FUN_007548b4(param_3 + iVar4 * 0xf0,iVar14);
          iVar16 = iVar16 + 0xf0;
          iVar14 = iVar14 + 0xf0;
          iVar12 = iVar12 + -1;
        } while (iVar12 != 0);
      }
      bVar19 = iVar2 == 0;
      iVar2 = 1;
    } while (bVar19);
    local_144 = (param_3 + param_2 * 0xf0) - 0xf0;
    local_140 = uVar13 - 0xf0;
    local_148 = 0;
    local_13c = param_3;
    do {
      uVar23 = FUN_01404030(*(int *)(uVar13 + 0xe4) + 8);
      uVar10 = (uint)((ulonglong)uVar23 >> 0x20);
      uVar24 = FUN_01404030(*(int *)(local_13c + 0xe4) + 8);
      uVar8 = (uint)((ulonglong)uVar24 >> 0x20);
      uVar7 = (int)uVar8 >> 0x1f;
      uVar8 = uVar7 >> 1 ^ uVar8;
      uVar6 = (int)uVar10 >> 0x1f;
      uVar10 = uVar6 >> 1 ^ uVar10;
      bVar19 = (((uint)((byte)((longlong)uVar23 >> 0x3f) & 1) << 0x1f | uVar6 >> 1) ^ (uint)uVar23)
               < (((uint)((byte)((longlong)uVar24 >> 0x3f) & 1) << 0x1f | uVar7 >> 1) ^ (uint)uVar24
                 );
      bVar20 = SBORROW4(uVar10,uVar8) != SBORROW4(uVar10 - uVar8,(uint)bVar19);
      bVar19 = (int)(uVar10 - (uVar8 + bVar19)) < 0;
      uVar6 = (uint)(bVar19 != bVar20);
      uVar7 = local_13c;
      if (uVar6 != 0) {
        uVar7 = uVar13;
      }
      FUN_01bed4e2(param_1 + local_148,uVar7,0xf0);
      uVar23 = FUN_01404030(*(int *)(local_144 + 0xe4) + 8);
      uVar10 = (uint)((ulonglong)uVar23 >> 0x20);
      uVar24 = FUN_01404030(*(int *)(local_140 + 0xe4) + 8);
      uVar8 = (uint)((ulonglong)uVar24 >> 0x20);
      local_13c = local_13c + (uint)(bVar19 == bVar20) * 0xf0;
      uVar13 = uVar13 + uVar6 * 0xf0;
      uVar7 = (int)uVar8 >> 0x1f;
      uVar8 = uVar7 >> 1 ^ uVar8;
      uVar6 = (int)uVar10 >> 0x1f;
      uVar10 = uVar6 >> 1 ^ uVar10;
      bVar19 = (((uint)((byte)((longlong)uVar23 >> 0x3f) & 1) << 0x1f | uVar6 >> 1) ^ (uint)uVar23)
               < (((uint)((byte)((longlong)uVar24 >> 0x3f) & 1) << 0x1f | uVar7 >> 1) ^ (uint)uVar24
                 );
      bVar20 = SBORROW4(uVar10,uVar8) != SBORROW4(uVar10 - uVar8,(uint)bVar19);
      bVar19 = (int)(uVar10 - (uVar8 + bVar19)) < 0;
      uVar7 = local_144;
      if (bVar19 != bVar20) {
        uVar7 = local_140;
      }
      FUN_01bed4e2((param_1 + param_2 * 0xf0 + -0xf0) - local_148,uVar7,0xf0);
      local_148 = local_148 + 0xf0;
      iVar2 = 0;
      if (bVar19 != bVar20) {
        iVar2 = -1;
      }
      iVar4 = 0;
      if (bVar19 == bVar20) {
        iVar4 = -1;
      }
      local_140 = local_140 + iVar2 * 0xf0;
      local_144 = local_144 + iVar4 * 0xf0;
      local_134 = local_134 - 1;
    } while (local_134 != 0);
    uVar7 = local_140 + 0xf0;
    if ((param_2 & 1) == 0) {
      uVar6 = uVar13;
    }
    else {
      bVar19 = uVar7 <= local_13c;
      uVar6 = uVar13 + (uint)bVar19 * 0xf0;
      if (!bVar19) {
        uVar13 = local_13c;
      }
      FUN_01bed4e2(param_1 + local_148,uVar13,0xf0);
      local_140 = (uint)!bVar19 * 0xf;
      local_13c = local_13c + (uint)!bVar19 * 0xf0;
    }
    if (local_13c == uVar7) {
      local_140 = local_144 + 0xf0;
    }
    if (local_13c == uVar7 && uVar6 == local_140) {
      return;
    }
    FUN_01307140();
  }
LAB_0074a5bc:
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0x74a5bc);
  (*pcVar1)();
}

