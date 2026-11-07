// FUN_00a3debc @ 00a3debc size=4120 calls_out=49 calls_in=2
// strings: BUG: request parameters cell was already initialized. | boser::api::grpc::utilsopen/boser/boser/src/api/grpc/utils.rs | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | boser::api::grpc::utilsopen/boser/boser/src/api/grpc/utils.rs | InvalidParamSegmentInvalidParamInvalidCatchAll

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00a3debc(undefined4 *param_1,int param_2)

{
  bool bVar1;
  char *pcVar2;
  undefined1 uVar3;
  char cVar4;
  int *piVar5;
  int *******pppppppiVar6;
  undefined4 *puVar7;
  uint uVar8;
  int *******pppppppiVar9;
  int iVar10;
  undefined4 uVar11;
  int *******pppppppiVar12;
  int iVar13;
  int *******pppppppiVar14;
  uint *puVar15;
  int *******pppppppiVar16;
  int *piVar17;
  undefined8 uVar18;
  int *******local_27c;
  undefined1 auStack_270 [64];
  undefined4 local_230;
  undefined4 local_228;
  int *******local_224;
  int *******local_220;
  int *******local_218;
  int *******local_214;
  int *******pppppppiStack_210;
  int *******local_20c;
  int *******local_208;
  int *******pppppppiStack_204;
  undefined4 uStack_200;
  undefined4 local_1fc;
  int *******local_1d0;
  int *******local_1cc;
  int *******local_1c8;
  int *******local_1c4;
  int *******pppppppiStack_1c0;
  int *******pppppppiStack_1bc;
  int *******pppppppiStack_1b8;
  int *******pppppppiStack_1b4;
  int *******local_1b0;
  int *******pppppppiStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 local_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  int *******local_18c;
  int *******pppppppiStack_188;
  int *******pppppppiStack_184;
  int *******pppppppiStack_180;
  int *******local_178;
  int *******local_174;
  int *******local_170;
  undefined4 local_16c;
  int *******local_168;
  int *******local_164;
  int *******local_160;
  int *******local_15c;
  int *******local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 local_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 local_120;
  int *******local_11c;
  int *******local_118;
  int *******pppppppiStack_114;
  int *******local_110;
  int *******local_10c;
  int *******local_108;
  int *******local_104;
  undefined4 local_100;
  int *******pppppppiStack_f8;
  int *******pppppppiStack_f4;
  int *******pppppppiStack_f0;
  int *******local_ec;
  int *******local_e8;
  int *******pppppppiStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  int *******local_d8;
  int *******local_d4;
  int *******pppppppiStack_d0;
  int *******local_c8;
  int *******local_c4;
  int *******local_c0;
  undefined4 local_bc;
  int *******local_b4;
  int *******local_b0;
  int *******local_ac;
  int *******local_a8;
  int *******local_a0;
  int *******local_9c;
  int *******local_98;
  int ******local_90;
  int ******ppppppiStack_8c;
  int ******ppppppiStack_88;
  int ******ppppppiStack_84;
  int ******ppppppiStack_80;
  int ******local_7c;
  int ******ppppppiStack_78;
  int ******ppppppiStack_74;
  int ******ppppppiStack_70;
  int ******ppppppiStack_6c;
  int local_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  int local_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int *******local_40;
  int *******local_3c;
  int *******local_38;
  int *******local_34;
  int *******pppppppiStack_30;
  int *******local_2c;
  
  if (*(char *)(param_2 + 0x4c) != '\0') {
    if (*(char *)(param_2 + 0x4c) == '\x01') {
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c0e3d4);
    }
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c0e3d4);
  }
  piVar17 = *(int **)(param_2 + 0x48);
  FUN_01bed4e2(auStack_270,param_2,0x48);
  piVar5 = (int *)FUN_00a52660(local_230);
  if (piVar5 != (int *)0x0) {
    iVar10 = *piVar5;
    local_168 = (int *******)&DAT_80000000;
    local_16c = (int *******)0x0;
    local_174 = (int *******)0x0;
    local_178 = (int *******)0x0;
    FUN_0196ac88(&local_218,&local_178);
    uVar3 = (char)local_218;
    uVar8 = (uint)local_218 & 0xff;
    if (uVar8 == 6) {
      FUN_0094ccfc((uint)&local_218 | 4);
    }
    else {
      uVar11 = FUN_01bed4e2((uint)&local_110 | 1,(uint)&local_218 | 1,0x17);
      pppppppiVar9 = local_104;
      pppppppiVar14 = local_108;
      pppppppiVar6 = local_10c;
      local_110 = (int *******)CONCAT31(local_110._1_3_,uVar3);
      if (uVar8 == 5) {
        uVar18 = thunk_FUN_01bee35a(uVar11,0x2c0);
        puVar7 = (undefined4 *)((int)uVar18 + (int)((ulonglong)uVar18 >> 0x20));
        if (pppppppiVar6 == (int *******)0x0) {
          pppppppiVar9 = (int *******)0x0;
        }
        pppppppiVar12 = pppppppiVar6;
        if (pppppppiVar6 != (int *******)0x0) {
          pppppppiVar12 = (int *******)&DAT_00000001;
        }
        if (*(char *)(puVar7 + 4) == '\0') {
          FUN_019ae6ac(&local_178);
          *puVar7 = local_178;
          puVar7[1] = local_174;
          puVar7[2] = local_170;
          puVar7[3] = local_16c;
          *(undefined1 *)(puVar7 + 4) = 1;
        }
        local_208 = (int *******)*puVar7;
        pppppppiStack_204 = (int *******)puVar7[1];
        uStack_200 = puVar7[2];
        local_1fc = puVar7[3];
        *puVar7 = (undefined1 *)((int)local_208 + 1);
        puVar7[1] = (int)pppppppiStack_204 + (uint)((int *******)0xfffffffe < local_208);
        local_218 = (int *******)&DAT_0056d238;
        local_214 = (int *******)0x0;
        pppppppiStack_210 = (int *******)0x0;
        local_20c = (int *******)0x0;
        if (pppppppiVar9 != (int *******)0x0) {
          FUN_01aa37a0(&local_218,pppppppiVar9,local_208,pppppppiStack_204,uStack_200,local_1fc);
        }
        local_15c = pppppppiVar14;
        local_16c = pppppppiVar14;
        local_160 = pppppppiVar6;
        local_170 = pppppppiVar6;
        local_164 = (int *******)0x0;
        local_174 = (int *******)0x0;
        local_178 = pppppppiVar12;
        local_168 = pppppppiVar12;
        local_158 = pppppppiVar9;
        while( true ) {
          uVar18 = FUN_01a41998(&local_178);
          iVar13 = (int)uVar18;
          if (iVar13 == 0) break;
          FUN_006666fc(&local_d8,*(undefined4 *)(iVar13 + 4),*(undefined4 *)(iVar13 + 8));
          local_a8 = (int *******)0x0;
          local_ac = (int *******)&DAT_00000001;
          local_b0 = (int *******)0x0;
          local_bc = 0;
          local_c0 = (int *******)0x60000020;
          local_c4 = (int *******)&DAT_01c0e3e4;
          local_c8 = (int *******)&local_b0;
          iVar13 = FUN_01968fa4((int)((ulonglong)uVar18 >> 0x20),&local_c8);
          if (iVar13 != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_013073dc(&DAT_00533383,0x37,&local_228,&DAT_01c0e3fc,&DAT_01d30334);
          }
          local_34 = local_b0;
          pppppppiStack_30 = local_ac;
          local_2c = local_a8;
          local_40 = local_d8;
          local_3c = local_d4;
          local_38 = pppppppiStack_d0;
          FUN_01aa42f8(&local_c8,&local_218,&local_40,&local_34);
          if (local_c8 != (int *******)&DAT_80000000) {
            FUN_019bb7e0(local_c8,local_c4);
          }
        }
        pppppppiStack_f8 = local_218;
        pppppppiStack_f4 = local_214;
        pppppppiStack_f0 = pppppppiStack_210;
        local_ec = local_20c;
        local_e8 = local_208;
        pppppppiStack_e4 = pppppppiStack_204;
        uStack_e0 = uStack_200;
        uStack_dc = local_1fc;
        if (local_20c == (int *******)0x0) {
          FUN_0126f23c(&pppppppiStack_f8);
          uVar8 = 2;
        }
        else {
          FUN_0067b1ac(&local_178,&pppppppiStack_f8);
          local_b0 = local_178;
          local_ac = local_174;
          local_a8 = local_170;
          uVar8 = (uint)local_16c & 0xff;
          local_228._0_3_ = (undefined3)((uint)local_16c >> 8);
        }
        FUN_00db4764(&local_110);
        if (uVar8 != 2) {
          local_178 = local_b0;
          local_174 = local_ac;
          local_170 = local_a8;
          local_16c = (int *******)
                      CONCAT13(local_228._2_1_,CONCAT21((undefined2)local_228,(char)uVar8));
          DataMemoryBarrier(0xb);
          if (*(int *)(iVar10 + 0x18) != 0) {
            FUN_00b065ec(iVar10 + 8,&local_178);
          }
          if ((char)local_16c != '\x02') {
            local_218 = local_178;
            local_214 = local_174;
            pppppppiStack_210 = local_170;
            local_20c = local_16c;
            FUN_019cf348();
            if ((DAT_01d50f88 < 5) &&
               (((DAT_01d4c488 - 1 < 2 ||
                 ((DAT_01d4c488 != 0 && (cVar4 = FUN_01aaafa8(&DAT_01d4c480), cVar4 != '\0')))) &&
                (iVar10 = FUN_01aaa278(DAT_01d4c480), iVar10 != 0)))) {
              if (*(int ********)(DAT_01d4c480 + 0x20) == (int *******)0x0) {
LAB_00a3eedc:
                    /* WARNING: Subroutine does not return */
                FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c17708);
              }
              local_10c = (int *******)&local_d8;
              local_170 = *(int ********)(DAT_01d4c480 + 0x24);
              local_16c = *(int ********)(DAT_01d4c480 + 0x28);
              local_c0 = (int *******)(DAT_01d4c480 + 0x1c);
              local_178 = (int *******)*local_c0;
              local_110 = (int *******)&local_178;
              local_168 = (int *******)0x0;
              local_c4 = (int *******)&DAT_00000001;
              local_108 = (int *******)&DAT_01d2ea4c;
              local_d4 = (int *******)&DAT_0000006b;
              local_d8 = (int *******)0x3fe987;
              local_174 = *(int ********)(DAT_01d4c480 + 0x20);
              local_c8 = (int *******)&local_110;
              FUN_01aaaecc(DAT_01d4c480,&local_c8);
              iVar10 = DAT_01d4c480;
              if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
                local_3c = *(int ********)(DAT_01d4c480 + 0x14);
                local_38 = *(int ********)(DAT_01d4c480 + 0x18);
                local_40 = (int *******)&DAT_00000001;
                DataMemoryBarrier(0xb);
                puVar7 = DAT_01d4edc8;
                pcVar2 = DAT_01d4edc4;
                if (DAT_01d51174 != 2) {
                  puVar7 = &DAT_01cfc5e0;
                  pcVar2 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
                }
                iVar13 = (*(code *)puVar7[3])(pcVar2,&local_40);
                if (iVar13 != 0) {
                  local_218 = local_40;
                  local_214 = local_3c;
                  pppppppiStack_210 = local_38;
                  FUN_01aaa328(iVar10,pcVar2,puVar7[4],&local_218,&local_c8);
                }
              }
            }
            else {
              iVar10 = DAT_01d4c480;
              if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
                local_c4 = *(int ********)(DAT_01d4c480 + 0x14);
                local_c0 = *(int ********)(DAT_01d4c480 + 0x18);
                local_c8 = (int *******)&DAT_00000001;
                DataMemoryBarrier(0xb);
                puVar7 = DAT_01d4edc8;
                pcVar2 = DAT_01d4edc4;
                if (DAT_01d51174 != 2) {
                  puVar7 = &DAT_01cfc5e0;
                  pcVar2 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
                }
                iVar13 = (*(code *)puVar7[3])(pcVar2,&local_c8);
                if (iVar13 != 0) {
                  local_108 = (int *******)(DAT_01d4c480 + 0x1c);
                  if (*(int ********)(DAT_01d4c480 + 0x20) == (int *******)0x0) goto LAB_00a3eedc;
                  local_3c = (int *******)&local_d8;
                  local_170 = *(int ********)(DAT_01d4c480 + 0x24);
                  local_16c = *(int ********)(DAT_01d4c480 + 0x28);
                  local_40 = (int *******)&local_178;
                  local_110 = (int *******)&local_40;
                  local_168 = (int *******)0x0;
                  local_10c = (int *******)&DAT_00000001;
                  local_38 = (int *******)&DAT_01d2ea4c;
                  local_d4 = (int *******)&DAT_0000006b;
                  local_d8 = (int *******)0x3fe987;
                  local_218 = local_c8;
                  local_214 = local_c4;
                  pppppppiStack_210 = local_c0;
                  local_178 = (int *******)*local_108;
                  local_174 = *(int ********)(DAT_01d4c480 + 0x20);
                  FUN_01aaa328(iVar10,pcVar2,puVar7[4],&local_218,&local_110);
                }
              }
            }
          }
        }
      }
      else {
        FUN_00db4764(&local_110);
      }
    }
  }
  iVar10 = *piVar17;
  puVar15 = (uint *)(iVar10 + 8);
  uVar8 = *(uint *)(iVar10 + 8);
  if (uVar8 < 0x3ffffffe) {
    if (*puVar15 != uVar8) {
      ClearExclusiveLocal();
      goto LAB_00a3e3c8;
    }
    bVar1 = (bool)hasExclusiveAccess(puVar15);
    if (!bVar1) goto LAB_00a3e3c8;
    *puVar15 = uVar8 + 1;
    DataMemoryBarrier(0xb);
  }
  else {
LAB_00a3e3c8:
    FUN_0197a5c8(puVar15);
  }
  if (*(char *)(iVar10 + 0x10) != '\0') {
    local_178 = (int *******)(iVar10 + 0x14);
    local_174 = (int *******)puVar15;
                    /* WARNING: Subroutine does not return */
    FUN_013073dc("BUG: SettingsManager lock poisoned",0x22,&local_178,&DAT_01c0e40c,&DAT_01c0e3c4);
  }
  FUN_00b0b898(&local_178,*(undefined4 *)(iVar10 + 0x18),*(undefined4 *)(iVar10 + 0x1c));
  FUN_00aeecac(&local_110,&local_178);
  local_100 = 0;
  local_b4 = (int *******)0x0;
  local_40 = local_110;
  local_3c = local_10c;
  local_38 = local_108;
  local_34 = local_104;
  pppppppiStack_30 = (int *******)0x0;
  local_2c = (int *******)&local_b4;
  FUN_00b1489c(&local_90,&local_40);
  if (local_90 == (int ******)&DAT_80000000) {
    local_98 = (int *******)0x0;
    local_9c = (int *******)&DAT_00000008;
    local_a0 = (int *******)0x0;
    FUN_009635e4(&local_40);
LAB_00a3e560:
    local_a8 = (int *******)0x0;
    local_b0 = (int *******)0x0;
    FUN_01488188(&local_a0);
  }
  else {
    pppppppiVar9 = (int *******)thunk_FUN_01be5118(0xa0);
    if (pppppppiVar9 == (int *******)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(8,0xa0);
    }
    *pppppppiVar9 = local_90;
    pppppppiVar9[1] = ppppppiStack_8c;
    pppppppiVar9[2] = ppppppiStack_88;
    pppppppiVar9[3] = ppppppiStack_84;
    pppppppiVar9[4] = ppppppiStack_80;
    pppppppiVar9[5] = local_7c;
    pppppppiVar9[6] = ppppppiStack_78;
    pppppppiVar9[7] = ppppppiStack_74;
    pppppppiVar9[8] = ppppppiStack_70;
    pppppppiVar9[9] = ppppppiStack_6c;
    local_c0 = (int *******)&DAT_00000001;
    local_c8 = (int *******)&SUB_00000004;
    iVar10 = 0x28;
    local_178 = local_40;
    local_174 = local_3c;
    local_170 = local_38;
    local_16c = local_34;
    local_168 = pppppppiStack_30;
    local_164 = local_2c;
    local_c4 = pppppppiVar9;
    while (pppppppiVar6 = local_c0, FUN_00b1489c(&local_68,&local_178), local_68 != -0x80000000) {
      if (pppppppiVar6 == local_c8) {
        FUN_0132b898(&local_c8,pppppppiVar6,1,8,0x28);
        pppppppiVar9 = local_c4;
      }
      piVar5 = (int *)((int)pppppppiVar9 + iVar10);
      local_c0 = (int *******)((int)pppppppiVar6 + 1);
      iVar10 = iVar10 + 0x28;
      *piVar5 = local_68;
      piVar5[1] = iStack_64;
      piVar5[2] = iStack_60;
      piVar5[3] = iStack_5c;
      piVar5[4] = iStack_58;
      piVar5[5] = local_54;
      piVar5[6] = iStack_50;
      piVar5[7] = iStack_4c;
      piVar5[8] = iStack_48;
      piVar5[9] = iStack_44;
    }
    FUN_009635e4(&local_178);
    pppppppiVar9 = local_c4;
    local_a0 = local_c8;
    local_9c = local_c4;
    local_98 = local_c0;
    if (local_c0 == (int *******)0x0) goto LAB_00a3e560;
    if (local_c0 != (int *******)&DAT_00000001) {
      if (&DAT_00000014 < local_c0) {
        FUN_00a5230c(local_c4);
      }
      else {
        iVar13 = 0x28;
        iVar10 = (int)local_c0 * 0x28;
        do {
          FUN_0093fd04(pppppppiVar9,(int)pppppppiVar9 + iVar13);
          iVar13 = iVar13 + 0x28;
        } while (iVar10 != iVar13);
      }
    }
    FUN_01494038(&local_b0,&local_a0);
  }
  pppppppiVar9 = local_b4;
  if (local_b4 == (int *******)0x0) {
    local_1cc = local_a8;
    local_1d0 = local_ac;
    local_27c = local_b0;
  }
  else {
    FUN_0196afa8(&local_b0);
    local_34 = (int *******)FUN_00667a08;
    local_40 = (int *******)&local_c8;
    local_b0 = pppppppiVar9;
    local_c4 = (int *******)&DAT_0000001a;
    local_c8 = (int *******)0x3e61c4;
    local_3c = (int *******)&DAT_0132b6a0;
    local_38 = (int *******)&local_b0;
    FUN_00664898(&local_110,&DAT_00587911,&local_40);
    local_40 = local_110;
    local_3c = local_10c;
    local_38 = local_108;
    FUN_01a70fd4(&local_178,0xd,&local_40);
    (*(code *)**local_b0)();
    local_27c = local_170;
    pppppppiVar6 = local_174;
    pppppppiVar9 = local_178;
    local_1d0 = local_16c;
    local_1cc = local_168;
    FUN_01bed4e2(&local_218,&local_164,0x44);
    local_1c4 = local_1cc;
    local_1c8 = local_1d0;
    if (pppppppiVar9 != (int *******)&DAT_00000003 || pppppppiVar6 != (int *******)0x0) {
      FUN_01bed4e2(&pppppppiStack_1c0,&local_218,0x44);
      DataMemoryBarrier(0xb);
      do {
        uVar8 = *puVar15;
        bVar1 = (bool)hasExclusiveAccess(puVar15);
      } while (!bVar1);
      *puVar15 = uVar8 - 1;
      if ((uVar8 - 1 & 0xbfffffff) == 0x80000000) {
        FUN_019a33c4(puVar15);
      }
      FUN_00f9604c(auStack_270);
      pppppppiVar14 = pppppppiStack_114;
      pppppppiVar12 = local_11c;
      pppppppiVar16 = local_118;
      goto LAB_00a3eb20;
    }
  }
  local_220 = local_1cc;
  local_224 = local_1d0;
  DataMemoryBarrier(0xb);
  do {
    uVar8 = *puVar15;
    bVar1 = (bool)hasExclusiveAccess(puVar15);
  } while (!bVar1);
  *puVar15 = uVar8 - 1;
  local_228 = local_27c;
  if ((uVar8 - 1 & 0xbfffffff) == 0x80000000) {
    FUN_019a33c4(puVar15);
  }
  local_b0 = local_228;
  local_ac = local_224;
  local_a8 = local_220;
  DataMemoryBarrier(0xb);
  if (DAT_01d4b888 != 0) {
    FUN_00b06774();
  }
  local_40 = (int *******)DAT_01d4b870;
  local_3c = (int *******)DAT_01d4b874;
  local_38 = (int *******)DAT_01d4b878;
  local_34 = (int *******)DAT_01d4b87c;
  pppppppiStack_30 = (int *******)DAT_01d4b880;
  local_2c = (int *******)DAT_01d4b884;
  local_214 = (int *******)FUN_00977328;
  pppppppiVar16 = (int *******)&local_218;
  local_218 = (int *******)&local_40;
  FUN_00664898(&local_178,&DAT_00578f04,pppppppiVar16);
  pppppppiVar12 = local_170;
  pppppppiVar14 = local_174;
  pppppppiVar9 = local_178;
  uVar11 = 7;
  local_c0 = (int *******)0x0;
  local_c8 = (int *******)0x0;
  pppppppiVar6 = (int *******)thunk_FUN_01be5118(7);
  if (pppppppiVar6 != (int *******)0x0) {
    *(undefined4 *)((int)pppppppiVar6 + 3) = 0x616d6568;
    *pppppppiVar6 = (int ******)0x68637324;
    local_108 = (int *******)&DAT_00000007;
    local_110 = (int *******)&DAT_00000007;
    local_10c = pppppppiVar6;
    FUN_015383a0(&local_178,"https://json-schema.org/draft/2020-12/schema",0x2c);
    if ((char)local_178 == '\x06') {
      local_218 = local_174;
                    /* WARNING: Subroutine does not return */
      FUN_013073dc(&DAT_00533467,0x2b,&local_218,&DAT_01c0c780,&DAT_01c0c7d0);
    }
    local_218 = local_178;
    local_214 = local_174;
    pppppppiStack_210 = local_170;
    local_20c = local_16c;
    local_208 = local_168;
    pppppppiStack_204 = local_164;
    FUN_0196b484(&local_178,&local_c8,&local_110,pppppppiVar16);
    if ((char)local_178 != '\x06') {
      FUN_00db4764(&local_178);
    }
    uVar11 = 3;
    pppppppiVar6 = (int *******)thunk_FUN_01be5118(3);
    if (pppppppiVar6 != (int *******)0x0) {
      *(undefined1 *)((int)pppppppiVar6 + 2) = 100;
      *(undefined2 *)pppppppiVar6 = 0x6924;
      local_108 = (int *******)&DAT_00000003;
      local_110 = (int *******)&DAT_00000003;
      local_10c = pppppppiVar6;
      FUN_01274408(&local_178,pppppppiVar14,pppppppiVar12);
      if ((char)local_178 == '\x06') {
        local_218 = local_174;
                    /* WARNING: Subroutine does not return */
        FUN_013073dc(&DAT_00533467,0x2b,&local_218,&DAT_01c0c780,&DAT_01c0c7e0);
      }
      local_218 = local_178;
      local_214 = local_174;
      pppppppiStack_210 = local_170;
      local_20c = local_16c;
      local_208 = local_168;
      pppppppiStack_204 = local_164;
      FUN_0196b484(&local_178,&local_c8,&local_110,pppppppiVar16);
      if ((char)local_178 != '\x06') {
        FUN_00db4764(&local_178);
      }
      uVar11 = 5;
      pppppppiVar6 = (int *******)thunk_FUN_01be5118(5);
      if (pppppppiVar6 != (int *******)0x0) {
        *(undefined1 *)(pppppppiVar6 + 1) = 0x65;
        *pppppppiVar6 = (int ******)0x6c746974;
        local_108 = (int *******)&DAT_00000005;
        local_110 = (int *******)&DAT_00000005;
        local_10c = pppppppiVar6;
        FUN_015383a0(&local_178,"Braiins OS Advanced Settings",0x1c);
        if ((char)local_178 == '\x06') {
          local_218 = local_174;
                    /* WARNING: Subroutine does not return */
          FUN_013073dc(&DAT_00533467,0x2b,&local_218,&DAT_01c0c780,&DAT_01c0c7f0);
        }
        local_218 = local_178;
        local_214 = local_174;
        pppppppiStack_210 = local_170;
        local_20c = local_16c;
        local_208 = local_168;
        pppppppiStack_204 = local_164;
        FUN_0196b484(&local_178,&local_c8,&local_110,pppppppiVar16);
        if ((char)local_178 != '\x06') {
          FUN_00db4764(&local_178);
        }
        uVar11 = 4;
        pppppppiVar6 = (int *******)thunk_FUN_01be5118(4);
        if (pppppppiVar6 != (int *******)0x0) {
          *pppppppiVar6 = (int ******)0x65707974;
          local_108 = (int *******)&SUB_00000004;
          local_110 = (int *******)&SUB_00000004;
          local_10c = pppppppiVar6;
          FUN_015383a0(&local_178,"objectSingle",6);
          if ((char)local_178 == '\x06') {
            local_218 = local_174;
                    /* WARNING: Subroutine does not return */
            FUN_013073dc(&DAT_00533467,0x2b,&local_218,&DAT_01c0c780,&DAT_01c0c800);
          }
          local_218 = local_178;
          local_214 = local_174;
          pppppppiStack_210 = local_170;
          local_20c = local_16c;
          local_208 = local_168;
          pppppppiStack_204 = local_164;
          FUN_0196b484(&local_178,&local_c8,&local_110,pppppppiVar16);
          if ((char)local_178 != '\x06') {
            FUN_00db4764(&local_178);
          }
          uVar11 = 10;
          pppppppiVar6 = (int *******)thunk_FUN_01be5118(10);
          if (pppppppiVar6 != (int *******)0x0) {
            FUN_01bed4e2(pppppppiVar6,"properties",10);
            local_108 = (int *******)&DAT_0000000a;
            puVar7 = (undefined4 *)((uint)&local_178 | 4);
            local_110 = (int *******)&DAT_0000000a;
            *puVar7 = local_b0;
            puVar7[1] = local_ac;
            puVar7[2] = local_a8;
            local_178 = (int *******)CONCAT31(local_178._1_3_,5);
            local_10c = pppppppiVar6;
            FUN_0196b484(&local_218,&local_c8,&local_110,&local_178);
            if ((char)local_218 != '\x06') {
              FUN_00db4764(&local_218);
            }
            local_d8 = local_c8;
            local_d4 = local_c4;
            pppppppiStack_d0 = local_c0;
            FUN_019bb7e0(pppppppiVar9,pppppppiVar14);
            FUN_00ab523c(&local_178,&local_d8);
            puVar7 = (undefined4 *)((uint)&local_218 | 4);
            *puVar7 = local_178;
            puVar7[1] = local_174;
            puVar7[2] = local_170;
            local_218 = (int *******)&DAT_00000001;
            FUN_0160aaa4(&local_178,0);
            local_18c = local_218;
            pppppppiStack_188 = local_214;
            pppppppiStack_184 = pppppppiStack_210;
            pppppppiStack_180 = local_20c;
            local_27c = local_178;
            local_1c8 = local_174;
            local_1c4 = local_170;
            pppppppiStack_1c0 = local_16c;
            pppppppiStack_1bc = local_168;
            pppppppiStack_1b8 = local_164;
            pppppppiStack_1b4 = local_160;
            local_1b0 = local_15c;
            pppppppiStack_1ac = local_158;
            uStack_1a8 = uStack_154;
            uStack_1a4 = uStack_150;
            local_1a0 = local_14c;
            uStack_19c = uStack_148;
            uStack_198 = uStack_144;
            uStack_194 = uStack_140;
            uStack_190 = uStack_13c;
            FUN_0196afa8(&local_d8);
            FUN_00f9604c(auStack_270);
            local_120 = 0;
            pppppppiVar9 = (int *******)&DAT_00000003;
            pppppppiVar6 = (int *******)0x0;
LAB_00a3eb20:
            *param_1 = pppppppiVar9;
            param_1[3] = local_1c8;
            param_1[4] = local_1c4;
            param_1[2] = local_27c;
            param_1[1] = pppppppiVar6;
            FUN_01bed4e2(param_1 + 5,&pppppppiStack_1c0,0x44);
            param_1[0x18] = pppppppiVar16;
            param_1[0x16] = local_120;
            param_1[0x19] = pppppppiVar14;
            param_1[0x17] = pppppppiVar12;
            *(undefined1 *)(param_2 + 0x4c) = 1;
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00664620(1,uVar11);
}

