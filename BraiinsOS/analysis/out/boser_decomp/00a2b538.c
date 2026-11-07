// FUN_00a2b538 @ 00a2b538 size=3252 calls_out=46 calls_in=1
// strings: Settings save failed | BUG: request parameters cell was already initialized. | boser::api::grpc::utilsopen/boser/boser/src/api/grpc/utils.rs | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | boser::api::grpc::utilsopen/boser/boser/src/api/grpc/utils.rs

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00a2b538(undefined4 *param_1,int param_2)

{
  char *pcVar1;
  undefined1 uVar2;
  char cVar3;
  int *piVar4;
  int *piVar5;
  int ****ppppiVar6;
  int iVar7;
  undefined4 *puVar8;
  uint *puVar9;
  int ****ppppiVar10;
  int ****ppppiVar11;
  int ****ppppiVar12;
  int iVar13;
  uint uVar14;
  int ****ppppiVar15;
  int ****ppppiVar16;
  bool bVar17;
  undefined8 uVar18;
  undefined1 auStack_2b0 [64];
  uint local_270;
  int ****local_26c;
  int ****ppppiStack_268;
  int ****ppppiStack_264;
  undefined4 local_260;
  undefined1 auStack_258 [88];
  int ****local_200;
  int ****ppppiStack_1fc;
  int ****ppppiStack_1f8;
  int ****local_1f0;
  int ****ppppiStack_1ec;
  int ****ppppiStack_1e8;
  int local_1e0 [2];
  int ****local_1d8;
  undefined1 auStack_1d0 [8];
  uint local_1c8;
  int iStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 local_1b0;
  int ****ppppiStack_1ac;
  int ****ppppiStack_1a8;
  int ****local_1a0;
  int ****local_19c;
  int ****ppppiStack_198;
  int ****local_194;
  int ****local_190;
  int ****local_18c;
  int ****local_188;
  int ****local_184;
  uint local_180;
  int iStack_17c;
  undefined4 uStack_178;
  undefined4 local_174;
  int ****local_148;
  int ****local_144;
  int ****local_140;
  undefined4 local_13c;
  int ****local_138;
  int ****local_134;
  int ****local_130;
  int ****local_12c;
  int ****local_128;
  int ****local_d8;
  int ****local_d4;
  int ***local_cc;
  undefined4 local_c8;
  int ****local_c4;
  int ****local_c0;
  int ****local_bc;
  int ****local_b8;
  int ****local_b4;
  int ****ppppiStack_a8;
  int ****ppppiStack_a4;
  int ****ppppiStack_a0;
  int ****local_9c;
  int ****local_98;
  int iStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  char local_88 [4];
  int ****local_84;
  int ****local_70;
  int ****local_6c;
  int ****local_68;
  int ****local_64;
  int ****ppppiStack_60;
  int ****ppppiStack_5c;
  int ****local_58;
  int ****local_54;
  int ****ppppiStack_50;
  int ****local_48;
  int ****local_44;
  int ****local_40;
  int ****local_38;
  int ****local_34;
  int ****local_30;
  undefined4 local_2c;
  
  if (*(char *)(param_2 + 0x5c) != '\0') {
    if (*(char *)(param_2 + 0x5c) == '\x01') {
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c0e12c);
    }
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c0e12c);
  }
  piVar4 = *(int **)(param_2 + 0x58);
  FUN_01bed4e2(auStack_2b0,param_2,0x58);
  piVar5 = (int *)FUN_00a52660(local_260);
  if (piVar5 != (int *)0x0) {
    iVar13 = *piVar5;
    local_190 = (int ****)&DAT_80000000;
    local_194 = (int ****)0x0;
    local_19c = (int ****)0x0;
    local_1a0 = (int ****)0x0;
    ppppiVar6 = (int ****)FUN_007025b0(&local_1a0,&DAT_00570118,8);
    ppppiVar10 = local_18c;
    ppppiVar16 = local_190;
    if (ppppiVar6 == (int ****)0x0) {
      if (local_1a0 == (int ****)&DAT_00000001) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01cf9574);
      }
      bVar17 = local_190 == (int ****)&DAT_80000000;
      local_190 = (int ****)&DAT_80000000;
      if (bVar17) {
                    /* WARNING: Subroutine does not return */
        FUN_0130739c("serialize_value called before serialize_key",0x2b,&DAT_01cf9564);
      }
      local_30 = local_188;
      local_34 = local_18c;
      local_38 = ppppiVar16;
      FUN_00972a30(local_88,&local_270);
      if (local_88[0] == '\x06') {
        FUN_019bb7e0(ppppiVar16,ppppiVar10);
        ppppiVar6 = local_84;
        goto LAB_00a2b624;
      }
      FUN_0196b484(&local_148,(uint)&local_1a0 | 4,&local_38,local_88);
      if ((char)local_148 != '\x06') {
        FUN_00db4764(&local_148);
      }
      local_148 = local_1a0;
      local_144 = local_19c;
      local_140 = ppppiStack_198;
      local_13c = (code *)local_194;
      local_138 = local_190;
      local_134 = local_18c;
      local_130 = local_188;
      local_12c = local_184;
      FUN_0196ac88(&local_70,&local_148);
      uVar2 = local_70._0_1_;
      uVar14 = (uint)local_70 & 0xff;
      if (uVar14 != 6) {
        FUN_01bed4e2((uint)&local_c0 | 1,(uint)&local_70 | 1,0x17);
        ppppiVar16 = local_b4;
        ppppiVar6 = local_b8;
        ppppiVar10 = local_bc;
        local_c0 = (int ****)CONCAT31(local_c0._1_3_,uVar2);
        if (uVar14 == 5) {
          uVar18 = thunk_FUN_01bee35a(local_b8,0x2c0);
          puVar8 = (undefined4 *)((int)uVar18 + (int)((ulonglong)uVar18 >> 0x20));
          if (ppppiVar10 == (int ****)0x0) {
            ppppiVar16 = (int ****)0x0;
            ppppiVar11 = ppppiVar10;
          }
          else {
            ppppiVar11 = (int ****)&DAT_00000001;
          }
          if (*(char *)(puVar8 + 4) == '\0') {
            FUN_019ae6ac(&local_148);
            *puVar8 = local_148;
            puVar8[1] = local_144;
            puVar8[2] = local_140;
            puVar8[3] = local_13c;
            *(undefined1 *)(puVar8 + 4) = 1;
          }
          local_190 = (int ****)*puVar8;
          local_18c = (int ****)puVar8[1];
          local_188 = (int ****)puVar8[2];
          local_184 = (int ****)puVar8[3];
          *puVar8 = (undefined1 *)((int)local_190 + 1);
          puVar8[1] = (int)local_18c + (uint)((int ****)0xfffffffe < local_190);
          local_1a0 = (int ****)&DAT_0056d238;
          local_19c = (int ****)0x0;
          ppppiStack_198 = (int ****)0x0;
          local_194 = (int ****)0x0;
          if (ppppiVar16 != (int ****)0x0) {
            FUN_01aa37a0(&local_1a0,ppppiVar16,local_190,local_18c,local_188,local_184);
          }
          local_12c = ppppiVar6;
          local_13c = (code *)ppppiVar6;
          local_130 = ppppiVar10;
          local_140 = ppppiVar10;
          local_134 = (int ****)0x0;
          local_144 = (int ****)0x0;
          local_148 = ppppiVar11;
          local_138 = ppppiVar11;
          local_128 = ppppiVar16;
          while( true ) {
            uVar18 = FUN_01a41998(&local_148);
            iVar7 = (int)uVar18;
            if (iVar7 == 0) break;
            FUN_006666fc(&local_58,*(undefined4 *)(iVar7 + 4),*(undefined4 *)(iVar7 + 8));
            local_40 = (int ****)0x0;
            local_44 = (int ****)&DAT_00000001;
            local_48 = (int ****)0x0;
            local_2c = 0;
            local_30 = (int ****)0x60000020;
            local_34 = (int ****)&DAT_01c0e3e4;
            local_38 = (int ****)&local_48;
            iVar7 = FUN_01968fa4((int)((ulonglong)uVar18 >> 0x20),&local_38);
            if (iVar7 != 0) {
                    /* WARNING: Subroutine does not return */
              FUN_013073dc(&DAT_00533383,0x37,&local_1b0,&DAT_01c0e3fc,&DAT_01d30334);
            }
            local_64 = local_48;
            ppppiStack_60 = local_44;
            ppppiStack_5c = local_40;
            local_70 = local_58;
            local_6c = local_54;
            local_68 = ppppiStack_50;
            FUN_01aa42f8(&local_38,&local_1a0,&local_70,&local_64);
            if (local_38 != (int ****)&DAT_80000000) {
              FUN_019bb7e0(local_38,local_34);
            }
          }
          ppppiStack_a8 = local_1a0;
          ppppiStack_a4 = local_19c;
          ppppiStack_a0 = ppppiStack_198;
          local_9c = local_194;
          local_98 = local_190;
          iStack_94 = (int)local_18c;
          uStack_90 = local_188;
          uStack_8c = local_184;
          if (local_194 == (int ****)0x0) {
            FUN_0126f23c(&ppppiStack_a8);
            uVar14 = 2;
          }
          else {
            FUN_0067b1ac(&local_148,&ppppiStack_a8);
            local_48 = local_148;
            local_44 = local_144;
            local_40 = local_140;
            uVar14 = (uint)local_13c & 0xff;
            local_1b0._0_3_ = (undefined3)((uint)local_13c >> 8);
          }
          FUN_00db4764(&local_c0);
          if (uVar14 != 2) {
            local_148 = local_48;
            local_144 = local_44;
            local_140 = local_40;
            local_13c = (code *)CONCAT13(local_1b0._2_1_,
                                         CONCAT21((undefined2)local_1b0,(char)uVar14));
            DataMemoryBarrier(0xb);
            if (*(int *)(iVar13 + 0x18) != 0) {
              FUN_00b065ec(iVar13 + 8,&local_148);
            }
            if ((char)local_13c != '\x02') {
              local_1a0 = local_148;
              local_19c = local_144;
              ppppiStack_198 = local_140;
              local_194 = (int ****)local_13c;
              FUN_019cf348();
              if ((DAT_01d50f88 < 5) &&
                 (((DAT_01d4c488 - 1 < 2 ||
                   ((DAT_01d4c488 != 0 && (cVar3 = FUN_01aaafa8(&DAT_01d4c480), cVar3 != '\0')))) &&
                  (iVar13 = FUN_01aaa278(DAT_01d4c480), iVar13 != 0)))) {
                if (*(int *****)(DAT_01d4c480 + 0x20) == (int ****)0x0) {
LAB_00a2c1e4:
                    /* WARNING: Subroutine does not return */
                  FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c17708);
                }
                local_c0 = (int ****)&local_148;
                local_140 = *(int *****)(DAT_01d4c480 + 0x24);
                local_13c = *(code **)(DAT_01d4c480 + 0x28);
                local_30 = (int ****)(DAT_01d4c480 + 0x1c);
                local_148 = (int ****)*local_30;
                local_138 = (int ****)0x0;
                local_34 = (int ****)&DAT_00000001;
                local_b8 = (int ****)&DAT_01d2ea4c;
                local_54 = (int ****)&DAT_0000006b;
                local_58 = (int ****)0x3fe987;
                local_144 = *(int *****)(DAT_01d4c480 + 0x20);
                local_bc = (int ****)&local_58;
                local_38 = (int ****)&local_c0;
                FUN_01aaaecc(DAT_01d4c480,&local_38);
                iVar13 = DAT_01d4c480;
                if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
                  local_6c = *(int *****)(DAT_01d4c480 + 0x14);
                  local_68 = *(int *****)(DAT_01d4c480 + 0x18);
                  local_70 = (int ****)&DAT_00000001;
                  DataMemoryBarrier(0xb);
                  puVar8 = DAT_01d4edc8;
                  pcVar1 = DAT_01d4edc4;
                  if (DAT_01d51174 != 2) {
                    puVar8 = &DAT_01cfc5e0;
                    pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
                  }
                  iVar7 = (*(code *)puVar8[3])(pcVar1,&local_70);
                  if (iVar7 != 0) {
                    local_1a0 = local_70;
                    local_19c = local_6c;
                    ppppiStack_198 = local_68;
                    FUN_01aaa328(iVar13,pcVar1,puVar8[4],&local_1a0,&local_38);
                  }
                }
              }
              else {
                iVar13 = DAT_01d4c480;
                if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
                  local_34 = *(int *****)(DAT_01d4c480 + 0x14);
                  local_30 = *(int *****)(DAT_01d4c480 + 0x18);
                  local_38 = (int ****)&DAT_00000001;
                  DataMemoryBarrier(0xb);
                  puVar8 = DAT_01d4edc8;
                  pcVar1 = DAT_01d4edc4;
                  if (DAT_01d51174 != 2) {
                    puVar8 = &DAT_01cfc5e0;
                    pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
                  }
                  iVar7 = (*(code *)puVar8[3])(pcVar1,&local_38);
                  if (iVar7 != 0) {
                    local_b8 = (int ****)(DAT_01d4c480 + 0x1c);
                    if (*(int *****)(DAT_01d4c480 + 0x20) == (int ****)0x0) goto LAB_00a2c1e4;
                    local_70 = (int ****)&local_148;
                    local_140 = *(int *****)(DAT_01d4c480 + 0x24);
                    local_13c = *(code **)(DAT_01d4c480 + 0x28);
                    local_c0 = (int ****)&local_70;
                    local_138 = (int ****)0x0;
                    local_bc = (int ****)&DAT_00000001;
                    local_68 = (int ****)&DAT_01d2ea4c;
                    local_54 = (int ****)&DAT_0000006b;
                    local_58 = (int ****)0x3fe987;
                    local_1a0 = local_38;
                    local_19c = local_34;
                    ppppiStack_198 = local_30;
                    local_148 = (int ****)*local_b8;
                    local_144 = *(int *****)(DAT_01d4c480 + 0x20);
                    local_6c = (int ****)&local_58;
                    FUN_01aaa328(iVar13,pcVar1,puVar8[4],&local_1a0,&local_c0);
                  }
                }
              }
            }
          }
        }
        else {
          FUN_00db4764(&local_c0);
        }
        goto LAB_00a2b648;
      }
    }
    else {
LAB_00a2b624:
      local_70 = (int ****)CONCAT31(local_70._1_3_,6);
      local_6c = ppppiVar6;
      FUN_0127464c(&local_1a0);
    }
    FUN_0094ccfc((uint)&local_70 | 4);
  }
LAB_00a2b648:
  ppppiVar16 = (int ****)&local_1a0;
  FUN_01a68db4(auStack_2b0);
  FUN_0178e884(local_260);
  if ((local_270 & 1) == 0) {
    ppppiVar11 = (int ****)&local_148;
    FUN_01a71aac(ppppiVar11,3,&DAT_0056a8c8,0x10);
    ppppiVar6 = local_144;
    ppppiVar10 = local_148;
    if (local_148 != (int ****)&DAT_00000003 || local_144 != (int ****)0x0) {
      local_1a0 = local_140;
      local_19c = (int ****)local_13c;
      ppppiStack_198 = local_138;
      FUN_01bed4e2(auStack_258,&local_134,0x54);
      ppppiVar15 = (int ****)0x0;
      ppppiVar12 = (int ****)&DAT_00000003;
      local_200 = local_1a0;
      ppppiStack_1fc = local_19c;
      ppppiStack_1f8 = ppppiStack_198;
      goto LAB_00a2ba74;
    }
  }
  else {
    local_140 = local_26c;
    local_13c = (code *)ppppiStack_268;
    local_138 = ppppiStack_264;
  }
  local_1a0 = local_140;
  local_19c = (int ****)local_13c;
  ppppiStack_198 = local_138;
  local_1f0 = local_140;
  ppppiStack_1ec = (int ****)local_13c;
  ppppiStack_1e8 = local_138;
  iVar13 = *piVar4;
  ppppiVar11 = (int ****)(iVar13 + 8);
  if (*ppppiVar11 == (int ***)0x0) {
    bVar17 = (bool)hasExclusiveAccess(ppppiVar11);
    if (!bVar17) goto LAB_00a2bcbc;
    *ppppiVar11 = (int ***)0x3fffffff;
    DataMemoryBarrier(0xb);
  }
  else {
    ClearExclusiveLocal();
LAB_00a2bcbc:
    FUN_019ae2e0(ppppiVar11);
  }
  uVar14 = 0;
  if ((DAT_01d51b08 & 0x7fffffff) != 0) {
    uVar14 = FUN_0197ac0c();
    uVar14 = uVar14 ^ 1;
  }
  if (*(char *)(iVar13 + 0x10) != '\0') {
    local_144 = (int ****)CONCAT31(local_144._1_3_,(char)uVar14);
    local_148 = ppppiVar11;
                    /* WARNING: Subroutine does not return */
    FUN_013073dc("BUG: SettingsManager lock poisoned",0x22,&local_148,&DAT_01c0e41c,&DAT_01c0e11c);
  }
  FUN_00ab678c(&local_148,&local_1f0);
  FUN_00b0afb0(local_1e0,*(undefined4 *)(iVar13 + 0x18),*(undefined4 *)(iVar13 + 0x1c),&local_148);
  if (local_1e0[0] == -0x80000000) {
    local_190 = local_1d8;
    local_180 = local_1c8;
    iStack_17c = iStack_1c4;
    uStack_178 = uStack_1c0;
    local_174 = uStack_1bc;
    local_1a0 = (int ****)0x0;
    FUN_00a22218(&local_148,ppppiVar16);
    ppppiVar6 = (int ****)local_13c;
    ppppiVar10 = local_140;
    ppppiVar15 = local_144;
    ppppiVar12 = local_148;
    local_200 = local_138;
    ppppiStack_1fc = local_134;
    ppppiStack_1f8 = local_130;
    FUN_01bed4e2(auStack_258,&local_12c,0x54);
    ppppiVar16 = local_d8;
LAB_00a2b7d8:
    FUN_01ac2a34(ppppiVar11,uVar14);
    FUN_0165d624(&local_1f0);
    ppppiVar11 = local_d4;
  }
  else {
    FUN_00b0a040(&local_70,*(undefined4 *)(iVar13 + 0x18),*(undefined4 *)(iVar13 + 0x1c),local_1e0,
                 auStack_1d0);
    if (local_70 == (int ****)&DAT_00000001) {
      local_c4 = local_6c;
      local_c8 = 0x14;
      local_140 = (int ****)&local_c4;
      local_148 = &local_cc;
      local_cc = (int ***)0x3e619b;
      local_13c = FUN_00667a08;
      local_144 = (int ****)&DAT_0132b6a0;
      FUN_00664898(&local_c0,&DAT_00587911,&local_148);
      local_38 = local_c0;
      local_34 = local_bc;
      local_30 = local_b8;
      FUN_01a70fd4(&local_148,0xd);
      (*(code *)**local_c4)();
      ppppiVar6 = local_144;
      ppppiVar10 = local_148;
      local_48 = local_140;
      local_44 = (int ****)local_13c;
      local_40 = local_138;
      FUN_01bed4e2(&local_1a0,&local_134,0x54);
      if (ppppiVar10 != (int ****)&DAT_00000003 || ppppiVar6 != (int ****)0x0) {
        local_58 = local_48;
        local_54 = local_44;
        ppppiStack_50 = local_40;
        FUN_01bed4e2(auStack_258,&local_1a0,0x54);
        ppppiVar15 = (int ****)0x0;
        ppppiVar12 = (int ****)&DAT_00000003;
        local_200 = local_58;
        ppppiStack_1fc = local_54;
        ppppiStack_1f8 = ppppiStack_50;
        local_d4 = ppppiVar11;
        goto LAB_00a2b7d8;
      }
    }
    else {
      local_48 = local_6c;
      local_44 = local_68;
      local_40 = local_64;
    }
    local_58 = local_48;
    local_54 = local_44;
    ppppiStack_50 = local_40;
    local_1b0 = local_48;
    ppppiStack_1ac = local_44;
    ppppiStack_1a8 = local_40;
    FUN_00ab523c(&local_70);
    puVar8 = (undefined4 *)((uint)&local_c0 | 4);
    *puVar8 = local_70;
    puVar8[1] = local_6c;
    puVar8[2] = local_68;
    iVar13 = thunk_FUN_01bee35a();
    puVar9 = (uint *)(iVar13 + 0x2c0);
    local_c0 = (int ****)&DAT_00000001;
    if (*(char *)(iVar13 + 0x2d0) == '\0') {
      FUN_019ae6ac(&local_70);
      *puVar9 = (uint)local_70;
      *(int *****)(iVar13 + 0x2c4) = local_6c;
      *(int *****)(iVar13 + 0x2c8) = local_68;
      *(int *****)(iVar13 + 0x2cc) = local_64;
      *(undefined1 *)(iVar13 + 0x2d0) = 1;
    }
    local_180 = *puVar9;
    iStack_17c = *(int *)(iVar13 + 0x2c4);
    uStack_178 = *(undefined4 *)(iVar13 + 0x2c8);
    local_174 = *(undefined4 *)(iVar13 + 0x2cc);
    *puVar9 = local_180 + 1;
    *(uint *)(iVar13 + 0x2c4) = iStack_17c + (uint)(0xfffffffe < local_180);
    local_1a0 = local_c0;
    local_19c = local_bc;
    ppppiStack_198 = local_b8;
    local_194 = local_b4;
    local_190 = (int ****)&DAT_0056d238;
    FUN_00a22218(&local_148,ppppiVar16);
    ppppiVar6 = (int ****)local_13c;
    ppppiVar10 = local_140;
    ppppiVar15 = local_144;
    ppppiVar12 = local_148;
    local_200 = local_138;
    ppppiStack_1fc = local_134;
    ppppiStack_1f8 = local_130;
    FUN_01bed4e2(auStack_258,&local_12c,0x54);
    FUN_0196afa8(&local_1b0);
    FUN_01ac2a34(ppppiVar11,uVar14);
    FUN_0165d624(&local_1f0);
    ppppiVar11 = local_d4;
    ppppiVar16 = local_d8;
  }
LAB_00a2ba74:
  param_1[2] = ppppiVar10;
  param_1[3] = ppppiVar6;
  *param_1 = ppppiVar12;
  param_1[1] = ppppiVar15;
  param_1[4] = local_200;
  param_1[5] = ppppiStack_1fc;
  param_1[6] = ppppiStack_1f8;
  FUN_01bed4e2(param_1 + 7,auStack_258,0x54);
  param_1[0x1c] = ppppiVar16;
  param_1[0x1d] = ppppiVar11;
  *(undefined1 *)(param_2 + 0x5c) = 1;
  return;
}

