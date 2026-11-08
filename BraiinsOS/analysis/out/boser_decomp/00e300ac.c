// FUN_00e300ac @ 00e300ac size=1612 calls_out=27 calls_in=1
// strings: BUG: request parameters cell was already initialized. | boser::api::grpc::utilsopen/boser/boser/src/api/grpc/utils.rs | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | BUG: request parameters cell was already initialized. | boser::api::grpc::utilsopen/boser/boser/src/api/grpc/utils.rs

void FUN_00e300ac(undefined4 *param_1,int param_2,undefined4 param_3)

{
  char *pcVar1;
  byte bVar2;
  undefined1 uVar3;
  char cVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined *puVar10;
  uint uVar11;
  undefined4 *puVar12;
  undefined4 ****ppppuVar13;
  undefined4 ****ppppuVar14;
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
  undefined4 local_154;
  undefined4 ****ppppuStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 local_120;
  byte local_11c;
  undefined1 auStack_118 [20];
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
  undefined4 local_c4;
  undefined4 ****local_c0;
  undefined4 local_bc;
  undefined4 ****local_b8;
  undefined4 local_b4;
  undefined4 ****local_b0;
  undefined4 ****local_ac;
  undefined4 local_a8;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 ****local_60;
  undefined4 ****local_5c;
  undefined4 ****local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
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
    iVar7 = *(int *)(param_2 + 0x98);
    FUN_01bed4e2(param_2 + 0x48,param_2,0x48);
    piVar5 = (int *)FUN_00a52660(*(undefined4 *)(param_2 + 0x88));
    if (piVar5 != (int *)0x0) {
      local_b8 = (undefined4 ****)&DAT_80000000;
      local_bc = (undefined4 ****)0x0;
      local_c4 = (undefined4 ****)0x0;
      local_c8 = (undefined4 ****)0x0;
      FUN_0196ac88(&local_160,&local_c8);
      uVar3 = local_160._0_1_;
      uVar11 = (uint)local_160 & 0xff;
      if (uVar11 == 6) {
        FUN_00e0fe5c(local_15c);
      }
      else {
        FUN_01bed4e2((uint)&local_60 | 1,(uint)&local_160 | 1,0x17);
        local_60 = (undefined4 ****)CONCAT31(local_60._1_3_,uVar3);
        if (uVar11 == 5) {
          local_b4 = 0;
          local_b0 = local_5c;
          local_a8 = uStack_54;
          if (local_5c == (undefined4 ****)0x0) {
            local_a8 = 0;
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
            cVar4 = (char)local_bc;
            local_104 = local_bc._1_2_;
            local_102 = local_bc._3_1_;
            FUN_00e0febc(&local_60);
            if (cVar4 != '\x02') {
              local_c8 = local_100;
              local_c4 = ppppuStack_fc;
              local_c0 = ppppuStack_f8;
              local_bc = (undefined4 ****)CONCAT31(CONCAT12(local_102,local_104),cVar4);
              DataMemoryBarrier(0xb);
              if (*(int *)(*piVar5 + 0x18) != 0) {
                FUN_00b065ec(*piVar5 + 8,&local_c8);
              }
              if (((uint)local_bc & 0xff) != 2) {
                local_160 = local_c8;
                local_15c = local_c4;
                local_158 = local_c0;
                local_154 = local_bc;
                FUN_019cf348();
                if ((DAT_01d50f88 < 5) &&
                   (((DAT_01d4c488 - 1 < 2 ||
                     ((DAT_01d4c488 != 0 && (cVar4 = FUN_01aaafa8(&DAT_01d4c480), cVar4 != '\0'))))
                    && (iVar6 = FUN_01aaa278(DAT_01d4c480), iVar6 != 0)))) {
                  local_58 = (undefined4 ****)(DAT_01d4c480 + 0x1c);
                  if (*(undefined4 *****)(DAT_01d4c480 + 0x20) == (undefined4 ****)0x0) {
LAB_00e306f4:
                    /* WARNING: Subroutine does not return */
                    FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c17708);
                  }
                  local_15c = &local_38;
                  local_c0 = *(undefined4 *****)(DAT_01d4c480 + 0x24);
                  local_bc = *(undefined4 *****)(DAT_01d4c480 + 0x28);
                  local_160 = &local_c8;
                  local_60 = &local_160;
                  local_5c = (undefined4 ****)&DAT_00000001;
                  local_b8 = (undefined4 ****)0x0;
                  local_158 = (undefined4 ****)&DAT_01d2ea4c;
                  local_34 = (undefined4 ****)&DAT_0000006b;
                  local_38 = (undefined4 ****)0x3fe987;
                  local_c8 = (undefined4 ****)*local_58;
                  local_c4 = *(undefined4 *****)(DAT_01d4c480 + 0x20);
                  FUN_00e0ff40(&local_60);
                }
                else {
                  iVar6 = DAT_01d4c480;
                  if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
                    local_44 = *(undefined4 *****)(DAT_01d4c480 + 0x14);
                    local_40 = *(undefined4 *****)(DAT_01d4c480 + 0x18);
                    local_48 = (undefined4 ****)&DAT_00000001;
                    DataMemoryBarrier(0xb);
                    puVar12 = DAT_01d4edc8;
                    pcVar1 = DAT_01d4edc4;
                    if (DAT_01d51174 != 2) {
                      puVar12 = &DAT_01cfc5e0;
                      pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
                    }
                    iVar8 = (*(code *)puVar12[3])(pcVar1,&local_48);
                    if (iVar8 != 0) {
                      local_30 = (undefined4 ****)(DAT_01d4c480 + 0x1c);
                      if (*(undefined4 *****)(DAT_01d4c480 + 0x20) == (undefined4 ****)0x0)
                      goto LAB_00e306f4;
                      local_5c = &local_f0;
                      local_60 = &local_c8;
                      local_bc = *(undefined4 *****)(DAT_01d4c480 + 0x28);
                      local_38 = &local_60;
                      local_c0 = *(undefined4 *****)(DAT_01d4c480 + 0x24);
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
                      FUN_01aaa328(iVar6,pcVar1,puVar12[4],&local_160,&local_38);
                    }
                  }
                }
              }
            }
            goto LAB_00e3035c;
          }
          FUN_0165a1f4(auStack_e8);
        }
        FUN_00e0febc(&local_60);
      }
    }
LAB_00e3035c:
    uVar9 = FUN_00615e5c(*(int *)(iVar7 + 8) + 8);
    puVar10 = &DAT_01c02a40;
    *(undefined4 *)(param_2 + 0x90) = uVar9;
    *(undefined **)(param_2 + 0x94) = &DAT_01c02a40;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c16fd4);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c16fd4);
  case 3:
    uVar9 = *(undefined4 *)(param_2 + 0x90);
    puVar10 = *(undefined **)(param_2 + 0x94);
  }
  (**(code **)(puVar10 + 0xc))(&local_c8,uVar9,param_3);
  ppppuVar14 = local_c8;
  if (local_c8 == (undefined4 ****)0x80000017) {
    *param_1 = 4;
    param_1[1] = 0;
    uVar3 = 3;
    goto LAB_00e30528;
  }
  bVar2 = (byte)local_c4;
  FUN_01bed4e2(auStack_118,(int)&local_c4 + 1,0x13);
  FUN_01139b38(*(undefined4 *)(param_2 + 0x90),*(undefined4 *)(param_2 + 0x94));
  if (ppppuVar14 == (undefined4 ****)&DAT_80000016) {
    FUN_0160aaa4(&local_160,0);
    local_11c = ~bVar2 & 1;
    local_120 = 0;
    if (local_160 == (undefined4 ****)&DAT_00000003 && local_15c == (undefined4 ****)0x0)
    goto LAB_00e30440;
    FUN_01bed4e2(auStack_1a8,&local_160,0x48);
    ppppuVar13 = (undefined4 ****)0x0;
    ppppuVar14 = (undefined4 ****)&DAT_00000003;
  }
  else {
    local_154 = (undefined4 ****)CONCAT31(local_154._1_3_,bVar2);
    local_158 = ppppuVar14;
    FUN_01bed4e2((int)&local_154 + 1,auStack_118,0x13);
LAB_00e30440:
    local_60 = local_158;
    local_5c = local_154;
    local_58 = ppppuStack_150;
    uStack_54 = uStack_14c;
    uStack_50 = uStack_148;
    uStack_4c = uStack_144;
    local_c8 = &local_38;
    local_30 = (undefined4 ****)0x0;
    local_38 = (undefined4 ****)0x0;
    local_bc = (undefined4 ****)0x0;
    local_34 = (undefined4 ****)&DAT_00000001;
    local_c0 = (undefined4 ****)0x60000020;
    local_c4 = (undefined4 ****)&DAT_01c17420;
    iVar7 = FUN_0121efc4(&local_60,&local_c8);
    if (iVar7 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_013073dc(&DAT_00533383,0x37,&local_48,&DAT_01c17458,&DAT_01d30334);
    }
    local_48 = local_38;
    local_44 = local_34;
    local_40 = local_30;
    FUN_01a70fd4(&local_c8,0xd);
    FUN_00df4ae4(&local_158);
    ppppuVar13 = local_c4;
    ppppuVar14 = local_c8;
    FUN_01bed4e2(auStack_1a8,&local_c0,0x48);
    local_1c0 = local_78;
    uStack_1bc = uStack_74;
    uStack_1b8 = uStack_70;
    uStack_1b4 = uStack_6c;
    uStack_1b0 = uStack_68;
    uStack_1ac = uStack_64;
  }
  FUN_00f9604c(param_2 + 0x48);
  *param_1 = ppppuVar14;
  param_1[1] = ppppuVar13;
  FUN_01bed4e2(param_1 + 2,auStack_1a8,0x48);
  param_1[0x14] = local_1c0;
  param_1[0x15] = uStack_1bc;
  param_1[0x16] = uStack_1b8;
  param_1[0x17] = uStack_1b4;
  param_1[0x18] = uStack_1b0;
  param_1[0x19] = uStack_1ac;
  uVar3 = 1;
LAB_00e30528:
  *(undefined1 *)(param_2 + 0x9c) = uVar3;
  return;
}

