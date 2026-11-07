// FUN_013e26e0 @ 013e26e0 size=2076 calls_out=20 calls_in=1
// strings: 

/* WARNING (jumptable): Heritage AFTER dead removal. Revisit: 0xfffffe6c */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_013e26e0(int *param_1,int param_2,int param_3,int param_4)

{
  ushort uVar1;
  uint uVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  int iVar5;
  short sVar6;
  uint uVar7;
  uint *puVar8;
  code *pcVar9;
  uint uVar10;
  undefined2 uVar11;
  code *pcVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  undefined *unaff_r11;
  uint uVar16;
  uint local_418;
  uint local_3f8;
  uint local_3ec;
  undefined2 local_3e8;
  int local_3b0;
  int local_3ac;
  int local_3a8;
  int local_3a0;
  int iStack_39c;
  int iStack_398;
  undefined4 local_394;
  int local_390;
  int local_388;
  int local_384;
  int local_380;
  undefined1 local_378 [4];
  undefined *local_374;
  undefined4 uStack_34c;
  uint local_348;
  undefined4 uStack_344;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  uint uStack_338;
  undefined2 local_334;
  undefined2 local_332;
  undefined2 local_330;
  undefined2 local_32e;
  undefined2 local_32c;
  undefined2 local_32a;
  undefined4 local_328;
  undefined4 local_324;
  undefined *local_294;
  undefined1 auStack_290 [152];
  uint *local_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 local_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  uint local_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  uint uStack_1c0;
  undefined2 local_1b8;
  undefined2 local_1b6;
  undefined *local_1b4;
  uint *local_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 local_19c;
  undefined4 uStack_198;
  uint local_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  uint local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  uint local_178;
  undefined4 local_170;
  code *local_16c;
  uint *local_168;
  code *local_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 local_154;
  undefined4 uStack_150;
  uint uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  uint local_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  uint uStack_130;
  undefined2 *local_d0 [37];
  undefined2 local_3a;
  undefined *local_38;
  uint *puStack_34;
  uint local_2c [2];
  
  iVar13 = 4;
  iVar15 = 4;
  local_3b0 = 0;
  if (param_3 != 0) {
    iVar15 = FUN_01298504(param_3 * 0xe8,4);
    local_3b0 = param_3;
    if (iVar15 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(4,param_3 * 0xe8);
    }
  }
  local_3a0 = -0x80000000;
  local_3a8 = 0;
  local_388 = 0;
  local_3ac = iVar15;
  if (param_4 != 0) {
    iVar13 = FUN_01298504(0xe8,4);
    if (iVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(4,0xe8);
    }
    local_388 = param_4;
  }
  iVar5 = local_394;
  local_380 = 0;
  local_384 = iVar13;
  if (param_3 != 0) {
    iVar13 = 0;
    uVar4 = (undefined2)local_394;
    do {
      FUN_013c7bc4(&local_170,param_2);
      pcVar9 = local_16c;
      uVar3 = (undefined1)((uint)iVar5 >> 0x10);
      if (((uint)local_170 & 0xffff) == 2) {
LAB_013e2e2c:
        local_394 = CONCAT22(CONCAT11(local_394._3_1_,uVar3),uVar4);
LAB_013e2e54:
        *param_1 = -0x80000000;
        param_1[1] = (int)pcVar9;
LAB_013e2e60:
        FUN_013e3148(&local_388);
        if (local_3a0 != -0x80000000) {
          FUN_013d1214(&local_3a0);
        }
        FUN_013e3148(&local_3b0);
        return;
      }
      local_1b0 = local_168;
      uStack_1ac = local_164;
      uStack_1a8 = uStack_160;
      uStack_1a4 = uStack_15c;
      uStack_1a0 = uStack_158;
      local_19c = local_154;
      uStack_198 = uStack_150;
      local_194 = uStack_14c;
      uStack_190 = uStack_148;
      uStack_18c = uStack_144;
      local_188 = local_140;
      uStack_184 = uStack_13c;
      uStack_180 = uStack_138;
      uStack_17c = uStack_134;
      local_178 = uStack_130;
      local_1b4 = local_16c;
      local_1b6 = local_170._2_2_;
      local_1b8 = (short)local_170;
      FUN_013d96e4(&local_170,param_2);
      if ((short)local_170 != 0) {
LAB_013e2cfc:
        pcVar9 = local_16c;
        goto LAB_013e2e24;
      }
      uVar14 = (uint)local_170 >> 0x10;
      local_3e8 = (undefined2)((uint)local_170 >> 0x10);
      pcVar12 = (code *)((uint)local_16c & 0xffff);
      if (uVar14 == 0x19) {
        if ((short)local_194 == 1) {
          uVar7 = local_188;
        }
        else {
          uVar7 = local_194 >> 0x10;
        }
        if ((uVar7 == 0) && ((local_178 & 1) != 0)) {
          if (1 < *(uint *)(param_2 + 0xc)) {
            uVar10 = *(uint *)(param_2 + 0xc) - 2;
            uVar11 = 0x200;
            uVar1 = **(ushort **)(param_2 + 8);
            *(ushort **)(param_2 + 8) = *(ushort **)(param_2 + 8) + 1;
            uVar7 = (uint)uVar1 << 0x18 | (uint)(uVar1 >> 8) << 0x10;
            *(uint *)(param_2 + 0xc) = uVar10;
            local_418 = uVar7 >> 0x10;
            if (0x200 < local_418) {
              uVar11 = (undefined2)(uVar7 >> 0x10);
            }
            uVar7 = 5;
            goto LAB_013e2920;
          }
          local_16c = (code *)0x0;
          local_168 = (uint *)0x2;
          local_170 = (undefined2 **)(local_418 << 0x10);
          pcVar9 = (code *)FUN_013e677c(&local_170);
          goto LAB_013e2e24;
        }
        local_394 = CONCAT22(CONCAT11(local_394._3_1_,uVar3),uVar4);
        pcVar9 = (code *)FUN_013e649c(&local_1b8);
        goto LAB_013e2e54;
      }
      FUN_013d3a18(&local_170,param_2);
      if ((short)local_170 != 0) goto LAB_013e2cfc;
      uVar11 = SUB42(local_16c,0);
      uVar10 = *(uint *)(param_2 + 0xc);
      uVar7 = (uint)local_170 >> 0x10;
LAB_013e2920:
      if (uVar10 < 4) {
        local_168 = (uint *)0x4;
        local_170 = (undefined2 **)((uint)local_170 & 0xffffff00);
        local_16c = (code *)unaff_r11;
        pcVar9 = (code *)FUN_013e677c(&local_170);
LAB_013e2e24:
        FUN_013cb16c(&local_1b8);
        goto LAB_013e2e2c;
      }
      puVar8 = *(uint **)(param_2 + 8);
      uVar16 = *puVar8;
      *(uint **)(param_2 + 8) = puVar8 + 1;
      *(uint *)(param_2 + 0xc) = uVar10 - 4;
      if (uVar10 - 4 < 2) {
        local_170._0_2_ = (short)((uint)local_170 >> 8) << 8;
        local_16c = (code *)0x0;
        local_168 = (uint *)0x2;
        local_170 = (undefined2 **)CONCAT22((short)local_3f8,(short)local_170);
        pcVar9 = (code *)FUN_013e677c(&local_170);
        goto LAB_013e2e24;
      }
      uVar1 = (ushort)puVar8[1];
      *(int *)(param_2 + 8) = (int)puVar8 + 6;
      uVar10 = uVar10 - 6;
      uVar2 = (uint)uVar1 << 0x18 | (uint)(uVar1 >> 8) << 0x10;
      *(uint *)(param_2 + 0xc) = uVar10;
      local_3f8 = uVar2 >> 0x10;
      if (uVar10 < uVar2 >> 0x10) {
        local_16c = FUN_012fcf18;
        local_170 = (undefined2 **)&local_3a;
        local_164 = FUN_012fd02c;
        local_168 = local_2c;
        local_3a = (undefined2)(uVar2 >> 0x10);
        local_2c[0] = uVar10;
        FUN_00664898(&local_38,&DAT_005a64bf,&local_170);
        local_16c = (code *)local_38;
        local_168 = puStack_34;
        local_170 = (undefined2 **)CONCAT22(local_170._2_2_,0x11);
        pcVar9 = (code *)FUN_013e649c(&local_170);
        goto LAB_013e2e24;
      }
      if (uVar1 == 0) {
        uVar14 = 0x19;
      }
      else {
        FUN_013be30c(&local_170,param_2,uVar14,pcVar12,local_3f8);
        pcVar12 = local_16c;
        uVar14 = (uint)local_170 & 0xffff;
        if (uVar14 == 0x1b) goto LAB_013e2cfc;
        local_3e8 = (undefined2)((uint)local_170 >> 0x10);
        FUN_01bed4e2(local_d0,&local_168,0x94);
        local_3ec = (uint)pcVar12 >> 0x10;
      }
      unaff_r11 = (undefined *)
                  (uVar16 << 0x18 | (uVar16 >> 8 & 0xff) << 0x10 | (uVar16 >> 0x10 & 0xff) << 8 |
                  uVar16 >> 0x18);
      local_1f8 = local_1b0;
      uStack_1f4 = uStack_1ac;
      uStack_1f0 = uStack_1a8;
      uStack_1ec = uStack_1a4;
      uStack_1e8 = uStack_1a0;
      local_1e4 = local_19c;
      uStack_1e0 = uStack_198;
      uStack_1d8 = uStack_190;
      uStack_1d4 = uStack_18c;
      local_1d0 = local_188;
      uStack_1cc = uStack_184;
      uStack_1c8 = uStack_180;
      uStack_1c4 = uStack_17c;
      uStack_1c0 = local_178;
      FUN_01bed4e2(auStack_290,local_d0,0x94);
      uStack_34c = uStack_1d4;
      local_348 = local_1d0;
      uStack_344 = uStack_1cc;
      uStack_340 = uStack_1c8;
      uStack_33c = uStack_1c4;
      uStack_338 = uStack_1c0;
      local_32a = (undefined2)local_3ec;
      local_32e = local_3e8;
      local_32c = SUB42(pcVar12,0);
      local_330 = (undefined2)uVar14;
      local_334 = (undefined2)uVar7;
      local_332 = uVar11;
      FUN_01bed4e2(&local_328,auStack_290,0x94);
      local_374 = pcVar9;
      local_294 = unaff_r11;
      if (param_4 == 0) {
        if (iVar13 == local_3b0) {
          FUN_013e6354(&local_3b0);
LAB_013e2b8c:
          iVar15 = local_3ac;
        }
      }
      else {
        sVar6 = FUN_013c7920(&local_330);
        if (sVar6 == 0x19) {
          if (local_3a0 == -0x80000000) {
            sVar6 = FUN_013c7920(&local_330);
            if (sVar6 != 0x19) {
              local_394 = CONCAT22(CONCAT11(local_394._3_1_,uVar3),uVar4);
                    /* WARNING: Subroutine does not return */
              FUN_012fb0ec(&DAT_004741dd,0x38,&DAT_01cf2c38);
            }
            uVar10 = 0x10;
            if (1 < uVar14) {
              uVar10 = uVar14 - 2;
            }
            uVar10 = uVar10 & 0xffff;
            if (uVar10 != 0xb) {
              if (uVar10 == 0xe) {
                FUN_013de7b8(&local_170,local_328,local_324);
                goto LAB_013e2bc0;
              }
              if (uVar10 != 0x17) {
                local_394 = CONCAT22(CONCAT11(local_394._3_1_,uVar3),uVar4);
                local_16c = FUN_013c686c;
                local_170 = local_d0;
                local_d0[0] = &local_330;
                    /* WARNING: Subroutine does not return */
                FUN_012fb100(&DAT_00585f8e,&local_170,&DAT_01cf2c48);
              }
            }
            local_168 = (uint *)0x0;
            local_16c = (code *)0x4;
            local_170 = (undefined2 **)0x0;
LAB_013e2bc0:
                    /* WARNING: Could not recover jumptable at 0x013e2bd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)(&UNK_013e2bd4 + *(int *)(&UNK_013e2bd4 + uVar7 * 4)))();
            return;
          }
          local_394 = CONCAT22(CONCAT11(local_394._3_1_,uVar3),uVar4);
          local_16c = (code *)&DAT_00474dc6;
          local_168 = (uint *)0x21;
          local_170 = (undefined2 **)CONCAT22(local_170._2_2_,0x10);
          iVar15 = FUN_013e649c(&local_170);
          *param_1 = -0x80000000;
          param_1[1] = iVar15;
          FUN_0077e7e4(local_378);
          goto LAB_013e2e60;
        }
        if (iVar13 == local_3b0) {
          FUN_013e6354(&local_3b0);
          goto LAB_013e2b8c;
        }
      }
      FUN_01bed864(iVar13 * 0xe8 + iVar15,local_378,0xe8);
      iVar13 = iVar13 + 1;
      param_3 = param_3 + -1;
      local_3a8 = iVar13;
    } while (param_3 != 0);
    local_394 = CONCAT22(CONCAT11(local_394._3_1_,uVar3),uVar4);
  }
  *param_1 = local_3b0;
  param_1[1] = local_3ac;
  param_1[2] = local_3a8;
  param_1[3] = local_3a0;
  param_1[4] = iStack_39c;
  param_1[5] = iStack_398;
  param_1[6] = local_394;
  param_1[7] = local_390;
  param_1[8] = local_388;
  param_1[9] = local_384;
  param_1[10] = local_380;
  return;
}

