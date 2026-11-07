// FUN_01355ffc @ 01355ffc size=928 calls_out=4 calls_in=1
// strings: 

void FUN_01355ffc(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  undefined4 *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  int unaff_r4;
  undefined4 uVar15;
  uint uVar16;
  int iVar17;
  uint *puVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  int iVar23;
  bool bVar24;
  undefined8 uVar25;
  ulonglong uVar26;
  uint local_7c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  undefined4 uStack_28;
  
  local_30 = param_1[4];
  uVar11 = param_2[2];
  local_34 = param_1[7];
  local_40 = param_1[10];
  local_2c = param_1[5];
  local_38 = param_1[6];
  uStack_3c = param_1[0xb];
  uVar8 = param_2[1];
  local_48 = param_1[8];
  local_44 = param_1[9];
  FUN_01352290(&local_48);
  uVar9 = param_2[4];
  uVar12 = param_2[5];
  FUN_01352290(&local_48);
  uVar20 = local_34 << 0x18 | (local_34 >> 8 & 0xff) << 0x10 | (local_34 >> 0x10 & 0xff) << 8 |
           local_34 >> 0x18;
  lVar2 = (ulonglong)uVar20 * 0xb36a80d2;
  uVar22 = (uint)lVar2;
  uVar13 = param_2[0xd];
  uVar10 = local_38 ^ (byte)uVar13;
  uVar21 = (uVar10 << 0x18 | (local_38 >> 8 & 0xff) << 0x10 | (local_38 >> 0x10 & 0xff) << 8 |
           local_38 >> 0x18) * -0x4c957f2e + uVar20 * -0x5851f42e + (int)((ulonglong)lVar2 >> 0x20);
  uVar20 = local_2c << 0x18 | (local_2c >> 8 & 0xff) << 0x10 | (local_2c >> 0x10 & 0xff) << 8 |
           local_2c >> 0x18;
  uVar16 = (uVar21 * 0x1000000 | (uVar21 >> 8 & 0xff) << 0x10 | (uVar21 >> 0x10 & 0xff) << 8 |
           uVar21 >> 0x18) ^ (uint)((ulonglong)uVar10 * 0x2df45158);
  lVar2 = (ulonglong)uVar20 * (ulonglong)uVar16;
  uVar10 = (uVar22 << 0x18 | (uVar22 >> 8 & 0xff) << 0x10 | (uVar22 >> 0x10 & 0xff) << 8 |
           uVar22 >> 0x18) ^
           local_34 * 0x2df45158 +
           uVar10 * 0x2d7f954c + (int)((ulonglong)uVar10 * 0x2df45158 >> 0x20);
  uVar21 = uVar10 << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 | (uVar10 >> 0x10 & 0xff) << 8 |
           uVar10 >> 0x18;
  lVar3 = (ulonglong)~local_30 * (ulonglong)uVar21;
  uVar22 = (uint)lVar3;
  uVar20 = (uVar22 << 0x18 | (uVar22 >> 8 & 0xff) << 0x10 | (uVar22 >> 0x10 & 0xff) << 8 |
           uVar22 >> 0x18) ^
           uVar10 * uVar20 +
           uVar16 * (local_30 << 0x18 | (local_30 >> 8 & 0xff) << 0x10 |
                     (local_30 >> 0x10 & 0xff) << 8 | local_30 >> 0x18) +
           (int)((ulonglong)lVar2 >> 0x20);
  uVar10 = (uVar16 << 0x18 | (uVar16 >> 8 & 0xff) << 0x10 | (uVar16 >> 0x10 & 0xff) << 8 |
           uVar16 >> 0x18) * ~local_30 + uVar21 * ~local_2c + (int)((ulonglong)lVar3 >> 0x20);
  uVar21 = (uVar10 * 0x1000000 | (uVar10 >> 8 & 0xff) << 0x10 | (uVar10 >> 0x10 & 0xff) << 8 |
           uVar10 >> 0x18) ^ (uint)lVar2;
  uVar10 = uVar21;
  if ((uVar16 & 0x20) != 0) {
    uVar10 = uVar20;
    uVar20 = uVar21;
  }
  if (param_1[2] == 0) {
    FUN_013435fc(param_1,param_1 + 4);
  }
  uVar10 = uVar10 << (uVar16 & 0x1f) | (uVar20 >> 1) >> (~uVar16 & 0x1f);
  bVar5 = false;
  uVar21 = param_1[1];
  puVar18 = (uint *)*param_1;
  iVar23 = 0;
  uVar20 = uVar10;
  do {
    uVar20 = uVar21 & uVar20;
    uVar16 = *(uint *)((int)puVar18 + uVar20);
    uVar22 = uVar16 ^ (uVar10 >> 0x19) * 0x1010101;
    for (uVar22 = ~uVar22 & 0x80808080 & uVar22 + 0xfefefeff; uVar22 != 0;
        uVar22 = uVar22 - 1 & uVar22) {
      uVar6 = uVar20 + ((uint)LZCOUNT(uVar22 << 0x18 | (uVar22 >> 8 & 0xff) << 0x10 |
                                      (uVar22 >> 0x10 & 0xff) << 8 | uVar22 >> 0x18) >> 3) & uVar21;
      if (uVar11 == puVar18[uVar6 * -0xe + -0xc]) {
        uVar25 = thunk_FUN_016dd50a(uVar8,puVar18[uVar6 * -0xe + -0xd],uVar11);
        bVar24 = (int)uVar25 == 0;
        if (bVar24) {
          uVar25 = CONCAT44(uVar12,puVar18[uVar6 * -0xe + -9]);
        }
        if (bVar24 && (int)((ulonglong)uVar25 >> 0x20) == (int)uVar25) {
          uVar26 = thunk_FUN_016dd50a(uVar9,puVar18[uVar6 * -0xe + -10],uVar12);
          bVar24 = (int)uVar26 == 0;
          if (bVar24) {
            uVar26 = (ulonglong)CONCAT14((byte)uVar13,(uint)(byte)puVar18[uVar6 * -0xe + -1]);
          }
          if (bVar24 && (int)(uVar26 >> 0x20) == (int)uVar26) {
            if (*param_2 != 0) {
              thunk_FUN_016d3fb4(uVar8);
            }
            if (param_2[3] == 0) {
              return;
            }
            if (uVar9 == 0) {
              return;
            }
            iVar23 = FUN_016d3bc8();
            uVar20 = *(byte *)(uVar9 - 3) & 0x1f;
            if (((*(byte *)(iVar23 + 0x14) & 0x1f) != 0) ||
               (uVar13 = *(uint *)(iVar23 + 0x14) & 0xfffff000, iVar14 = uVar13 - 0x10, uVar13 == 0)
               ) {
              iVar14 = (uint)*(ushort *)
                              (&DAT_0042567c + ((*(ushort *)(iVar23 + 0x14) & 0xfff) >> 6) * 2) << 4
              ;
            }
            uVar13 = (uint)(*(byte *)(uVar9 - 3) >> 5);
            iVar19 = *(int *)(iVar23 + 8) + 0x10;
            iVar17 = iVar14 * uVar20 + iVar14 + -4;
            iVar14 = iVar19 + iVar17;
            if (4 < uVar13) {
              if (uVar13 != 5) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)software_udf(0xff,0x16d4018);
                (*pcVar4)();
              }
              uVar13 = *(uint *)(iVar14 + -4);
              if (uVar13 < 5) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)software_udf(0xff,0x16d4022);
                (*pcVar4)();
              }
              if (*(char *)(iVar14 + -5) != '\0') {
                    /* WARNING: Does not return */
                pcVar4 = (code *)software_udf(0xff,0x16d402a);
                (*pcVar4)();
              }
            }
            if (iVar14 - uVar9 < uVar13) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)software_udf(0xff,0x16d4032);
              (*pcVar4)();
            }
            if (*(char *)(iVar14 - uVar13) != '\0') {
                    /* WARNING: Does not return */
              pcVar4 = (code *)software_udf(0xff,0x16d403a);
              (*pcVar4)();
            }
            if (*(char *)(iVar19 + iVar17) != '\0') {
                    /* WARNING: Does not return */
              pcVar4 = (code *)software_udf(0xff,0x16d4040);
              (*pcVar4)();
            }
            bVar1 = *(byte *)(iVar23 + 0x14);
            uVar13 = 1 << uVar20;
            *(undefined1 *)(uVar9 - 3) = 0xff;
            *(undefined2 *)(uVar9 - 2) = 0;
            goto LAB_016d4066;
          }
        }
      }
    }
    uVar22 = uVar16 & 0x80808080;
    if (bVar5) {
LAB_0135629c:
      if ((uVar22 & uVar16 << 1) != 0) {
        uVar20 = (uint)*(char *)((int)puVar18 + local_7c);
        if (-1 < (int)uVar20) {
          uVar20 = *puVar18 & 0x80808080;
          uVar13 = LZCOUNT((*puVar18 & 0x80) << 0x18 | (uVar20 >> 8 & 0xff) << 0x10 |
                           (uVar20 >> 0x10 & 0xff) << 8 | uVar20 >> 0x18);
          uVar20 = (uint)*(byte *)((int)puVar18 + (uVar13 >> 3));
          local_7c = uVar13 >> 3;
        }
        bVar1 = (byte)(uVar10 >> 0x19);
        *(byte *)((int)puVar18 + local_7c) = bVar1;
        param_1[2] = param_1[2] - (uVar20 & 1);
        param_1[3] = param_1[3] + 1;
        *(byte *)((int)puVar18 + (uVar21 & local_7c - 4) + 4) = bVar1;
        uVar20 = param_2[1];
        uVar13 = param_2[2];
        uVar10 = param_2[3];
        puVar18[local_7c * -0xe + -0xe] = *param_2;
        puVar18[local_7c * -0xe + -0xd] = uVar20;
        puVar18[local_7c * -0xe + -0xc] = uVar13;
        puVar18[local_7c * -0xe + -0xb] = uVar10;
        uVar20 = param_2[5];
        uVar13 = param_2[6];
        uVar10 = param_2[7];
        uVar8 = param_2[8];
        puVar18[local_7c * -0xe + -10] = param_2[4];
        puVar18[local_7c * -0xe + -9] = uVar20;
        puVar18[local_7c * -0xe + -8] = uVar13;
        puVar18[local_7c * -0xe + -7] = uVar10;
        puVar18[local_7c * -0xe + -6] = uVar8;
        uVar20 = param_2[10];
        uVar13 = param_2[0xb];
        uVar10 = param_2[0xc];
        uVar8 = param_2[0xd];
        puVar18[local_7c * -0xe + -5] = param_2[9];
        puVar18[local_7c * -0xe + -4] = uVar20;
        puVar18[local_7c * -0xe + -3] = uVar13;
        puVar18[local_7c * -0xe + -2] = uVar10;
        puVar18[local_7c * -0xe + -1] = uVar8;
        return;
      }
      bVar5 = true;
    }
    else {
      if (uVar22 != 0) {
        local_7c = uVar20 + ((uint)LZCOUNT((uVar16 & 0x80) << 0x18 | (uVar22 >> 8 & 0xff) << 0x10 |
                                           (uVar22 >> 0x10 & 0xff) << 8 | uVar22 >> 0x18) >> 3) &
                   uVar21;
        goto LAB_0135629c;
      }
      bVar5 = false;
    }
    iVar23 = iVar23 + 4;
    uVar20 = iVar23 + uVar20;
  } while( true );
LAB_016d4066:
  uVar8 = *(uint *)(iVar23 + 0x10);
  uVar10 = *(uint *)(iVar23 + 0xc) | uVar8;
  if ((uVar13 & uVar10) != 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)software_udf(0xff,0x16d4074);
    (*pcVar4)();
  }
  if ((uVar8 == 0) || (uVar10 + uVar13 == (2 << (bVar1 & 0x1f)) + -1)) {
    if (DAT_018ddb0b != '\0') {
      FUN_016ddcc0(&DAT_018ddd48);
    }
    FUN_016d3ca8(&uStack_28,iVar23,uVar20);
    FUN_016dddc0(&DAT_018ddd48);
    if (unaff_r4 == 0) {
      return;
    }
    puVar7 = (undefined4 *)FUN_016d2bc8();
    uVar15 = *puVar7;
    FUN_016d6ac4(uStack_28,unaff_r4);
    *puVar7 = uVar15;
    return;
  }
  if (DAT_018ddb0b == '\0') {
    *(uint *)(iVar23 + 0x10) = uVar13 + uVar8;
    return;
  }
  puVar18 = (uint *)(iVar23 + 0x10);
  DataMemoryBarrier(0x1b);
  do {
    ExclusiveAccess(puVar18);
    uVar10 = *puVar18;
    if (uVar8 != uVar10) goto LAB_016d409c;
    bVar5 = (bool)hasExclusiveAccess(puVar18);
  } while (!bVar5);
  *puVar18 = uVar13 + uVar8;
LAB_016d409c:
  DataMemoryBarrier(0x1b);
  if (uVar8 == uVar10) {
    return;
  }
  goto LAB_016d4066;
}

