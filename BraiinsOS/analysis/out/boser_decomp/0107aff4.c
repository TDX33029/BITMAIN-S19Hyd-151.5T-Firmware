// FUN_0107aff4 @ 0107aff4 size=1700 calls_out=27 calls_in=1
// strings: BUG: request parameters cell was already initialized. | boser::api::grpc::utilsopen/boser/boser/src/api/grpc/utils.rs | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | BUG: request parameters cell was already initialized. | boser::api::grpc::utilsopen/boser/boser/src/api/grpc/utils.rs

void FUN_0107aff4(undefined4 *param_1,int param_2,undefined4 param_3)

{
  char *pcVar1;
  undefined1 uVar2;
  char cVar3;
  int *piVar4;
  char **ppcVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined4 *puVar10;
  undefined4 ****ppppuVar11;
  undefined4 ****ppppuVar12;
  ulonglong uVar13;
  undefined4 local_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined1 auStack_218 [72];
  undefined4 ****local_1d0;
  undefined4 ****local_1cc;
  char **local_1c8;
  undefined4 *local_1c4;
  undefined4 ****local_1c0;
  undefined4 uStack_1bc;
  char **ppcStack_1b8;
  undefined4 *puStack_1b4;
  undefined1 auStack_170 [72];
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 ****local_110;
  undefined4 ****local_10c;
  char **local_108;
  undefined4 local_104;
  undefined4 ****local_100;
  undefined4 local_fc;
  char **local_f8;
  undefined4 *local_f4;
  undefined4 local_f0;
  undefined4 local_d0;
  undefined2 local_a4;
  undefined1 local_a2;
  undefined4 ****local_a0;
  undefined4 ****ppppuStack_9c;
  char **ppcStack_98;
  undefined4 ****local_90;
  undefined4 ****local_8c;
  char **local_88;
  char *local_80;
  undefined4 local_7c;
  undefined4 ****local_78;
  char **local_74;
  undefined4 *local_70;
  undefined4 uStack_6c;
  undefined4 ****local_60;
  char **local_5c;
  undefined4 *local_58;
  undefined1 auStack_48 [12];
  int local_3c;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 0x654)) {
  case 0:
    *(undefined1 *)(param_2 + 0x655) = 0;
    iVar6 = *(int *)(param_2 + 0x650);
    FUN_01bed4e2(param_2 + 0x50,param_2,0x50);
    piVar4 = (int *)FUN_00a52660(*(undefined4 *)(param_2 + 0x9c));
    if (piVar4 != (int *)0x0) {
      local_1c0 = (undefined4 ****)&DAT_80000000;
      local_1c4 = (undefined4 *)0x0;
      local_1cc = (undefined4 ****)0x0;
      local_1d0 = (undefined4 ****)0x0;
      ppcVar5 = (char **)FUN_01271f48(&local_1d0,&DAT_0056c91c,4,*(undefined4 *)(param_2 + 0x94),
                                      *(undefined4 *)(param_2 + 0x98));
      if (ppcVar5 == (char **)0x0) {
        local_110 = local_1d0;
        local_10c = local_1cc;
        local_108 = local_1c8;
        local_104 = local_1c4;
        local_100 = local_1c0;
        local_fc = uStack_1bc;
        local_f8 = ppcStack_1b8;
        local_f4 = puStack_1b4;
        FUN_0196ac88(&local_60);
        uVar2 = local_60._0_1_;
        uVar9 = (uint)local_60 & 0xff;
        if (uVar9 != 6) {
          FUN_01bed4e2((uint)&local_78 | 1,(uint)&local_60 | 1,0x17);
          local_78 = (undefined4 ****)CONCAT31(local_78._1_3_,uVar2);
          if (uVar9 == 5) {
            local_fc = 0;
            local_f8 = local_74;
            if (local_74 == (char **)0x0) {
              uStack_6c = 0;
            }
            local_108 = local_74;
            local_110 = (undefined4 ****)(uint)(local_74 != (char **)0x0);
            local_f4 = local_70;
            local_104 = local_70;
            local_10c = (undefined4 ****)0x0;
            local_100 = local_110;
            local_f0 = uStack_6c;
            FUN_00fea674(auStack_48,&local_110);
            if (local_3c != 0) {
              FUN_0067b1ac(&local_110,auStack_48);
              local_a0 = local_110;
              ppppuStack_9c = local_10c;
              ppcStack_98 = local_108;
              cVar3 = (char)local_104;
              local_a4 = local_104._1_2_;
              local_a2 = local_104._3_1_;
              FUN_00e0febc(&local_78);
              if (cVar3 != '\x02') {
                local_110 = local_a0;
                local_10c = ppppuStack_9c;
                local_108 = ppcStack_98;
                local_104 = (undefined4 *)CONCAT31(CONCAT12(local_a2,local_a4),cVar3);
                DataMemoryBarrier(0xb);
                if (*(int *)(*piVar4 + 0x18) != 0) {
                  FUN_00b065ec(*piVar4 + 8,&local_110);
                }
                if (((uint)local_104 & 0xff) != 2) {
                  local_1d0 = local_110;
                  local_1cc = local_10c;
                  local_1c8 = local_108;
                  local_1c4 = local_104;
                  FUN_019cf348();
                  if ((DAT_01d50f88 < 5) &&
                     (((DAT_01d4c488 - 1 < 2 ||
                       ((DAT_01d4c488 != 0 && (cVar3 = FUN_01aaafa8(&DAT_01d4c480), cVar3 != '\0')))
                       ) && (iVar7 = FUN_01aaa278(DAT_01d4c480), iVar7 != 0)))) {
                    local_58 = (undefined4 *)(DAT_01d4c480 + 0x1c);
                    if (*(undefined4 *****)(DAT_01d4c480 + 0x20) == (undefined4 ****)0x0) {
LAB_0107b694:
                    /* WARNING: Subroutine does not return */
                      FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c17708);
                    }
                    local_1cc = &local_78;
                    local_108 = *(char ***)(DAT_01d4c480 + 0x24);
                    local_104 = *(undefined4 **)(DAT_01d4c480 + 0x28);
                    local_1d0 = &local_110;
                    local_60 = &local_1d0;
                    local_5c = (char **)&DAT_00000001;
                    local_100 = (undefined4 ****)0x0;
                    local_1c8 = (char **)&DAT_01d2ea4c;
                    local_74 = (char **)&DAT_0000006b;
                    local_78 = (undefined4 ****)0x3fe987;
                    local_110 = (undefined4 ****)*local_58;
                    local_10c = *(undefined4 *****)(DAT_01d4c480 + 0x20);
                    FUN_00e0ff40(&local_60);
                  }
                  else {
                    iVar7 = DAT_01d4c480;
                    if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
                      local_8c = *(undefined4 *****)(DAT_01d4c480 + 0x14);
                      local_88 = *(char ***)(DAT_01d4c480 + 0x18);
                      local_90 = (undefined4 ****)&DAT_00000001;
                      DataMemoryBarrier(0xb);
                      puVar10 = DAT_01d4edc8;
                      pcVar1 = DAT_01d4edc4;
                      if (DAT_01d51174 != 2) {
                        puVar10 = &DAT_01cfc5e0;
                        pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
                      }
                      iVar8 = (*(code *)puVar10[3])(pcVar1,&local_90);
                      if (iVar8 != 0) {
                        local_70 = (undefined4 *)(DAT_01d4c480 + 0x1c);
                        if (*(undefined4 *****)(DAT_01d4c480 + 0x20) == (undefined4 ****)0x0)
                        goto LAB_0107b694;
                        local_5c = &local_80;
                        local_108 = *(char ***)(DAT_01d4c480 + 0x24);
                        local_104 = *(undefined4 **)(DAT_01d4c480 + 0x28);
                        local_60 = &local_110;
                        local_78 = &local_60;
                        local_74 = (char **)&DAT_00000001;
                        local_100 = (undefined4 ****)0x0;
                        local_58 = (undefined4 *)&DAT_01d2ea4c;
                        local_7c = 0x6b;
                        local_80 = "BUG: request parameters cell was already initialized.";
                        local_1d0 = local_90;
                        local_1cc = local_8c;
                        local_1c8 = local_88;
                        local_110 = (undefined4 ****)*local_70;
                        local_10c = *(undefined4 *****)(DAT_01d4c480 + 0x20);
                        FUN_01aaa328(iVar7,pcVar1,puVar10[4],&local_1d0,&local_78);
                      }
                    }
                  }
                }
              }
              goto LAB_0107b108;
            }
            FUN_0165a1f4(auStack_48);
          }
          FUN_00e0febc(&local_78);
          goto LAB_0107b108;
        }
        ppcVar5 = local_5c;
      }
      else {
        local_60 = (undefined4 ****)CONCAT31(local_60._1_3_,6);
        local_5c = ppcVar5;
        FUN_01276d58(&local_1d0);
      }
      FUN_00e0fe5c(ppcVar5);
    }
LAB_0107b108:
    iVar6 = *(int *)(iVar6 + 4);
    *(undefined4 *)(param_2 + 0xb8) = *(undefined4 *)(param_2 + 0x94);
    *(undefined4 *)(param_2 + 0xbc) = *(undefined4 *)(param_2 + 0x98);
    *(undefined1 *)(param_2 + 0xcd) = 0;
    *(int *)(param_2 + 200) = iVar6 + 8;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c1d84c);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c1d84c);
  }
  uVar13 = FUN_01039e98(param_2 + 0xa0,param_3);
  ppppuVar11 = (undefined4 ****)(uVar13 >> 0x20);
  if ((uVar13 & 1) != 0) {
    *param_1 = 4;
    param_1[1] = 0;
    uVar2 = 3;
    goto LAB_0107b264;
  }
  FUN_01039d3c(param_2 + 0xa0);
  if (ppppuVar11 == (undefined4 ****)0x0) {
LAB_0107b20c:
    ppppuVar12 = (undefined4 ****)0x0;
    FUN_0160aaa4(&local_110,0);
    local_d0 = 0;
    FUN_01bed4e2(auStack_218,&local_110,0x48);
    ppppuVar11 = (undefined4 ****)&DAT_00000003;
    FUN_01073b40(param_2 + 0x50);
  }
  else {
    local_110 = &local_60;
    local_58 = (undefined4 *)0x0;
    local_60 = (undefined4 ****)0x0;
    local_104 = (undefined4 *)0x0;
    local_5c = (char **)&DAT_00000001;
    local_108 = (char **)0x60000020;
    local_10c = (undefined4 ****)&DAT_01c1dd64;
    local_90 = ppppuVar11;
    iVar6 = FUN_00667a08(&local_90,&local_110);
    if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_013073dc(&DAT_00533383,0x37,&local_78,&DAT_01c1dd8c,&DAT_01d30334);
    }
    local_78 = local_60;
    local_74 = local_5c;
    local_70 = local_58;
    FUN_01a70fd4(&local_110,0xd);
    (*(code *)**ppppuVar11)(ppppuVar11);
    ppppuVar12 = local_10c;
    ppppuVar11 = local_110;
    FUN_01bed4e2(&local_1d0,&local_108,0x60);
    if (ppppuVar11 == (undefined4 ****)&DAT_00000003 && ppppuVar12 == (undefined4 ****)0x0)
    goto LAB_0107b20c;
    FUN_01bed4e2(auStack_170,&local_1d0,0x60);
    FUN_01bed4e2(auStack_218,auStack_170,0x48);
    local_230 = local_128;
    uStack_22c = uStack_124;
    uStack_228 = uStack_120;
    uStack_224 = uStack_11c;
    uStack_220 = uStack_118;
    uStack_21c = uStack_114;
    FUN_01073b40(param_2 + 0x50);
    if (*(char *)(param_2 + 0x655) == '\x01') {
      FUN_01073b40(param_2);
    }
  }
  *param_1 = ppppuVar11;
  param_1[1] = ppppuVar12;
  FUN_01bed4e2(param_1 + 2,auStack_218,0x48);
  param_1[0x14] = local_230;
  param_1[0x15] = uStack_22c;
  param_1[0x16] = uStack_228;
  param_1[0x17] = uStack_224;
  param_1[0x18] = uStack_220;
  param_1[0x19] = uStack_21c;
  uVar2 = 1;
LAB_0107b264:
  *(undefined1 *)(param_2 + 0x654) = uVar2;
  return;
}

