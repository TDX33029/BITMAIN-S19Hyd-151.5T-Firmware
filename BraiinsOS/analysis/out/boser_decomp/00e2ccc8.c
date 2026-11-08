// FUN_00e2ccc8 @ 00e2ccc8 size=1756 calls_out=30 calls_in=2
// strings: wipe_networkSetPoolGroupsRequestSystemUpgradeRequestSetCoolingModeRequestSetPowerTargetRequest | Other system task already in progress | BUG: request parameters cell was already initialized. | boser::api::grpc::utilsopen/boser/boser/src/api/grpc/utils.rs | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll

void FUN_00e2ccc8(undefined4 *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  char *pcVar3;
  undefined1 uVar4;
  char cVar5;
  int *piVar6;
  undefined4 *****pppppuVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined4 *****pppppuVar11;
  undefined4 *puVar12;
  int *piVar13;
  undefined4 *****pppppuVar14;
  undefined1 auStack_270 [64];
  undefined4 local_230;
  byte local_22c;
  undefined4 local_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined1 auStack_210 [72];
  undefined4 *****local_1c8;
  undefined4 *****local_1c4;
  undefined4 *****local_1c0;
  undefined4 *local_1bc;
  undefined4 *****local_1b8;
  undefined4 uStack_1b4;
  undefined4 *****pppppuStack_1b0;
  undefined4 *puStack_1ac;
  undefined1 auStack_168 [68];
  undefined4 local_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined2 local_10c;
  undefined1 local_10a;
  undefined4 *****local_108;
  undefined4 *****pppppuStack_104;
  undefined4 *****pppppuStack_100;
  undefined4 ****local_f8;
  undefined4 local_f4;
  undefined4 *****local_f0;
  undefined4 *****local_ec;
  undefined4 *local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined1 auStack_d8 [12];
  int local_cc;
  undefined4 *****local_b8;
  undefined4 *****local_b4;
  undefined4 *****local_b0;
  undefined4 local_ac;
  undefined4 *****local_a8;
  undefined4 local_a4;
  undefined4 *****local_a0;
  undefined4 *local_9c;
  undefined4 local_98;
  undefined4 local_78;
  undefined4 *****local_50;
  undefined4 *****local_4c;
  undefined4 *local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 *****local_38;
  undefined4 *****local_34;
  undefined4 *****local_30;
  
  if (*(char *)(param_2 + 0x4c) != '\0') {
    if (*(char *)(param_2 + 0x4c) == '\x01') {
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c16f54);
    }
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c16f54);
  }
  piVar13 = *(int **)(param_2 + 0x48);
  FUN_01bed4e2(auStack_270,param_2,0x48);
  piVar6 = (int *)FUN_00a52660(local_230);
  if (piVar6 != (int *)0x0) {
    local_1b8 = (undefined4 *****)&DAT_80000000;
    local_1bc = (undefined4 *)0x0;
    local_1c4 = (undefined4 *****)0x0;
    local_1c8 = (undefined4 *****)0x0;
    pppppuVar7 = (undefined4 *****)
                 FUN_00a46668(&local_1c8,
                              "wipe_networkSetPoolGroupsRequestSystemUpgradeRequestSetCoolingModeRequestSetPowerTargetRequest"
                              ,0xc,local_22c);
    if (pppppuVar7 == (undefined4 *****)0x0) {
      local_b8 = local_1c8;
      local_b4 = local_1c4;
      local_b0 = local_1c0;
      local_ac = local_1bc;
      local_a8 = local_1b8;
      local_a4 = uStack_1b4;
      local_a0 = pppppuStack_1b0;
      local_9c = puStack_1ac;
      FUN_0196ac88(&local_50);
      uVar4 = local_50._0_1_;
      uVar10 = (uint)local_50 & 0xff;
      if (uVar10 != 6) {
        FUN_01bed4e2((uint)&local_f0 | 1,(uint)&local_50 | 1,0x17);
        local_f0 = (undefined4 *****)CONCAT31(local_f0._1_3_,uVar4);
        if (uVar10 == 5) {
          local_a4 = 0;
          local_a0 = local_ec;
          local_98 = uStack_e4;
          if (local_ec == (undefined4 *****)0x0) {
            local_98 = 0;
          }
          local_b0 = local_ec;
          local_b8 = (undefined4 *****)(uint)(local_ec != (undefined4 *****)0x0);
          local_9c = local_e8;
          local_ac = local_e8;
          local_b4 = (undefined4 *****)0x0;
          local_a8 = local_b8;
          FUN_00fea674(auStack_d8,&local_b8);
          if (local_cc != 0) {
            FUN_0067b1ac(&local_b8,auStack_d8);
            local_108 = local_b8;
            pppppuStack_104 = local_b4;
            pppppuStack_100 = local_b0;
            cVar5 = (char)local_ac;
            local_10c = local_ac._1_2_;
            local_10a = local_ac._3_1_;
            FUN_00e0febc(&local_f0);
            if (cVar5 != '\x02') {
              local_b8 = local_108;
              local_b4 = pppppuStack_104;
              local_b0 = pppppuStack_100;
              local_ac = (undefined4 *)CONCAT31(CONCAT12(local_10a,local_10c),cVar5);
              DataMemoryBarrier(0xb);
              if (*(int *)(*piVar6 + 0x18) != 0) {
                FUN_00b065ec(*piVar6 + 8,&local_b8);
              }
              if ((char)local_ac != '\x02') {
                local_1c8 = local_b8;
                local_1c4 = local_b4;
                local_1c0 = local_b0;
                local_1bc = local_ac;
                FUN_019cf348(&local_1c8);
                if ((DAT_01d50f88 < 5) &&
                   (((DAT_01d4c488 - 1 < 2 ||
                     ((DAT_01d4c488 != 0 && (cVar5 = FUN_01aaafa8(&DAT_01d4c480), cVar5 != '\0'))))
                    && (iVar9 = FUN_01aaa278(DAT_01d4c480), iVar9 != 0)))) {
                  local_48 = (undefined4 *)(DAT_01d4c480 + 0x1c);
                  if (*(undefined4 ******)(DAT_01d4c480 + 0x20) == (undefined4 *****)0x0) {
LAB_00e2d38c:
                    /* WARNING: Subroutine does not return */
                    FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c17708);
                  }
                  local_b0 = *(undefined4 ******)(DAT_01d4c480 + 0x24);
                  local_ac = *(undefined4 **)(DAT_01d4c480 + 0x28);
                  local_1c4 = &local_f0;
                  local_4c = (undefined4 *****)&DAT_00000001;
                  local_a8 = (undefined4 *****)0x0;
                  local_1c0 = (undefined4 *****)&DAT_01d2ea4c;
                  local_ec = (undefined4 *****)&DAT_0000006b;
                  local_f0 = (undefined4 *****)0x3fe987;
                  local_1c8 = &local_b8;
                  local_b8 = (undefined4 *****)*local_48;
                  local_b4 = *(undefined4 ******)(DAT_01d4c480 + 0x20);
                  local_50 = &local_1c8;
                  FUN_00e0ff40(&local_50);
                }
                else {
                  iVar9 = DAT_01d4c480;
                  if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
                    local_34 = *(undefined4 ******)(DAT_01d4c480 + 0x14);
                    local_30 = *(undefined4 ******)(DAT_01d4c480 + 0x18);
                    local_38 = (undefined4 *****)&DAT_00000001;
                    DataMemoryBarrier(0xb);
                    puVar12 = DAT_01d4edc8;
                    pcVar3 = DAT_01d4edc4;
                    if (DAT_01d51174 != 2) {
                      puVar12 = &DAT_01cfc5e0;
                      pcVar3 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
                    }
                    iVar8 = (*(code *)puVar12[3])(pcVar3,&local_38);
                    if (iVar8 != 0) {
                      local_50 = &local_b8;
                      local_e8 = (undefined4 *)(DAT_01d4c480 + 0x1c);
                      if (*(undefined4 ******)(DAT_01d4c480 + 0x20) == (undefined4 *****)0x0)
                      goto LAB_00e2d38c;
                      local_4c = &local_f8;
                      local_b0 = *(undefined4 ******)(DAT_01d4c480 + 0x24);
                      local_ac = *(undefined4 **)(DAT_01d4c480 + 0x28);
                      local_a8 = (undefined4 *****)0x0;
                      local_ec = (undefined4 *****)&DAT_00000001;
                      local_48 = (undefined4 *)&DAT_01d2ea4c;
                      local_f4 = 0x6b;
                      local_f8 = (undefined4 ****)0x3fe987;
                      local_1c8 = local_38;
                      local_1c4 = local_34;
                      local_1c0 = local_30;
                      local_f0 = &local_50;
                      local_b8 = (undefined4 *****)*local_e8;
                      local_b4 = *(undefined4 ******)(DAT_01d4c480 + 0x20);
                      FUN_01aaa328(iVar9,pcVar3,puVar12[4],&local_1c8,&local_f0);
                    }
                  }
                }
              }
            }
            goto LAB_00e2cda0;
          }
          FUN_0165a1f4(auStack_d8);
        }
        FUN_00e0febc(&local_f0);
        goto LAB_00e2cda0;
      }
      pppppuVar7 = local_4c;
    }
    else {
      local_50 = (undefined4 *****)CONCAT31(local_50._1_3_,6);
      local_4c = pppppuVar7;
      FUN_01276d58(&local_1c8);
    }
    FUN_00e0fe5c(pppppuVar7);
  }
LAB_00e2cda0:
  FUN_0142e6dc(auStack_270);
  FUN_0178e884(local_230);
  FUN_00b7d6b4(&local_f0,*(undefined4 *)(*piVar13 + 0x1c));
  if (local_f0 == (undefined4 *****)&DAT_80000016) {
    pppppuVar14 = local_ec;
  }
  else {
    local_50 = local_f0;
    local_4c = local_ec;
    local_48 = local_e8;
    uStack_44 = uStack_e4;
    uStack_40 = uStack_e0;
    uStack_3c = uStack_dc;
    local_30 = (undefined4 *****)0x0;
    local_38 = (undefined4 *****)0x0;
    local_ac = (undefined4 *)0x0;
    local_34 = (undefined4 *****)&DAT_00000001;
    local_b0 = (undefined4 *****)0x60000020;
    local_b8 = &local_38;
    local_b4 = (undefined4 *****)&DAT_01c17420;
    iVar9 = FUN_0121efc4(&local_50,&local_b8);
    pppppuVar11 = local_30;
    pppppuVar14 = local_34;
    pppppuVar7 = local_38;
    if (iVar9 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_013073dc(&DAT_00533383,0x37,&local_108,&DAT_01c17458,&DAT_01d30334);
    }
    if ((local_30 == (undefined4 *****)&DAT_00000025) &&
       (iVar9 = thunk_FUN_01bed842(local_34,"Other system task already in progress",0x25),
       iVar9 == 0)) {
      local_30 = (undefined4 *****)&DAT_00000025;
      local_38 = pppppuVar7;
      local_34 = pppppuVar14;
      FUN_01a70fd4(&local_b8,10,&local_38);
    }
    else {
      local_38 = pppppuVar7;
      local_34 = pppppuVar14;
      local_30 = pppppuVar11;
      FUN_01a70fd4(&local_b8,0xd,&local_38);
    }
    FUN_00df4ae4(&local_f0);
    pppppuVar14 = local_b0;
    pppppuVar11 = local_b4;
    pppppuVar7 = local_b8;
    FUN_01bed4e2(&local_1c8,&local_ac,0x5c);
    if (pppppuVar7 != (undefined4 *****)&DAT_00000003 || pppppuVar11 != (undefined4 *****)0x0) {
      FUN_01bed4e2(auStack_168,&local_1c8,0x5c);
      FUN_01bed4e2(auStack_210,auStack_168,0x44);
      local_228 = local_124;
      uStack_224 = uStack_120;
      uStack_220 = uStack_11c;
      uStack_21c = uStack_118;
      uStack_218 = uStack_114;
      uStack_214 = uStack_110;
      goto LAB_00e2cf5c;
    }
  }
  piVar13 = (int *)*piVar13;
  do {
    iVar9 = *piVar13;
    bVar2 = (bool)hasExclusiveAccess(piVar13);
  } while (!bVar2);
  *piVar13 = iVar9 + 1;
  if (iVar9 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0xe2d3a4);
    (*pcVar1)();
  }
  FUN_00608684(piVar13,pppppuVar14,local_22c & 1);
  pppppuVar11 = (undefined4 *****)0x0;
  FUN_0160aaa4(&local_b8,0);
  pppppuVar14 = local_b8;
  local_78 = 0;
  FUN_01bed4e2(auStack_210,(uint)&local_b8 | 4,0x44);
  pppppuVar7 = (undefined4 *****)&DAT_00000003;
LAB_00e2cf5c:
  *param_1 = pppppuVar7;
  param_1[1] = pppppuVar11;
  param_1[2] = pppppuVar14;
  FUN_01bed4e2(param_1 + 3,auStack_210,0x44);
  param_1[0x14] = local_228;
  param_1[0x15] = uStack_224;
  param_1[0x16] = uStack_220;
  param_1[0x17] = uStack_21c;
  param_1[0x18] = uStack_218;
  param_1[0x19] = uStack_214;
  *(undefined1 *)(param_2 + 0x4c) = 1;
  return;
}

