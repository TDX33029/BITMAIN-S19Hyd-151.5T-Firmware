// FUN_0094ce2c @ 0094ce2c size=1944 calls_out=28 calls_in=1
// strings: BUG: request parameters cell was already initialized. | boser::api::grpc::utilsopen/boser/boser/src/api/grpc/utils.rs | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | boser::api::grpc::utilsopen/boser/boser/src/api/grpc/utils.rs

void FUN_0094ce2c(int param_1,int param_2)

{
  char *pcVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  char cVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  undefined4 ****ppppuVar10;
  undefined4 *puVar11;
  undefined4 *****pppppuVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  uint *puVar16;
  undefined4 *puVar17;
  undefined4 uVar18;
  undefined8 uVar19;
  undefined1 auStack_1d8 [64];
  undefined4 local_198;
  undefined4 *****pppppuStack_190;
  undefined4 *****pppppuStack_18c;
  undefined1 *puStack_188;
  undefined4 *puStack_184;
  undefined4 *****pppppuStack_180;
  undefined4 local_17c;
  undefined1 *puStack_178;
  undefined4 *puStack_174;
  int iStack_170;
  undefined4 uStack_16c;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 ****local_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 *****local_138;
  undefined4 *****pppppuStack_134;
  undefined4 *puStack_130;
  undefined4 *****pppppuStack_12c;
  undefined4 *****pppppuStack_128;
  undefined1 *puStack_124;
  undefined4 *****local_120;
  undefined4 *****local_11c;
  undefined1 *local_118;
  undefined4 *local_114;
  uint local_110;
  uint uStack_10c;
  undefined4 *****local_108;
  undefined4 *****local_104;
  undefined4 *puStack_100;
  undefined4 *****local_fc;
  undefined4 *****pppppuStack_f8;
  undefined1 *puStack_f4;
  undefined4 *****local_f0;
  undefined1 *local_ec;
  undefined4 *local_e8;
  int local_e4;
  undefined4 *****pppppuStack_d8;
  undefined4 *****pppppuStack_d4;
  undefined1 *puStack_d0;
  undefined4 *local_cc;
  uint local_c8;
  uint uStack_c4;
  uint uStack_c0;
  uint uStack_bc;
  undefined4 *****local_b8;
  undefined4 *****local_b4;
  undefined4 *local_b0;
  undefined4 ****local_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 *****pppppuStack_9c;
  undefined4 *puStack_98;
  undefined4 ****local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 *****local_80;
  undefined4 *****local_7c;
  undefined1 *local_78;
  undefined4 local_74;
  undefined4 *****local_70;
  undefined4 *****local_6c;
  undefined1 *local_68;
  undefined4 local_64;
  undefined4 *****local_60;
  undefined4 local_5c;
  undefined1 *local_58;
  undefined4 *local_54;
  int local_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined1 auStack_29 [5];
  
  if (*(char *)(param_2 + 0x4c) != '\0') {
    if (*(char *)(param_2 + 0x4c) == '\x01') {
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c0c388);
    }
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c0c388);
  }
  puVar17 = *(undefined4 **)(param_2 + 0x48);
  FUN_01bed4e2(auStack_1d8,param_2,0x48);
  piVar5 = (int *)FUN_00a52660(local_198);
  if (piVar5 != (int *)0x0) {
    iVar9 = *piVar5;
    local_60 = (undefined4 *****)&DAT_80000000;
    local_64 = (undefined4 *)0x0;
    local_6c = (undefined4 *****)0x0;
    local_70 = (undefined4 *****)0x0;
    FUN_0196ac88(&local_120,&local_70);
    uVar2 = local_120._0_1_;
    uVar8 = (uint)local_120 & 0xff;
    if (uVar8 == 6) {
      FUN_0094ccfc((uint)&local_120 | 4);
    }
    else {
      uVar7 = FUN_01bed4e2((uint)&local_f0 | 1,(uint)&local_120 | 1,0x17);
      puVar11 = local_e8;
      puVar3 = local_ec;
      local_f0 = (undefined4 *****)CONCAT31(local_f0._1_3_,uVar2);
      if (uVar8 == 5) {
        uVar19 = thunk_FUN_01bee35a(uVar7,0x2c0);
        puVar16 = (uint *)((int)uVar19 + (int)((ulonglong)uVar19 >> 0x20));
        iVar6 = local_e4;
        if (puVar3 == (undefined1 *)0x0) {
          iVar6 = 0;
        }
        pppppuVar12 = (undefined4 *****)(uint)(puVar3 != (undefined1 *)0x0);
        if ((char)puVar16[4] == '\0') {
          FUN_019ae6ac(&local_70);
          *puVar16 = (uint)local_70;
          puVar16[1] = (uint)local_6c;
          puVar16[2] = (uint)local_68;
          puVar16[3] = (uint)local_64;
          *(undefined1 *)(puVar16 + 4) = 1;
        }
        local_110 = *puVar16;
        uStack_10c = puVar16[1];
        local_108 = (undefined4 *****)puVar16[2];
        local_104 = (undefined4 *****)puVar16[3];
        *puVar16 = local_110 + 1;
        puVar16[1] = uStack_10c + (0xfffffffe < local_110);
        local_120 = (undefined4 *****)&DAT_0056d238;
        local_11c = (undefined4 *****)0x0;
        local_118 = (undefined1 *)0x0;
        local_114 = (undefined4 *)0x0;
        if (iVar6 != 0) {
          FUN_01aa37a0(&local_120,iVar6,local_110,uStack_10c,local_108,local_104);
        }
        local_54 = puVar11;
        local_64 = puVar11;
        local_58 = puVar3;
        local_68 = puVar3;
        local_5c = 0;
        local_6c = (undefined4 *****)0x0;
        local_70 = pppppuVar12;
        local_60 = pppppuVar12;
        local_50 = iVar6;
        while( true ) {
          uVar19 = FUN_01a41998(&local_70);
          iVar6 = (int)uVar19;
          if (iVar6 == 0) break;
          FUN_006666fc(&local_a0,*(undefined4 *)(iVar6 + 4),*(undefined4 *)(iVar6 + 8));
          local_88 = 0;
          local_8c = 1;
          local_90 = (undefined4 ****)0x0;
          local_74 = 0;
          local_78 = (undefined1 *)0x60000020;
          local_7c = (undefined4 *****)&DAT_01c0e3e4;
          local_80 = &local_90;
          iVar6 = FUN_01968fa4((int)((ulonglong)uVar19 >> 0x20),&local_80);
          if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_013073dc(&DAT_00533383,0x37,auStack_29,&DAT_01c0e3fc,&DAT_01d30334);
          }
          local_ac = local_90;
          uStack_a8 = local_8c;
          uStack_a4 = local_88;
          local_b8 = local_a0;
          local_b4 = pppppuStack_9c;
          local_b0 = puStack_98;
          FUN_01aa42f8(&local_80,&local_120,&local_b8,&local_ac);
          if (local_80 != (undefined4 *****)&DAT_80000000) {
            FUN_019bb7e0(local_80,local_7c);
          }
        }
        pppppuStack_d8 = local_120;
        pppppuStack_d4 = local_11c;
        puStack_d0 = local_118;
        local_cc = local_114;
        local_c8 = local_110;
        uStack_c4 = uStack_10c;
        uStack_c0 = (uint)local_108;
        uStack_bc = (uint)local_104;
        if (local_114 == (undefined4 *)0x0) {
          FUN_0126f23c(&pppppuStack_d8);
          uVar8 = 2;
        }
        else {
          FUN_0067b1ac(&local_70,&pppppuStack_d8);
          local_80 = local_70;
          local_7c = local_6c;
          local_78 = local_68;
          uVar8 = (uint)local_64 & 0xff;
          local_a0._0_3_ = (undefined3)((uint)local_64 >> 8);
        }
        FUN_00db4764(&local_f0);
        if (uVar8 != 2) {
          local_70 = local_80;
          local_6c = local_7c;
          local_68 = local_78;
          local_64 = (undefined4 *)
                     CONCAT13(local_a0._2_1_,CONCAT21((undefined2)local_a0,(char)uVar8));
          DataMemoryBarrier(0xb);
          if (*(int *)(iVar9 + 0x18) != 0) {
            FUN_00b065ec(iVar9 + 8,&local_70);
          }
          if ((char)local_64 != '\x02') {
            local_120 = local_70;
            local_11c = local_6c;
            local_118 = local_68;
            local_114 = local_64;
            FUN_019cf348();
            if ((DAT_01d50f88 < 5) &&
               (((DAT_01d4c488 - 1 < 2 ||
                 ((DAT_01d4c488 != 0 && (cVar4 = FUN_01aaafa8(&DAT_01d4c480), cVar4 != '\0')))) &&
                (iVar9 = FUN_01aaa278(DAT_01d4c480), iVar9 != 0)))) {
              if (*(undefined4 ******)(DAT_01d4c480 + 0x20) == (undefined4 *****)0x0) {
LAB_0094d5b0:
                    /* WARNING: Subroutine does not return */
                FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c17708);
              }
              local_b8 = &local_70;
              local_68 = *(undefined1 **)(DAT_01d4c480 + 0x24);
              local_64 = *(undefined4 **)(DAT_01d4c480 + 0x28);
              local_e8 = (undefined4 *)(DAT_01d4c480 + 0x1c);
              local_70 = (undefined4 *****)*local_e8;
              local_f0 = &local_b8;
              local_60 = (undefined4 *****)0x0;
              local_ec = (undefined1 *)0x1;
              local_b0 = (undefined4 *)&DAT_01d2ea4c;
              local_8c = 0x6b;
              local_90 = (undefined4 ****)0x3fe987;
              local_b4 = &local_90;
              local_6c = *(undefined4 ******)(DAT_01d4c480 + 0x20);
              FUN_01aaaecc(DAT_01d4c480,&local_f0);
              iVar9 = DAT_01d4c480;
              if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
                local_11c = *(undefined4 ******)(DAT_01d4c480 + 0x14);
                local_118 = *(undefined1 **)(DAT_01d4c480 + 0x18);
                local_120 = (undefined4 *****)&DAT_00000001;
                DataMemoryBarrier(0xb);
                puVar11 = DAT_01d4edc8;
                pcVar1 = DAT_01d4edc4;
                if (DAT_01d51174 != 2) {
                  puVar11 = &DAT_01cfc5e0;
                  pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
                }
                iVar6 = (*(code *)puVar11[3])(pcVar1,&local_120);
                if (iVar6 != 0) {
                  FUN_01aaa328(iVar9,pcVar1,puVar11[4],&local_120,&local_f0);
                }
              }
            }
            else {
              iVar9 = DAT_01d4c480;
              if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
                local_ec = *(undefined1 **)(DAT_01d4c480 + 0x14);
                local_e8 = *(undefined4 **)(DAT_01d4c480 + 0x18);
                local_f0 = (undefined4 *****)&DAT_00000001;
                DataMemoryBarrier(0xb);
                puVar11 = DAT_01d4edc8;
                pcVar1 = DAT_01d4edc4;
                if (DAT_01d51174 != 2) {
                  puVar11 = &DAT_01cfc5e0;
                  pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
                }
                iVar6 = (*(code *)puVar11[3])(pcVar1,&local_f0);
                if (iVar6 != 0) {
                  if (*(undefined4 ******)(DAT_01d4c480 + 0x20) == (undefined4 *****)0x0)
                  goto LAB_0094d5b0;
                  local_120 = &local_70;
                  local_68 = *(undefined1 **)(DAT_01d4c480 + 0x24);
                  local_64 = *(undefined4 **)(DAT_01d4c480 + 0x28);
                  local_b8 = &local_120;
                  local_60 = (undefined4 *****)0x0;
                  local_b4 = (undefined4 *****)&DAT_00000001;
                  local_118 = &DAT_01d2ea4c;
                  local_8c = 0x6b;
                  local_90 = (undefined4 ****)0x3fe987;
                  local_11c = &local_90;
                  local_b0 = (undefined4 *)(DAT_01d4c480 + 0x1c);
                  local_70 = *(undefined4 ******)(DAT_01d4c480 + 0x1c);
                  local_6c = *(undefined4 ******)(DAT_01d4c480 + 0x20);
                  FUN_01aaa328(iVar9,pcVar1,puVar11[4],&local_f0,&local_b8);
                }
              }
            }
          }
        }
      }
      else {
        FUN_00db4764(&local_f0);
      }
    }
  }
  ppppuVar10 = (undefined4 ****)*puVar17;
  uVar13 = puVar17[2];
  uVar14 = puVar17[3];
  uVar15 = puVar17[4];
  uVar18 = puVar17[5];
  uVar7 = puVar17[1];
  FUN_006666fc(&local_b8,puVar17[7],puVar17[8]);
  FUN_006666fc(&local_70,puVar17[10],puVar17[0xb]);
  local_108 = local_b8;
  local_104 = local_b4;
  puStack_100 = local_b0;
  local_fc = local_70;
  pppppuStack_f8 = local_6c;
  puStack_f4 = local_68;
  local_120 = (undefined4 *****)ppppuVar10;
  local_11c = (undefined4 *****)uVar7;
  local_118 = (undefined1 *)uVar13;
  local_114 = (undefined4 *)uVar14;
  local_110 = uVar15;
  uStack_10c = uVar18;
  FUN_0160aaa4(&local_70,0);
  local_150 = local_120;
  uStack_14c = local_11c;
  uStack_148 = local_118;
  uStack_144 = local_114;
  uStack_140 = local_110;
  uStack_13c = uStack_10c;
  local_138 = local_108;
  pppppuStack_134 = local_104;
  puStack_130 = puStack_100;
  pppppuStack_12c = local_fc;
  pppppuStack_128 = pppppuStack_f8;
  puStack_124 = puStack_f4;
  pppppuStack_190 = local_70;
  pppppuStack_18c = local_6c;
  puStack_188 = local_68;
  puStack_184 = local_64;
  pppppuStack_180 = local_60;
  local_17c = local_5c;
  puStack_178 = local_58;
  puStack_174 = local_54;
  iStack_170 = local_50;
  uStack_16c = uStack_4c;
  local_168 = local_48;
  uStack_164 = uStack_44;
  uStack_160 = uStack_40;
  uStack_15c = uStack_3c;
  uStack_158 = uStack_38;
  uStack_154 = uStack_34;
  FUN_00a1ea50(auStack_1d8);
  FUN_01bed4e2(param_1,&pppppuStack_190,0x70);
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined1 *)(param_2 + 0x4c) = 1;
  return;
}

