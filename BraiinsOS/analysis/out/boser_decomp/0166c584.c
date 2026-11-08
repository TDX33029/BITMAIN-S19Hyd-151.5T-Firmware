// FUN_0166c584 @ 0166c584 size=2572 calls_out=14 calls_in=5
// strings: $schema | https://json-schema.org/schema | https://json-schema.org/draft-07/schema | https://json-schema.org/draft-06/schema | https://json-schema.org/draft-04/schema | https://json-schema.org/draft/2020-12/schema

void FUN_0166c584(undefined4 *param_1,int param_2,undefined4 param_3,char *param_4)

{
  byte bVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  undefined1 uVar5;
  uint uVar6;
  char *pcVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  undefined4 uVar13;
  uint **ppuVar14;
  uint uVar15;
  undefined4 uVar16;
  uint uVar17;
  int iVar18;
  undefined4 uVar19;
  int iVar20;
  uint *puVar21;
  bool bVar22;
  undefined8 uVar23;
  uint local_25c;
  int local_248;
  int local_230;
  undefined4 local_22c;
  undefined4 uStack_228;
  int iStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined4 local_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 local_1f8;
  undefined4 local_1f4;
  int local_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 local_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 local_1d0;
  int local_1cc;
  uint *local_1c8;
  uint *local_1c4;
  uint *local_1c0;
  uint *local_1bc;
  uint *local_1b8;
  uint *puStack_1b4;
  uint *local_1b0;
  uint *puStack_1ac;
  uint *puStack_1a8;
  uint *local_1a4;
  uint *local_1a0;
  uint *puStack_19c;
  uint *puStack_198;
  uint *puStack_194;
  uint *local_190 [12];
  undefined1 local_160;
  uint *apuStack_158 [12];
  undefined1 local_128;
  uint *local_120;
  uint local_11c;
  int local_118;
  int local_114;
  undefined1 auStack_110 [44];
  uint local_e4 [3];
  undefined4 local_d8;
  uint local_d4;
  undefined4 local_d0;
  int local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  uint *local_c0;
  uint *puStack_bc;
  uint *puStack_b8;
  uint *local_b4;
  uint *puStack_b0;
  uint *puStack_ac;
  uint *puStack_a8;
  int local_60;
  uint *local_5c;
  uint *local_58;
  uint *local_54;
  uint *local_50;
  uint *puStack_4c;
  uint *puStack_48;
  uint *local_44;
  uint *puStack_40;
  uint *puStack_3c;
  uint *puStack_38;
  uint *local_34;
  uint *puStack_30;
  uint *puStack_2c;
  
  uVar6 = FUN_016731b0(param_3,param_4);
  uVar6 = uVar6 & 0xff;
  if (uVar6 != 5) {
    if (uVar6 < 3) {
      FUN_01672b68(param_1);
      return;
    }
    if (uVar6 - 4 < 2) {
      FUN_0153c0a8(param_1);
      uVar5 = 0xff;
    }
    else {
      FUN_0153c0a8(param_1);
      uVar5 = 0x9b;
    }
    *(undefined1 *)(param_1 + 0xc) = uVar5;
    return;
  }
  if (((*param_4 != '\x05') ||
      (pcVar7 = (char *)FUN_0196b3a8(*(undefined4 *)(param_4 + 4),*(undefined4 *)(param_4 + 8),
                                     "$schema",7), pcVar7 == (char *)0x0)) || (*pcVar7 != '\x03'))
  goto LAB_0166d004;
  FUN_0166fa70(&local_230,*(undefined4 *)(pcVar7 + 8),*(undefined4 *)(pcVar7 + 0xc));
  if (local_230 == -0x7ffffff6) {
    local_1f8 = local_22c;
    local_1f4 = uStack_228;
    local_1f0 = iStack_224;
    uStack_1ec = uStack_220;
    uStack_1e8 = uStack_21c;
    local_1e4 = local_218;
    uStack_1e0 = uStack_214;
    uStack_1dc = uStack_210;
    uStack_1d8 = uStack_20c;
    uStack_1d4 = uStack_208;
    FUN_01343738();
    iVar20 = local_1f0;
    uVar13 = local_1f4;
    if (*(int *)(param_2 + 0x3c) != 0) {
      uVar8 = FUN_01676700(param_2 + 0x40,local_1f4,local_1f0);
      uVar6 = uVar8 >> 0x19;
      iVar18 = *(int *)(param_2 + 0x30);
      uVar17 = *(uint *)(param_2 + 0x34);
      iVar12 = 0;
      do {
        uVar8 = uVar17 & uVar8;
        uVar15 = *(uint *)(iVar18 + uVar8);
        uVar9 = uVar15 ^ uVar6 * 0x1010101;
        for (uVar9 = ~uVar9 & 0x80808080 & uVar9 + 0xfefefeff; uVar9 != 0; uVar9 = uVar9 - 1 & uVar9
            ) {
          uVar10 = uVar8 + ((uint)LZCOUNT(uVar9 << 0x18 | (uVar9 >> 8 & 0xff) << 0x10 |
                                          (uVar9 >> 0x10 & 0xff) << 8 | uVar9 >> 0x18) >> 3) &
                   uVar17;
          iVar11 = *(int *)(iVar18 + -0xc + uVar10 * -0xc);
          if ((iVar20 == *(int *)(iVar11 + 0x10)) &&
             (iVar11 = thunk_FUN_01bed842(uVar13,*(undefined4 *)(iVar11 + 0xc),iVar20), iVar11 == 0)
             ) {
            pcVar7 = *(char **)(iVar18 + uVar10 * -0xc + -8);
            if (*pcVar7 == '\x05') {
              uVar13 = *(undefined4 *)(pcVar7 + 8);
              uVar16 = *(undefined4 *)(pcVar7 + 4);
              pcVar7 = (char *)FUN_0196b3a8(uVar16,uVar13,"$id",3);
              if ((pcVar7 != (char *)0x0) && (*pcVar7 == '\x03')) {
                uVar19 = *(undefined4 *)(pcVar7 + 8);
                iVar20 = *(int *)(pcVar7 + 0xc);
                if (iVar20 == 0x2c) {
                  iVar20 = thunk_FUN_01bed842(uVar19,"https://json-schema.org/draft/2020-12/schema",
                                              0x2c);
                  if (iVar20 == 0) {
LAB_0166cefc:
                    ppuVar14 = local_190;
                    FUN_0153c0a8(ppuVar14);
                    local_160 = 0xff;
                    goto LAB_0166cf38;
                  }
                  iVar20 = thunk_FUN_01bed842(uVar19,
                                              "https://json-schema.org/draft/2019-09/schemahttps://json-schema.org/draft/2019-09/meta/applicatorhttps://json-schema.org/draft/2019-09/meta/contenthttps://json-schema.org/draft/2019-09/meta/corehttps://json-schema.org/draft/2019-09/meta/formathttps://json-schema.org/draft/2019-09/meta/meta-datahttps://json-schema.org/draft/2019-09/meta/validation"
                                              ,0x2c);
                  if (iVar20 == 0) {
                    ppuVar14 = apuStack_158;
                    FUN_0153c0a8(ppuVar14);
                    local_128 = 0x9b;
                    goto LAB_0166cf38;
                  }
                }
                else if (iVar20 == 0x27) {
                  iVar20 = thunk_FUN_01bed842(uVar19,"https://json-schema.org/draft-07/schema",0x27)
                  ;
                  if (((iVar20 == 0) ||
                      (iVar20 = thunk_FUN_01bed842(uVar19,"https://json-schema.org/draft-06/schema",
                                                   0x27), iVar20 == 0)) ||
                     (iVar20 = thunk_FUN_01bed842(uVar19,"https://json-schema.org/draft-04/schema",
                                                  0x27), iVar20 == 0)) goto LAB_0166cea0;
                }
                else if ((iVar20 == 0x1e) &&
                        (iVar20 = thunk_FUN_01bed842(uVar19,"https://json-schema.org/schema",0x1e),
                        iVar20 == 0)) goto LAB_0166cefc;
                pcVar7 = (char *)FUN_0196b3a8(uVar16,uVar13,"$vocabulary",0xb);
                if ((pcVar7 != (char *)0x0) && (*pcVar7 == '\x05')) {
                  FUN_01672b68(&local_120);
                  local_e4[2] = *(uint *)(pcVar7 + 4);
                  local_d8 = *(undefined4 *)(pcVar7 + 8);
                  local_c4 = *(undefined4 *)(pcVar7 + 0xc);
                  if (local_e4[2] == 0) {
                    local_c4 = 0;
                  }
                  local_e4[0] = (uint)(local_e4[2] != 0);
                  local_d0 = 0;
                  local_e4[1] = 0;
                  local_d4 = local_e4[0];
                  local_cc = local_e4[2];
                  local_c8 = local_d8;
                  goto LAB_0166c8f8;
                }
              }
            }
LAB_0166cea0:
            local_1c8 = (uint *)0x0;
            goto LAB_0166ceac;
          }
        }
        if ((uVar15 & 0x80808080 & uVar15 << 1) != 0) break;
        iVar12 = iVar12 + 4;
        uVar8 = uVar8 + iVar12;
      } while( true );
    }
    FUN_019bb7e0(local_1f8,local_1f4);
    goto LAB_0166d004;
  }
  goto LAB_0166cffc;
LAB_0166cde0:
  uVar9 = (uint)*(char *)((int)puVar2 + local_25c);
  uVar17 = local_25c;
  if (-1 < (int)uVar9) {
    uVar17 = *puVar2 & 0x80808080;
    uVar17 = LZCOUNT((*puVar2 & 0x80) << 0x18 | (uVar17 >> 8 & 0xff) << 0x10 |
                     (uVar17 >> 0x10 & 0xff) << 8 | uVar17 >> 0x18);
    uVar9 = (uint)*(byte *)((int)puVar2 + (uVar17 >> 3));
    uVar17 = uVar17 >> 3;
  }
  bVar1 = (byte)(uVar6 >> 0x19);
  *(byte *)((int)puVar2 + uVar17) = bVar1;
  *(byte *)((int)puVar2 + (uVar8 & uVar17 - 4) + 4) = bVar1;
  local_118 = local_118 - (uVar9 & 1);
  local_114 = local_114 + 1;
  puVar2[uVar17 * -10 + -10] = (uint)puVar21;
  puVar2[uVar17 * -10 + -9] = (uint)puVar3;
  puVar2[uVar17 * -10 + -8] = (uint)puVar4;
  puVar2[uVar17 * -10 + -7] = (uint)local_c0;
  puVar2[uVar17 * -10 + -6] = (uint)puStack_bc;
  puVar2[uVar17 * -10 + -5] = (uint)puStack_b8;
  puVar2[uVar17 * -10 + -4] = (uint)local_b4;
  puVar2[uVar17 * -10 + -3] = (uint)puStack_b0;
  puVar2[uVar17 * -10 + -2] = (uint)puStack_ac;
  puVar2[uVar17 * -10 + -1] = (uint)puStack_a8;
LAB_0166c8f8:
  uVar23 = FUN_01a41998(local_e4);
  pcVar7 = (char *)((ulonglong)uVar23 >> 0x20);
  iVar20 = (int)uVar23;
  if (iVar20 != 0) {
    if ((*pcVar7 == '\x01') && ((pcVar7[1] & 1U) != 0)) {
      uVar13 = *(undefined4 *)(iVar20 + 8);
      uVar16 = *(undefined4 *)(iVar20 + 4);
      switch(uVar13) {
      case 0x30:
        iVar20 = thunk_FUN_01bed842(uVar16,"https://json-schema.org/draft/2020-12/vocab/core",0x30);
        puVar21 = (uint *)0x0;
        if (iVar20 != 0) {
          uVar19 = 0x30;
          pcVar7 = "https://json-schema.org/draft/2019-09/vocab/core";
LAB_0166cb00:
          iVar20 = thunk_FUN_01bed842(uVar16,pcVar7,uVar19);
          if (iVar20 != 0) goto switchD_0166c940_caseD_31;
        }
        break;
      default:
switchD_0166c940_caseD_31:
        FUN_0166fa70(&local_60,uVar16,uVar13);
        puVar4 = local_54;
        puVar3 = local_58;
        puVar21 = local_5c;
        local_1bc = local_50;
        local_1b8 = puStack_4c;
        puStack_1b4 = puStack_48;
        local_1b0 = local_44;
        puStack_1ac = puStack_40;
        puStack_1a8 = puStack_3c;
        local_1a4 = puStack_38;
        if (local_60 == -0x7ffffff6) {
          if (local_5c < (uint *)0x80000000) {
            local_c0 = local_1bc;
            puStack_bc = local_1b8;
            puStack_b8 = puStack_1b4;
            local_b4 = local_1b0;
            puStack_b0 = puStack_1ac;
            puStack_ac = puStack_1a8;
            puStack_a8 = local_1a4;
            uVar6 = FUN_01676700(auStack_110,local_58,local_54);
            if (local_118 == 0) {
              FUN_01667e44(&local_120,auStack_110);
            }
            uVar8 = local_11c;
            puVar2 = local_120;
            bVar22 = false;
            local_248 = 0;
            uVar17 = uVar6;
            do {
              uVar17 = uVar8 & uVar17;
              uVar15 = *(uint *)((int)puVar2 + uVar17);
              uVar9 = uVar15 ^ (uVar6 >> 0x19) * 0x1010101;
              for (uVar9 = ~uVar9 & 0x80808080 & uVar9 + 0xfefefeff; uVar9 != 0;
                  uVar9 = uVar9 - 1 & uVar9) {
                uVar10 = uVar17 + ((uint)LZCOUNT(uVar9 << 0x18 | (uVar9 >> 8 & 0xff) << 0x10 |
                                                 (uVar9 >> 0x10 & 0xff) << 8 | uVar9 >> 0x18) >> 3)
                         & uVar8;
                if ((puVar4 == (uint *)puVar2[uVar10 * -10 + -8]) &&
                   (iVar20 = thunk_FUN_01bed842(puVar3,puVar2[uVar10 * -10 + -9],puVar4),
                   iVar20 == 0)) {
                  FUN_019bb7e0(puVar21,puVar3);
                  goto LAB_0166c8f8;
                }
              }
              uVar9 = uVar15 & 0x80808080;
              if (bVar22) {
LAB_0166cd20:
                if ((uVar9 & uVar15 << 1) != 0) goto LAB_0166cde0;
                bVar22 = true;
              }
              else {
                if (uVar9 != 0) {
                  local_25c = uVar17 + ((uint)LZCOUNT((uVar15 & 0x80) << 0x18 |
                                                      (uVar9 >> 8 & 0xff) << 0x10 |
                                                      (uVar9 >> 0x10 & 0xff) << 8 | uVar9 >> 0x18)
                                       >> 3) & uVar8;
                  goto LAB_0166cd20;
                }
                bVar22 = false;
              }
              local_248 = local_248 + 4;
              uVar17 = local_248 + uVar17;
            } while( true );
          }
          goto LAB_0166cbb4;
        }
        local_1a0 = local_34;
        puStack_19c = puStack_30;
        puStack_198 = puStack_2c;
        local_1c0 = local_54;
        local_1c4 = local_58;
        local_1d0 = 1;
        local_1c8 = local_5c;
        local_1cc = local_60;
        FUN_01665520(&local_120);
        FUN_0166d0cc(&local_1d0);
        iVar20 = local_230;
        goto LAB_0166cfe8;
      case 0x32:
        iVar20 = thunk_FUN_01bed842(uVar16,"https://json-schema.org/draft/2020-12/vocab/format",0x32
                                   );
        puVar21 = (uint *)&DAT_80000005;
        if (iVar20 != 0) {
          uVar19 = 0x32;
          pcVar7 = "https://json-schema.org/draft/2019-09/vocab/format";
          goto LAB_0166cb00;
        }
        break;
      case 0x33:
        iVar20 = thunk_FUN_01bed842(uVar16,"https://json-schema.org/draft/2020-12/vocab/content",
                                    0x33);
        puVar21 = (uint *)0x80000007;
        if (iVar20 != 0) {
          uVar19 = 0x33;
          pcVar7 = "https://json-schema.org/draft/2019-09/vocab/content";
          goto LAB_0166cb00;
        }
        break;
      case 0x35:
        iVar20 = thunk_FUN_01bed842(uVar16,"https://json-schema.org/draft/2020-12/vocab/meta-data",
                                    0x35);
        puVar21 = (uint *)&DAT_80000004;
        if (iVar20 != 0) {
          uVar19 = 0x35;
          pcVar7 = "https://json-schema.org/draft/2019-09/vocab/meta-data";
          goto LAB_0166cb00;
        }
        break;
      case 0x36:
        iVar20 = thunk_FUN_01bed842(uVar16,"https://json-schema.org/draft/2020-12/vocab/applicator",
                                    0x36);
        puVar21 = (uint *)0x80000001;
        if ((iVar20 != 0) &&
           (iVar20 = thunk_FUN_01bed842(uVar16,
                                        "https://json-schema.org/draft/2019-09/vocab/applicator",
                                        0x36), iVar20 != 0)) {
          iVar20 = thunk_FUN_01bed842(uVar16,
                                      "https://json-schema.org/draft/2020-12/vocab/validation",0x36)
          ;
          puVar21 = (uint *)0x80000003;
          if (iVar20 != 0) {
            uVar19 = 0x36;
            pcVar7 = "https://json-schema.org/draft/2019-09/vocab/validation";
            goto LAB_0166cb00;
          }
        }
        break;
      case 0x37:
        iVar20 = thunk_FUN_01bed842(uVar16,"https://json-schema.org/draft/2020-12/vocab/unevaluated"
                                    ,0x37);
        if (iVar20 != 0) goto switchD_0166c940_caseD_31;
        puVar21 = (uint *)0x80000002;
        break;
      case 0x3d:
        iVar20 = thunk_FUN_01bed842(uVar16,
                                    "https://json-schema.org/draft/2020-12/vocab/format-annotation",
                                    0x3d);
        if (iVar20 != 0) goto switchD_0166c940_caseD_31;
        puVar21 = (uint *)0x80000006;
      }
      local_5c = puVar21;
LAB_0166cbb4:
                    /* WARNING: Could not recover jumptable at 0x0166cbc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((int)&DAT_0166cbc4 + (&DAT_0166cbc4)[(int)local_5c]))();
      return;
    }
    goto LAB_0166c8f8;
  }
  ppuVar14 = &local_120;
LAB_0166cf38:
  local_1c8 = *ppuVar14;
  local_1c4 = ppuVar14[1];
  local_1c0 = ppuVar14[2];
  local_1bc = ppuVar14[3];
  local_1b8 = ppuVar14[4];
  puStack_1b4 = ppuVar14[5];
  local_1b0 = ppuVar14[6];
  puStack_1ac = ppuVar14[7];
  puStack_1a8 = ppuVar14[8];
  local_1a4 = ppuVar14[9];
  local_1a0 = ppuVar14[10];
  puStack_19c = ppuVar14[0xb];
  puStack_198 = ppuVar14[0xc];
  puStack_194 = ppuVar14[0xd];
LAB_0166ceac:
  local_1d0 = 0;
  iVar20 = local_230;
  if (local_1c8 != (uint *)0x0) {
    *param_1 = local_1c8;
    param_1[1] = local_1c4;
    param_1[2] = local_1c0;
    param_1[3] = local_1bc;
    param_1[4] = local_1b8;
    param_1[5] = puStack_1b4;
    param_1[6] = local_1b0;
    param_1[7] = puStack_1ac;
    param_1[8] = puStack_1a8;
    param_1[9] = local_1a4;
    param_1[10] = local_1a0;
    param_1[0xb] = puStack_19c;
    param_1[0xc] = puStack_198;
    param_1[0xd] = puStack_194;
    FUN_019bb7e0(local_1f8,local_1f4);
    if (local_230 == -0x7ffffff6) {
      return;
    }
    FUN_0166bec0(&local_230);
    return;
  }
LAB_0166cfe8:
  FUN_019bb7e0(local_1f8,local_1f4);
  if (iVar20 == -0x7ffffff6) goto LAB_0166d004;
LAB_0166cffc:
  FUN_0166bec0(&local_230);
LAB_0166d004:
  FUN_0153c0a8(param_1);
  *(undefined1 *)(param_1 + 0xc) = 0xff;
  return;
}

