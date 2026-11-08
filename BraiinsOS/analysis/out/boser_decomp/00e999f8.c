// FUN_00e999f8 @ 00e999f8 size=1568 calls_out=27 calls_in=1
// strings: BUG: request parameters cell was already initialized. | boser::api::grpc::utilsopen/boser/boser/src/api/grpc/utils.rs | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | BUG: request parameters cell was already initialized. | boser::api::grpc::utilsopen/boser/boser/src/api/grpc/utils.rs

/* WARNING: Type propagation algorithm not settling */

void FUN_00e999f8(undefined4 *param_1,int param_2)

{
  char *pcVar1;
  undefined1 uVar2;
  char cVar3;
  int *piVar4;
  undefined4 *******pppppppuVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  uint uVar10;
  int *piVar11;
  undefined4 *******pppppppuVar12;
  undefined1 auStack_210 [64];
  undefined4 local_1d0;
  undefined4 local_1cc;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined1 auStack_1b8 [84];
  undefined4 ******local_164;
  undefined4 *******local_160;
  undefined4 *******local_15c;
  code *local_158;
  undefined4 local_154;
  undefined4 *******local_150;
  undefined4 local_14c;
  code *local_148;
  undefined4 *local_144;
  undefined4 local_140;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  uint local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 *******local_e8;
  undefined4 *******local_e4;
  code *local_e0;
  undefined4 *local_dc;
  undefined4 *******local_d8;
  undefined4 local_d4;
  code *pcStack_d0;
  undefined4 *puStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  uint local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined2 local_a4;
  undefined1 local_a2;
  undefined4 *******local_a0;
  undefined4 *******pppppppuStack_9c;
  code *pcStack_98;
  undefined4 *******local_90;
  undefined4 *******local_8c;
  code *local_88;
  undefined4 ******local_80;
  undefined4 local_7c;
  undefined4 *******local_78;
  code *local_74;
  undefined4 *local_70;
  undefined4 uStack_6c;
  undefined4 *******local_60;
  undefined4 *******local_5c;
  code *local_58;
  undefined1 auStack_48 [12];
  int local_3c;
  
  if (*(char *)(param_2 + 0x4c) != '\0') {
    if (*(char *)(param_2 + 0x4c) == '\x01') {
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c17d4c);
    }
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c17d4c);
  }
  piVar11 = *(int **)(param_2 + 0x48);
  FUN_01bed4e2(auStack_210,param_2,0x48);
  piVar4 = (int *)FUN_00a52660(local_1cc);
  if (piVar4 != (int *)0x0) {
    local_d8 = (undefined4 *******)&DAT_80000000;
    local_dc = (undefined4 *)0x0;
    local_e4 = (undefined4 *******)0x0;
    local_e8 = (undefined4 *******)0x0;
    pppppppuVar5 = (undefined4 *******)FUN_014a7b90(&local_e8,&DAT_004e94a9,6,local_1d0);
    if (pppppppuVar5 == (undefined4 *******)0x0) {
      local_160 = local_e8;
      local_15c = local_e4;
      local_158 = local_e0;
      local_154 = local_dc;
      local_150 = local_d8;
      local_14c = local_d4;
      local_148 = pcStack_d0;
      local_144 = puStack_cc;
      FUN_0196ac88(&local_60);
      uVar2 = local_60._0_1_;
      uVar10 = (uint)local_60 & 0xff;
      if (uVar10 != 6) {
        FUN_01bed4e2((uint)&local_78 | 1,(uint)&local_60 | 1,0x17);
        local_78 = (undefined4 *******)CONCAT31(local_78._1_3_,uVar2);
        if (uVar10 == 5) {
          local_14c = 0;
          local_148 = local_74;
          if (local_74 == (code *)0x0) {
            uStack_6c = 0;
          }
          local_158 = local_74;
          local_160 = (undefined4 *******)(uint)(local_74 != (code *)0x0);
          local_144 = local_70;
          local_154 = local_70;
          local_15c = (undefined4 *******)0x0;
          local_150 = local_160;
          local_140 = uStack_6c;
          FUN_00fea674(auStack_48,&local_160);
          if (local_3c != 0) {
            FUN_0067b1ac(&local_160,auStack_48);
            local_a0 = local_160;
            pppppppuStack_9c = local_15c;
            pcStack_98 = local_158;
            cVar3 = (char)local_154;
            local_a4 = local_154._1_2_;
            local_a2 = local_154._3_1_;
            FUN_00e0febc(&local_78);
            if (cVar3 != '\x02') {
              local_160 = local_a0;
              local_15c = pppppppuStack_9c;
              local_158 = pcStack_98;
              local_154 = (undefined4 *)CONCAT31(CONCAT12(local_a2,local_a4),cVar3);
              DataMemoryBarrier(0xb);
              if (*(int *)(*piVar4 + 0x18) != 0) {
                FUN_00b065ec(*piVar4 + 8,&local_160);
              }
              if ((char)local_154 != '\x02') {
                local_e8 = local_160;
                local_e4 = local_15c;
                local_e0 = local_158;
                local_dc = local_154;
                FUN_019cf348(&local_e8);
                if ((DAT_01d50f88 < 5) &&
                   (((DAT_01d4c488 - 1 < 2 ||
                     ((DAT_01d4c488 != 0 && (cVar3 = FUN_01aaafa8(&DAT_01d4c480), cVar3 != '\0'))))
                    && (iVar6 = FUN_01aaa278(DAT_01d4c480), iVar6 != 0)))) {
                  local_58 = (code *)(DAT_01d4c480 + 0x1c);
                  if (*(undefined4 ********)(DAT_01d4c480 + 0x20) == (undefined4 *******)0x0) {
LAB_00e9a014:
                    /* WARNING: Subroutine does not return */
                    FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c17708);
                  }
                  local_158 = *(code **)(DAT_01d4c480 + 0x24);
                  local_154 = *(undefined4 **)(DAT_01d4c480 + 0x28);
                  local_e4 = &local_78;
                  local_e8 = &local_160;
                  local_5c = (undefined4 *******)&DAT_00000001;
                  local_150 = (undefined4 *******)0x0;
                  local_e0 = (code *)&DAT_01d2ea4c;
                  local_74 = (code *)&DAT_0000006b;
                  local_78 = (undefined4 *******)0x3fe987;
                  local_160 = *(undefined4 ********)local_58;
                  local_15c = *(undefined4 ********)(DAT_01d4c480 + 0x20);
                  local_60 = &local_e8;
                  FUN_00e0ff40(&local_60);
                }
                else {
                  iVar6 = DAT_01d4c480;
                  if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
                    local_8c = *(undefined4 ********)(DAT_01d4c480 + 0x14);
                    local_88 = *(code **)(DAT_01d4c480 + 0x18);
                    local_90 = (undefined4 *******)&DAT_00000001;
                    DataMemoryBarrier(0xb);
                    puVar8 = DAT_01d4edc8;
                    pcVar1 = DAT_01d4edc4;
                    if (DAT_01d51174 != 2) {
                      puVar8 = &DAT_01cfc5e0;
                      pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
                    }
                    iVar7 = (*(code *)puVar8[3])(pcVar1,&local_90);
                    if (iVar7 != 0) {
                      local_70 = (undefined4 *)(DAT_01d4c480 + 0x1c);
                      if (*(undefined4 ********)(DAT_01d4c480 + 0x20) == (undefined4 *******)0x0)
                      goto LAB_00e9a014;
                      local_60 = &local_160;
                      local_158 = *(code **)(DAT_01d4c480 + 0x24);
                      local_5c = &local_80;
                      local_154 = *(undefined4 **)(DAT_01d4c480 + 0x28);
                      local_150 = (undefined4 *******)0x0;
                      local_74 = (code *)&DAT_00000001;
                      local_58 = (code *)&DAT_01d2ea4c;
                      local_7c = 0x6b;
                      local_80 = (undefined4 ******)0x3fe987;
                      local_e8 = local_90;
                      local_e4 = local_8c;
                      local_e0 = local_88;
                      local_160 = (undefined4 *******)*local_70;
                      local_15c = *(undefined4 ********)(DAT_01d4c480 + 0x20);
                      local_78 = &local_60;
                      FUN_01aaa328(iVar6,pcVar1,puVar8[4],&local_e8,&local_78);
                    }
                  }
                }
              }
            }
            goto LAB_00e99ad4;
          }
          FUN_0165a1f4(auStack_48);
        }
        FUN_00e0febc(&local_78);
        goto LAB_00e99ad4;
      }
      pppppppuVar5 = local_5c;
    }
    else {
      local_60 = (undefined4 *******)CONCAT31(local_60._1_3_,6);
      local_5c = pppppppuVar5;
      FUN_01276d58(&local_e8);
    }
    FUN_00e0fe5c(pppppppuVar5);
  }
LAB_00e99ad4:
  local_164 = (undefined4 ******)FUN_00f07994(auStack_210);
  uVar9 = 0;
  switch(local_164) {
  default:
    local_74 = FUN_012fce60;
    local_78 = &local_164;
    FUN_00664898(&local_e8,&DAT_0058a3f8,&local_78);
    local_60 = local_e8;
    local_5c = local_e4;
    local_58 = local_e0;
    FUN_01a70fd4(&local_160,3);
    pppppppuVar12 = local_15c;
    pppppppuVar5 = local_160;
    FUN_01bed4e2(auStack_1b8,&local_158,0x50);
    local_1c8 = local_108;
    uStack_1c4 = uStack_104;
    uStack_1c0 = uStack_100;
    uStack_1bc = uStack_fc;
    goto LAB_00e99c28;
  case (undefined4 ******)0x1:
    break;
  case (undefined4 ******)0x2:
    uVar9 = 1;
    break;
  case (undefined4 ******)0x3:
    uVar9 = 2;
  }
  FUN_00b70370(&local_f8,*(undefined4 *)(*piVar11 + 0x28),uVar9,0);
  local_b8 = local_f8;
  uStack_b4 = uStack_f4;
  uStack_b0 = uStack_f0;
  uStack_ac = uStack_ec;
  puVar8 = (undefined4 *)((uint)&local_160 | 4);
  local_160 = (undefined4 *******)0x0;
  *puVar8 = local_e8;
  puVar8[1] = local_e4;
  puVar8[2] = local_e0;
  puVar8[3] = local_dc;
  puVar8[4] = local_d8;
  puVar8[5] = local_d4;
  puVar8[6] = pcStack_d0;
  puVar8[7] = puStack_cc;
  puVar8[8] = uStack_c8;
  puVar8[9] = uStack_c4;
  puVar8[10] = local_c0;
  puVar8[0xb] = uStack_bc;
  puVar8[0xc] = local_f8;
  puVar8[0xd] = uStack_f4;
  puVar8[0xe] = uStack_f0;
  puVar8[0xf] = uStack_ec;
  iVar6 = thunk_FUN_01be5118(0x44);
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x44);
  }
  FUN_01bed4e2(iVar6,&local_160,0x44);
  FUN_00d91c94(&local_160,iVar6,&DAT_01c17c18);
  FUN_01bed4e2(auStack_1b8,&local_160,0x50);
  pppppppuVar12 = (undefined4 *******)0x0;
  pppppppuVar5 = (undefined4 *******)&DAT_00000003;
LAB_00e99c28:
  *param_1 = pppppppuVar5;
  param_1[1] = pppppppuVar12;
  FUN_01bed4e2(param_1 + 2,auStack_1b8,0x50);
  param_1[0x16] = local_1c8;
  param_1[0x17] = uStack_1c4;
  param_1[0x18] = uStack_1c0;
  param_1[0x19] = uStack_1bc;
  *(undefined1 *)(param_2 + 0x4c) = 1;
  return;
}

