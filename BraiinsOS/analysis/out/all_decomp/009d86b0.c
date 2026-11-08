// FUN_009d86b0 @ 009d86b0 size=2760 calls_out=17 calls_in=1
// strings: /proc/interrupts

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_009d86b0(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  char cVar10;
  undefined4 uVar11;
  int iVar12;
  uint uVar13;
  int *piVar14;
  uint uVar15;
  byte *pbVar16;
  undefined1 uVar17;
  uint uVar18;
  int iVar19;
  byte bVar20;
  uint uVar21;
  uint *puVar22;
  uint uVar23;
  int iVar24;
  uint uVar25;
  uint uVar26;
  bool bVar27;
  uint uVar28;
  uint uVar29;
  int iVar30;
  char *pcVar31;
  uint uVar32;
  undefined8 uVar33;
  uint local_188;
  undefined *local_184;
  uint local_150;
  uint local_14c;
  uint *local_148;
  uint local_144;
  int local_140;
  int local_13c;
  uint local_138;
  uint uStack_134;
  uint local_130;
  uint local_12c;
  uint local_128;
  uint uStack_124;
  uint uStack_120;
  uint uStack_11c;
  undefined4 uStack_118;
  undefined4 local_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  uint local_e4;
  undefined2 local_e0;
  undefined4 local_d8;
  int local_cc;
  char *local_c8;
  int local_c4;
  uint local_c0;
  int *local_bc;
  uint local_b8;
  uint uStack_b4;
  undefined4 uStack_b0;
  undefined4 local_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  uint local_80;
  uint local_7c;
  uint local_78;
  uint uStack_74;
  undefined4 uStack_70;
  undefined4 local_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  uVar33 = thunk_FUN_016de0ee(param_1,0x2c0);
  puVar22 = (uint *)((int)uVar33 + (int)((ulonglong)uVar33 >> 0x20));
  if ((char)puVar22[4] == '\0') {
    FUN_015f62e4(&local_80);
    *puVar22 = local_80;
    puVar22[1] = local_7c;
    puVar22[2] = local_78;
    puVar22[3] = uStack_74;
    *(undefined1 *)(puVar22 + 4) = 1;
  }
  local_138 = *puVar22;
  uStack_134 = puVar22[1];
  local_130 = puVar22[2];
  local_12c = puVar22[3];
  *puVar22 = local_138 + 1;
  puVar22[1] = uStack_134 + (0xfffffffe < local_138);
  local_144 = 0;
  local_140 = 0;
  local_13c = 0;
  local_148 = &DAT_005674cc;
  FUN_015ec424(&local_80,"/proc/interrupts",0x10);
  uVar9 = local_78;
  uVar8 = local_7c;
  uVar7 = local_80;
  if (local_80 == 0x80000000) {
    local_c0 = local_7c;
    local_bc = (int *)local_78;
    uVar11 = FUN_009c4380(&local_c0);
    *param_1 = 0;
    param_1[1] = uVar11;
    return;
  }
  iVar12 = local_7c - 1;
  local_184 = &DAT_0186afa8;
  local_150 = 0;
  uVar18 = local_150;
  uVar32 = 0;
  bVar5 = false;
joined_r0x009d87e4:
  bVar27 = bVar5;
  local_150 = uVar18;
  if (uVar18 <= uVar9) {
    uVar29 = uVar9 - uVar18;
    iVar24 = uVar8 + uVar18;
    local_150 = uVar9;
    if (uVar29 < 8) {
      if (uVar9 != uVar18) {
        uVar15 = 0;
        do {
          if (*(char *)(iVar24 + uVar15) == '\n') goto LAB_009d8910;
          uVar15 = uVar15 + 1;
        } while (uVar29 != uVar15);
      }
    }
    else {
      uVar13 = (iVar24 + 3U & 0xfffffffc) - iVar24;
      if (uVar13 == 0) {
        uVar13 = 0;
        goto LAB_009d8878;
      }
      uVar15 = 0;
      do {
        if (*(char *)(iVar24 + uVar15) == '\n') goto LAB_009d8910;
        uVar15 = uVar15 + 1;
      } while (uVar13 != uVar15);
      for (; uVar13 <= uVar29 - 8; uVar13 = uVar13 + 8) {
LAB_009d8878:
        uVar26 = *(uint *)(iVar24 + uVar13);
        uVar15 = ((uint *)(iVar24 + uVar13))[1] ^ 0xa0a0a0a;
        if (((0x1010100 - (uVar26 ^ 0xa0a0a0a) | uVar26) & 0x80808080 &
            (0x1010100 - uVar15 | uVar15)) != 0x80808080) break;
      }
      if (uVar29 != uVar13) {
        iVar19 = 0;
LAB_009d88e8:
        if (*(char *)(iVar24 + uVar13 + iVar19) != '\n') goto code_r0x009d88f4;
        uVar15 = iVar19 + uVar13;
LAB_009d8910:
        uVar29 = uVar15 + uVar18;
        uVar18 = uVar29 + 1;
        bVar5 = bVar27;
        if ((uVar29 < uVar9) && (*(char *)(iVar24 + uVar15) == '\n')) {
          bVar4 = false;
          local_150 = uVar18;
          local_14c = uVar18;
          goto LAB_009d8970;
        }
        goto joined_r0x009d87e4;
      }
    }
  }
LAB_009d8958:
  bVar27 = true;
  bVar4 = true;
  uVar18 = uVar9;
  local_14c = uVar32;
  if (uVar9 == uVar32) goto LAB_009d9034;
LAB_009d8970:
  uVar13 = uVar18 - uVar32;
  iVar24 = uVar8 + uVar32;
  uVar29 = uVar13;
  if ((uVar13 != 0) && (*(char *)(iVar12 + uVar18) == '\n')) {
    uVar29 = uVar13 - 1;
    if (uVar29 == 0) {
      uVar29 = 0;
    }
    else if (*(char *)(iVar24 + uVar29 + -1) == '\r') {
      uVar29 = uVar13 - 2;
    }
  }
  if (iVar24 == 0) goto LAB_009d9034;
  uVar18 = local_150;
  uVar32 = local_14c;
  bVar5 = bVar27;
  if (uVar29 < 8) {
    if (uVar29 == 7) {
      iVar19 = thunk_FUN_016dd50a(&DAT_0034b25a,iVar24,7);
      if (bVar4 || iVar19 == 0) {
        uVar29 = 7;
        if (iVar19 == 0) goto LAB_009d8a50;
        goto LAB_009d9034;
      }
    }
    else if (bVar4) {
LAB_009d9034:
      if (uVar7 != 0) {
        thunk_FUN_016d3fb4(uVar8);
      }
      *param_1 = local_148;
      param_1[1] = local_144;
      param_1[2] = local_140;
      param_1[3] = local_13c;
      param_1[4] = local_138;
      param_1[5] = uStack_134;
      param_1[6] = local_130;
      param_1[7] = local_12c;
      return;
    }
  }
  else {
    FUN_00fb6cfc(&local_80,iVar24,uVar29,&DAT_0034b25a,7);
    FUN_00953db0(&local_c0,&local_80);
    if (bVar4 || local_c0 != 0) {
      if (local_c0 != 0) {
LAB_009d8a50:
        FUN_00fb6cfc(&local_80,iVar24,uVar29,&DAT_0041545b,1);
        local_128 = local_80;
        uStack_124 = local_7c;
        uStack_120 = local_78;
        uStack_11c = uStack_74;
        uStack_118 = uStack_70;
        local_114 = local_6c;
        uStack_110 = uStack_68;
        uStack_10c = uStack_64;
        uStack_108 = uStack_60;
        uStack_104 = uStack_5c;
        local_100 = local_58;
        uStack_fc = uStack_54;
        uStack_f8 = uStack_50;
        uStack_f4 = uStack_4c;
        uStack_f0 = uStack_48;
        uStack_ec = uStack_44;
        local_d8 = 2;
        local_e0 = 1;
        local_e8 = 0;
        local_e4 = uVar29;
        uVar33 = FUN_009a05b8(&local_128);
        if ((int)uVar33 == 0) {
          uVar29 = 0;
          local_184 = &DAT_0186af88;
          uVar11 = 0;
LAB_009d9164:
                    /* WARNING: Subroutine does not return */
          FUN_00faa4a4(uVar11,uVar29,local_184);
        }
        piVar14 = (int *)thunk_FUN_016d4a50(0x20);
        if (piVar14 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(4,0x20);
        }
        local_c0 = 4;
        *(undefined8 *)piVar14 = uVar33;
        local_b8 = 1;
        local_bc = piVar14;
        FUN_016dd1aa(&local_80,&local_128,0x58);
        iVar24 = 0;
        while( true ) {
          uVar33 = FUN_009a05b8(&local_80);
          piVar6 = local_bc;
          uVar13 = local_c0;
          uVar29 = iVar24 + 1;
          if ((int)uVar33 == 0) break;
          if (uVar29 == local_c0) {
            FUN_009b6da4(&local_c0,uVar29,1,4,8);
            piVar14 = local_bc;
          }
          *(undefined8 *)(piVar14 + iVar24 * 2 + 2) = uVar33;
          local_b8 = iVar24 + 2;
          iVar24 = iVar24 + 1;
        }
        local_c8 = &DAT_00000001;
        iVar30 = *local_bc;
        iVar19 = local_bc[1];
        local_c4 = 0;
        local_cc = 0;
        FUN_00fb6cfc(&local_80,iVar30,iVar19,&DAT_00418eb8,1);
        pcVar31 = &DAT_00000001;
        local_c0 = local_80;
        local_bc = (int *)local_7c;
        local_b8 = local_78;
        uStack_b4 = uStack_74;
        uStack_b0 = uStack_70;
        local_ac = local_6c;
        uStack_a8 = uStack_68;
        uStack_a4 = uStack_64;
        uStack_a0 = uStack_60;
        uStack_9c = uStack_5c;
        local_98 = local_58;
        uStack_94 = uStack_54;
        uStack_90 = uStack_50;
        uStack_8c = uStack_4c;
        uStack_88 = uStack_48;
        uStack_84 = uStack_44;
        iVar24 = 0;
        uVar15 = 0;
        while( true ) {
          FUN_00953db0(&local_80,&local_c0);
          uVar26 = local_78;
          if (local_80 == 0) break;
          uVar25 = local_7c - uVar15;
          if ((uint)(local_cc - iVar24) < uVar25) {
            FUN_009b6da4(&local_cc,iVar24,uVar25,1,1);
            iVar24 = local_c4;
            pcVar31 = local_c8;
          }
          FUN_016dd1aa(pcVar31 + iVar24,iVar30 + uVar15,uVar25);
          iVar24 = iVar24 + uVar25;
          uVar15 = uVar26;
          local_c4 = iVar24;
        }
        uVar26 = iVar19 - uVar15;
        if ((uint)(local_cc - iVar24) < uVar26) {
          FUN_009b6da4(&local_cc,iVar24,uVar26,1,1);
          iVar24 = local_c4;
          pcVar31 = local_c8;
        }
        FUN_016dd1aa(pcVar31 + iVar24,iVar30 + uVar15,uVar26);
        iVar24 = iVar24 + uVar26;
        if (iVar24 == 1) {
          cVar10 = *local_c8;
          uVar17 = 1;
          if ((cVar10 == '+') || (cVar10 == '-')) goto LAB_009d9080;
        }
        else {
          if (iVar24 == 0) {
            uVar17 = 0;
            goto LAB_009d9080;
          }
          cVar10 = *local_c8;
        }
        uVar26 = 0;
        uVar15 = (uint)(cVar10 == '+');
        uVar25 = iVar24 - uVar15;
        if (uVar25 < 9) {
          for (; uVar25 != 0; uVar25 = uVar25 - 1) {
            pbVar16 = (byte *)(local_c8 + uVar15);
            if (9 < *pbVar16 - 0x30) goto LAB_009d9118;
            uVar15 = uVar15 + 1;
            uVar26 = (*pbVar16 - 0x30) + uVar26 * 10;
          }
        }
        else {
          while (uVar25 != 0) {
            uVar21 = (uint)((ulonglong)uVar26 * 10);
            if ((int)((ulonglong)uVar26 * 10 >> 0x20) != 0) {
              uVar17 = 1;
              if ((byte)local_c8[uVar15] - 0x30 < 10) {
                uVar17 = 2;
              }
              goto LAB_009d9080;
            }
            uVar28 = (byte)local_c8[uVar15] - 0x30;
            if (9 < uVar28) goto LAB_009d9118;
            uVar26 = uVar28 + uVar21;
            uVar25 = uVar25 - 1;
            uVar15 = uVar15 + 1;
            if (CARRY4(uVar28,uVar21)) {
              uVar17 = 2;
              goto LAB_009d9080;
            }
          }
        }
        if (local_cc != 0) {
          thunk_FUN_016d3fb4(local_c8);
        }
        if (uVar29 < 2) {
          uVar11 = 1;
          goto LAB_009d9164;
        }
        pbVar16 = (byte *)piVar6[2];
        uVar29 = piVar6[3];
        if (uVar29 == 1) {
          bVar20 = *pbVar16;
          uVar17 = 1;
          if ((bVar20 != 0x2b) && (bVar20 != 0x2d)) goto LAB_009d8da8;
        }
        else {
          if (uVar29 != 0) {
            bVar20 = *pbVar16;
LAB_009d8da8:
            uVar15 = 0;
            if (bVar20 == 0x2b) {
              pbVar16 = pbVar16 + 1;
              uVar29 = uVar29 - 1;
            }
            if (uVar29 < 9) {
              for (; uVar29 != 0; uVar29 = uVar29 - 1) {
                bVar20 = *pbVar16;
                if (9 < bVar20 - 0x30) goto LAB_009d9120;
                pbVar16 = pbVar16 + 1;
                uVar15 = (bVar20 - 0x30) + uVar15 * 10;
              }
            }
            else {
              while (uVar29 != 0) {
                uVar25 = (uint)((ulonglong)uVar15 * 10);
                if ((int)((ulonglong)uVar15 * 10 >> 0x20) != 0) {
                  uVar17 = 1;
                  if (*pbVar16 - 0x30 < 10) {
                    uVar17 = 2;
                  }
                  goto LAB_009d90c8;
                }
                uVar21 = *pbVar16 - 0x30;
                if (9 < uVar21) goto LAB_009d9120;
                uVar15 = uVar21 + uVar25;
                uVar29 = uVar29 - 1;
                pbVar16 = pbVar16 + 1;
                if (CARRY4(uVar21,uVar25)) {
                  uVar17 = 2;
                  goto LAB_009d90c8;
                }
              }
            }
            uVar29 = FUN_009bd354(local_138,uStack_134,local_130,local_12c,uVar26);
            if (local_140 == 0) {
              FUN_01336e8c(&local_148,&local_138);
            }
            iVar24 = 0;
            bVar5 = false;
            uVar25 = uVar29;
            do {
              uVar25 = local_144 & uVar25;
              uVar28 = *(uint *)((int)local_148 + uVar25);
              uVar21 = uVar28 ^ (uVar29 >> 0x19) * 0x1010101;
              uVar21 = ~uVar21 & 0x80808080 & uVar21 + 0xfefefeff;
              while (uVar21 != 0) {
                uVar23 = uVar21 >> 8;
                uVar1 = uVar21 >> 0x10;
                uVar2 = uVar21 >> 0x18;
                uVar3 = uVar21 << 0x18;
                uVar21 = uVar21 - 1 & uVar21;
                uVar23 = uVar25 + ((uint)LZCOUNT(uVar3 | (uVar23 & 0xff) << 0x10 |
                                                 (uVar1 & 0xff) << 8 | uVar2) >> 3) & local_144;
                if (uVar26 == local_148[uVar23 * -2 + -2]) goto LAB_009d8f34;
              }
              uVar21 = uVar28 & 0x80808080;
              uVar23 = local_188;
              if (bVar5) {
LAB_009d8ecc:
                if ((uVar21 & uVar28 << 1) != 0) goto LAB_009d8f80;
                bVar5 = true;
                local_188 = uVar23;
              }
              else {
                if (uVar21 != 0) {
                  uVar23 = uVar25 + ((uint)LZCOUNT((uVar28 & 0x80) << 0x18 |
                                                   (uVar21 >> 8 & 0xff) << 0x10 |
                                                   (uVar21 >> 0x10 & 0xff) << 8 | uVar21 >> 0x18) >>
                                    3) & local_144;
                  goto LAB_009d8ecc;
                }
                bVar5 = false;
              }
              iVar24 = iVar24 + 4;
              uVar25 = iVar24 + uVar25;
            } while( true );
          }
          uVar17 = 0;
        }
        goto LAB_009d90c8;
      }
      goto LAB_009d9034;
    }
  }
  goto joined_r0x009d87e4;
code_r0x009d88f4:
  iVar19 = iVar19 + 1;
  if ((uVar9 - uVar13) - uVar18 == iVar19) goto LAB_009d8958;
  goto LAB_009d88e8;
LAB_009d8f80:
  uVar25 = (uint)*(char *)((int)local_148 + uVar23);
  if (-1 < (int)uVar25) {
    uVar25 = *local_148 & 0x80808080;
    uVar23 = LZCOUNT((*local_148 & 0x80) << 0x18 | (uVar25 >> 8 & 0xff) << 0x10 |
                     (uVar25 >> 0x10 & 0xff) << 8 | uVar25 >> 0x18);
    uVar25 = (uint)*(byte *)((int)local_148 + (uVar23 >> 3));
    uVar23 = uVar23 >> 3;
  }
  bVar20 = (byte)(uVar29 >> 0x19);
  *(byte *)((int)local_148 + uVar23) = bVar20;
  *(byte *)((int)local_148 + (local_144 & uVar23 - 4) + 4) = bVar20;
  local_148[uVar23 * -2 + -2] = uVar26;
  local_140 = local_140 - (uVar25 & 1);
  local_13c = local_13c + 1;
LAB_009d8f34:
  local_148[uVar23 * -2 + -1] = uVar15;
  if (uVar13 != 0) {
    thunk_FUN_016d3fb4(piVar6);
  }
  bVar5 = false;
  if (bVar27) goto LAB_009d9034;
  goto joined_r0x009d87e4;
LAB_009d9118:
  uVar17 = 1;
LAB_009d9080:
  local_80 = CONCAT31(local_80._1_3_,uVar17);
                    /* WARNING: Subroutine does not return */
  FUN_00fb74f8(&DAT_0034b280,0x23,&local_80,&DAT_0186b0f8,&DAT_0186af98);
LAB_009d9120:
  uVar17 = 1;
LAB_009d90c8:
  local_80 = CONCAT31(local_80._1_3_,uVar17);
                    /* WARNING: Subroutine does not return */
  FUN_00fb74f8(&DAT_0034b2a3,0x22,&local_80,&DAT_0186b0f8,&DAT_0186afb8);
}

