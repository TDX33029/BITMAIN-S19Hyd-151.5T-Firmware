// FUN_01224bd8 @ 01224bd8 size=872 calls_out=3 calls_in=2
// strings: 

void FUN_01224bd8(uint *param_1,undefined4 *param_2,uint *param_3,uint *param_4)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int unaff_r4;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  undefined4 uVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  uint *puVar22;
  int iVar23;
  uint local_70;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  undefined4 uStack_28;
  
  local_30 = param_2[4];
  local_2c = param_2[5];
  local_38 = param_2[6];
  local_40 = param_2[10];
  uVar9 = param_3[1];
  uVar11 = param_3[2];
  local_3c = param_2[0xb];
  local_34 = param_2[7];
  local_48 = param_2[8];
  local_44 = param_2[9];
  FUN_011df94c(&local_48);
  uVar6 = local_38 ^ 0xff;
  uVar10 = local_34 << 0x18 | (local_34 >> 8 & 0xff) << 0x10 | (local_34 >> 0x10 & 0xff) << 8 |
           local_34 >> 0x18;
  lVar2 = (ulonglong)uVar10 * 0xb36a80d2;
  uVar13 = (uint)lVar2;
  uVar19 = (uVar13 << 0x18 | (uVar13 >> 8 & 0xff) << 0x10 | (uVar13 >> 0x10 & 0xff) << 8 |
           uVar13 >> 0x18) ^
           local_34 * 0x2df45158 + uVar6 * 0x2d7f954c + (int)((ulonglong)uVar6 * 0x2df45158 >> 0x20)
  ;
  uVar13 = uVar19 << 0x18 | (uVar19 >> 8 & 0xff) << 0x10 | (uVar19 >> 0x10 & 0xff) << 8 |
           uVar19 >> 0x18;
  lVar3 = (ulonglong)~local_30 * (ulonglong)uVar13;
  uVar21 = (uint)lVar3;
  uVar10 = (uVar6 << 0x18 | (local_38 >> 8 & 0xff) << 0x10 | (local_38 >> 0x10 & 0xff) << 8 |
           local_38 >> 0x18) * -0x4c957f2e + uVar10 * -0x5851f42e + (int)((ulonglong)lVar2 >> 0x20);
  uVar14 = (uVar10 * 0x1000000 | (uVar10 >> 8 & 0xff) << 0x10 | (uVar10 >> 0x10 & 0xff) << 8 |
           uVar10 >> 0x18) ^ (uint)((ulonglong)uVar6 * 0x2df45158);
  uVar6 = (uVar14 << 0x18 | (uVar14 >> 8 & 0xff) << 0x10 | (uVar14 >> 0x10 & 0xff) << 8 |
          uVar14 >> 0x18) * ~local_30 + uVar13 * ~local_2c + (int)((ulonglong)lVar3 >> 0x20);
  uVar10 = local_2c << 0x18 | (local_2c >> 8 & 0xff) << 0x10 | (local_2c >> 0x10 & 0xff) << 8 |
           local_2c >> 0x18;
  lVar2 = (ulonglong)uVar10 * (ulonglong)uVar14;
  uVar6 = (uVar6 * 0x1000000 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8 |
          uVar6 >> 0x18) ^ (uint)lVar2;
  uVar13 = (uVar21 << 0x18 | (uVar21 >> 8 & 0xff) << 0x10 | (uVar21 >> 0x10 & 0xff) << 8 |
           uVar21 >> 0x18) ^
           uVar19 * uVar10 +
           uVar14 * (local_30 << 0x18 | (local_30 >> 8 & 0xff) << 0x10 |
                     (local_30 >> 0x10 & 0xff) << 8 | local_30 >> 0x18) +
           (int)((ulonglong)lVar2 >> 0x20);
  uVar10 = uVar13;
  if ((uVar14 & 0x20) != 0) {
    uVar10 = uVar6;
    uVar6 = uVar13;
  }
  if (param_2[2] == 0) {
    FUN_011ab398(param_2,param_2 + 4);
  }
  puVar22 = (uint *)*param_2;
  uVar13 = param_2[1];
  uVar10 = uVar6 << (uVar14 & 0x1f) | (uVar10 >> 1) >> (~uVar14 & 0x1f);
  bVar5 = false;
  iVar23 = 0;
  uVar6 = uVar10;
  do {
    uVar6 = uVar13 & uVar6;
    uVar19 = *(uint *)((int)puVar22 + uVar6);
    uVar14 = uVar19 ^ (uVar10 >> 0x19) * 0x1010101;
    for (uVar14 = ~uVar14 & 0x80808080 & uVar14 + 0xfefefeff; uVar14 != 0;
        uVar14 = uVar14 - 1 & uVar14) {
      uVar21 = uVar6 + ((uint)LZCOUNT(uVar14 << 0x18 | (uVar14 >> 8 & 0xff) << 0x10 |
                                      (uVar14 >> 0x10 & 0xff) << 8 | uVar14 >> 0x18) >> 3) & uVar13;
      if ((uVar11 == puVar22[uVar21 * -8 + -6]) &&
         (iVar7 = thunk_FUN_016dd50a(uVar9,puVar22[uVar21 * -8 + -7]), iVar7 == 0)) {
        uVar6 = puVar22[uVar21 * -8 + -4];
        uVar10 = puVar22[uVar21 * -8 + -3];
        uVar11 = puVar22[uVar21 * -8 + -2];
        uVar13 = puVar22[uVar21 * -8 + -1];
        *param_1 = puVar22[uVar21 * -8 + -5];
        param_1[1] = uVar6;
        param_1[2] = uVar10;
        param_1[3] = uVar11;
        param_1[4] = uVar13;
        uVar6 = param_4[1];
        uVar10 = param_4[2];
        uVar11 = param_4[3];
        uVar13 = param_4[4];
        puVar22[uVar21 * -8 + -5] = *param_4;
        puVar22[uVar21 * -8 + -4] = uVar6;
        puVar22[uVar21 * -8 + -3] = uVar10;
        puVar22[uVar21 * -8 + -2] = uVar11;
        puVar22[uVar21 * -8 + -1] = uVar13;
        if (*param_3 == 0) {
          return;
        }
        if (uVar9 == 0) {
          return;
        }
        iVar23 = FUN_016d3bc8();
        uVar6 = *(byte *)(uVar9 - 3) & 0x1f;
        if (((*(byte *)(iVar23 + 0x14) & 0x1f) != 0) ||
           (uVar10 = *(uint *)(iVar23 + 0x14) & 0xfffff000, iVar7 = uVar10 - 0x10, uVar10 == 0)) {
          iVar7 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar23 + 0x14) & 0xfff) >> 6) * 2)
                  << 4;
        }
        uVar10 = (uint)(*(byte *)(uVar9 - 3) >> 5);
        iVar20 = *(int *)(iVar23 + 8) + 0x10;
        iVar18 = iVar7 * uVar6 + iVar7 + -4;
        iVar7 = iVar20 + iVar18;
        if (4 < uVar10) {
          if (uVar10 != 5) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)software_udf(0xff,0x16d4018);
            (*pcVar4)();
          }
          uVar10 = *(uint *)(iVar7 + -4);
          if (uVar10 < 5) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)software_udf(0xff,0x16d4022);
            (*pcVar4)();
          }
          if (*(char *)(iVar7 + -5) != '\0') {
                    /* WARNING: Does not return */
            pcVar4 = (code *)software_udf(0xff,0x16d402a);
            (*pcVar4)();
          }
        }
        if (iVar7 - uVar9 < uVar10) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)software_udf(0xff,0x16d4032);
          (*pcVar4)();
        }
        if (*(char *)(iVar7 - uVar10) != '\0') {
                    /* WARNING: Does not return */
          pcVar4 = (code *)software_udf(0xff,0x16d403a);
          (*pcVar4)();
        }
        if (*(char *)(iVar20 + iVar18) != '\0') {
                    /* WARNING: Does not return */
          pcVar4 = (code *)software_udf(0xff,0x16d4040);
          (*pcVar4)();
        }
        bVar1 = *(byte *)(iVar23 + 0x14);
        uVar10 = 1 << uVar6;
        *(undefined1 *)(uVar9 - 3) = 0xff;
        *(undefined2 *)(uVar9 - 2) = 0;
        goto LAB_016d4066;
      }
    }
    uVar14 = uVar19 & 0x80808080;
    if (bVar5) {
LAB_01224e10:
      if ((uVar14 & uVar19 << 1) != 0) {
        uVar6 = (uint)*(char *)((int)puVar22 + local_70);
        if (-1 < (int)uVar6) {
          uVar6 = *puVar22 & 0x80808080;
          uVar9 = LZCOUNT(uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8
                          | uVar6 >> 0x18);
          uVar6 = (uint)*(byte *)((int)puVar22 + (uVar9 >> 3));
          local_70 = uVar9 >> 3;
        }
        uVar11 = *param_3;
        uVar14 = param_3[1];
        uVar21 = param_3[2];
        uVar9 = *param_4;
        uVar19 = param_4[1];
        uVar12 = param_4[2];
        uVar15 = param_4[3];
        uVar17 = param_4[4];
        bVar1 = (byte)(uVar10 >> 0x19);
        *(byte *)((int)puVar22 + local_70) = bVar1;
        iVar23 = param_2[2];
        iVar7 = param_2[3];
        *(byte *)((int)puVar22 + (uVar13 & local_70 - 4) + 4) = bVar1;
        param_2[2] = iVar23 - (uVar6 & 1);
        param_2[3] = iVar7 + 1;
        puVar22[local_70 * -8 + -8] = uVar11;
        puVar22[local_70 * -8 + -7] = uVar14;
        puVar22[local_70 * -8 + -6] = uVar21;
        puVar22[local_70 * -8 + -5] = uVar9;
        puVar22[local_70 * -8 + -4] = uVar19;
        puVar22[local_70 * -8 + -3] = uVar12;
        puVar22[local_70 * -8 + -2] = uVar15;
        puVar22[local_70 * -8 + -1] = uVar17;
        *param_1 = 0;
        return;
      }
      bVar5 = true;
    }
    else {
      if (uVar14 != 0) {
        local_70 = uVar6 + ((uint)LZCOUNT(uVar14 << 0x18 | (uVar14 >> 8 & 0xff) << 0x10 |
                                          (uVar14 >> 0x10 & 0xff) << 8 | uVar14 >> 0x18) >> 3) &
                   uVar13;
        goto LAB_01224e10;
      }
      bVar5 = false;
    }
    iVar23 = iVar23 + 4;
    uVar6 = iVar23 + uVar6;
  } while( true );
LAB_016d4066:
  uVar11 = *(uint *)(iVar23 + 0x10);
  uVar9 = *(uint *)(iVar23 + 0xc) | uVar11;
  if ((uVar10 & uVar9) != 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)software_udf(0xff,0x16d4074);
    (*pcVar4)();
  }
  if ((uVar11 == 0) || (uVar9 + uVar10 == (2 << (bVar1 & 0x1f)) + -1)) {
    if (DAT_018ddb0b != '\0') {
      FUN_016ddcc0(&DAT_018ddd48);
    }
    FUN_016d3ca8(&uStack_28,iVar23,uVar6);
    FUN_016dddc0(&DAT_018ddd48);
    if (unaff_r4 == 0) {
      return;
    }
    puVar8 = (undefined4 *)FUN_016d2bc8();
    uVar16 = *puVar8;
    FUN_016d6ac4(uStack_28,unaff_r4);
    *puVar8 = uVar16;
    return;
  }
  if (DAT_018ddb0b == '\0') {
    *(uint *)(iVar23 + 0x10) = uVar10 + uVar11;
    return;
  }
  puVar22 = (uint *)(iVar23 + 0x10);
  DataMemoryBarrier(0x1b);
  do {
    ExclusiveAccess(puVar22);
    uVar9 = *puVar22;
    if (uVar11 != uVar9) goto LAB_016d409c;
    bVar5 = (bool)hasExclusiveAccess(puVar22);
  } while (!bVar5);
  *puVar22 = uVar10 + uVar11;
LAB_016d409c:
  DataMemoryBarrier(0x1b);
  if (uVar11 == uVar9) {
    return;
  }
  goto LAB_016d4066;
}

