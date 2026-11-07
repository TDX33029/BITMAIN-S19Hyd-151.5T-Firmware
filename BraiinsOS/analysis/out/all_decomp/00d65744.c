// FUN_00d65744 @ 00d65744 size=4924 calls_out=22 calls_in=1
// strings: measured_hashrate | measured_hashrate | estimated_power | estimated_power | fan_pwm | fan_pwm

/* WARNING (jumptable): Heritage AFTER dead removal. Revisit: 0xffffffa8 */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00d65744(int *param_1,byte *param_2)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  uint *puVar16;
  undefined4 *puVar17;
  uint uVar18;
  undefined4 *puVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  uint uVar22;
  undefined4 uVar23;
  undefined4 ******ppppppuVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  uint uVar27;
  int unaff_r9;
  int iVar28;
  undefined4 *******pppppppuVar29;
  undefined4 ******ppppppuVar30;
  undefined4 unaff_r11;
  undefined4 ******ppppppuVar31;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  ulonglong uVar32;
  undefined8 uVar33;
  undefined4 *******local_1c4;
  undefined4 *******local_1c0;
  undefined4 *******local_1bc;
  undefined4 *******local_1b8;
  undefined4 *******local_1b4;
  undefined4 *******local_1a4;
  undefined4 *******local_19c;
  undefined4 *******local_198;
  undefined4 *******local_188;
  undefined4 *******local_184;
  undefined4 *******local_17c;
  undefined4 *******local_164;
  undefined4 *******local_160;
  undefined4 ******local_15c;
  byte local_158 [4];
  int local_154;
  undefined4 ******local_150;
  int local_14c;
  uint local_140;
  uint local_13c;
  uint local_138;
  uint uStack_134;
  uint uStack_130;
  uint uStack_12c;
  undefined4 ******local_128;
  undefined4 local_124;
  int local_120;
  undefined4 ******local_11c;
  undefined4 ******local_118;
  undefined4 local_114;
  int local_110;
  undefined4 ******local_10c;
  int local_108;
  int local_100;
  int local_fc;
  uint local_f8;
  undefined4 *******local_f4;
  undefined4 *******pppppppuStack_f0;
  undefined4 *******pppppppuStack_ec;
  undefined4 *******local_a8;
  undefined4 *******local_a4;
  undefined4 *******local_a0;
  int local_98;
  int local_94;
  int local_90;
  undefined4 *******local_88;
  undefined4 *******local_84;
  undefined4 *******local_80;
  int iStack_7c;
  int iStack_78;
  int iStack_74;
  undefined4 uStack_70;
  uint local_68;
  uint local_64;
  uint local_60;
  undefined4 *******local_58;
  undefined4 *******local_54;
  undefined4 *******local_50;
  undefined4 ******local_4c;
  int iStack_48;
  int iStack_44;
  undefined4 uStack_40;
  
  bVar1 = *param_2;
  *param_2 = 6;
  if (bVar1 == 6) {
    iVar12 = FUN_00c4c3ec(&DAT_00565810,0x10);
    *param_1 = 5;
    param_1[1] = 0;
    param_1[2] = iVar12;
    return;
  }
  local_158[0] = bVar1;
  FUN_016dd1aa((uint)local_158 | 1,param_2 + 1,0x17);
  if (bVar1 == 4) {
    local_50 = (undefined4 *******)local_154;
    local_54 = (undefined4 *******)local_150;
    ppppppuVar24 = local_150 + local_14c * 6;
    local_58 = (undefined4 *******)local_150;
    local_4c = ppppppuVar24;
    if (local_14c == 0) {
LAB_00d658bc:
      local_15c = local_54;
      local_13c = FUN_00f2c2f0(0,&DAT_0187805c,&DAT_018ab990);
    }
    else {
      local_15c = local_150 + 6;
      local_54 = (undefined4 *******)local_15c;
      if (*(char *)local_150 == '\x06') goto LAB_00d658bc;
      local_100 = CONCAT31(local_100._1_3_,*(char *)local_150);
      FUN_016dd1aa((uint)&local_100 | 1,(char *)((int)local_150 + 1),0x17);
      FUN_00cd0ac4(&local_140,&local_100);
      uVar22 = local_138;
      uVar18 = local_13c;
      uVar11 = local_140;
      if (local_140 != 0x80000000) {
        local_68 = local_140;
        local_64 = local_13c;
        local_60 = local_138;
        if (local_14c == 1) {
LAB_00d65eb0:
          uVar20 = 1;
LAB_00d65eb4:
          uVar13 = FUN_00f2c2f0(uVar20,&DAT_0187805c,&DAT_018ab990);
        }
        else {
          local_15c = local_150 + 0xc;
          local_54 = (undefined4 *******)local_15c;
          if (*(char *)(local_150 + 6) == '\x06') goto LAB_00d65eb0;
          local_140 = CONCAT31(local_140._1_3_,*(char *)(local_150 + 6));
          FUN_016dd1aa((uint)&local_140 | 1,(char *)((int)local_150 + 0x19),0x17);
          FUN_00d4380c(&local_100,&local_140);
          iVar12 = local_100;
          uVar13 = local_f8;
          if (local_100 == 5 && local_fc == 0) goto LAB_00d65ec8;
          local_88 = local_f4;
          local_84 = pppppppuStack_f0;
          local_80 = pppppppuStack_ec;
          if (local_14c == 2) {
LAB_00d661a0:
            uVar20 = 2;
            goto LAB_00d65eb4;
          }
          local_15c = local_150 + 0x12;
          local_54 = (undefined4 *******)local_15c;
          if (*(char *)(local_150 + 0xc) == '\x06') goto LAB_00d661a0;
          uVar13 = (uint)&local_100 | 1;
          local_100 = CONCAT31(local_100._1_3_,*(char *)(local_150 + 0xc));
          FUN_016dd1aa(uVar13,(char *)((int)local_150 + 0x31),0x17);
          FUN_00d44b6c(&local_140,&local_100);
          if (local_140 == 0) {
            if (local_14c == 3) {
LAB_00d66574:
              uVar20 = 3;
            }
            else {
              local_15c = local_150 + 0x18;
              uVar2 = CONCAT44(uStack_134,local_138);
              local_54 = (undefined4 *******)local_15c;
              if (*(char *)(local_150 + 0x12) == '\x06') goto LAB_00d66574;
              local_100 = CONCAT31(local_100._1_3_,*(char *)(local_150 + 0x12));
              FUN_016dd1aa(uVar13,(char *)((int)local_150 + 0x49),0x17);
              FUN_00d44b6c(&local_140,&local_100);
              if (local_140 != 0) goto LAB_00d66324;
              if (local_14c == 4) {
LAB_00d665d4:
                uVar20 = 4;
              }
              else {
                local_15c = local_150 + 0x1e;
                uVar3 = CONCAT44(uStack_134,local_138);
                local_54 = (undefined4 *******)local_15c;
                if (*(char *)(local_150 + 0x18) == '\x06') goto LAB_00d665d4;
                local_100 = CONCAT31(local_100._1_3_,*(char *)(local_150 + 0x18));
                FUN_016dd1aa(uVar13,(char *)((int)local_150 + 0x61),0x17);
                FUN_00d43f30(&local_140,&local_100);
                uVar10 = local_138;
                uVar9 = local_13c;
                uVar27 = local_140;
                if (local_138 == 0x3b9aca01) {
                  uVar13 = local_140;
                  goto LAB_00d65ec8;
                }
                if (local_14c == 5) {
LAB_00d668ec:
                  uVar20 = 5;
                }
                else {
                  local_15c = local_150 + 0x24;
                  local_54 = (undefined4 *******)local_15c;
                  if (*(char *)(local_150 + 0x1e) == '\x06') goto LAB_00d668ec;
                  local_100 = CONCAT31(local_100._1_3_,*(char *)(local_150 + 0x1e));
                  FUN_016dd1aa(uVar13,(char *)((int)local_150 + 0x79),0x17);
                  FUN_00d43fa4(&local_140,&local_100);
                  uVar8 = local_140;
                  if (local_140 == 2) {
                    uVar13 = local_13c;
                    goto LAB_00d65ec8;
                  }
                  if (local_14c != 6) {
                    local_15c = local_150 + 0x2a;
                    local_54 = (undefined4 *******)local_15c;
                    if (*(char *)(local_150 + 0x24) != '\x06') {
                      local_100 = CONCAT31(local_100._1_3_,*(char *)(local_150 + 0x24));
                      FUN_016dd1aa(uVar13,(char *)((int)local_150 + 0x91),0x17);
                      uVar33 = FUN_00c64c8c(&local_100);
                      uVar13 = (uint)((ulonglong)uVar33 >> 0x20);
                      uVar15 = (int)uVar33 + 1;
                      if (uVar15 == 2) goto LAB_00d65ec8;
                      if ((uVar15 & 1) != 0) {
                        param_1[0x11] = local_68;
                        param_1[8] = uVar10;
                        param_1[0x14] = uVar13;
                        param_1[2] = local_f8;
                        param_1[3] = (int)local_88;
                        param_1[4] = (int)local_84;
                        param_1[6] = uVar27;
                        param_1[0xe] = uVar8;
                        param_1[7] = uVar9;
                        param_1[0xf] = local_13c;
                        param_1[0x13] = local_60;
                        param_1[0x10] = local_138;
                        param_1[0x12] = local_64;
                        *(undefined8 *)(param_1 + 10) = uVar2;
                        *(undefined8 *)(param_1 + 0xc) = uVar3;
                        *param_1 = iVar12;
                        param_1[1] = local_fc;
                        param_1[5] = (int)local_80;
                        FUN_016dd1aa(&local_100,param_1,0x58);
                        if (local_14c != 7) {
                          iVar12 = FUN_00f2c2f0(local_14c,&DAT_0188738c,&DAT_018ab990);
                          param_1[2] = iVar12;
                          *param_1 = 5;
                          param_1[1] = 0;
                          FUN_00d4fd9c(&local_100);
                        }
                        goto LAB_00d658f0;
                      }
                    }
                  }
                  uVar20 = 6;
                }
              }
            }
            goto LAB_00d65eb4;
          }
LAB_00d66324:
          uVar13 = local_13c;
        }
LAB_00d65ec8:
        uVar27 = 0;
        *param_1 = 5;
        param_1[1] = 0;
        param_1[2] = uVar13;
        while (uVar27 != uVar22) {
          iVar12 = uVar18 + uVar27 * 0x48;
          iVar14 = *(int *)(iVar12 + 0x3c);
          puVar17 = (undefined4 *)(iVar14 + 0x10);
          for (iVar28 = *(int *)(iVar12 + 0x40); iVar28 != 0; iVar28 = iVar28 + -1) {
            if (puVar17[-4] != 0) {
              thunk_FUN_016d3fb4(puVar17[-3]);
            }
            if (puVar17[-1] != 0) {
              thunk_FUN_016d3fb4(*puVar17);
            }
            puVar17 = puVar17 + 6;
          }
          uVar27 = uVar27 + 1;
          if (*(int *)(iVar12 + 0x38) != 0) {
            thunk_FUN_016d3fb4(iVar14);
          }
        }
        if (uVar11 != 0) {
          thunk_FUN_016d3fb4(uVar18);
        }
        goto LAB_00d658f0;
      }
    }
    param_1[1] = 0;
    param_1[2] = local_13c;
    *param_1 = 5;
LAB_00d658f0:
    FUN_00ce0380(local_15c,((uint)((int)ppppppuVar24 - (int)local_15c) >> 3) * -0x55555555);
    if (local_154 == 0) {
      return;
    }
    thunk_FUN_016d3fb4(local_150);
    return;
  }
  if (bVar1 != 5) {
    iVar12 = FUN_00f36124(local_158,&local_100,&DAT_01873e98);
    param_1[2] = iVar12;
    *param_1 = 5;
    param_1[1] = 0;
    if ((bVar1 & 6) == 4) {
      return;
    }
    FUN_00c01f94(local_158);
    return;
  }
  local_10c = local_150;
  local_11c = local_150;
  local_140 = CONCAT31(local_140._1_3_,6);
  local_108 = 0;
  if (local_154 != 0) {
    local_108 = local_14c;
  }
  local_110 = local_154;
  local_120 = local_154;
  local_128 = (undefined4 ******)(uint)(local_154 != 0);
  uVar11 = (uint)&local_58 | 1;
  puVar16 = (uint *)((uint)&local_88 | 4);
  puVar17 = (undefined4 *)((uint)&local_58 | 4);
  uVar18 = (uint)&local_140 | 1;
  local_184 = (undefined4 *******)&DAT_00000005;
  local_19c = (undefined4 *******)&SUB_00000002;
  bVar6 = false;
  local_17c = (undefined4 *******)&DAT_80000000;
  local_114 = 0;
  local_124 = 0;
  local_a8 = (undefined4 *******)0x80000000;
  local_198 = (undefined4 *******)0x3b9aca01;
  local_1a4 = (undefined4 *******)0x0;
  bVar5 = false;
  bVar4 = false;
  local_188 = (undefined4 *******)0x0;
  local_118 = local_128;
LAB_00d65d10:
  FUN_00c3b8fc(&local_68,&local_128);
  pppppppuVar29 = &local_128;
  if (local_68 != 0) {
    puVar19 = (undefined4 *)(local_68 + local_60 * 0x18);
    iVar12 = local_68 + local_60 * 0xc;
    unaff_r9 = *(int *)(iVar12 + 0x10c);
    pppppppuVar29 = *(undefined4 ********)(iVar12 + 0x110);
    unaff_r11 = *(undefined4 *)(iVar12 + 0x114);
    uVar20 = puVar19[1];
    uVar21 = puVar19[2];
    uVar23 = puVar19[3];
    uVar25 = puVar19[4];
    uVar26 = puVar19[5];
    *puVar17 = *puVar19;
    puVar17[1] = uVar20;
    puVar17[2] = uVar21;
    puVar17[3] = uVar23;
    puVar17[4] = uVar25;
    puVar17[5] = uVar26;
    local_88 = local_58;
    local_84 = local_54;
    local_80 = local_50;
    iStack_7c = (int)local_4c;
    iStack_78 = iStack_48;
    iStack_74 = iStack_44;
    uStack_70 = uStack_40;
  }
  if (local_68 == 0 || unaff_r9 == -0x80000000) {
switchD_00d659a8_caseD_8:
    local_a0 = local_160;
    local_a4 = local_164;
    local_a8 = local_17c;
    if (local_17c != (undefined4 *******)&DAT_80000000) {
      if (local_184 == (undefined4 *******)&DAT_00000005 && local_188 == (undefined4 *******)0x0) {
        local_54 = (undefined4 *******)&DAT_0157d360;
        local_58 = &local_88;
        local_84 = (undefined4 *******)&DAT_00000011;
        local_88 = (undefined4 *******)0x359dd0;
        iVar12 = FUN_00f56780(&DAT_0057a25d,&local_58);
      }
      else if (bVar4) {
        if (bVar5) {
          if (bVar6) {
            param_1[3] = local_98;
            param_1[5] = local_90;
            param_1[6] = (int)local_1c4;
            param_1[7] = (int)local_1a4;
            if (local_198 == (undefined4 *******)0x3b9aca01) {
              local_198 = (undefined4 *******)&DAT_3b9aca00;
            }
            param_1[0x11] = (int)local_17c;
            param_1[8] = (int)local_198;
            param_1[0x14] = (int)local_1b4;
            param_1[0x10] = (int)local_1c0;
            pppppppuVar29 = (undefined4 *******)0x0;
            if (local_19c != (undefined4 *******)&SUB_00000002) {
              pppppppuVar29 = local_19c;
            }
            param_1[0xf] = (int)local_1b8;
            *param_1 = (int)local_184;
            param_1[0xe] = (int)pppppppuVar29;
            param_1[1] = (int)local_188;
            param_1[0x13] = (int)local_160;
            param_1[0x12] = (int)local_164;
            *(undefined8 *)(param_1 + 10) = unaff_d9;
            *(undefined8 *)(param_1 + 0xc) = unaff_d8;
            param_1[2] = (int)local_1bc;
            param_1[4] = local_94;
            FUN_016dd1aa(&local_100,param_1,0x58);
            if (local_108 != 0) {
              iVar12 = FUN_00f2c2f0(local_14c,&DAT_01887430,&DAT_018ab990);
              param_1[2] = iVar12;
              *param_1 = 5;
              param_1[1] = 0;
              FUN_00c2da40(&local_100);
            }
            FUN_00c494c8(&local_128);
            goto LAB_00d66040;
          }
          local_54 = (undefined4 *******)&DAT_0157d360;
          local_58 = &local_88;
          local_84 = (undefined4 *******)&DAT_00000007;
          local_88 = (undefined4 *******)0x35a058;
          iVar12 = FUN_00f56780(&DAT_0057a25d,&local_58);
        }
        else {
          local_54 = (undefined4 *******)&DAT_0157d360;
          local_58 = &local_88;
          local_84 = (undefined4 *******)&DAT_0000000f;
          local_88 = (undefined4 *******)0x358eaf;
          iVar12 = FUN_00f56780(&DAT_0057a25d,&local_58);
        }
      }
      else {
        local_54 = (undefined4 *******)&DAT_0157d360;
        local_58 = &local_88;
        local_84 = (undefined4 *******)&DAT_00000011;
        local_88 = (undefined4 *******)&DAT_003545a9;
        iVar12 = FUN_00f56780(&DAT_0057a25d,&local_58);
      }
      pppppppuVar29 = (undefined4 *******)0x0;
      *param_1 = 5;
      param_1[1] = 0;
      param_1[2] = iVar12;
      while (pppppppuVar29 != local_160) {
        iVar12 = (int)pppppppuVar29 * 0x12;
        ppppppuVar30 = local_164[(int)pppppppuVar29 * 0x12 + 0xf];
        ppppppuVar24 = ppppppuVar30 + 4;
        for (ppppppuVar31 = local_164[(int)pppppppuVar29 * 0x12 + 0x10];
            ppppppuVar31 != (undefined4 ******)0x0;
            ppppppuVar31 = (undefined4 ******)((int)ppppppuVar31 + -1)) {
          if (ppppppuVar24[-4] != (undefined4 *****)0x0) {
            thunk_FUN_016d3fb4(ppppppuVar24[-3]);
          }
          if (ppppppuVar24[-1] != (undefined4 *****)0x0) {
            thunk_FUN_016d3fb4(*ppppppuVar24);
          }
          ppppppuVar24 = ppppppuVar24 + 6;
        }
        pppppppuVar29 = (undefined4 *******)((int)pppppppuVar29 + 1);
        if (local_164[iVar12 + 0xe] != (undefined4 ******)0x0) {
          thunk_FUN_016d3fb4(ppppppuVar30);
        }
      }
      goto joined_r0x00d66274;
    }
    local_54 = (undefined4 *******)&DAT_0157d360;
    local_58 = &local_88;
    local_84 = (undefined4 *******)&DAT_0000000e;
    local_88 = (undefined4 *******)&DAT_0035459b;
    pppppppuVar29 = (undefined4 *******)FUN_00f56780(&DAT_0057a25d,&local_58);
LAB_00d65dc4:
    *param_1 = 5;
    param_1[1] = 0;
    param_1[2] = (int)pppppppuVar29;
    goto LAB_00d66280;
  }
  if ((char)local_140 != '\x06') {
    FUN_00d4fc54(&local_140);
  }
  local_140 = *puVar16;
  local_13c = puVar16[1];
  local_138 = puVar16[2];
  uStack_134 = puVar16[3];
  uStack_130 = puVar16[4];
  uStack_12c = puVar16[5];
  FUN_00c04954(&local_58,pppppppuVar29,unaff_r11);
  if (unaff_r9 != 0) {
    thunk_FUN_016d3fb4(pppppppuVar29);
  }
  if ((char)local_58 != '\0') {
    local_a0 = local_160;
    local_a4 = local_164;
    local_a8 = local_17c;
    pppppppuVar29 = local_54;
    goto LAB_00d66450;
  }
  cVar7 = (char)local_140;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((uint)local_58 >> 8 & 0xff) {
  case 0:
    if (local_17c != (undefined4 *******)&DAT_80000000) {
      local_54 = (undefined4 *******)&DAT_0157d360;
      local_58 = &local_88;
      local_a0 = local_160;
      local_a8 = local_17c;
      local_a4 = local_164;
      local_84 = (undefined4 *******)&DAT_0000000e;
      local_88 = (undefined4 *******)&DAT_0035459b;
      pppppppuVar29 = (undefined4 *******)FUN_00f56780(&DAT_00582dbd,&local_58);
      goto LAB_00d66450;
    }
    local_140 = CONCAT31(local_140._1_3_,6);
    if (cVar7 == '\x06') {
      local_a0 = local_160;
      local_a4 = local_164;
      local_a8 = (undefined4 *******)&DAT_80000000;
      pppppppuVar29 = (undefined4 *******)FUN_00c4c3ec(&DAT_00565810,0x10);
      goto LAB_00d65dc4;
    }
    local_58 = (undefined4 *******)CONCAT31(local_58._1_3_,cVar7);
    FUN_016dd1aa(uVar11,uVar18,0x17);
    FUN_00cd0ac4(&local_88,&local_58);
    local_17c = local_88;
    if (local_88 != (undefined4 *******)&DAT_80000000) {
      local_160 = local_80;
      local_164 = local_84;
      goto LAB_00d65d10;
    }
    local_a0 = local_160;
    local_a4 = local_164;
    local_a8 = (undefined4 *******)&DAT_80000000;
    pppppppuVar29 = local_84;
    goto LAB_00d65dc4;
  case 1:
    if (local_184 != (undefined4 *******)&DAT_00000005 || local_188 != (undefined4 *******)0x0) {
      local_a0 = local_160;
      local_a4 = local_164;
      local_54 = (undefined4 *******)&DAT_0157d360;
      local_58 = &local_88;
      local_a8 = local_17c;
      local_84 = (undefined4 *******)&DAT_00000011;
      local_88 = (undefined4 *******)0x359dd0;
      pppppppuVar29 = (undefined4 *******)FUN_00f56780(&DAT_00582dbd,&local_58);
      goto LAB_00d66450;
    }
    local_140 = CONCAT31(local_140._1_3_,6);
    if (cVar7 == '\x06') {
      local_a0 = local_160;
      local_a4 = local_164;
      local_a8 = local_17c;
      pppppppuVar29 = (undefined4 *******)FUN_00c4c3ec(&DAT_00565810,0x10);
      goto LAB_00d66450;
    }
    local_58 = (undefined4 *******)CONCAT31(local_58._1_3_,cVar7);
    FUN_016dd1aa(uVar11,uVar18,0x17);
    FUN_00d4380c(&local_88,&local_58);
    local_184 = local_88;
    local_188 = local_84;
    pppppppuVar29 = local_80;
    if (local_88 != (undefined4 *******)&DAT_00000005 || local_84 != (undefined4 *******)0x0) {
      local_1bc = local_80;
      local_98 = iStack_7c;
      local_94 = iStack_78;
      local_90 = iStack_74;
      goto LAB_00d65d10;
    }
    break;
  case 2:
    if (bVar4) {
      local_a0 = local_160;
      local_a4 = local_164;
      local_54 = (undefined4 *******)&DAT_0157d360;
      local_58 = &local_88;
      local_a8 = local_17c;
      local_84 = (undefined4 *******)&DAT_00000011;
      local_88 = (undefined4 *******)&DAT_003545a9;
      pppppppuVar29 = (undefined4 *******)FUN_00f56780(&DAT_00582dbd,&local_58);
      goto LAB_00d66450;
    }
    local_140 = CONCAT31(local_140._1_3_,6);
    if (cVar7 == '\x06') {
      local_84 = (undefined4 *******)FUN_00c4c3ec(&DAT_00565810,0x10);
      goto LAB_00d66434;
    }
    local_58 = (undefined4 *******)CONCAT31(local_58._1_3_,cVar7);
    FUN_016dd1aa(uVar11,uVar18,0x17);
    FUN_00d44b6c(&local_88,&local_58);
    if (local_88 == (undefined4 *******)0x0) {
      unaff_d9 = CONCAT44(iStack_7c,local_80);
      bVar4 = true;
      goto LAB_00d65d10;
    }
    goto LAB_00d66434;
  case 3:
    if (bVar5) {
      local_a0 = local_160;
      local_a4 = local_164;
      local_54 = (undefined4 *******)&DAT_0157d360;
      local_58 = &local_88;
      local_a8 = local_17c;
      local_84 = (undefined4 *******)&DAT_0000000f;
      local_88 = (undefined4 *******)0x358eaf;
      pppppppuVar29 = (undefined4 *******)FUN_00f56780(&DAT_00582dbd,&local_58);
      goto LAB_00d66450;
    }
    local_140 = CONCAT31(local_140._1_3_,6);
    if (cVar7 == '\x06') {
      local_84 = (undefined4 *******)FUN_00c4c3ec(&DAT_00565810,0x10);
    }
    else {
      local_58 = (undefined4 *******)CONCAT31(local_58._1_3_,cVar7);
      FUN_016dd1aa(uVar11,uVar18,0x17);
      FUN_00d44b6c(&local_88,&local_58);
      if (local_88 == (undefined4 *******)0x0) {
        unaff_d8 = CONCAT44(iStack_7c,local_80);
        bVar5 = true;
        goto LAB_00d65d10;
      }
    }
LAB_00d66434:
    pppppppuVar29 = local_84;
    break;
  case 4:
    if (local_198 != (undefined4 *******)0x3b9aca01) {
      local_a0 = local_160;
      local_a4 = local_164;
      local_54 = (undefined4 *******)&DAT_0157d360;
      local_58 = &local_88;
      local_a8 = local_17c;
      local_84 = (undefined4 *******)&DAT_0000000f;
      local_88 = (undefined4 *******)0x359fde;
      pppppppuVar29 = (undefined4 *******)FUN_00f56780(&DAT_00582dbd,&local_58);
      goto LAB_00d66450;
    }
    uVar22 = local_140 & 0xff;
    local_140 = CONCAT31(local_140._1_3_,6);
    if (uVar22 == 6) {
      local_a0 = local_160;
      local_a4 = local_164;
      local_a8 = local_17c;
      pppppppuVar29 = (undefined4 *******)FUN_00c4c3ec(&DAT_00565810,0x10);
      goto LAB_00d66450;
    }
    local_58 = (undefined4 *******)CONCAT31(local_58._1_3_,cVar7);
    FUN_016dd1aa(uVar11,uVar18,0x17);
    if (uVar22 == 0) {
      FUN_00c01f94(&local_58);
      local_198 = (undefined4 *******)&DAT_3b9aca00;
      goto LAB_00d65d10;
    }
    FUN_00c4b958(&local_88,&local_58);
    local_198 = local_80;
    if (local_80 != (undefined4 *******)&DAT_3b9aca00) {
      local_1c4 = local_88;
      local_1a4 = local_84;
      goto LAB_00d65d10;
    }
    pppppppuVar29 = local_88;
    break;
  case 5:
    if (local_19c != (undefined4 *******)&SUB_00000002) {
      local_a0 = local_160;
      local_a4 = local_164;
      local_54 = (undefined4 *******)&DAT_0157d360;
      local_58 = &local_88;
      local_a8 = local_17c;
      local_84 = (undefined4 *******)&DAT_0000001c;
      local_88 = (undefined4 *******)0x358ebe;
      pppppppuVar29 = (undefined4 *******)FUN_00f56780(&DAT_00582dbd,&local_58);
      goto LAB_00d66450;
    }
    local_140 = CONCAT31(local_140._1_3_,6);
    if (cVar7 == '\x06') {
      local_a0 = local_160;
      local_a4 = local_164;
      local_a8 = local_17c;
      pppppppuVar29 = (undefined4 *******)FUN_00c4c3ec(&DAT_00565810,0x10);
      goto LAB_00d66450;
    }
    local_58 = (undefined4 *******)CONCAT31(local_58._1_3_,cVar7);
    FUN_016dd1aa(uVar11,uVar18,0x17);
    FUN_00d43fa4(&local_88,&local_58);
    pppppppuVar29 = local_84;
    if (local_88 != (undefined4 *******)&SUB_00000002) {
      local_19c = local_88;
      local_1b8 = local_84;
      local_1c0 = local_80;
      goto LAB_00d65d10;
    }
    break;
  case 6:
    if (bVar6) {
      local_a0 = local_160;
      local_a4 = local_164;
      local_54 = (undefined4 *******)&DAT_0157d360;
      local_58 = &local_88;
      local_a8 = local_17c;
      local_84 = (undefined4 *******)&DAT_00000007;
      local_88 = (undefined4 *******)0x35a058;
      pppppppuVar29 = (undefined4 *******)FUN_00f56780(&DAT_00582dbd,&local_58);
      goto LAB_00d66450;
    }
    local_140 = CONCAT31(local_140._1_3_,6);
    if (cVar7 == '\x06') {
      uVar20 = FUN_00c4c3ec(&DAT_00565810,0x10);
      uVar32 = CONCAT44(uVar20,1);
    }
    else {
      local_58 = (undefined4 *******)CONCAT31(local_58._1_3_,cVar7);
      FUN_016dd1aa(uVar11,uVar18,0x17);
      uVar32 = FUN_00c64c8c(&local_58);
    }
    local_1b4 = (undefined4 *******)(uVar32 >> 0x20);
    if ((uVar32 & 1) != 0) {
      local_a0 = local_160;
      local_a4 = local_164;
      local_a8 = local_17c;
      pppppppuVar29 = local_1b4;
      goto LAB_00d66450;
    }
    bVar6 = true;
    goto LAB_00d65d10;
  case 7:
    local_140 = CONCAT31(local_140._1_3_,6);
    if (cVar7 != '\x06') goto code_r0x00d65b88;
    local_a0 = local_160;
    local_a4 = local_164;
    local_a8 = local_17c;
    pppppppuVar29 = (undefined4 *******)FUN_00c4c3ec(&DAT_00565810,0x10);
LAB_00d66450:
    param_1[1] = 0;
    param_1[2] = (int)pppppppuVar29;
    *param_1 = 5;
    if (local_17c != (undefined4 *******)&DAT_80000000) {
      pppppppuVar29 = (undefined4 *******)0x0;
      while (pppppppuVar29 != local_160) {
        iVar12 = (int)pppppppuVar29 * 0x12;
        ppppppuVar30 = local_164[(int)pppppppuVar29 * 0x12 + 0xf];
        ppppppuVar24 = ppppppuVar30 + 4;
        for (ppppppuVar31 = local_164[(int)pppppppuVar29 * 0x12 + 0x10];
            ppppppuVar31 != (undefined4 ******)0x0;
            ppppppuVar31 = (undefined4 ******)((int)ppppppuVar31 + -1)) {
          if (ppppppuVar24[-4] != (undefined4 *****)0x0) {
            thunk_FUN_016d3fb4(ppppppuVar24[-3]);
          }
          if (ppppppuVar24[-1] != (undefined4 *****)0x0) {
            thunk_FUN_016d3fb4(*ppppppuVar24);
          }
          ppppppuVar24 = ppppppuVar24 + 6;
        }
        pppppppuVar29 = (undefined4 *******)((int)pppppppuVar29 + 1);
        if (local_164[iVar12 + 0xe] != (undefined4 ******)0x0) {
          thunk_FUN_016d3fb4(ppppppuVar30);
        }
      }
joined_r0x00d66274:
      if (local_17c != (undefined4 *******)0x0) {
        thunk_FUN_016d3fb4(local_164);
      }
    }
LAB_00d66280:
    while( true ) {
      FUN_00c3b8fc(&local_100,&local_128);
      uVar11 = local_f8;
      iVar12 = local_100;
      if (local_100 == 0) break;
      iVar14 = local_100 + local_f8 * 0xc;
      local_58 = &local_128;
      if (*(int *)(iVar14 + 0x10c) != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)(iVar14 + 0x110));
      }
      FUN_00c436d0(iVar12 + uVar11 * 0x18);
    }
LAB_00d66040:
    if ((char)local_140 == '\x06') {
      return;
    }
    FUN_00c01f94(&local_140);
    return;
  case 8:
    goto switchD_00d659a8_caseD_8;
  }
  local_a0 = local_160;
  local_a4 = local_164;
  local_a8 = local_17c;
  goto LAB_00d66450;
code_r0x00d65b88:
  local_58 = (undefined4 *******)CONCAT31(local_58._1_3_,cVar7);
  FUN_016dd1aa(uVar11,uVar18,0x17);
  FUN_00c01f94(&local_58);
  goto LAB_00d65d10;
}

