// FUN_00f7307c @ 00f7307c size=3244 calls_out=7 calls_in=4
// strings: 

void FUN_00f7307c(undefined4 *param_1,int param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  int iVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  int iVar23;
  uint uVar24;
  undefined4 extraout_r1;
  uint uVar25;
  uint uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  int iVar29;
  undefined4 uVar30;
  int iVar31;
  undefined4 *puVar32;
  undefined4 uVar33;
  uint uVar34;
  int iVar35;
  undefined4 uVar36;
  uint uVar37;
  undefined4 uVar38;
  uint uVar39;
  undefined4 *puVar40;
  int iVar41;
  undefined4 *puVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  uint uVar45;
  char *pcVar46;
  undefined4 *puVar47;
  uint uVar48;
  uint uVar49;
  uint uVar50;
  undefined4 uVar51;
  char *pcVar52;
  bool bVar53;
  bool bVar54;
  undefined8 uVar55;
  int local_1e0;
  int local_1dc;
  int local_1d8;
  uint local_1c4;
  int local_1c0;
  uint local_1b8;
  int local_1b4;
  int local_1b0;
  int local_1a8;
  int local_1a4;
  int local_1a0;
  uint local_198;
  int local_194;
  int local_190;
  int local_18c;
  int local_188;
  int local_184;
  int local_180;
  int local_17c;
  uint local_178;
  int local_174;
  int local_170;
  int local_16c;
  int local_168;
  int local_164;
  int local_160;
  int local_15c;
  int local_158;
  int local_128;
  int local_110;
  int local_108;
  int local_f0;
  int local_ec;
  int local_e8;
  int local_e4;
  char *local_e0;
  int local_dc;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  uint local_50;
  undefined8 local_4c;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  
  pcVar46 = *(char **)(param_2 + 8);
  iVar17 = (int)pcVar46 * 0x16c;
  if ("X" < pcVar46) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4();
  }
  if (iVar17 == 0) {
    local_dc = 4;
    local_e0 = (char *)0x0;
  }
  else {
    puVar47 = *(undefined4 **)(param_2 + 4);
    local_dc = thunk_FUN_016d4a50(iVar17);
    if (local_dc == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(4,iVar17);
    }
    local_e0 = pcVar46;
    if (pcVar46 != (char *)0x0) {
      puVar40 = puVar47 + (int)pcVar46 * 0x5b;
      uVar48 = 0;
      pcVar52 = pcVar46;
      do {
        if (puVar47 == puVar40) break;
        uVar2 = puVar47[0x47];
        iVar17 = -0x80000000;
        uVar3 = puVar47[0x48];
        uVar4 = puVar47[0x49];
        uVar5 = puVar47[0x4a];
        uVar6 = puVar47[7];
        local_f0 = -0x80000000;
        if (puVar47[0x23] != -0x80000000) {
          local_110 = puVar47[0x25];
          uVar28 = puVar47[0x24];
          if (local_110 == 0) {
            local_158 = 1;
          }
          else {
            local_158 = thunk_FUN_016d4a50();
            if (local_158 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00600af4(1,local_110);
            }
          }
          FUN_016dd1aa(local_158,uVar28,local_110);
          local_f0 = local_110;
        }
        if (puVar47[0x26] != -0x80000000) {
          iVar17 = puVar47[0x28];
          uVar28 = puVar47[0x27];
          if (iVar17 == 0) {
            local_15c = 1;
          }
          else {
            local_15c = thunk_FUN_016d4a50(iVar17);
            if (local_15c == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00600af4(1,iVar17);
            }
          }
          FUN_016dd1aa(local_15c,uVar28,iVar17);
          local_17c = iVar17;
        }
        uVar28 = puVar47[0x4b];
        iVar41 = -0x80000000;
        iVar29 = -0x80000000;
        uVar18 = puVar47[0x4c];
        uVar19 = puVar47[0x4d];
        uVar20 = puVar47[0x4e];
        uVar21 = puVar47[0x4f];
        uVar22 = puVar47[0x50];
        if (puVar47[0x29] != -0x80000000) {
          iVar29 = puVar47[0x2b];
          uVar30 = puVar47[0x2a];
          if (iVar29 == 0) {
            local_160 = 1;
          }
          else {
            local_160 = thunk_FUN_016d4a50();
            if (local_160 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00600af4(1,iVar29);
            }
          }
          FUN_016dd1aa(local_160,uVar30,iVar29);
          local_128 = iVar29;
        }
        if (puVar47[0x2c] != -0x80000000) {
          iVar41 = puVar47[0x2e];
          uVar30 = puVar47[0x2d];
          if (iVar41 == 0) {
            local_164 = 1;
          }
          else {
            local_164 = thunk_FUN_016d4a50(iVar41);
            if (local_164 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00600af4(1,iVar41);
            }
          }
          FUN_016dd1aa(local_164,uVar30,iVar41);
          local_180 = iVar41;
        }
        iVar31 = -0x80000000;
        local_e8 = -0x80000000;
        if (puVar47[0x2f] != -0x80000000) {
          iVar31 = puVar47[0x31];
          uVar30 = puVar47[0x30];
          if (iVar31 == 0) {
            local_168 = 1;
          }
          else {
            local_168 = thunk_FUN_016d4a50(iVar31);
            if (local_168 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00600af4(1,iVar31);
            }
          }
          FUN_016dd1aa(local_168,uVar30,iVar31);
          local_184 = iVar31;
        }
        if (puVar47[0x32] != -0x80000000) {
          local_188 = puVar47[0x34];
          uVar30 = puVar47[0x33];
          if (local_188 == 0) {
            local_16c = 1;
          }
          else {
            local_16c = thunk_FUN_016d4a50();
            if (local_16c == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00600af4(1,local_188);
            }
          }
          FUN_016dd1aa(local_16c,uVar30,local_188);
          local_e8 = local_188;
        }
        iVar35 = -0x80000000;
        local_ec = -0x80000000;
        if (puVar47[0x35] != -0x80000000) {
          iVar35 = puVar47[0x37];
          uVar30 = puVar47[0x36];
          if (iVar35 == 0) {
            local_170 = 1;
          }
          else {
            local_170 = thunk_FUN_016d4a50();
            if (local_170 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00600af4(1,iVar35);
            }
          }
          FUN_016dd1aa(local_170,uVar30,iVar35);
          local_18c = iVar35;
        }
        if (puVar47[0x38] != -0x80000000) {
          local_190 = puVar47[0x3a];
          uVar30 = puVar47[0x39];
          if (local_190 == 0) {
            local_174 = 1;
          }
          else {
            local_174 = thunk_FUN_016d4a50();
            if (local_174 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00600af4(1,local_190);
            }
          }
          FUN_016dd1aa(local_174,uVar30,local_190);
          local_ec = local_190;
        }
        uVar45 = puVar47[10];
        uVar30 = 0;
        if (0xaaaaaaa < uVar45) {
LAB_00f73c28:
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(uVar30,local_e4);
        }
        local_e4 = uVar45 * 0xc;
        if (local_e4 == 0) {
          local_e4 = 4;
          uVar25 = 0;
        }
        else {
          puVar32 = (undefined4 *)puVar47[9];
          iVar7 = thunk_FUN_016d4a50(local_e4);
          if (iVar7 == 0) {
            uVar30 = 4;
            goto LAB_00f73c28;
          }
          if (uVar45 != 0) {
            iVar23 = 0;
            uVar25 = uVar45;
            do {
              bVar53 = uVar45 * -0xc == iVar23;
              if (!bVar53) {
                uVar30 = *puVar32;
                uVar36 = puVar32[1];
                uVar1 = *(undefined1 *)(puVar32 + 2);
                puVar32 = puVar32 + 3;
                puVar42 = (undefined4 *)(iVar7 - iVar23);
                *puVar42 = uVar30;
                iVar23 = iVar23 + -0xc;
                *(undefined1 *)(puVar42 + 2) = uVar1;
                puVar42[1] = uVar36;
                uVar25 = uVar25 - 1;
                bVar53 = uVar25 == 0;
              }
            } while (!bVar53);
          }
          uVar25 = uVar45;
          local_e4 = iVar7;
        }
        uVar30 = 0;
        uVar24 = puVar47[0xd];
        bVar54 = 0x1ffffffe < uVar24;
        bVar53 = uVar24 == 0x1fffffff;
        uVar49 = uVar48;
        if (uVar24 < 0x20000000) {
          uVar49 = uVar24 << 3;
          bVar54 = 0x7ffffffb < uVar49;
          bVar53 = uVar49 == 0x7ffffffc;
        }
        if (bVar54 && !bVar53) {
LAB_00f73c3c:
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(uVar30,local_178);
        }
        uVar36 = puVar47[0xc];
        uVar30 = 0;
        if (uVar49 == 0) {
          local_178 = 4;
          local_198 = 0;
        }
        else {
          local_178 = thunk_FUN_016d4a50(uVar49);
          if (local_178 == 0) {
            uVar30 = 4;
            local_178 = uVar49;
            goto LAB_00f73c3c;
          }
          local_198 = uVar24;
        }
        FUN_016dd1aa(local_178,uVar36,uVar49);
        uVar49 = puVar47[0x10];
        if (0xaaaaaaa < uVar49) {
LAB_00f73c5c:
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(uVar30,local_108);
        }
        local_108 = uVar49 * 0xc;
        if (local_108 == 0) {
          uVar26 = 0;
          local_108 = 4;
        }
        else {
          puVar32 = (undefined4 *)puVar47[0xf];
          iVar7 = thunk_FUN_016d4a50(local_108);
          if (iVar7 == 0) {
            uVar30 = 4;
            goto LAB_00f73c5c;
          }
          if (uVar49 != 0) {
            iVar23 = 0;
            uVar26 = uVar49;
            do {
              bVar53 = uVar49 * -0xc == iVar23;
              if (!bVar53) {
                uVar30 = *puVar32;
                uVar36 = puVar32[1];
                uVar1 = *(undefined1 *)(puVar32 + 2);
                puVar32 = puVar32 + 3;
                puVar42 = (undefined4 *)(iVar7 - iVar23);
                *puVar42 = uVar30;
                iVar23 = iVar23 + -0xc;
                *(undefined1 *)(puVar42 + 2) = uVar1;
                puVar42[1] = uVar36;
                uVar26 = uVar26 - 1;
                bVar53 = uVar26 == 0;
              }
            } while (!bVar53);
          }
          uVar26 = uVar49;
          local_108 = iVar7;
        }
        local_1a4 = -0x80000000;
        local_1a0 = -0x80000000;
        if (puVar47[0x3b] != -0x80000000) {
          local_1b0 = puVar47[0x3d];
          uVar30 = puVar47[0x3c];
          if (local_1b0 == 0) {
            local_1d8 = 1;
          }
          else {
            local_1d8 = thunk_FUN_016d4a50();
            if (local_1d8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00600af4(1,local_1b0);
            }
          }
          FUN_016dd1aa(local_1d8,uVar30,local_1b0);
          local_1a0 = local_1b0;
        }
        if (puVar47[0x3e] != -0x80000000) {
          local_1b4 = puVar47[0x40];
          uVar30 = puVar47[0x3f];
          if (local_1b4 == 0) {
            local_1c0 = 1;
          }
          else {
            local_1c0 = thunk_FUN_016d4a50();
            if (local_1c0 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00600af4(1,local_1b4);
            }
          }
          FUN_016dd1aa(local_1c0,uVar30,local_1b4);
          local_1a4 = local_1b4;
        }
        local_1a8 = -0x80000000;
        uVar8 = local_1b8;
        uVar37 = 0x80000000;
        if (puVar47[0x41] != -0x80000000) {
          uVar8 = puVar47[0x43];
          uVar30 = puVar47[0x42];
          if (uVar8 == 0) {
            local_1dc = 1;
          }
          else {
            local_1dc = thunk_FUN_016d4a50();
            if (local_1dc == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00600af4(1,uVar8);
            }
          }
          FUN_016dd1aa(local_1dc,uVar30,uVar8);
          uVar37 = uVar8;
        }
        uVar30 = *puVar47;
        uVar36 = puVar47[1];
        if (puVar47[0x44] != -0x80000000) {
          local_194 = puVar47[0x46];
          uVar33 = puVar47[0x45];
          if (local_194 == 0) {
            local_1e0 = 1;
          }
          else {
            local_1e0 = thunk_FUN_016d4a50();
            if (local_1e0 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00600af4(1,local_194);
            }
          }
          FUN_016dd1aa(local_1e0,uVar33,local_194);
          local_1a8 = local_194;
        }
        uVar33 = puVar47[0x52];
        uVar38 = puVar47[0x51];
        FUN_00f70734(&local_40,puVar47[0x12],puVar47[0x13]);
        uVar50 = puVar47[0x16];
        uVar9 = 0;
        bVar54 = 0xffffffe < uVar50;
        bVar53 = uVar50 == 0xfffffff;
        uVar34 = uVar8;
        if (uVar50 < 0x10000000) {
          uVar34 = uVar50 << 4;
          bVar54 = 0x7ffffffb < uVar34;
          bVar53 = uVar34 == 0x7ffffffc;
          local_1b8 = uVar8;
        }
        if (bVar54 && !bVar53) {
LAB_00f73c78:
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(uVar9,local_1c4);
        }
        if (uVar34 == 0) {
          local_1c4 = 4;
          uVar8 = 0;
        }
        else {
          iVar7 = puVar47[0x15];
          local_1c4 = thunk_FUN_016d4a50(uVar34,local_1c4);
          if (local_1c4 == 0) {
            uVar9 = 4;
            local_1c4 = uVar34;
            goto LAB_00f73c78;
          }
          uVar8 = uVar50;
          if (uVar50 != 0) {
            uVar39 = 0;
            do {
              if (uVar34 == 0) break;
              puVar32 = (undefined4 *)(iVar7 + uVar39 * 0x10);
              uVar34 = uVar34 - 0x10;
              uVar27 = puVar32[1];
              uVar43 = puVar32[2];
              uVar9 = puVar32[3];
              puVar42 = (undefined4 *)(local_1c4 + uVar39 * 0x10);
              *puVar42 = *puVar32;
              uVar39 = uVar39 + 1;
              puVar42[1] = uVar27;
              puVar42[2] = uVar43;
              puVar42[3] = uVar9;
            } while (uVar50 != uVar39);
          }
        }
        uVar43 = uStack_38;
        uVar27 = uStack_3c;
        uVar9 = local_40;
        FUN_00f7307c(&local_70,puVar47 + 0x17);
        FUN_00f724d0(&local_60,puVar47[0x1b],puVar47[0x1c]);
        uVar10 = puVar47[2];
        uVar11 = puVar47[3];
        uVar12 = puVar47[0x55];
        uVar34 = puVar47[4];
        uVar13 = puVar47[0x56];
        uVar14 = puVar47[0x57];
        uVar51 = puVar47[0x53];
        uVar44 = puVar47[0x54];
        uVar15 = puVar47[0x58];
        uVar55 = CONCAT44(extraout_r1,uVar15);
        if (uVar34 == 5) {
          local_50 = 5;
          uVar55 = local_4c;
        }
        else {
          if (3 < uVar34) {
            uVar55 = (**(code **)(puVar47[6] + 0x1c))(puVar47[5]);
          }
          local_50 = uVar34;
        }
        uVar16 = puVar47[0x59];
        uVar1 = *(undefined1 *)(puVar47 + 0x5a);
        local_4c = uVar55;
        FUN_00f71d34(&local_40,puVar47 + 0x1d);
        pcVar52 = pcVar52 + -1;
        puVar47 = puVar47 + 0x5b;
        puVar32 = (undefined4 *)(local_dc + uVar48 * 0x16c);
        *puVar32 = uVar30;
        puVar32[9] = local_e4;
        puVar32[0xb] = local_198;
        puVar32[0xc] = local_178;
        puVar32[0xd] = uVar24;
        puVar32[0xe] = uVar26;
        puVar32[0xf] = local_108;
        puVar32[0x10] = uVar49;
        puVar32[1] = uVar36;
        puVar32[2] = uVar10;
        puVar32[4] = local_50;
        puVar32[3] = uVar11;
        puVar32[7] = uVar6;
        puVar32[10] = uVar45;
        *(undefined8 *)(puVar32 + 5) = local_4c;
        puVar32[8] = uVar25;
        puVar32[0x11] = uVar9;
        puVar32[0x12] = uVar27;
        puVar32[0x13] = uVar43;
        puVar32[0x14] = uVar8;
        puVar32[0x15] = local_1c4;
        puVar32[0x16] = uVar50;
        puVar32[0x17] = local_70;
        puVar32[0x18] = uStack_6c;
        puVar32[0x19] = uStack_68;
        puVar32[0x1a] = local_60;
        puVar32[0x1b] = uStack_5c;
        puVar32[0x1c] = uStack_58;
        puVar32[0x1d] = local_40;
        puVar32[0x1e] = uStack_3c;
        puVar32[0x1f] = uStack_38;
        puVar32[0x20] = uStack_34;
        puVar32[0x21] = uStack_30;
        puVar32[0x22] = uStack_2c;
        puVar32[0x53] = uVar51;
        puVar32[0x54] = uVar44;
        puVar32[0x55] = uVar12;
        puVar32[0x56] = uVar13;
        puVar32[0x57] = uVar14;
        puVar32[0x58] = uVar15;
        puVar32[0x59] = uVar16;
        puVar32[0x4b] = uVar28;
        puVar32[0x4c] = uVar18;
        puVar32[0x4d] = uVar19;
        puVar32[0x4e] = uVar20;
        puVar32[0x4f] = uVar21;
        puVar32[0x50] = uVar22;
        puVar32[0x51] = uVar38;
        puVar32[0x52] = uVar33;
        puVar32[0x43] = local_1b8;
        puVar32[0x44] = local_1a8;
        puVar32[0x45] = local_1e0;
        puVar32[0x46] = local_194;
        puVar32[0x47] = uVar2;
        puVar32[0x48] = uVar3;
        puVar32[0x49] = uVar4;
        puVar32[0x4a] = uVar5;
        puVar32[0x3b] = local_1a0;
        puVar32[0x3c] = local_1d8;
        puVar32[0x3d] = local_1b0;
        puVar32[0x3e] = local_1a4;
        puVar32[0x3f] = local_1c0;
        puVar32[0x40] = local_1b4;
        puVar32[0x41] = uVar37;
        puVar32[0x42] = local_1dc;
        puVar32[0x33] = local_16c;
        puVar32[0x34] = local_188;
        puVar32[0x35] = iVar35;
        puVar32[0x36] = local_170;
        puVar32[0x37] = local_18c;
        puVar32[0x38] = local_ec;
        puVar32[0x39] = local_174;
        puVar32[0x3a] = local_190;
        puVar32[0x2b] = local_128;
        puVar32[0x2c] = iVar41;
        puVar32[0x2d] = local_164;
        puVar32[0x2e] = local_180;
        puVar32[0x2f] = iVar31;
        puVar32[0x30] = local_168;
        puVar32[0x31] = local_184;
        puVar32[0x32] = local_e8;
        puVar32[0x23] = local_f0;
        puVar32[0x24] = local_158;
        puVar32[0x25] = local_110;
        puVar32[0x26] = iVar17;
        *(undefined1 *)(puVar32 + 0x5a) = uVar1;
        puVar32[0x27] = local_15c;
        puVar32[0x28] = local_17c;
        puVar32[0x29] = iVar29;
        puVar32[0x2a] = local_160;
        uVar48 = uVar48 + 1;
        local_40 = uVar9;
        uStack_3c = uVar27;
        uStack_38 = uVar43;
        uStack_34 = uVar8;
        uStack_30 = local_1c4;
        uStack_2c = uVar50;
      } while (pcVar52 != (char *)0x0);
    }
  }
  *param_1 = local_e0;
  param_1[1] = local_dc;
  param_1[2] = pcVar46;
  return;
}

