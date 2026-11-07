// FUN_0128e508 @ 0128e508 size=1244 calls_out=2 calls_in=0
// strings: 

void FUN_0128e508(undefined4 *param_1,int *param_2,undefined4 param_3,int param_4)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  uint *puVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  undefined4 uVar14;
  int unaff_r4;
  uint uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  uint uVar18;
  uint uVar19;
  undefined4 uVar20;
  uint uVar21;
  int iVar22;
  undefined4 uVar23;
  uint uVar24;
  uint uVar25;
  int iVar26;
  uint uVar27;
  uint uVar28;
  int local_84;
  uint local_68;
  uint local_64;
  uint local_60;
  uint local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  int local_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  
  local_3c = param_2[7];
  local_40 = param_2[6];
  local_4c = local_3c ^ 0x74656462;
  local_50 = local_40 ^ 0x79746573;
  local_44 = param_2[5];
  local_54 = local_3c ^ 0x646f7261;
  local_58 = local_40 ^ 0x6e646f6d;
  local_5c = local_44 ^ 0x6c796765;
  local_48 = param_2[4];
  local_60 = local_48 ^ 0x6e657261;
  local_64 = local_44 ^ 0x736f6d65;
  local_68 = local_48 ^ 0x70736575;
  local_84 = 0;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  FUN_010b4a1c(&local_68,param_3,param_4);
  uStack_28 = CONCAT13(0xff,(undefined3)uStack_28);
  FUN_010b4a1c(&local_68,(int)&uStack_28 + 3,1);
  uVar25 = local_54 + local_64 + (uint)CARRY4(local_58,local_68);
  uVar8 = (local_58 << 0xd | local_54 >> 0x13) ^ local_58 + local_68;
  uVar10 = (local_54 << 0xd | local_58 >> 0x13) ^ uVar25;
  uVar27 = local_34 | local_30 << 0x18;
  uVar18 = uVar27 ^ local_4c;
  uVar4 = local_38 ^ local_50;
  uVar12 = uVar4 + local_60;
  uVar21 = uVar18 + local_5c + (uint)CARRY4(uVar4,local_60);
  uVar24 = uVar21 + uVar10 + (uint)CARRY4(uVar12,uVar8);
  uVar15 = uVar24 ^ (uVar10 << 0x11 | uVar8 >> 0xf);
  uVar5 = (uVar4 << 0x10 | uVar18 >> 0x10) ^ uVar12;
  uVar21 = (uVar18 << 0x10 | uVar4 >> 0x10) ^ uVar21;
  uVar10 = uVar12 + uVar8 ^ (uVar8 << 0x11 | uVar10 >> 0xf);
  uVar19 = uVar21 + local_58 + local_68 + (uint)CARRY4(uVar5,uVar25);
  uVar4 = uVar5 + uVar25 ^ local_38;
  uVar28 = uVar4 + uVar10;
  uVar27 = (uVar19 ^ uVar27) + uVar15 + (uint)CARRY4(uVar4,uVar10);
  uVar18 = uVar27 ^ (uVar15 << 0xd | uVar10 >> 0x13);
  uVar19 = (uVar21 << 0x15 | uVar5 >> 0xb) ^ uVar19;
  uVar24 = uVar24 ^ 0xff;
  uVar4 = (uVar5 << 0x15 | uVar21 >> 0xb) ^ uVar5 + uVar25;
  uVar5 = uVar28 ^ (uVar10 << 0xd | uVar15 >> 0x13);
  uVar21 = uVar4 + uVar24;
  uVar12 = uVar19 + uVar12 + uVar8 + (uint)CARRY4(uVar4,uVar24);
  uVar24 = uVar18 + uVar12 + (uint)CARRY4(uVar5,uVar21);
  uVar10 = uVar24 ^ (uVar18 << 0x11 | uVar5 >> 0xf);
  uVar8 = uVar5 + uVar21 ^ (uVar5 << 0x11 | uVar18 >> 0xf);
  uVar12 = (uVar19 << 0x10 | uVar4 >> 0x10) ^ uVar12;
  uVar18 = (uVar4 << 0x10 | uVar19 >> 0x10) ^ uVar21;
  uVar19 = uVar18 + uVar27;
  uVar15 = uVar12 + uVar28 + (uint)CARRY4(uVar18,uVar27);
  uVar27 = uVar10 + uVar15 + (uint)CARRY4(uVar8,uVar19);
  uVar4 = (uVar10 << 0xd | uVar8 >> 0x13) ^ uVar27;
  uVar10 = (uVar8 << 0xd | uVar10 >> 0x13) ^ uVar8 + uVar19;
  uVar15 = (uVar12 << 0x15 | uVar18 >> 0xb) ^ uVar15;
  uVar18 = (uVar18 << 0x15 | uVar12 >> 0xb) ^ uVar19;
  uVar12 = uVar18 + uVar24;
  uVar24 = uVar15 + uVar5 + uVar21 + (uint)CARRY4(uVar18,uVar24);
  uVar25 = uVar4 + uVar24 + (uint)CARRY4(uVar10,uVar12);
  uVar24 = (uVar15 << 0x10 | uVar18 >> 0x10) ^ uVar24;
  uVar5 = (uVar18 << 0x10 | uVar15 >> 0x10) ^ uVar12;
  uVar18 = uVar5 + uVar27;
  uVar19 = uVar24 + uVar8 + uVar19 + (uint)CARRY4(uVar5,uVar27);
  uVar8 = (uVar5 << 0x15 | uVar24 >> 0xb) ^ uVar18;
  uVar21 = (uVar4 << 0x11 | uVar10 >> 0xf) ^ uVar25;
  uVar15 = (uVar24 << 0x15 | uVar5 >> 0xb) ^ uVar19;
  uVar5 = uVar8 + uVar25;
  uVar4 = (uVar10 << 0x11 | uVar4 >> 0xf) ^ uVar10 + uVar12;
  uVar12 = uVar15 + uVar10 + uVar12 + (uint)CARRY4(uVar8,uVar25);
  uVar10 = (uVar21 << 0xd | uVar4 >> 0x13) ^ uVar21 + uVar19 + (uint)CARRY4(uVar4,uVar18);
  uVar4 = (uVar4 << 0xd | uVar21 >> 0x13) ^ uVar4 + uVar18;
  uVar5 = ((uVar5 ^ uVar15 >> 0x10) << 0x15 | ((uVar15 << 0x10 | uVar8 >> 0x10) ^ uVar12) >> 0xb) ^
          (uVar4 << 0x11 | uVar10 >> 0xf) ^ uVar10 + uVar12 + (uint)CARRY4(uVar4,uVar5) ^
          uVar4 + uVar5;
  iVar26 = *param_2;
  uVar8 = param_2[1];
  uVar4 = uVar5 >> 0x19;
  do {
    uVar5 = uVar8 & uVar5;
    uVar10 = *(uint *)(iVar26 + uVar5);
    uVar18 = uVar10 ^ uVar4 * 0x1010101;
    uVar18 = ~uVar18 & 0x80808080 & uVar18 + 0xfefefeff;
    while (uVar18 != 0) {
      uVar12 = uVar18 >> 8;
      uVar15 = uVar18 >> 0x10;
      uVar21 = uVar18 >> 0x18;
      uVar19 = uVar18 << 0x18;
      uVar18 = uVar18 - 1 & uVar18;
      uVar12 = uVar5 + ((uint)LZCOUNT(uVar19 | (uVar12 & 0xff) << 0x10 | (uVar15 & 0xff) << 8 |
                                      uVar21) >> 3) & uVar8;
      iVar6 = iVar26 + -0x24 + uVar12 * -0x24;
      if ((param_4 == *(int *)(iVar6 + 8)) &&
         (iVar6 = thunk_FUN_016dd50a(param_3,*(undefined4 *)(iVar6 + 4),param_4), iVar6 == 0)) {
        iVar6 = ((int)(uVar12 * 0x24) >> 2) * 0x38e38e39;
        puVar9 = (uint *)(iVar26 + (iVar6 - 4U & uVar8));
        uVar5 = *puVar9;
        uVar4 = *(uint *)(iVar26 + iVar6) & 0x80808080 & *(uint *)(iVar26 + iVar6) << 1;
        uVar4 = ((uint)LZCOUNT(uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 |
                               (uVar4 >> 0x10 & 0xff) << 8 | uVar4 >> 0x18) >> 3) +
                ((uint)LZCOUNT(uVar5 & 0x80808080 & uVar5 << 1) >> 3);
        iVar13 = 0x80;
        if (uVar4 < 4) {
          iVar13 = param_2[2];
        }
        iVar22 = param_2[3];
        if (uVar4 < 4) {
          param_2[2] = iVar13 + 1;
          iVar13 = 0xff;
        }
        iVar11 = iVar26 + uVar12 * -0x24;
        *(char *)(iVar26 + iVar6) = (char)iVar13;
        *(char *)(puVar9 + 1) = (char)iVar13;
        iVar26 = *(int *)(iVar11 + -0x24);
        iVar6 = *(int *)(iVar11 + -0x20);
        param_2[3] = iVar22 + -1;
        if (iVar26 == -0x80000000) goto LAB_0128e9a0;
        uVar14 = *(undefined4 *)(iVar11 + -0x14);
        uVar16 = *(undefined4 *)(iVar11 + -0x10);
        uVar17 = *(undefined4 *)(iVar11 + -0xc);
        uVar20 = *(undefined4 *)(iVar11 + -8);
        uVar23 = *(undefined4 *)(iVar11 + -4);
        *param_1 = *(undefined4 *)(iVar11 + -0x18);
        param_1[1] = uVar14;
        param_1[2] = uVar16;
        param_1[3] = uVar17;
        param_1[4] = uVar20;
        param_1[5] = uVar23;
        if (iVar26 == 0) {
          return;
        }
        if (iVar6 == 0) {
          return;
        }
        iVar26 = FUN_016d3bc8();
        uVar4 = *(byte *)(iVar6 + -3) & 0x1f;
        if (((*(byte *)(iVar26 + 0x14) & 0x1f) != 0) ||
           (uVar5 = *(uint *)(iVar26 + 0x14) & 0xfffff000, iVar13 = uVar5 - 0x10, uVar5 == 0)) {
          iVar13 = (uint)*(ushort *)
                          (&DAT_0042567c + ((*(ushort *)(iVar26 + 0x14) & 0xfff) >> 6) * 2) << 4;
        }
        uVar5 = (uint)(*(byte *)(iVar6 + -3) >> 5);
        iVar11 = *(int *)(iVar26 + 8) + 0x10;
        iVar22 = iVar13 * uVar4 + iVar13 + -4;
        iVar13 = iVar11 + iVar22;
        if (4 < uVar5) {
          if (uVar5 != 5) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)software_udf(0xff,0x16d4018);
            (*pcVar1)();
          }
          uVar5 = *(uint *)(iVar13 + -4);
          if (uVar5 < 5) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)software_udf(0xff,0x16d4022);
            (*pcVar1)();
          }
          if (*(char *)(iVar13 + -5) != '\0') {
                    /* WARNING: Does not return */
            pcVar1 = (code *)software_udf(0xff,0x16d402a);
            (*pcVar1)();
          }
        }
        if ((uint)(iVar13 - iVar6) < uVar5) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4032);
          (*pcVar1)();
        }
        if (*(char *)(iVar13 - uVar5) != '\0') {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d403a);
          (*pcVar1)();
        }
        if (*(char *)(iVar11 + iVar22) != '\0') {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4040);
          (*pcVar1)();
        }
        bVar2 = *(byte *)(iVar26 + 0x14);
        uVar5 = 1 << uVar4;
        *(undefined1 *)(iVar6 + -3) = 0xff;
        *(undefined2 *)(iVar6 + -2) = 0;
        goto LAB_016d4066;
      }
    }
    if ((uVar10 & 0x80808080 & uVar10 << 1) != 0) {
LAB_0128e9a0:
      *param_1 = 0x80000000;
      return;
    }
    local_84 = local_84 + 4;
    uVar5 = uVar5 + local_84;
  } while( true );
LAB_016d4066:
  uVar10 = *(uint *)(iVar26 + 0x10);
  uVar8 = *(uint *)(iVar26 + 0xc) | uVar10;
  if ((uVar5 & uVar8) != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4074);
    (*pcVar1)();
  }
  if ((uVar10 == 0) || (uVar8 + uVar5 == (2 << (bVar2 & 0x1f)) + -1)) {
    if (DAT_018ddb0b != '\0') {
      FUN_016ddcc0(&DAT_018ddd48);
    }
    FUN_016d3ca8(&uStack_28,iVar26,uVar4);
    FUN_016dddc0(&DAT_018ddd48);
    if (unaff_r4 == 0) {
      return;
    }
    puVar7 = (undefined4 *)FUN_016d2bc8();
    uVar14 = *puVar7;
    FUN_016d6ac4(uStack_28,unaff_r4);
    *puVar7 = uVar14;
    return;
  }
  if (DAT_018ddb0b == '\0') {
    *(uint *)(iVar26 + 0x10) = uVar5 + uVar10;
    return;
  }
  puVar9 = (uint *)(iVar26 + 0x10);
  DataMemoryBarrier(0x1b);
  do {
    ExclusiveAccess(puVar9);
    uVar8 = *puVar9;
    if (uVar10 != uVar8) goto LAB_016d409c;
    bVar3 = (bool)hasExclusiveAccess(puVar9);
  } while (!bVar3);
  *puVar9 = uVar5 + uVar10;
LAB_016d409c:
  DataMemoryBarrier(0x1b);
  if (uVar10 == uVar8) {
    return;
  }
  goto LAB_016d4066;
}

