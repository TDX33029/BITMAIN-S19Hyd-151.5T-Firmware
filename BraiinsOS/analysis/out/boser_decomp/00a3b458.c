// FUN_00a3b458 @ 00a3b458 size=2204 calls_out=36 calls_in=1
// strings: include_defaultPauseMiningRequest | BUG: request parameters cell was already initialized. | boser::api::grpc::utilsopen/boser/boser/src/api/grpc/utils.rs | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | boser::api::grpc::utilsopen/boser/boser/src/api/grpc/utils.rs

void FUN_00a3b458(undefined4 *param_1,int param_2)

{
  bool bVar1;
  char *pcVar2;
  byte bVar3;
  undefined1 uVar4;
  char cVar5;
  int *piVar6;
  int *piVar7;
  undefined4 *****pppppuVar8;
  uint uVar9;
  int iVar10;
  uint *puVar11;
  int iVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  undefined4 *****pppppuVar15;
  undefined8 uVar16;
  undefined1 auStack_1a8 [64];
  undefined4 local_168;
  byte local_164;
  undefined4 *****local_160;
  undefined4 *****pppppuStack_15c;
  undefined4 *****pppppuStack_158;
  undefined4 *puStack_154;
  undefined4 *****pppppuStack_150;
  int local_14c;
  undefined4 *****pppppuStack_148;
  undefined4 *puStack_144;
  int iStack_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 ****local_120;
  undefined4 *****pppppuStack_11c;
  undefined4 *****pppppuStack_118;
  undefined4 *puStack_114;
  undefined2 local_10c;
  undefined1 local_10a;
  undefined4 *****local_108;
  undefined4 *****local_104;
  undefined4 *local_100;
  int local_fc;
  undefined4 *****pppppuStack_f0;
  undefined4 *****pppppuStack_ec;
  undefined4 *****pppppuStack_e8;
  undefined4 *local_e4;
  undefined4 *****local_e0;
  int iStack_dc;
  undefined4 *****pppppuStack_d8;
  undefined4 *puStack_d4;
  undefined4 *****local_d0;
  undefined4 *****local_cc;
  undefined4 *****pppppuStack_c8;
  undefined4 *local_c4;
  undefined4 *****local_c0;
  int iStack_bc;
  undefined4 *****pppppuStack_b8;
  undefined4 *puStack_b4;
  undefined4 *****local_b0;
  undefined4 *****local_ac;
  undefined4 *****local_a8;
  undefined4 *****local_a4;
  undefined4 *****pppppuStack_a0;
  undefined4 *****pppppuStack_9c;
  undefined4 *****local_98;
  undefined4 *****local_94;
  undefined4 *****pppppuStack_90;
  undefined4 *****local_88;
  undefined4 *****local_84;
  undefined4 *****local_80;
  undefined4 *****local_78;
  undefined4 *****local_74;
  undefined4 *****local_70;
  undefined4 local_6c;
  undefined4 *****local_68;
  undefined4 *****local_64;
  undefined4 *****local_60;
  undefined4 local_5c;
  undefined4 *****local_58;
  int local_54;
  undefined4 *****local_50;
  undefined4 *local_4c;
  int local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  if (*(char *)(param_2 + 0x4c) != '\0') {
    if (*(char *)(param_2 + 0x4c) == '\x01') {
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c0e344);
    }
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c0e344);
  }
  piVar6 = *(int **)(param_2 + 0x48);
  FUN_01bed4e2(auStack_1a8,param_2,0x48);
  bVar3 = local_164;
  piVar7 = (int *)FUN_00a52660(local_168);
  if (piVar7 != (int *)0x0) {
    iVar12 = *piVar7;
    local_c0 = (undefined4 *****)&DAT_80000000;
    local_c4 = (undefined4 *)0x0;
    local_cc = (undefined4 *****)0x0;
    local_d0 = (undefined4 *****)0x0;
    pppppuVar8 = (undefined4 *****)
                 FUN_00a46668(&local_d0,"include_defaultPauseMiningRequest",0xf,bVar3);
    if (pppppuVar8 == (undefined4 *****)0x0) {
      local_68 = local_d0;
      local_64 = local_cc;
      local_60 = pppppuStack_c8;
      local_5c = local_c4;
      local_58 = local_c0;
      local_54 = iStack_bc;
      local_50 = pppppuStack_b8;
      local_4c = puStack_b4;
      FUN_0196ac88(&local_b0);
      uVar4 = local_b0._0_1_;
      uVar9 = (uint)local_b0 & 0xff;
      if (uVar9 != 6) {
        FUN_01bed4e2((uint)&local_108 | 1,(uint)&local_b0 | 1,0x17);
        puVar13 = local_100;
        pppppuVar8 = local_104;
        local_108 = (undefined4 *****)CONCAT31(local_108._1_3_,uVar4);
        if (uVar9 == 5) {
          uVar16 = thunk_FUN_01bee35a(local_100,0x2c0);
          puVar14 = (undefined4 *)((int)uVar16 + (int)((ulonglong)uVar16 >> 0x20));
          iVar10 = local_fc;
          if (pppppuVar8 == (undefined4 *****)0x0) {
            iVar10 = 0;
          }
          pppppuVar15 = (undefined4 *****)(uint)(pppppuVar8 != (undefined4 *****)0x0);
          if (*(char *)(puVar14 + 4) == '\0') {
            FUN_019ae6ac(&local_68);
            *puVar14 = local_68;
            puVar14[1] = local_64;
            puVar14[2] = local_60;
            puVar14[3] = local_5c;
            *(undefined1 *)(puVar14 + 4) = 1;
          }
          local_c0 = (undefined4 *****)*puVar14;
          iStack_bc = puVar14[1];
          pppppuStack_b8 = (undefined4 *****)puVar14[2];
          puStack_b4 = (undefined4 *)puVar14[3];
          *puVar14 = (undefined1 *)((int)local_c0 + 1);
          puVar14[1] = iStack_bc + (uint)((undefined4 *****)0xfffffffe < local_c0);
          local_d0 = (undefined4 *****)&DAT_0056d238;
          local_cc = (undefined4 *****)0x0;
          pppppuStack_c8 = (undefined4 *****)0x0;
          local_c4 = (undefined4 *)0x0;
          if (iVar10 != 0) {
            FUN_01aa37a0(&local_d0,iVar10,local_c0,iStack_bc,pppppuStack_b8,puStack_b4);
          }
          local_4c = puVar13;
          local_5c = puVar13;
          local_50 = pppppuVar8;
          local_60 = pppppuVar8;
          local_54 = 0;
          local_64 = (undefined4 *****)0x0;
          local_68 = pppppuVar15;
          local_58 = pppppuVar15;
          local_48 = iVar10;
          while( true ) {
            uVar16 = FUN_01a41998(&local_68);
            iVar10 = (int)uVar16;
            if (iVar10 == 0) break;
            FUN_006666fc(&local_98,*(undefined4 *)(iVar10 + 4),*(undefined4 *)(iVar10 + 8));
            local_80 = (undefined4 *****)0x0;
            local_84 = (undefined4 *****)&DAT_00000001;
            local_88 = (undefined4 *****)0x0;
            local_6c = 0;
            local_70 = (undefined4 *****)0x60000020;
            local_74 = (undefined4 *****)&DAT_01c0e3e4;
            local_78 = &local_88;
            iVar10 = FUN_01968fa4((int)((ulonglong)uVar16 >> 0x20),&local_78);
            if (iVar10 != 0) {
                    /* WARNING: Subroutine does not return */
              FUN_013073dc(&DAT_00533383,0x37,&local_10c,&DAT_01c0e3fc,&DAT_01d30334);
            }
            local_a4 = local_88;
            pppppuStack_a0 = local_84;
            pppppuStack_9c = local_80;
            local_b0 = local_98;
            local_ac = local_94;
            local_a8 = pppppuStack_90;
            FUN_01aa42f8(&local_78,&local_d0,&local_b0,&local_a4);
            if (local_78 != (undefined4 *****)&DAT_80000000) {
              FUN_019bb7e0(local_78,local_74);
            }
          }
          pppppuStack_f0 = local_d0;
          pppppuStack_ec = local_cc;
          pppppuStack_e8 = pppppuStack_c8;
          local_e4 = local_c4;
          local_e0 = local_c0;
          iStack_dc = iStack_bc;
          pppppuStack_d8 = pppppuStack_b8;
          puStack_d4 = puStack_b4;
          if (local_c4 == (undefined4 *)0x0) {
            FUN_0126f23c(&pppppuStack_f0);
            uVar9 = 2;
          }
          else {
            FUN_0067b1ac(&local_68,&pppppuStack_f0);
            local_88 = local_68;
            local_84 = local_64;
            local_80 = local_60;
            uVar9 = (uint)local_5c & 0xff;
            local_10c = local_5c._1_2_;
            local_10a = local_5c._3_1_;
          }
          FUN_00db4764(&local_108);
          if (uVar9 != 2) {
            local_68 = local_88;
            local_64 = local_84;
            local_60 = local_80;
            local_5c = (undefined4 *)CONCAT13(local_10a,CONCAT21(local_10c,(char)uVar9));
            DataMemoryBarrier(0xb);
            if (*(int *)(iVar12 + 0x18) != 0) {
              FUN_00b065ec(iVar12 + 8,&local_68);
            }
            if ((char)local_5c != '\x02') {
              local_d0 = local_68;
              local_cc = local_64;
              pppppuStack_c8 = local_60;
              local_c4 = local_5c;
              FUN_019cf348();
              if ((DAT_01d50f88 < 5) &&
                 (((DAT_01d4c488 - 1 < 2 ||
                   ((DAT_01d4c488 != 0 && (cVar5 = FUN_01aaafa8(&DAT_01d4c480), cVar5 != '\0')))) &&
                  (iVar12 = FUN_01aaa278(DAT_01d4c480), iVar12 != 0)))) {
                if (*(undefined4 ******)(DAT_01d4c480 + 0x20) == (undefined4 *****)0x0) {
LAB_00a3bce4:
                    /* WARNING: Subroutine does not return */
                  FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c17708);
                }
                local_104 = &local_98;
                local_60 = *(undefined4 ******)(DAT_01d4c480 + 0x24);
                local_5c = *(undefined4 **)(DAT_01d4c480 + 0x28);
                local_70 = (undefined4 *****)(DAT_01d4c480 + 0x1c);
                local_68 = (undefined4 *****)*local_70;
                local_108 = &local_68;
                local_58 = (undefined4 *****)0x0;
                local_74 = (undefined4 *****)&DAT_00000001;
                local_100 = (undefined4 *)&DAT_01d2ea4c;
                local_94 = (undefined4 *****)&DAT_0000006b;
                local_98 = (undefined4 *****)0x3fe987;
                local_78 = &local_108;
                local_64 = *(undefined4 ******)(DAT_01d4c480 + 0x20);
                FUN_01aaaecc(DAT_01d4c480,&local_78);
                iVar12 = DAT_01d4c480;
                if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
                  local_ac = *(undefined4 ******)(DAT_01d4c480 + 0x14);
                  local_a8 = *(undefined4 ******)(DAT_01d4c480 + 0x18);
                  local_b0 = (undefined4 *****)&DAT_00000001;
                  DataMemoryBarrier(0xb);
                  puVar13 = DAT_01d4edc8;
                  pcVar2 = DAT_01d4edc4;
                  if (DAT_01d51174 != 2) {
                    puVar13 = &DAT_01cfc5e0;
                    pcVar2 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
                  }
                  iVar10 = (*(code *)puVar13[3])(pcVar2,&local_b0);
                  if (iVar10 != 0) {
                    local_d0 = local_b0;
                    local_cc = local_ac;
                    pppppuStack_c8 = local_a8;
                    FUN_01aaa328(iVar12,pcVar2,puVar13[4],&local_d0,&local_78);
                  }
                }
              }
              else {
                iVar12 = DAT_01d4c480;
                if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
                  local_74 = *(undefined4 ******)(DAT_01d4c480 + 0x14);
                  local_70 = *(undefined4 ******)(DAT_01d4c480 + 0x18);
                  local_78 = (undefined4 *****)&DAT_00000001;
                  DataMemoryBarrier(0xb);
                  puVar13 = DAT_01d4edc8;
                  pcVar2 = DAT_01d4edc4;
                  if (DAT_01d51174 != 2) {
                    puVar13 = &DAT_01cfc5e0;
                    pcVar2 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
                  }
                  iVar10 = (*(code *)puVar13[3])(pcVar2,&local_78);
                  if (iVar10 != 0) {
                    local_100 = (undefined4 *)(DAT_01d4c480 + 0x1c);
                    if (*(undefined4 ******)(DAT_01d4c480 + 0x20) == (undefined4 *****)0x0)
                    goto LAB_00a3bce4;
                    local_ac = &local_98;
                    local_60 = *(undefined4 ******)(DAT_01d4c480 + 0x24);
                    local_5c = *(undefined4 **)(DAT_01d4c480 + 0x28);
                    local_b0 = &local_68;
                    local_108 = &local_b0;
                    local_58 = (undefined4 *****)0x0;
                    local_104 = (undefined4 *****)&DAT_00000001;
                    local_a8 = (undefined4 *****)&DAT_01d2ea4c;
                    local_94 = (undefined4 *****)&DAT_0000006b;
                    local_98 = (undefined4 *****)0x3fe987;
                    local_d0 = local_78;
                    local_cc = local_74;
                    pppppuStack_c8 = local_70;
                    local_68 = (undefined4 *****)*local_100;
                    local_64 = *(undefined4 ******)(DAT_01d4c480 + 0x20);
                    FUN_01aaa328(iVar12,pcVar2,puVar13[4],&local_d0,&local_108);
                  }
                }
              }
            }
          }
        }
        else {
          FUN_00db4764(&local_108);
        }
        goto LAB_00a3b53c;
      }
    }
    else {
      local_b0 = (undefined4 *****)CONCAT31(local_b0._1_3_,6);
      local_ac = pppppuVar8;
      FUN_0127464c(&local_d0);
    }
    FUN_0094ccfc((uint)&local_b0 | 4);
  }
LAB_00a3b53c:
  FUN_01a68db4(auStack_1a8);
  FUN_0178e884(local_168);
  iVar12 = *piVar6;
  puVar11 = (uint *)(iVar12 + 8);
  uVar9 = *(uint *)(iVar12 + 8);
  if (uVar9 < 0x3ffffffe) {
    if (*puVar11 == uVar9) {
      bVar1 = (bool)hasExclusiveAccess(puVar11);
      if (bVar1) {
        *puVar11 = uVar9 + 1;
        DataMemoryBarrier(0xb);
        goto LAB_00a3b59c;
      }
    }
    else {
      ClearExclusiveLocal();
    }
  }
  FUN_0197a5c8(puVar11);
LAB_00a3b59c:
  if (*(char *)(iVar12 + 0x10) != '\0') {
    local_68 = (undefined4 *****)(iVar12 + 0x14);
    local_64 = (undefined4 *****)puVar11;
                    /* WARNING: Subroutine does not return */
    FUN_013073dc("BUG: SettingsManager lock poisoned",0x22,&local_68,&DAT_01c0e40c,&DAT_01c0e334);
  }
  FUN_00b093d4(&local_b0,*(undefined4 *)(iVar12 + 0x18),*(undefined4 *)(iVar12 + 0x1c),local_164 & 1
              );
  DataMemoryBarrier(0xb);
  do {
    uVar9 = *puVar11;
    bVar1 = (bool)hasExclusiveAccess(puVar11);
  } while (!bVar1);
  *puVar11 = uVar9 - 1;
  if ((uVar9 - 1 & 0xbfffffff) == 0x80000000) {
    FUN_019a33c4(puVar11);
  }
  FUN_00ab523c(&local_68,&local_b0);
  puVar13 = (undefined4 *)((uint)&local_d0 | 4);
  *puVar13 = local_68;
  puVar13[1] = local_64;
  puVar13[2] = local_60;
  local_d0 = (undefined4 *****)0x1;
  FUN_0160aaa4(&local_68,0);
  local_120 = local_d0;
  pppppuStack_11c = local_cc;
  pppppuStack_118 = pppppuStack_c8;
  puStack_114 = local_c4;
  local_160 = local_68;
  pppppuStack_15c = local_64;
  pppppuStack_158 = local_60;
  puStack_154 = local_5c;
  pppppuStack_150 = local_58;
  local_14c = local_54;
  pppppuStack_148 = local_50;
  puStack_144 = local_4c;
  iStack_140 = local_48;
  uStack_13c = uStack_44;
  local_138 = local_40;
  uStack_134 = uStack_3c;
  uStack_130 = uStack_38;
  uStack_12c = uStack_34;
  uStack_128 = uStack_30;
  uStack_124 = uStack_2c;
  FUN_0196afa8(&local_b0);
  *param_1 = 3;
  param_1[1] = 0;
  FUN_01bed4e2(param_1 + 2,&local_160,0x50);
  param_1[0x16] = 0;
  *(undefined1 *)(param_2 + 0x4c) = 1;
  return;
}

