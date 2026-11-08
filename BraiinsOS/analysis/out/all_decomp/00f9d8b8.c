// FUN_00f9d8b8 @ 00f9d8b8 size=3780 calls_out=18 calls_in=3
// strings: 

/* WARNING: Type propagation algorithm not settling */

void FUN_00f9d8b8(undefined4 *param_1,int *param_2,undefined4 param_3,int param_4)

{
  byte bVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined4 ****ppppuVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  uint uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 extraout_r1;
  undefined4 *puVar20;
  undefined *puVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  int iVar26;
  undefined4 uVar27;
  undefined4 *****pppppuVar28;
  undefined4 uVar29;
  uint ****ppppuVar30;
  undefined4 *puVar31;
  undefined4 uVar32;
  uint uVar33;
  int iVar34;
  undefined4 uVar35;
  uint ****ppppuVar36;
  undefined4 uVar37;
  int iVar38;
  undefined4 uVar39;
  uint uVar40;
  uint ****ppppuVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  bool bVar44;
  bool bVar45;
  uint local_2d8;
  int local_2d4;
  int local_2d0;
  int local_2cc;
  int local_2c8;
  uint local_298;
  int local_294;
  int local_290;
  int local_28c;
  int local_288;
  int local_284;
  int local_280;
  int local_27c;
  int local_278;
  int local_270;
  int local_26c;
  int local_23c;
  int local_238;
  int local_228;
  int local_224;
  int local_220;
  int local_21c;
  uint *****local_218;
  undefined4 *local_214;
  undefined4 *****local_210;
  undefined4 *local_20c;
  uint ****local_208;
  undefined8 local_204;
  undefined4 local_1fc;
  undefined4 local_1f8;
  undefined4 local_1f4;
  undefined4 local_1f0;
  uint local_1ec;
  int local_1e8;
  uint local_1e4;
  undefined4 local_1e0;
  undefined4 local_1dc;
  undefined4 local_1d8;
  uint ****ppppuStack_1d4;
  undefined4 *puStack_1d0;
  undefined4 uStack_1cc;
  undefined4 *****pppppuStack_1c8;
  undefined4 *puStack_1c4;
  undefined4 uStack_1c0;
  undefined4 ****local_1bc;
  uint ****local_1b8;
  int local_1b4;
  undefined4 **local_1b0;
  undefined4 local_1ac;
  undefined4 local_1a8;
  uint local_1a4;
  int local_1a0;
  uint local_19c;
  uint ****local_198;
  undefined4 *local_194;
  undefined4 local_190;
  int local_18c;
  int local_188;
  int local_184;
  int local_180;
  int local_17c;
  int local_178;
  int local_174;
  int local_170;
  int local_16c;
  int local_168;
  int local_164;
  int local_160;
  int local_15c;
  int local_158;
  int local_154;
  int local_150;
  int local_14c;
  int local_148;
  int local_144;
  int local_140;
  int local_13c;
  int local_138;
  int local_134;
  int local_130;
  int local_12c;
  int local_128;
  int local_124;
  int local_120;
  int local_11c;
  int local_118;
  int local_114;
  int local_110;
  int local_10c;
  int local_108;
  int local_104;
  int local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined1 local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  uint ****local_88;
  undefined4 *local_84;
  undefined4 local_80;
  undefined4 *****pppppuStack_7c;
  undefined4 *puStack_78;
  undefined4 uStack_74;
  undefined4 ****local_70;
  uint ****local_6c;
  int local_68;
  undefined4 ***local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 *****local_50;
  undefined8 local_4c;
  undefined4 *****local_40;
  undefined4 *local_3c;
  undefined4 local_38;
  uint ****local_30;
  undefined4 *local_2c;
  undefined4 uStack_28;
  
  puVar31 = (undefined4 *)*param_1;
  if (puVar31[0x3b] == -0x80000000) {
    if (param_4 == 0) {
      if (puVar31[0x19] != 0) {
        iVar10 = puVar31[0x19] * 0x16c;
        puVar20 = (undefined4 *)(puVar31[0x18] + 0x11c);
        do {
          if (((puVar20[1] != 4) || (*(int *)*puVar20 != 0x706c6568)) &&
             (((puVar20[10] | puVar20[0xb]) & 0x800000) == 0)) {
            uVar13 = puVar31[0x51] | puVar31[0x52];
            if ((uVar13 & 0x8000) != 0) {
              if (((uVar13 & 0x200) == 0) || ((uVar13 & 0x2000) != 0)) {
                FUN_00f9eb7c(param_1,param_2,4,0,1);
                FUN_00f9a3e0(param_2);
                local_214 = &DAT_0157d360;
                local_218 = (uint *****)&DAT_0188097c;
                FUN_00fa948c(param_2,&DAT_01880954,&DAT_00590e71,&local_218);
              }
              uVar37 = puVar31[7];
              iVar10 = -0x80000000;
              uVar25 = puVar31[0x47];
              uVar32 = puVar31[0x48];
              uVar11 = puVar31[0x49];
              uVar12 = puVar31[0x4a];
              if (puVar31[0x23] == -0x80000000) {
                local_224 = -0x80000000;
              }
              else {
                local_224 = puVar31[0x25];
                uVar14 = puVar31[0x24];
                if (local_224 == 0) {
                  local_278 = 1;
                }
                else {
                  local_278 = thunk_FUN_016d4a50();
                  if (local_278 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_00600af4(1,local_224);
                  }
                }
                FUN_016dd1aa(local_278,uVar14,local_224);
              }
              if (puVar31[0x26] != -0x80000000) {
                iVar10 = puVar31[0x28];
                uVar14 = puVar31[0x27];
                if (iVar10 == 0) {
                  local_27c = 1;
                }
                else {
                  local_27c = thunk_FUN_016d4a50(iVar10);
                  if (local_27c == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_00600af4(1,iVar10);
                  }
                }
                FUN_016dd1aa(local_27c,uVar14,iVar10);
              }
              uVar14 = puVar31[0x4b];
              iVar26 = -0x80000000;
              uVar15 = puVar31[0x4c];
              uVar16 = puVar31[0x4d];
              uVar17 = puVar31[0x4e];
              uVar18 = puVar31[0x4f];
              uVar19 = puVar31[0x50];
              if (puVar31[0x29] == -0x80000000) {
                iVar34 = -0x80000000;
              }
              else {
                iVar34 = puVar31[0x2b];
                uVar5 = puVar31[0x2a];
                if (iVar34 == 0) {
                  local_280 = 1;
                }
                else {
                  local_280 = thunk_FUN_016d4a50(iVar34);
                  if (local_280 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_00600af4(1,iVar34);
                  }
                }
                FUN_016dd1aa(local_280,uVar5,iVar34);
              }
              if (puVar31[0x2c] != -0x80000000) {
                iVar26 = puVar31[0x2e];
                uVar5 = puVar31[0x2d];
                if (iVar26 == 0) {
                  local_284 = 1;
                }
                else {
                  local_284 = thunk_FUN_016d4a50(iVar26);
                  if (local_284 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_00600af4(1,iVar26);
                  }
                }
                FUN_016dd1aa(local_284,uVar5,iVar26);
              }
              local_21c = -0x80000000;
              if (puVar31[0x2f] == -0x80000000) {
                iVar38 = -0x80000000;
              }
              else {
                iVar38 = puVar31[0x31];
                uVar5 = puVar31[0x30];
                if (iVar38 == 0) {
                  local_288 = 1;
                }
                else {
                  local_288 = thunk_FUN_016d4a50(iVar38);
                  if (local_288 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_00600af4(1,iVar38);
                  }
                }
                FUN_016dd1aa(local_288,uVar5,iVar38);
              }
              if (puVar31[0x32] != -0x80000000) {
                local_21c = puVar31[0x34];
                uVar5 = puVar31[0x33];
                if (local_21c == 0) {
                  local_28c = 1;
                }
                else {
                  local_28c = thunk_FUN_016d4a50();
                  if (local_28c == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_00600af4(1,local_21c);
                  }
                }
                FUN_016dd1aa(local_28c,uVar5,local_21c);
              }
              local_220 = -0x80000000;
              if (puVar31[0x35] == -0x80000000) {
                local_228 = -0x80000000;
              }
              else {
                local_228 = puVar31[0x37];
                uVar5 = puVar31[0x36];
                if (local_228 == 0) {
                  local_290 = 1;
                }
                else {
                  local_290 = thunk_FUN_016d4a50();
                  if (local_290 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_00600af4(1,local_228);
                  }
                }
                FUN_016dd1aa(local_290,uVar5,local_228);
              }
              if (puVar31[0x38] != -0x80000000) {
                local_220 = puVar31[0x3a];
                uVar5 = puVar31[0x39];
                if (local_220 == 0) {
                  local_294 = 1;
                }
                else {
                  local_294 = thunk_FUN_016d4a50();
                  if (local_294 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_00600af4(1,local_220);
                  }
                }
                FUN_016dd1aa(local_294,uVar5,local_220);
              }
              FUN_00f72ee8(&local_a8,puVar31[9],puVar31[10]);
              uVar33 = puVar31[0xd];
              uVar5 = 0;
              bVar45 = 0x1ffffffe < uVar33;
              bVar44 = uVar33 == 0x1fffffff;
              uVar13 = uVar33 * 8;
              if (uVar33 < 0x20000000) {
                bVar45 = 0x7ffffffb < uVar13;
                bVar44 = uVar13 == 0x7ffffffc;
              }
              if (bVar45 && !bVar44) {
LAB_00f9e070:
                    /* WARNING: Subroutine does not return */
                FUN_00600af4(uVar5,uVar13);
              }
              uVar5 = puVar31[0xc];
              if (uVar13 == 0) {
                iVar6 = 4;
                local_298 = 0;
              }
              else {
                iVar6 = thunk_FUN_016d4a50(uVar13);
                local_298 = uVar33;
                if (iVar6 == 0) {
                  uVar5 = 4;
                  goto LAB_00f9e070;
                }
              }
              FUN_016dd1aa(iVar6,uVar5,uVar13);
              FUN_00f72ee8(&local_98,puVar31[0xf],puVar31[0x10]);
              local_238 = -0x80000000;
              if (puVar31[0x3b] == -0x80000000) {
                local_26c = -0x80000000;
              }
              else {
                local_26c = puVar31[0x3d];
                uVar5 = puVar31[0x3c];
                if (local_26c == 0) {
                  local_2c8 = 1;
                }
                else {
                  local_2c8 = thunk_FUN_016d4a50();
                  if (local_2c8 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_00600af4(1,local_26c);
                  }
                }
                FUN_016dd1aa(local_2c8,uVar5,local_26c);
              }
              if (puVar31[0x3e] != -0x80000000) {
                local_238 = puVar31[0x40];
                uVar5 = puVar31[0x3f];
                if (local_238 == 0) {
                  local_2cc = 1;
                }
                else {
                  local_2cc = thunk_FUN_016d4a50();
                  if (local_2cc == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_00600af4(1,local_238);
                  }
                }
                FUN_016dd1aa(local_2cc,uVar5,local_238);
              }
              local_23c = -0x80000000;
              if (puVar31[0x41] == -0x80000000) {
                local_270 = -0x80000000;
              }
              else {
                local_270 = puVar31[0x43];
                uVar5 = puVar31[0x42];
                if (local_270 == 0) {
                  local_2d0 = 1;
                }
                else {
                  local_2d0 = thunk_FUN_016d4a50();
                  if (local_2d0 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_00600af4(1,local_270);
                  }
                }
                FUN_016dd1aa(local_2d0,uVar5,local_270);
              }
              pppppuVar28 = (undefined4 *****)*puVar31;
              uVar5 = puVar31[1];
              if (puVar31[0x44] != -0x80000000) {
                local_23c = puVar31[0x46];
                uVar7 = puVar31[0x45];
                if (local_23c == 0) {
                  local_2d4 = 1;
                }
                else {
                  local_2d4 = thunk_FUN_016d4a50();
                  if (local_2d4 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_00600af4(1,local_23c);
                  }
                }
                FUN_016dd1aa(local_2d4,uVar7,local_23c);
              }
              uVar39 = puVar31[0x51];
              uVar27 = puVar31[0x52];
              FUN_00f70734(&local_30,puVar31[0x12],puVar31[0x13]);
              FUN_00f72fb4(&local_218,puVar31[0x15],puVar31[0x16]);
              local_88 = local_30;
              local_84 = local_2c;
              local_80 = uStack_28;
              pppppuStack_7c = local_218;
              puStack_78 = local_214;
              uStack_74 = local_210;
              FUN_00f7307c(&local_70,puVar31 + 0x17);
              FUN_00f724d0(&local_60,puVar31[0x1b],puVar31[0x1c]);
              uVar3 = CONCAT44(local_4c._4_4_,(undefined4)local_4c);
              local_50 = (undefined4 *****)puVar31[4];
              uVar42 = puVar31[2];
              uVar43 = puVar31[3];
              uVar24 = puVar31[0x53];
              uVar23 = puVar31[0x54];
              uVar29 = puVar31[0x55];
              uVar22 = puVar31[0x56];
              uVar7 = puVar31[0x57];
              uVar8 = puVar31[0x58];
              local_4c = CONCAT44(extraout_r1,uVar8);
              if (local_50 == (undefined4 *****)0x5) {
                local_50 = (undefined4 *****)0x5;
                local_4c = uVar3;
              }
              else if ((uint ****)0x3 < local_50) {
                local_4c = (**(code **)(puVar31[6] + 0x1c))(puVar31[5]);
              }
              uVar40 = puVar31[0x1f];
              uVar9 = 0;
              bVar45 = 0xffffffe < uVar40;
              bVar44 = uVar40 == 0xfffffff;
              uVar13 = uVar40 * 0x10;
              if (uVar40 < 0x10000000) {
                bVar45 = 0x7ffffffb < uVar13;
                bVar44 = uVar13 == 0x7ffffffc;
              }
              if (!(bVar45 && !bVar44)) {
                uVar35 = puVar31[0x1e];
                uVar9 = puVar31[0x59];
                uVar2 = *(undefined1 *)(puVar31 + 0x5a);
                if (uVar13 == 0) {
                  local_1a0 = 4;
                  local_2d8 = 0;
                }
                else {
                  local_1a0 = thunk_FUN_016d4a50(uVar13);
                  local_2d8 = uVar40;
                  if (local_1a0 == 0) {
                    uVar9 = 4;
                    goto LAB_00f9e374;
                  }
                }
                FUN_016dd1aa(local_1a0,uVar35,uVar13);
                FUN_00f723b4(&local_30,puVar31[0x21],puVar31[0x22]);
                local_184 = local_224;
                local_18c = local_224;
                local_40 = (undefined4 *****)local_30;
                local_3c = local_2c;
                local_38 = uStack_28;
                local_17c = local_27c;
                local_188 = local_278;
                local_130 = local_220;
                local_138 = local_220;
                local_13c = local_228;
                local_144 = local_228;
                local_148 = local_21c;
                local_150 = local_21c;
                local_134 = local_294;
                local_140 = local_290;
                local_10c = local_270;
                local_114 = local_270;
                local_14c = local_28c;
                local_118 = local_238;
                local_120 = local_238;
                local_158 = local_288;
                local_128 = local_2c8;
                local_164 = local_284;
                local_170 = local_280;
                local_1ec = local_298;
                local_110 = local_2d0;
                local_1dc = local_94;
                local_100 = local_23c;
                local_108 = local_23c;
                local_11c = local_2cc;
                local_104 = local_2d4;
                local_1e0 = local_98;
                local_124 = local_26c;
                local_12c = local_26c;
                local_1f0 = local_a0;
                local_1f4 = local_a4;
                local_1f8 = local_a8;
                local_1d8 = local_90;
                ppppuStack_1d4 = local_88;
                puStack_1d0 = local_84;
                uStack_1cc = local_80;
                pppppuStack_1c8 = pppppuStack_7c;
                puStack_1c4 = puStack_78;
                uStack_1c0 = uStack_74;
                local_1ac = local_5c;
                local_1b4 = local_68;
                local_1b8 = local_6c;
                local_1bc = local_70;
                local_1b0 = local_60;
                local_1a8 = local_58;
                local_1a4 = local_2d8;
                local_208 = (uint ****)local_50;
                local_194 = local_2c;
                local_190 = uStack_28;
                local_198 = local_30;
                local_218 = pppppuVar28;
                local_214 = (undefined4 *)uVar5;
                local_210 = (undefined4 *****)uVar42;
                local_20c = (undefined4 *)uVar43;
                local_1fc = uVar37;
                local_1e8 = iVar6;
                local_1e4 = uVar33;
                local_19c = uVar40;
                local_180 = iVar10;
                local_178 = iVar10;
                local_174 = iVar34;
                local_16c = iVar34;
                local_168 = iVar26;
                local_160 = iVar26;
                local_15c = iVar38;
                local_154 = iVar38;
                local_fc = uVar25;
                local_f8 = uVar32;
                local_f4 = uVar11;
                local_f0 = uVar12;
                local_ec = uVar14;
                local_e8 = uVar15;
                local_e4 = uVar16;
                local_e0 = uVar17;
                local_dc = uVar18;
                local_d8 = uVar19;
                local_d4 = uVar39;
                local_d0 = uVar27;
                local_cc = uVar24;
                local_c8 = uVar23;
                local_c4 = uVar29;
                local_c0 = uVar22;
                local_bc = uVar7;
                local_b8 = uVar8;
                local_b4 = uVar9;
                local_b0 = uVar2;
                local_204 = local_4c;
                FUN_00f8df5c();
                FUN_00f8df9c(&local_218);
                if (local_1b4 != 0) {
                  ppppuVar30 = local_1b8 + local_1b4 * 0x5b;
                  iVar10 = 0;
                  ppppuVar41 = local_1b8;
                  do {
                    bVar1 = *(byte *)((int)ppppuVar41 + 0x146);
                    ppppuVar36 = ppppuVar41 + 0x5b;
                    bVar44 = (bVar1 & 0x80) == 0;
                    if (bVar44) {
                      bVar1 = *(byte *)((int)ppppuVar41 + 0x14a);
                    }
                    if (bVar44 && (bVar1 & 0x80) == 0) {
                      if (iVar10 != 0) {
                        FUN_00f9a3e0(param_2);
                        local_84 = &DAT_0157d360;
                        local_88 = (uint ****)&DAT_0188097c;
                        FUN_00fa948c(param_2,&DAT_01880954,&DAT_00590e71,&local_88);
                      }
                      local_84 = (undefined4 *)FUN_00f9872c(ppppuVar41 + 0x1d);
                      local_80 = 0;
                      if (local_84 == (undefined4 *)0x0) {
                        local_84 = &DAT_0035dc52;
                      }
                      local_88 = ppppuVar41;
                      FUN_00f9d8b8(&local_88,param_2,4,0);
                      iVar10 = iVar10 + 1;
                    }
                    ppppuVar41 = ppppuVar36;
                  } while (ppppuVar36 != ppppuVar30);
                }
                FUN_00f8006c(&local_218);
                return;
              }
LAB_00f9e374:
                    /* WARNING: Subroutine does not return */
              FUN_00600af4(uVar9,uVar13);
            }
            break;
          }
          puVar20 = puVar20 + 0x5b;
          iVar10 = iVar10 + -0x16c;
        } while (iVar10 != 0);
      }
      FUN_00f9eb7c(param_1,param_2,4,0,1);
      if (puVar31[0x19] != 0) {
        iVar10 = puVar31[0x19] * 0x16c;
        puVar20 = (undefined4 *)(puVar31[0x18] + 0x11c);
        do {
          if (((puVar20[1] != 4) || (*(int *)*puVar20 != 0x706c6568)) &&
             (((puVar20[10] | puVar20[0xb]) & 0x800000) == 0)) goto LAB_00f9db54;
          puVar20 = puVar20 + 0x5b;
          iVar10 = iVar10 + -0x16c;
        } while (iVar10 != 0);
      }
      if (((*(byte *)((int)puVar31 + 0x145) & 4) != 0) ||
         ((*(byte *)((int)puVar31 + 0x149) & 4) != 0)) {
LAB_00f9db54:
        local_70 = &local_60;
        local_60 = (undefined4 ***)(param_1[1] + 0x2a);
        local_40 = (undefined4 *****)(param_1[1] + 0x38);
        local_30 = (uint ****)puVar31[0x55];
        local_50 = &local_40;
        if (local_30 == (undefined4 ****)0x0) {
          local_2c = (undefined4 *)0x7;
          local_30 = (uint ****)&DAT_0035dbe5;
        }
        else {
          local_2c = (undefined4 *)puVar31[0x56];
        }
        uVar13 = puVar31[0x51];
        bVar44 = false;
        ppppuVar4 = local_30;
        if ((uVar13 & 0x1000) == 0) {
          ppppuVar4 = (undefined4 ****)puVar31[0x52];
          bVar44 = ((uint)ppppuVar4 & 0x3000) == 0 && (uVar13 & 0x2000) == 0;
        }
        if (bVar44) {
          if ((((uint)ppppuVar4 | uVar13) & 0x200) == 0) {
            puVar21 = &DAT_0035dc43;
          }
          else {
            puVar21 = &DAT_0035dc35;
          }
          local_210 = &local_30;
          local_218 = (uint *****)&local_50;
        }
        else {
          FUN_00f9a3e0(param_2);
          local_214 = &DAT_0157d360;
          local_218 = (uint *****)&DAT_0188097c;
          FUN_00fa948c(param_2,&DAT_01880954,&DAT_00590e71,&local_218);
          bVar1 = *(byte *)((int)puVar31 + 0x145);
          bVar44 = (bVar1 & 0x20) == 0;
          if (bVar44) {
            bVar1 = *(byte *)((int)puVar31 + 0x149);
          }
          if (bVar44 && (bVar1 & 0x20) == 0) {
            FUN_00f9eb7c(param_1,param_2,4,0,0);
          }
          else {
            if (puVar31[0x3e] == -0x80000000) {
              if (puVar31[0x26] == -0x80000000) {
                local_88 = (uint ****)puVar31[0x47];
                local_84 = (undefined4 *)puVar31[0x48];
              }
              else {
                local_88 = (uint ****)puVar31[0x27];
                local_84 = (undefined4 *)puVar31[0x28];
              }
            }
            else {
              local_88 = (uint ****)puVar31[0x3f];
              local_84 = (undefined4 *)puVar31[0x40];
            }
            local_210 = &local_88;
            local_218 = &local_70;
            local_214 = (undefined4 *)&DAT_00fa02fc;
            local_20c = &DAT_0157d360;
            FUN_00fa948c(param_2,&DAT_01880954,&DAT_0035dc14,&local_218);
          }
          local_210 = &local_30;
          local_218 = (uint *****)&local_50;
          puVar21 = &DAT_0035dc35;
        }
        goto LAB_00f9dcf8;
      }
    }
    else {
      local_40 = &local_30;
      local_30 = (uint ****)(param_1[1] + 0x38);
      FUN_00f9eb7c(param_1,param_2,param_3,param_4,1);
      bVar1 = *(byte *)((int)puVar31 + 0x145);
      bVar44 = (bVar1 & 2) == 0;
      if (bVar44) {
        bVar1 = *(byte *)((int)puVar31 + 0x149);
      }
      if (!bVar44 || (bVar1 & 2) != 0) {
        local_88 = (uint ****)puVar31[0x55];
        if (local_88 == (undefined4 ****)0x0) {
          local_84 = (undefined4 *)0x7;
          local_88 = (uint ****)&DAT_0035dbe5;
        }
        else {
          local_84 = (undefined4 *)puVar31[0x56];
        }
        local_210 = &local_88;
        local_218 = (uint *****)&local_40;
        puVar21 = &DAT_0035dc35;
LAB_00f9dcf8:
        local_20c = &DAT_0157d360;
        local_214 = (undefined4 *)&DAT_00fa02fc;
        FUN_00fa948c(param_2,&DAT_01880954,puVar21,&local_218);
        return;
      }
    }
  }
  else {
    iVar10 = param_2[2];
    uVar11 = puVar31[0x3c];
    uVar13 = puVar31[0x3d];
    if ((uint)(*param_2 - iVar10) < uVar13) {
      FUN_00f991dc(param_2,iVar10,uVar13,1,1);
      iVar10 = param_2[2];
    }
    FUN_016dd1aa(param_2[1] + iVar10,uVar11,uVar13);
    param_2[2] = iVar10 + uVar13;
  }
  return;
}

