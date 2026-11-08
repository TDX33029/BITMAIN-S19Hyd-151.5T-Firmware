// FUN_01622bf8 @ 01622bf8 size=1224 calls_out=2 calls_in=1
// strings: 

void FUN_01622bf8(undefined4 *param_1,int *param_2,undefined4 param_3,int param_4)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  int iVar9;
  undefined1 uVar10;
  uint uVar11;
  uint uVar12;
  undefined4 uVar13;
  int unaff_r4;
  uint uVar14;
  int iVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  undefined4 uVar21;
  int iVar22;
  uint uVar23;
  undefined4 uVar24;
  uint uVar25;
  int iVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  int local_80;
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
  local_80 = 0;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  FUN_00ed56f4(&local_68,param_3,param_4);
  uStack_28 = CONCAT13(0xff,(undefined3)uStack_28);
  FUN_00ed56f4(&local_68,(int)&uStack_28 + 3,1);
  uVar27 = local_54 + local_64 + (uint)CARRY4(local_58,local_68);
  uVar8 = (local_58 << 0xd | local_54 >> 0x13) ^ local_58 + local_68;
  uVar11 = (local_54 << 0xd | local_58 >> 0x13) ^ uVar27;
  uVar29 = local_34 | local_30 << 0x18;
  uVar19 = uVar29 ^ local_4c;
  uVar4 = local_38 ^ local_50;
  uVar12 = uVar4 + local_60;
  uVar23 = uVar19 + local_5c + (uint)CARRY4(uVar4,local_60);
  uVar14 = uVar23 + uVar11 + (uint)CARRY4(uVar12,uVar8);
  uVar25 = uVar14 ^ (uVar11 << 0x11 | uVar8 >> 0xf);
  uVar5 = (uVar4 << 0x10 | uVar19 >> 0x10) ^ uVar12;
  uVar23 = (uVar19 << 0x10 | uVar4 >> 0x10) ^ uVar23;
  uVar20 = uVar23 + local_58 + local_68 + (uint)CARRY4(uVar5,uVar27);
  uVar4 = uVar12 + uVar8 ^ (uVar8 << 0x11 | uVar11 >> 0xf);
  uVar11 = uVar5 + uVar27 ^ local_38;
  uVar28 = uVar11 + uVar4;
  uVar29 = (uVar20 ^ uVar29) + uVar25 + (uint)CARRY4(uVar11,uVar4);
  uVar19 = uVar29 ^ (uVar25 << 0xd | uVar4 >> 0x13);
  uVar11 = uVar28 ^ (uVar4 << 0xd | uVar25 >> 0x13);
  uVar20 = (uVar23 << 0x15 | uVar5 >> 0xb) ^ uVar20;
  uVar14 = uVar14 ^ 0xff;
  uVar4 = (uVar5 << 0x15 | uVar23 >> 0xb) ^ uVar5 + uVar27;
  uVar23 = uVar4 + uVar14;
  uVar14 = uVar20 + uVar12 + uVar8 + (uint)CARRY4(uVar4,uVar14);
  uVar25 = uVar19 + uVar14 + (uint)CARRY4(uVar11,uVar23);
  uVar8 = uVar25 ^ (uVar19 << 0x11 | uVar11 >> 0xf);
  uVar5 = uVar11 + uVar23 ^ (uVar11 << 0x11 | uVar19 >> 0xf);
  uVar14 = (uVar20 << 0x10 | uVar4 >> 0x10) ^ uVar14;
  uVar19 = (uVar4 << 0x10 | uVar20 >> 0x10) ^ uVar23;
  uVar20 = uVar19 + uVar29;
  uVar12 = uVar14 + uVar28 + (uint)CARRY4(uVar19,uVar29);
  uVar29 = uVar8 + uVar12 + (uint)CARRY4(uVar5,uVar20);
  uVar4 = (uVar8 << 0xd | uVar5 >> 0x13) ^ uVar29;
  uVar8 = (uVar5 << 0xd | uVar8 >> 0x13) ^ uVar5 + uVar20;
  uVar12 = (uVar14 << 0x15 | uVar19 >> 0xb) ^ uVar12;
  uVar14 = (uVar19 << 0x15 | uVar14 >> 0xb) ^ uVar20;
  uVar19 = uVar14 + uVar25;
  uVar25 = uVar12 + uVar11 + uVar23 + (uint)CARRY4(uVar14,uVar25);
  uVar27 = uVar4 + uVar25 + (uint)CARRY4(uVar8,uVar19);
  uVar25 = (uVar12 << 0x10 | uVar14 >> 0x10) ^ uVar25;
  uVar11 = (uVar14 << 0x10 | uVar12 >> 0x10) ^ uVar19;
  uVar14 = uVar11 + uVar29;
  uVar20 = uVar25 + uVar5 + uVar20 + (uint)CARRY4(uVar11,uVar29);
  uVar12 = (uVar11 << 0x15 | uVar25 >> 0xb) ^ uVar14;
  uVar23 = (uVar4 << 0x11 | uVar8 >> 0xf) ^ uVar27;
  uVar11 = (uVar25 << 0x15 | uVar11 >> 0xb) ^ uVar20;
  uVar5 = uVar12 + uVar27;
  uVar4 = (uVar8 << 0x11 | uVar4 >> 0xf) ^ uVar8 + uVar19;
  uVar19 = uVar11 + uVar8 + uVar19 + (uint)CARRY4(uVar12,uVar27);
  uVar8 = (uVar23 << 0xd | uVar4 >> 0x13) ^ uVar23 + uVar20 + (uint)CARRY4(uVar4,uVar14);
  uVar4 = (uVar4 << 0xd | uVar23 >> 0x13) ^ uVar4 + uVar14;
  uVar5 = ((uVar5 ^ uVar11 >> 0x10) << 0x15 | ((uVar11 << 0x10 | uVar12 >> 0x10) ^ uVar19) >> 0xb) ^
          (uVar4 << 0x11 | uVar8 >> 0xf) ^ uVar8 + uVar19 + (uint)CARRY4(uVar4,uVar5) ^
          uVar4 + uVar5;
  iVar15 = *param_2;
  uVar8 = param_2[1];
  uVar4 = uVar5 >> 0x19;
  do {
    uVar5 = uVar8 & uVar5;
    uVar12 = *(uint *)(iVar15 + uVar5);
    uVar11 = uVar12 ^ uVar4 * 0x1010101;
    uVar11 = ~uVar11 & 0x80808080 & uVar11 + 0xfefefeff;
    while (uVar11 != 0) {
      uVar23 = uVar11 - 1 & uVar11;
      uVar14 = uVar5 + ((uint)LZCOUNT(uVar11 << 0x18 | (uVar11 >> 8 & 0xff) << 0x10 |
                                      (uVar11 >> 0x10 & 0xff) << 8 | uVar11 >> 0x18) >> 3) & uVar8;
      iVar9 = iVar15 + -0x40 + uVar14 * -0x40;
      uVar11 = uVar23;
      if ((param_4 == *(int *)(iVar9 + 8)) &&
         (iVar9 = thunk_FUN_016dd50a(param_3,*(undefined4 *)(iVar9 + 4),param_4), iVar9 == 0)) {
        puVar6 = (uint *)(iVar15 + (uVar14 - 4 & uVar8));
        uVar5 = *puVar6;
        uVar4 = *(uint *)(iVar15 + uVar14) & 0x80808080 & *(uint *)(iVar15 + uVar14) << 1;
        iVar9 = iVar15 + uVar14 * -0x40;
        uVar10 = 0x80;
        if (((uint)LZCOUNT(uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 | (uVar4 >> 0x10 & 0xff) << 8
                           | uVar4 >> 0x18) >> 3) +
            ((uint)LZCOUNT(uVar5 & 0x80808080 & uVar5 << 1) >> 3) < 4) {
          param_2[2] = param_2[2] + 1;
          uVar10 = 0xff;
        }
        *(undefined1 *)(iVar15 + uVar14) = uVar10;
        *(undefined1 *)(puVar6 + 1) = uVar10;
        iVar15 = *(int *)(iVar9 + -0x40);
        iVar26 = *(int *)(iVar9 + -0x3c);
        param_2[3] = param_2[3] + -1;
        if (iVar15 == -0x80000000) goto LAB_01623074;
        uVar13 = *(undefined4 *)(iVar9 + -0x2c);
        uVar16 = *(undefined4 *)(iVar9 + -0x28);
        uVar17 = *(undefined4 *)(iVar9 + -0x24);
        uVar21 = *(undefined4 *)(iVar9 + -0x20);
        uVar24 = *(undefined4 *)(iVar9 + -0x1c);
        *param_1 = *(undefined4 *)(iVar9 + -0x30);
        param_1[1] = uVar13;
        param_1[2] = uVar16;
        param_1[3] = uVar17;
        param_1[4] = uVar21;
        param_1[5] = uVar24;
        uVar13 = *(undefined4 *)(iVar9 + -0x14);
        uVar16 = *(undefined4 *)(iVar9 + -0x10);
        uVar17 = *(undefined4 *)(iVar9 + -0xc);
        uVar21 = *(undefined4 *)(iVar9 + -8);
        uVar24 = *(undefined4 *)(iVar9 + -4);
        param_1[6] = *(undefined4 *)(iVar9 + -0x18);
        param_1[7] = uVar13;
        param_1[8] = uVar16;
        param_1[9] = uVar17;
        param_1[10] = uVar21;
        param_1[0xb] = uVar24;
        if (iVar15 == 0) {
          return;
        }
        if (iVar26 == 0) {
          return;
        }
        iVar15 = FUN_016d3bc8();
        uVar4 = *(byte *)(iVar26 + -3) & 0x1f;
        if (((*(byte *)(iVar15 + 0x14) & 0x1f) != 0) ||
           (uVar5 = *(uint *)(iVar15 + 0x14) & 0xfffff000, iVar9 = uVar5 - 0x10, uVar5 == 0)) {
          iVar9 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar15 + 0x14) & 0xfff) >> 6) * 2)
                  << 4;
        }
        uVar5 = (uint)(*(byte *)(iVar26 + -3) >> 5);
        iVar22 = *(int *)(iVar15 + 8) + 0x10;
        iVar18 = iVar9 * uVar4 + iVar9 + -4;
        iVar9 = iVar22 + iVar18;
        if (4 < uVar5) {
          if (uVar5 != 5) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)software_udf(0xff,0x16d4018);
            (*pcVar1)();
          }
          uVar5 = *(uint *)(iVar9 + -4);
          if (uVar5 < 5) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)software_udf(0xff,0x16d4022);
            (*pcVar1)();
          }
          if (*(char *)(iVar9 + -5) != '\0') {
                    /* WARNING: Does not return */
            pcVar1 = (code *)software_udf(0xff,0x16d402a);
            (*pcVar1)();
          }
        }
        if ((uint)(iVar9 - iVar26) < uVar5) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4032);
          (*pcVar1)();
        }
        if (*(char *)(iVar9 - uVar5) != '\0') {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d403a);
          (*pcVar1)();
        }
        if (*(char *)(iVar22 + iVar18) != '\0') {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4040);
          (*pcVar1)();
        }
        bVar2 = *(byte *)(iVar15 + 0x14);
        uVar5 = 1 << uVar4;
        *(undefined1 *)(iVar26 + -3) = 0xff;
        *(undefined2 *)(iVar26 + -2) = 0;
        goto LAB_016d4066;
      }
    }
    if ((uVar12 & 0x80808080 & uVar12 << 1) != 0) {
LAB_01623074:
      param_1[8] = 0x80000000;
      return;
    }
    local_80 = local_80 + 4;
    uVar5 = uVar5 + local_80;
  } while( true );
LAB_016d4066:
  uVar11 = *(uint *)(iVar15 + 0x10);
  uVar8 = *(uint *)(iVar15 + 0xc) | uVar11;
  if ((uVar5 & uVar8) != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4074);
    (*pcVar1)();
  }
  if ((uVar11 == 0) || (uVar8 + uVar5 == (2 << (bVar2 & 0x1f)) + -1)) {
    if (DAT_018ddb0b != '\0') {
      FUN_016ddcc0(&DAT_018ddd48);
    }
    FUN_016d3ca8(&uStack_28,iVar15,uVar4);
    FUN_016dddc0(&DAT_018ddd48);
    if (unaff_r4 == 0) {
      return;
    }
    puVar7 = (undefined4 *)FUN_016d2bc8();
    uVar13 = *puVar7;
    FUN_016d6ac4(uStack_28,unaff_r4);
    *puVar7 = uVar13;
    return;
  }
  if (DAT_018ddb0b == '\0') {
    *(uint *)(iVar15 + 0x10) = uVar5 + uVar11;
    return;
  }
  puVar6 = (uint *)(iVar15 + 0x10);
  DataMemoryBarrier(0x1b);
  do {
    ExclusiveAccess(puVar6);
    uVar8 = *puVar6;
    if (uVar11 != uVar8) goto LAB_016d409c;
    bVar3 = (bool)hasExclusiveAccess(puVar6);
  } while (!bVar3);
  *puVar6 = uVar5 + uVar11;
LAB_016d409c:
  DataMemoryBarrier(0x1b);
  if (uVar11 == uVar8) {
    return;
  }
  goto LAB_016d4066;
}

