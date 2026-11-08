// FUN_00a3d364 @ 00a3d364 size=2380 calls_out=36 calls_in=1
// strings: BUG: request parameters cell was already initialized. | boser::api::grpc::utilsopen/boser/boser/src/api/grpc/utils.rs | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | boser::api::grpc::utilsopen/boser/boser/src/api/grpc/utils.rs | InvalidParamSegmentInvalidParamInvalidCatchAll

void FUN_00a3d364(undefined4 *param_1,int param_2)

{
  bool bVar1;
  char *pcVar2;
  undefined1 uVar3;
  char cVar4;
  int *piVar5;
  undefined4 uVar6;
  int *****pppppiVar7;
  undefined4 *puVar8;
  uint uVar9;
  int iVar10;
  undefined4 uVar11;
  int iVar12;
  undefined4 uVar13;
  int *****pppppiVar14;
  int *****pppppiVar15;
  uint *puVar16;
  int *piVar17;
  int ****ppppiVar18;
  undefined8 uVar19;
  undefined1 auStack_200 [64];
  undefined4 local_1c0;
  int *****local_1b8;
  int *****pppppiStack_1b4;
  int *****pppppiStack_1b0;
  int *****local_1ac;
  uint local_1a8;
  uint uStack_1a4;
  uint uStack_1a0;
  uint local_19c;
  int *****pppppiStack_168;
  int *****pppppiStack_164;
  int *****pppppiStack_160;
  int *****pppppiStack_15c;
  int *****pppppiStack_158;
  undefined4 local_154;
  int *****pppppiStack_150;
  int *****pppppiStack_14c;
  int iStack_148;
  undefined4 uStack_144;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  int *****local_128;
  int *****pppppiStack_124;
  int *****pppppiStack_120;
  int *****pppppiStack_11c;
  int *****local_118;
  int *****local_114;
  int *****local_110;
  undefined4 local_10c;
  int *****local_108;
  undefined4 local_104;
  int *****local_100;
  int *****local_fc;
  int local_f8;
  undefined4 uStack_f4;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_c0;
  int *****local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined2 local_ac;
  undefined1 local_aa;
  int *****local_a8;
  int *****local_a4;
  int *****local_a0;
  int local_9c;
  int *****pppppiStack_90;
  int *****pppppiStack_8c;
  int *****pppppiStack_88;
  int *****local_84;
  uint local_80;
  uint uStack_7c;
  uint uStack_78;
  uint uStack_74;
  int *****local_70;
  int *****local_6c;
  int *****local_68;
  int *****local_64;
  int *****pppppiStack_60;
  int *****pppppiStack_5c;
  int *****local_58;
  int *****local_54;
  int *****pppppiStack_50;
  int *****local_48;
  int *****local_44;
  int *****local_40;
  int *****local_38;
  int *****local_34;
  int *****local_30;
  undefined4 local_2c;
  
  if (*(char *)(param_2 + 0x4c) != '\0') {
    if (*(char *)(param_2 + 0x4c) == '\x01') {
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c0e3a4);
    }
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c0e3a4);
  }
  piVar17 = *(int **)(param_2 + 0x48);
  FUN_01bed4e2(auStack_200,param_2,0x48);
  piVar5 = (int *)FUN_00a52660(local_1c0);
  if (piVar5 != (int *)0x0) {
    iVar12 = *piVar5;
    local_108 = (int *****)&DAT_80000000;
    local_10c = (code *)0x0;
    local_114 = (int *****)0x0;
    local_118 = (int *****)0x0;
    FUN_0196ac88(&local_1b8,&local_118);
    uVar3 = local_1b8._0_1_;
    uVar9 = (uint)local_1b8 & 0xff;
    if (uVar9 == 6) {
      FUN_0094ccfc((uint)&local_1b8 | 4);
    }
    else {
      uVar6 = FUN_01bed4e2((uint)&local_a8 | 1,(uint)&local_1b8 | 1,0x17);
      pppppiVar15 = local_a0;
      pppppiVar7 = local_a4;
      local_a8 = (int *****)CONCAT31(local_a8._1_3_,uVar3);
      if (uVar9 == 5) {
        uVar19 = thunk_FUN_01bee35a(uVar6,0x2c0);
        puVar16 = (uint *)((int)uVar19 + (int)((ulonglong)uVar19 >> 0x20));
        iVar10 = local_9c;
        if (pppppiVar7 == (int *****)0x0) {
          iVar10 = 0;
        }
        pppppiVar14 = (int *****)(uint)(pppppiVar7 != (int *****)0x0);
        if ((char)puVar16[4] == '\0') {
          FUN_019ae6ac(&local_118);
          *puVar16 = (uint)local_118;
          puVar16[1] = (uint)local_114;
          puVar16[2] = (uint)local_110;
          puVar16[3] = (uint)local_10c;
          *(undefined1 *)(puVar16 + 4) = 1;
        }
        local_1a8 = *puVar16;
        uStack_1a4 = puVar16[1];
        uStack_1a0 = puVar16[2];
        local_19c = puVar16[3];
        *puVar16 = local_1a8 + 1;
        puVar16[1] = uStack_1a4 + (0xfffffffe < local_1a8);
        local_1b8 = (int *****)&DAT_0056d238;
        pppppiStack_1b4 = (int *****)0x0;
        pppppiStack_1b0 = (int *****)0x0;
        local_1ac = (int *****)0x0;
        if (iVar10 != 0) {
          FUN_01aa37a0(&local_1b8,iVar10,local_1a8,uStack_1a4,uStack_1a0,local_19c);
        }
        local_fc = pppppiVar15;
        local_10c = (code *)pppppiVar15;
        local_100 = pppppiVar7;
        local_110 = pppppiVar7;
        local_104 = 0;
        local_114 = (int *****)0x0;
        local_118 = pppppiVar14;
        local_108 = pppppiVar14;
        local_f8 = iVar10;
        while( true ) {
          uVar19 = FUN_01a41998(&local_118);
          iVar10 = (int)uVar19;
          if (iVar10 == 0) break;
          FUN_006666fc(&local_58,*(undefined4 *)(iVar10 + 4),*(undefined4 *)(iVar10 + 8));
          local_40 = (int *****)0x0;
          local_44 = (int *****)&DAT_00000001;
          local_48 = (int *****)0x0;
          local_2c = 0;
          local_30 = (int *****)0x60000020;
          local_34 = (int *****)&DAT_01c0e3e4;
          local_38 = (int *****)&local_48;
          iVar10 = FUN_01968fa4((int)((ulonglong)uVar19 >> 0x20),&local_38);
          if (iVar10 != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_013073dc(&DAT_00533383,0x37,&local_ac,&DAT_01c0e3fc,&DAT_01d30334);
          }
          local_64 = local_48;
          pppppiStack_60 = local_44;
          pppppiStack_5c = local_40;
          local_70 = local_58;
          local_6c = local_54;
          local_68 = pppppiStack_50;
          FUN_01aa42f8(&local_38,&local_1b8,&local_70,&local_64);
          if (local_38 != (int *****)&DAT_80000000) {
            FUN_019bb7e0(local_38,local_34);
          }
        }
        pppppiStack_90 = local_1b8;
        pppppiStack_8c = pppppiStack_1b4;
        pppppiStack_88 = pppppiStack_1b0;
        local_84 = local_1ac;
        local_80 = local_1a8;
        uStack_7c = uStack_1a4;
        uStack_78 = uStack_1a0;
        uStack_74 = local_19c;
        if (local_1ac == (int *****)0x0) {
          FUN_0126f23c(&pppppiStack_90);
          uVar9 = 2;
        }
        else {
          FUN_0067b1ac(&local_118,&pppppiStack_90);
          local_48 = local_118;
          local_44 = local_114;
          local_40 = local_110;
          uVar9 = (uint)local_10c & 0xff;
          local_ac = local_10c._1_2_;
          local_aa = local_10c._3_1_;
        }
        FUN_00db4764(&local_a8);
        if (uVar9 != 2) {
          local_118 = local_48;
          local_114 = local_44;
          local_110 = local_40;
          local_10c = (code *)CONCAT13(local_aa,CONCAT21(local_ac,(char)uVar9));
          DataMemoryBarrier(0xb);
          if (*(int *)(iVar12 + 0x18) != 0) {
            FUN_00b065ec(iVar12 + 8,&local_118);
          }
          if ((char)local_10c != '\x02') {
            local_1b8 = local_118;
            pppppiStack_1b4 = local_114;
            pppppiStack_1b0 = local_110;
            local_1ac = (int *****)local_10c;
            FUN_019cf348();
            if ((DAT_01d50f88 < 5) &&
               (((DAT_01d4c488 - 1 < 2 ||
                 ((DAT_01d4c488 != 0 && (cVar4 = FUN_01aaafa8(&DAT_01d4c480), cVar4 != '\0')))) &&
                (iVar12 = FUN_01aaa278(DAT_01d4c480), iVar12 != 0)))) {
              if (*(int ******)(DAT_01d4c480 + 0x20) == (int *****)0x0) {
LAB_00a3dca0:
                    /* WARNING: Subroutine does not return */
                FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c17708);
              }
              local_a4 = (int *****)&local_58;
              local_110 = *(int ******)(DAT_01d4c480 + 0x24);
              local_10c = *(code **)(DAT_01d4c480 + 0x28);
              local_30 = (int *****)(DAT_01d4c480 + 0x1c);
              local_118 = (int *****)*local_30;
              local_a8 = (int *****)&local_118;
              local_108 = (int *****)0x0;
              local_34 = (int *****)&DAT_00000001;
              local_a0 = (int *****)&DAT_01d2ea4c;
              local_54 = (int *****)&DAT_0000006b;
              local_58 = (int *****)0x3fe987;
              local_114 = *(int ******)(DAT_01d4c480 + 0x20);
              local_38 = (int *****)&local_a8;
              FUN_01aaaecc(DAT_01d4c480,&local_38);
              iVar12 = DAT_01d4c480;
              if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
                local_6c = *(int ******)(DAT_01d4c480 + 0x14);
                local_68 = *(int ******)(DAT_01d4c480 + 0x18);
                local_70 = (int *****)&DAT_00000001;
                DataMemoryBarrier(0xb);
                puVar8 = DAT_01d4edc8;
                pcVar2 = DAT_01d4edc4;
                if (DAT_01d51174 != 2) {
                  puVar8 = &DAT_01cfc5e0;
                  pcVar2 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
                }
                iVar10 = (*(code *)puVar8[3])(pcVar2,&local_70);
                if (iVar10 != 0) {
                  local_1b8 = local_70;
                  pppppiStack_1b4 = local_6c;
                  pppppiStack_1b0 = local_68;
                  FUN_01aaa328(iVar12,pcVar2,puVar8[4],&local_1b8,&local_38);
                }
              }
            }
            else {
              iVar12 = DAT_01d4c480;
              if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
                local_34 = *(int ******)(DAT_01d4c480 + 0x14);
                local_30 = *(int ******)(DAT_01d4c480 + 0x18);
                local_38 = (int *****)&DAT_00000001;
                DataMemoryBarrier(0xb);
                puVar8 = DAT_01d4edc8;
                pcVar2 = DAT_01d4edc4;
                if (DAT_01d51174 != 2) {
                  puVar8 = &DAT_01cfc5e0;
                  pcVar2 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
                }
                iVar10 = (*(code *)puVar8[3])(pcVar2,&local_38);
                if (iVar10 != 0) {
                  local_a0 = (int *****)(DAT_01d4c480 + 0x1c);
                  if (*(int ******)(DAT_01d4c480 + 0x20) == (int *****)0x0) goto LAB_00a3dca0;
                  local_6c = (int *****)&local_58;
                  local_110 = *(int ******)(DAT_01d4c480 + 0x24);
                  local_10c = *(code **)(DAT_01d4c480 + 0x28);
                  local_70 = (int *****)&local_118;
                  local_a8 = (int *****)&local_70;
                  local_a4 = (int *****)&DAT_00000001;
                  local_108 = (int *****)0x0;
                  local_68 = (int *****)&DAT_01d2ea4c;
                  local_54 = (int *****)&DAT_0000006b;
                  local_58 = (int *****)0x3fe987;
                  local_1b8 = local_38;
                  pppppiStack_1b4 = local_34;
                  pppppiStack_1b0 = local_30;
                  local_118 = (int *****)*local_a0;
                  local_114 = *(int ******)(DAT_01d4c480 + 0x20);
                  FUN_01aaa328(iVar12,pcVar2,puVar8[4],&local_1b8,&local_a8);
                }
              }
            }
          }
        }
      }
      else {
        FUN_00db4764(&local_a8);
      }
    }
  }
  iVar12 = *piVar17;
  ppppiVar18 = (int ****)(iVar12 + 8);
  if (*ppppiVar18 == (int ***)0x0) {
    bVar1 = (bool)hasExclusiveAccess(ppppiVar18);
    if (bVar1) {
      *ppppiVar18 = (int ***)0x3fffffff;
      DataMemoryBarrier(0xb);
      goto LAB_00a3d85c;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  FUN_019ae2e0(ppppiVar18);
LAB_00a3d85c:
  uVar9 = 0;
  if ((DAT_01d51b08 & 0x7fffffff) != 0) {
    uVar9 = FUN_0197ac0c();
    uVar9 = uVar9 ^ 1;
  }
  if (*(char *)(iVar12 + 0x10) != '\0') {
    local_114 = (int *****)CONCAT31(local_114._1_3_,(char)uVar9);
    local_118 = (int *****)ppppiVar18;
                    /* WARNING: Subroutine does not return */
    FUN_013073dc("BUG: SettingsManager lock poisoned",0x22,&local_118,&DAT_01c0e41c,&DAT_01c0e394);
  }
  puVar8 = *(undefined4 **)(iVar12 + 0x18);
  iVar10 = *(int *)(iVar12 + 0x1c) << 3;
  do {
    if (iVar10 == 0) goto LAB_00a3d960;
    pppppiVar7 = (int *****)(**(code **)(puVar8[1] + 0x1c))(*puVar8);
    iVar10 = iVar10 + -8;
    puVar8 = puVar8 + 2;
  } while (pppppiVar7 == (int *****)0x0);
  local_34 = (int *****)&DAT_00000015;
  local_110 = (int *****)&local_48;
  local_118 = (int *****)&local_38;
  local_38 = (int *****)0x3e61af;
  local_10c = FUN_00667a08;
  local_114 = (int *****)&DAT_0132b6a0;
  local_48 = pppppiVar7;
  FUN_00664898(&local_70,&DAT_00587911,&local_118);
  local_a8 = local_70;
  local_a4 = local_6c;
  local_a0 = local_68;
  FUN_01a70fd4(&local_118,0xd);
  (*(code *)**local_48)();
  pppppiVar15 = local_114;
  pppppiVar7 = local_118;
  FUN_01bed4e2(&local_1b8,&local_110,0x50);
  if (pppppiVar7 == (int *****)&DAT_00000003 && pppppiVar15 == (int *****)0x0) {
LAB_00a3d960:
    FUN_00b093d4(&local_70,*(undefined4 *)(iVar12 + 0x18),*(undefined4 *)(iVar12 + 0x1c),1);
    FUN_00ab523c(&local_118,&local_70);
    puVar8 = (undefined4 *)((uint)&local_1b8 | 4);
    *puVar8 = local_118;
    puVar8[1] = local_114;
    puVar8[2] = local_110;
    local_1b8 = (int *****)&DAT_00000001;
    FUN_0160aaa4(&local_118,0);
    local_128 = local_1b8;
    pppppiStack_124 = pppppiStack_1b4;
    pppppiStack_120 = pppppiStack_1b0;
    pppppiStack_11c = local_1ac;
    pppppiStack_168 = local_118;
    pppppiStack_164 = local_114;
    pppppiStack_160 = local_110;
    pppppiStack_15c = (int *****)local_10c;
    pppppiStack_158 = local_108;
    local_154 = local_104;
    pppppiStack_150 = local_100;
    pppppiStack_14c = local_fc;
    iStack_148 = local_f8;
    uStack_144 = uStack_f4;
    local_140 = local_f0;
    uStack_13c = uStack_ec;
    uStack_138 = uStack_e8;
    uStack_134 = uStack_e4;
    uStack_130 = uStack_e0;
    uStack_12c = uStack_dc;
    FUN_0196afa8(&local_70);
    FUN_01ac2a34(ppppiVar18,uVar9);
    FUN_00f9604c(auStack_200);
    pppppiVar7 = (int *****)&DAT_00000003;
    pppppiVar15 = (int *****)0x0;
    uVar6 = uStack_e4;
    uVar11 = 0;
    uVar13 = uStack_e0;
    pppppiVar14 = (int *****)&local_1b8;
  }
  else {
    FUN_01bed4e2(&pppppiStack_168,&local_1b8,0x50);
    FUN_01ac2a34(ppppiVar18,uVar9);
    FUN_00f9604c(auStack_200);
    uVar6 = local_b8;
    uVar11 = local_c0;
    uVar13 = local_b4;
    pppppiVar14 = local_bc;
  }
  *param_1 = pppppiVar7;
  param_1[1] = pppppiVar15;
  FUN_01bed4e2(param_1 + 2,&pppppiStack_168,0x50);
  param_1[0x16] = uVar11;
  param_1[0x17] = pppppiVar14;
  param_1[0x18] = uVar6;
  param_1[0x19] = uVar13;
  *(undefined1 *)(param_2 + 0x4c) = 1;
  return;
}

