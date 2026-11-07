// FUN_00e30fb0 @ 00e30fb0 size=1584 calls_out=27 calls_in=1
// strings: BUG: request parameters cell was already initialized. | boser::api::grpc::utilsopen/boser/boser/src/api/grpc/utils.rs | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | BUG: request parameters cell was already initialized. | boser::api::grpc::utilsopen/boser/boser/src/api/grpc/utils.rs

void FUN_00e30fb0(undefined4 *param_1,int param_2,undefined4 param_3)

{
  char *pcVar1;
  undefined1 uVar2;
  char cVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined *puVar8;
  int *piVar9;
  uint uVar10;
  undefined4 *puVar11;
  undefined4 ****ppppuVar12;
  undefined4 ****ppppuVar13;
  undefined4 local_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined1 auStack_1a8 [72];
  undefined4 ****local_160;
  undefined4 ****local_15c;
  undefined4 ****local_158;
  undefined4 ****local_154;
  undefined4 ****ppppuStack_150;
  undefined4 ****ppppuStack_14c;
  undefined4 ****ppppuStack_148;
  undefined4 uStack_144;
  undefined4 local_120;
  undefined4 ****local_118;
  undefined4 ****ppppuStack_114;
  undefined4 ****ppppuStack_110;
  undefined4 ****ppppuStack_10c;
  undefined4 uStack_108;
  undefined2 local_104;
  undefined1 local_102;
  undefined4 ****local_100;
  undefined4 ****ppppuStack_fc;
  undefined4 ****ppppuStack_f8;
  undefined4 ***local_f0;
  undefined4 local_ec;
  undefined1 auStack_e8 [12];
  int local_dc;
  undefined4 ****local_c8;
  undefined4 ****local_c4;
  undefined4 ****local_c0;
  undefined4 local_bc;
  undefined4 ****local_b8;
  undefined4 local_b4;
  undefined4 ****local_b0;
  undefined4 ****local_ac;
  undefined4 ****local_a8;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 ****local_60;
  undefined4 ****local_5c;
  undefined4 ****local_58;
  undefined4 ****ppppuStack_54;
  undefined4 ****ppppuStack_50;
  undefined4 uStack_4c;
  undefined4 ****local_48;
  undefined4 ****local_44;
  undefined4 ****local_40;
  undefined4 ****local_38;
  undefined4 ****local_34;
  undefined4 ****local_30;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 0x9c)) {
  case 0:
    *(undefined1 *)(param_2 + 0x9d) = 0;
    piVar9 = *(int **)(param_2 + 0x98);
    FUN_01bed4e2(param_2 + 0x48,param_2,0x48);
    piVar4 = (int *)FUN_00a52660(*(undefined4 *)(param_2 + 0x88));
    if (piVar4 != (int *)0x0) {
      local_b8 = (undefined4 ****)&DAT_80000000;
      local_bc = (undefined4 ****)0x0;
      local_c4 = (undefined4 ****)0x0;
      local_c8 = (undefined4 ****)0x0;
      FUN_0196ac88(&local_160,&local_c8);
      uVar2 = local_160._0_1_;
      uVar10 = (uint)local_160 & 0xff;
      if (uVar10 == 6) {
        FUN_00e0fe5c(local_15c);
      }
      else {
        FUN_01bed4e2((uint)&local_60 | 1,(uint)&local_160 | 1,0x17);
        local_60 = (undefined4 ****)CONCAT31(local_60._1_3_,uVar2);
        if (uVar10 == 5) {
          local_b4 = 0;
          local_b0 = local_5c;
          local_a8 = ppppuStack_54;
          if (local_5c == (undefined4 ****)0x0) {
            local_a8 = (undefined4 ****)0x0;
          }
          local_c0 = local_5c;
          local_c8 = local_5c;
          if (local_5c != (undefined4 ****)0x0) {
            local_c8 = (undefined4 ****)&DAT_00000001;
          }
          local_ac = local_58;
          local_bc = local_58;
          local_c4 = (undefined4 ****)0x0;
          local_b8 = local_c8;
          FUN_00fea674(auStack_e8,&local_c8);
          if (local_dc != 0) {
            FUN_0067b1ac(&local_c8,auStack_e8);
            local_100 = local_c8;
            ppppuStack_fc = local_c4;
            ppppuStack_f8 = local_c0;
            cVar3 = (char)local_bc;
            local_104 = local_bc._1_2_;
            local_102 = local_bc._3_1_;
            FUN_00e0febc(&local_60);
            if (cVar3 != '\x02') {
              local_c8 = local_100;
              local_c4 = ppppuStack_fc;
              local_c0 = ppppuStack_f8;
              local_bc = (undefined4 ****)CONCAT31(CONCAT12(local_102,local_104),cVar3);
              DataMemoryBarrier(0xb);
              if (*(int *)(*piVar4 + 0x18) != 0) {
                FUN_00b065ec(*piVar4 + 8,&local_c8);
              }
              if ((char)local_bc != '\x02') {
                local_160 = local_c8;
                local_15c = local_c4;
                local_158 = local_c0;
                local_154 = local_bc;
                FUN_019cf348();
                if ((DAT_01d50f88 < 5) &&
                   (((DAT_01d4c488 - 1 < 2 ||
                     ((DAT_01d4c488 != 0 && (cVar3 = FUN_01aaafa8(&DAT_01d4c480), cVar3 != '\0'))))
                    && (iVar5 = FUN_01aaa278(DAT_01d4c480), iVar5 != 0)))) {
                  local_58 = (undefined4 ****)(DAT_01d4c480 + 0x1c);
                  if (*(undefined4 *****)(DAT_01d4c480 + 0x20) == (undefined4 ****)0x0) {
LAB_00e315dc:
                    /* WARNING: Subroutine does not return */
                    FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c17708);
                  }
                  local_15c = &local_38;
                  local_c0 = *(undefined4 *****)(DAT_01d4c480 + 0x24);
                  local_bc = *(undefined4 *****)(DAT_01d4c480 + 0x28);
                  local_160 = &local_c8;
                  local_60 = &local_160;
                  local_b8 = (undefined4 ****)0x0;
                  local_5c = (undefined4 ****)&DAT_00000001;
                  local_158 = (undefined4 ****)&DAT_01d2ea4c;
                  local_34 = (undefined4 ****)&DAT_0000006b;
                  local_38 = (undefined4 ****)0x3fe987;
                  local_c8 = (undefined4 ****)*local_58;
                  local_c4 = *(undefined4 *****)(DAT_01d4c480 + 0x20);
                  FUN_00e0ff40(&local_60);
                }
                else {
                  iVar5 = DAT_01d4c480;
                  if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
                    local_44 = *(undefined4 *****)(DAT_01d4c480 + 0x14);
                    local_40 = *(undefined4 *****)(DAT_01d4c480 + 0x18);
                    local_48 = (undefined4 ****)&DAT_00000001;
                    DataMemoryBarrier(0xb);
                    puVar11 = DAT_01d4edc8;
                    pcVar1 = DAT_01d4edc4;
                    if (DAT_01d51174 != 2) {
                      puVar11 = &DAT_01cfc5e0;
                      pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
                    }
                    iVar6 = (*(code *)puVar11[3])(pcVar1,&local_48);
                    if (iVar6 != 0) {
                      local_30 = (undefined4 ****)(DAT_01d4c480 + 0x1c);
                      if (*(undefined4 *****)(DAT_01d4c480 + 0x20) == (undefined4 ****)0x0)
                      goto LAB_00e315dc;
                      local_5c = &local_f0;
                      local_60 = &local_c8;
                      local_38 = &local_60;
                      local_c0 = *(undefined4 *****)(DAT_01d4c480 + 0x24);
                      local_bc = *(undefined4 *****)(DAT_01d4c480 + 0x28);
                      local_b8 = (undefined4 ****)0x0;
                      local_34 = (undefined4 ****)&DAT_00000001;
                      local_58 = (undefined4 ****)&DAT_01d2ea4c;
                      local_ec = 0x6b;
                      local_f0 = (undefined4 ***)0x3fe987;
                      local_160 = local_48;
                      local_15c = local_44;
                      local_158 = local_40;
                      local_c8 = (undefined4 ****)*local_30;
                      local_c4 = *(undefined4 *****)(DAT_01d4c480 + 0x20);
                      FUN_01aaa328(iVar5,pcVar1,puVar11[4],&local_160,&local_38);
                    }
                  }
                }
              }
            }
            goto LAB_00e31258;
          }
          FUN_0165a1f4(auStack_e8);
        }
        FUN_00e0febc(&local_60);
      }
    }
LAB_00e31258:
    uVar7 = FUN_00b803c4(*piVar9 + 8);
    puVar8 = &DAT_01c13770;
    *(undefined4 *)(param_2 + 0x90) = uVar7;
    *(undefined **)(param_2 + 0x94) = &DAT_01c13770;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c17014);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c17014);
  case 3:
    uVar7 = *(undefined4 *)(param_2 + 0x90);
    puVar8 = *(undefined **)(param_2 + 0x94);
  }
  (**(code **)(puVar8 + 0xc))(&local_c8,uVar7,param_3);
  ppppuVar12 = local_c8;
  if (local_c8 == (undefined4 ****)0x80000017) {
    *param_1 = 4;
    param_1[1] = 0;
    uVar2 = 3;
    goto LAB_00e3140c;
  }
  local_118 = local_c4;
  ppppuStack_114 = local_c0;
  ppppuStack_110 = local_bc;
  ppppuStack_10c = local_b8;
  uStack_108 = local_b4;
  FUN_01139b38(*(undefined4 *)(param_2 + 0x90),*(undefined4 *)(param_2 + 0x94));
  if (ppppuVar12 == (undefined4 ****)&DAT_80000016) {
    FUN_0160aaa4(&local_160,0);
    local_120 = 0;
    if (local_160 == (undefined4 ****)&DAT_00000003 && local_15c == (undefined4 ****)0x0)
    goto LAB_00e31328;
    FUN_01bed4e2(auStack_1a8,&local_160,0x48);
    ppppuVar13 = (undefined4 ****)0x0;
    ppppuVar12 = (undefined4 ****)&DAT_00000003;
  }
  else {
    local_158 = ppppuVar12;
    local_154 = local_118;
    ppppuStack_150 = ppppuStack_114;
    ppppuStack_14c = ppppuStack_110;
    ppppuStack_148 = ppppuStack_10c;
    uStack_144 = uStack_108;
LAB_00e31328:
    local_60 = local_158;
    local_5c = local_154;
    local_58 = ppppuStack_150;
    ppppuStack_54 = ppppuStack_14c;
    ppppuStack_50 = ppppuStack_148;
    uStack_4c = uStack_144;
    local_c8 = &local_38;
    local_30 = (undefined4 ****)0x0;
    local_38 = (undefined4 ****)0x0;
    local_bc = (undefined4 ****)0x0;
    local_34 = (undefined4 ****)&DAT_00000001;
    local_c0 = (undefined4 ****)0x60000020;
    local_c4 = (undefined4 ****)&DAT_01c17420;
    iVar5 = FUN_0121efc4(&local_60,&local_c8);
    if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_013073dc(&DAT_00533383,0x37,&local_48,&DAT_01c17458,&DAT_01d30334);
    }
    local_48 = local_38;
    local_44 = local_34;
    local_40 = local_30;
    FUN_01a70fd4(&local_c8,0xd);
    FUN_00df4ae4(&local_158);
    ppppuVar13 = local_c4;
    ppppuVar12 = local_c8;
    FUN_01bed4e2(auStack_1a8,&local_c0,0x48);
    local_1c0 = local_78;
    uStack_1bc = uStack_74;
    uStack_1b8 = uStack_70;
    uStack_1b4 = uStack_6c;
    uStack_1b0 = uStack_68;
    uStack_1ac = uStack_64;
  }
  FUN_00f9604c(param_2 + 0x48);
  *param_1 = ppppuVar12;
  param_1[1] = ppppuVar13;
  FUN_01bed4e2(param_1 + 2,auStack_1a8,0x48);
  param_1[0x14] = local_1c0;
  param_1[0x15] = uStack_1bc;
  param_1[0x16] = uStack_1b8;
  param_1[0x17] = uStack_1b4;
  param_1[0x18] = uStack_1b0;
  param_1[0x19] = uStack_1ac;
  uVar2 = 1;
LAB_00e3140c:
  *(undefined1 *)(param_2 + 0x9c) = uVar2;
  return;
}

