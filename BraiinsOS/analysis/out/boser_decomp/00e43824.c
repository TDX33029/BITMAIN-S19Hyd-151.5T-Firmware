// FUN_00e43824 @ 00e43824 size=4928 calls_out=40 calls_in=1
// strings: BUG: request parameters cell was already initialized. | /etc/bosminer-autotune.json | no tuner profiles | boser::api::grpc::performanceopen/boser/boser/src/api/grpc/performance.rsevent open/boser/boser/src/api/grpc/performance.rs:1144event open/boser/boser/src/api/grpc/performance.rs:1179event open/boser/boser/src/api/grpc/performance.rs:1171 | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll

void FUN_00e43824(undefined4 *param_1,int param_2,undefined4 param_3)

{
  char *pcVar1;
  undefined1 uVar2;
  char cVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined *puVar8;
  uint uVar9;
  undefined4 *puVar10;
  undefined4 ****ppppuVar11;
  undefined4 ****ppppuVar12;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined1 auStack_1d0 [76];
  undefined4 local_184;
  undefined4 local_180;
  undefined4 local_17c;
  undefined4 ****ppppuStack_178;
  undefined4 ****ppppuStack_174;
  undefined4 *puStack_170;
  undefined4 ****ppppuStack_16c;
  undefined4 uStack_168;
  undefined4 local_164;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 ****ppppuStack_158;
  undefined4 ****ppppuStack_154;
  undefined4 *puStack_150;
  undefined4 ****ppppuStack_14c;
  undefined4 uStack_148;
  undefined4 ****local_140;
  undefined4 ****local_13c;
  undefined4 *local_138;
  undefined4 ***local_134;
  undefined4 ****local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 ****local_120;
  undefined4 ****local_11c;
  undefined4 ****local_118;
  undefined4 ****local_110;
  undefined4 ****local_10c;
  undefined4 ****local_108;
  undefined4 ****local_100;
  undefined4 ****local_fc;
  undefined4 *local_f8;
  undefined4 ****local_f0;
  undefined4 ****local_ec;
  undefined4 ****local_e8;
  undefined4 ****local_e4;
  undefined4 *local_e0;
  undefined4 uStack_dc;
  undefined4 ****local_d0;
  undefined4 ****local_cc;
  undefined4 ****local_c8;
  undefined4 *local_c4;
  undefined4 ****ppppuStack_c0;
  undefined4 uStack_bc;
  undefined1 auStack_b8 [12];
  int local_ac;
  undefined4 ****local_98;
  undefined4 ****local_94;
  undefined4 ****local_90;
  undefined4 *local_8c;
  undefined4 ****local_88;
  undefined4 local_84;
  undefined4 ****local_80;
  undefined4 *local_7c;
  undefined4 local_78;
  undefined4 local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 0x98)) {
  case 0:
    *(undefined4 *)(param_2 + 0x94) = *(undefined4 *)(param_2 + 0x90);
    *(undefined2 *)(param_2 + 0x9a) = 0;
    FUN_01bed4e2(param_2 + 0x48,param_2,0x48);
    piVar4 = (int *)FUN_00a52660(*(undefined4 *)(param_2 + 0x88));
    if (piVar4 != (int *)0x0) {
      local_88 = (undefined4 ****)&DAT_80000000;
      local_8c = (undefined4 *)0x0;
      local_94 = (undefined4 ****)0x0;
      local_98 = (undefined4 ****)0x0;
      FUN_0196ac88(&local_d0,&local_98);
      uVar2 = local_d0._0_1_;
      uVar9 = (uint)local_d0 & 0xff;
      if (uVar9 == 6) {
        FUN_00e0fe5c(local_cc);
      }
      else {
        FUN_01bed4e2((uint)&local_e8 | 1,(uint)&local_d0 | 1,0x17);
        local_e8 = (undefined4 ****)CONCAT31(local_e8._1_3_,uVar2);
        if (uVar9 == 5) {
          local_84 = 0;
          local_80 = local_e4;
          if (local_e4 == (undefined4 ****)0x0) {
            uStack_dc = 0;
          }
          local_90 = local_e4;
          local_98 = (undefined4 ****)(uint)(local_e4 != (undefined4 ****)0x0);
          local_7c = local_e0;
          local_8c = local_e0;
          local_94 = (undefined4 ****)0x0;
          local_88 = local_98;
          local_78 = uStack_dc;
          FUN_00fea674(auStack_b8,&local_98);
          if (local_ac != 0) {
            FUN_0067b1ac(&local_98,auStack_b8);
            local_120 = local_98;
            local_11c = local_94;
            local_118 = local_90;
            cVar3 = (char)local_8c;
            local_134._0_3_ = (undefined3)((uint)local_8c >> 8);
            FUN_00e0febc(&local_e8);
            if (cVar3 != '\x02') {
              local_98 = local_120;
              local_94 = local_11c;
              local_90 = local_118;
              local_8c = (undefined4 *)CONCAT31((int3)local_134,cVar3);
              DataMemoryBarrier(0xb);
              if (*(int *)(*piVar4 + 0x18) != 0) {
                FUN_00b065ec(*piVar4 + 8,&local_98);
              }
              if ((char)local_8c != '\x02') {
                local_d0 = local_98;
                local_cc = local_94;
                local_c8 = local_90;
                local_c4 = local_8c;
                FUN_019cf348(&local_d0);
                if ((DAT_01d50f88 < 5) &&
                   (((DAT_01d4c488 - 1 < 2 ||
                     ((DAT_01d4c488 != 0 && (cVar3 = FUN_01aaafa8(&DAT_01d4c480), cVar3 != '\0'))))
                    && (iVar5 = FUN_01aaa278(DAT_01d4c480), iVar5 != 0)))) {
                  local_e0 = (undefined4 *)(DAT_01d4c480 + 0x1c);
                  if (*(undefined4 *****)(DAT_01d4c480 + 0x20) == (undefined4 ****)0x0) {
LAB_00e44bbc:
                    /* WARNING: Subroutine does not return */
                    FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c17708);
                  }
                  local_cc = &local_100;
                  local_90 = *(undefined4 *****)(DAT_01d4c480 + 0x24);
                  local_8c = *(undefined4 **)(DAT_01d4c480 + 0x28);
                  local_d0 = &local_98;
                  local_e4 = (undefined4 ****)&DAT_00000001;
                  local_88 = (undefined4 ****)0x0;
                  local_c8 = (undefined4 ****)&DAT_01d2ea4c;
                  local_fc = (undefined4 ****)&DAT_0000006b;
                  local_100 = (undefined4 ****)0x3fe987;
                  local_e8 = &local_d0;
                  local_98 = (undefined4 ****)*local_e0;
                  local_94 = *(undefined4 *****)(DAT_01d4c480 + 0x20);
                  FUN_00e0ff40(&local_e8);
                }
                else {
                  iVar5 = DAT_01d4c480;
                  if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
                    local_10c = *(undefined4 *****)(DAT_01d4c480 + 0x14);
                    local_108 = *(undefined4 *****)(DAT_01d4c480 + 0x18);
                    local_110 = (undefined4 ****)&DAT_00000001;
                    DataMemoryBarrier(0xb);
                    puVar10 = DAT_01d4edc8;
                    pcVar1 = DAT_01d4edc4;
                    if (DAT_01d51174 != 2) {
                      puVar10 = &DAT_01cfc5e0;
                      pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
                    }
                    iVar6 = (*(code *)puVar10[3])(pcVar1,&local_110);
                    if (iVar6 != 0) {
                      local_f8 = (undefined4 *)(DAT_01d4c480 + 0x1c);
                      if (*(undefined4 *****)(DAT_01d4c480 + 0x20) == (undefined4 ****)0x0)
                      goto LAB_00e44bbc;
                      local_8c = *(undefined4 **)(DAT_01d4c480 + 0x28);
                      local_e4 = &local_f0;
                      local_e8 = &local_98;
                      local_90 = *(undefined4 *****)(DAT_01d4c480 + 0x24);
                      local_100 = &local_e8;
                      local_88 = (undefined4 ****)0x0;
                      local_fc = (undefined4 ****)&DAT_00000001;
                      local_e0 = (undefined4 *)&DAT_01d2ea4c;
                      local_ec = (undefined4 ****)&DAT_0000006b;
                      local_f0 = (undefined4 ****)0x3fe987;
                      local_d0 = local_110;
                      local_cc = local_10c;
                      local_c8 = local_108;
                      local_98 = (undefined4 ****)*local_f8;
                      local_94 = *(undefined4 *****)(DAT_01d4c480 + 0x20);
                      FUN_01aaa328(iVar5,pcVar1,puVar10[4],&local_d0,&local_100);
                    }
                  }
                }
              }
            }
            goto LAB_00e43ae4;
          }
          FUN_0165a1f4(auStack_b8);
        }
        FUN_00e0febc(&local_e8);
      }
    }
LAB_00e43ae4:
    FUN_019adea8(&local_98,"/etc/bosminer-autotune.json",0x1b);
    if (local_98 == (undefined4 ****)0x0) {
      *(undefined1 *)(param_2 + 0xac) = 0;
      goto switchD_00e43848_caseD_3;
    }
    FUN_00df4bf0(local_94,local_90);
    if (((DAT_01d50f88 < 3) &&
        (((byte)DAT_01d4c3e0 - 1 < 2 ||
         (((byte)DAT_01d4c3e0 != 0 && (cVar3 = FUN_01aaafa8(&DAT_01d4c3d8), cVar3 != '\0')))))) &&
       (iVar5 = FUN_01aaa278(DAT_01d4c3d8), iVar5 != 0)) {
      if (*(undefined4 *****)(DAT_01d4c3d8 + 0x20) == (undefined4 ****)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c17184);
      }
      local_e4 = &local_110;
      local_90 = *(undefined4 *****)(DAT_01d4c3d8 + 0x24);
      local_8c = *(undefined4 **)(DAT_01d4c3d8 + 0x28);
      local_f8 = (undefined4 *)(DAT_01d4c3d8 + 0x1c);
      local_98 = (undefined4 ****)*local_f8;
      local_100 = &local_e8;
      local_fc = (undefined4 ****)&DAT_00000001;
      local_88 = (undefined4 ****)0x0;
      local_e0 = (undefined4 *)&DAT_01d2ea4c;
      local_10c = (undefined4 ****)&DAT_00000023;
      local_110 = (undefined4 ****)0x3f091b;
      local_e8 = &local_98;
      local_94 = *(undefined4 *****)(DAT_01d4c3d8 + 0x20);
      FUN_01aaaecc(DAT_01d4c3d8,&local_100);
      iVar5 = DAT_01d4c3d8;
      if ((DAT_01d51ae9 == '\0') && (2 < DAT_01d51b00)) {
        local_cc = *(undefined4 *****)(DAT_01d4c3d8 + 0x14);
        local_c8 = *(undefined4 *****)(DAT_01d4c3d8 + 0x18);
        local_d0 = (undefined4 ****)&DAT_00000003;
        DataMemoryBarrier(0xb);
        puVar10 = DAT_01d4edc8;
        pcVar1 = DAT_01d4edc4;
        if (DAT_01d51174 != 2) {
          puVar10 = &DAT_01cfc5e0;
          pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
        }
        iVar6 = (*(code *)puVar10[3])(pcVar1,&local_d0);
        if (iVar6 != 0) {
          FUN_01aaa328(iVar5,pcVar1,puVar10[4],&local_d0,&local_100);
        }
      }
    }
    else {
      iVar5 = DAT_01d4c3d8;
      if ((DAT_01d51ae9 == '\0') && (2 < DAT_01d51b00)) {
        local_180 = *(undefined4 *)(DAT_01d4c3d8 + 0x14);
        local_17c = *(undefined4 *)(DAT_01d4c3d8 + 0x18);
        local_184 = 3;
        DataMemoryBarrier(0xb);
        puVar10 = DAT_01d4edc8;
        pcVar1 = DAT_01d4edc4;
        if (DAT_01d51174 != 2) {
          puVar10 = &DAT_01cfc5e0;
          pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
        }
        iVar6 = (*(code *)puVar10[3])(pcVar1,&local_184);
        if (iVar6 != 0) {
          if (*(undefined4 *****)(DAT_01d4c3d8 + 0x20) == (undefined4 ****)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c17184);
          }
          local_cc = &local_100;
          local_90 = *(undefined4 *****)(DAT_01d4c3d8 + 0x24);
          local_8c = *(undefined4 **)(DAT_01d4c3d8 + 0x28);
          local_e8 = &local_d0;
          local_e4 = (undefined4 ****)&DAT_00000001;
          local_88 = (undefined4 ****)0x0;
          local_c8 = (undefined4 ****)&DAT_01d2ea4c;
          local_fc = (undefined4 ****)&DAT_00000023;
          local_100 = (undefined4 ****)0x3f091b;
          local_e0 = (undefined4 *)(DAT_01d4c3d8 + 0x1c);
          local_d0 = &local_98;
          local_98 = *(undefined4 *****)(DAT_01d4c3d8 + 0x1c);
          local_94 = *(undefined4 *****)(DAT_01d4c3d8 + 0x20);
          FUN_01aaa328(iVar5,pcVar1,puVar10[4],&local_184,&local_e8);
        }
      }
    }
    ppppuVar12 = (undefined4 ****)0x0;
    FUN_0160aaa4(&local_98,0);
    local_58 = 0;
    FUN_01bed4e2(auStack_1d0,&local_98,0x48);
    ppppuVar11 = (undefined4 ****)&DAT_00000003;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c17194);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c17194);
  case 3:
switchD_00e43848_caseD_3:
    cVar3 = FUN_00e105d4(param_2 + 0xa0,param_3);
    if (cVar3 == '\x02') {
      *param_1 = 4;
      param_1[1] = 0;
      uVar2 = 3;
      goto LAB_00e44884;
    }
    *(char *)(param_2 + 0x99) = cVar3;
    FUN_00e1003c(param_2 + 0xa0);
    if (*(char *)(param_2 + 0x99) != '\0') {
      uVar7 = FUN_00615e5c(*(int *)(**(int **)(param_2 + 0x94) + 0x3c) + 8);
      puVar8 = &DAT_01c02a40;
      *(undefined4 *)(param_2 + 0xa0) = uVar7;
      *(undefined **)(param_2 + 0xa4) = &DAT_01c02a40;
      goto LAB_00e43d08;
    }
LAB_00e43d68:
    FUN_019ac798(param_2 + 0xa0,"/etc/bosminer-autotune.json",0x1b);
    *(undefined1 *)(param_2 + 0x9b) = 1;
    if (*(char *)(param_2 + 0x99) != '\0') {
      uVar7 = FUN_00615e5c(*(int *)(**(int **)(param_2 + 0x94) + 0x3c) + 8);
      puVar8 = &DAT_01c02a60;
      *(undefined4 *)(param_2 + 0xa8) = uVar7;
      *(undefined **)(param_2 + 0xac) = &DAT_01c02a60;
      goto LAB_00e43db4;
    }
LAB_00e43e18:
    if (*(char *)(param_2 + 0xa0) == '\x04') {
      ppppuVar12 = (undefined4 ****)0x0;
      FUN_0160aaa4(&local_98,0);
      local_58 = 0;
      FUN_01bed4e2(auStack_1d0,&local_98,0x48);
      ppppuVar11 = (undefined4 ****)&DAT_00000003;
    }
    else {
      local_120 = *(undefined4 *****)(param_2 + 0xa0);
      local_11c = *(undefined4 *****)(param_2 + 0xa4);
      *(undefined1 *)(param_2 + 0x9b) = 0;
      if ((DAT_01d50f88 < 4) &&
         (((DAT_01d4c404 - 1 < 2 ||
           ((DAT_01d4c404 != 0 && (cVar3 = FUN_01aaafa8(&DAT_01d4c3fc), cVar3 != '\0')))) &&
          (iVar5 = FUN_01aaa278(DAT_01d4c3fc), iVar5 != 0)))) {
        if (*(undefined4 *****)(DAT_01d4c3fc + 0x20) == (undefined4 ****)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c171c4);
        }
        local_90 = *(undefined4 *****)(DAT_01d4c3fc + 0x24);
        local_8c = *(undefined4 **)(DAT_01d4c3fc + 0x28);
        local_cc = &local_110;
        local_e4 = (undefined4 ****)&DAT_00000001;
        local_10c = &local_100;
        local_d0 = &local_98;
        local_100 = &local_120;
        local_e8 = &local_d0;
        local_88 = (undefined4 ****)0x0;
        local_c8 = (undefined4 ****)&DAT_01d2ea4c;
        local_110 = (undefined4 ****)&DAT_005871ce;
        local_fc = (undefined4 ****)FUN_019a7d7c;
        local_e0 = (undefined4 *)(DAT_01d4c3fc + 0x1c);
        local_98 = *(undefined4 *****)(DAT_01d4c3fc + 0x1c);
        local_94 = *(undefined4 *****)(DAT_01d4c3fc + 0x20);
        FUN_00e45190(&local_e8);
      }
      else {
        iVar5 = DAT_01d4c3fc;
        if ((DAT_01d51ae9 == '\0') && (1 < DAT_01d51b00)) {
          local_128 = *(undefined4 *)(DAT_01d4c3fc + 0x14);
          local_124 = *(undefined4 *)(DAT_01d4c3fc + 0x18);
          local_12c = 2;
          DataMemoryBarrier(0xb);
          puVar10 = DAT_01d4edc8;
          pcVar1 = DAT_01d4edc4;
          if (DAT_01d51174 != 2) {
            puVar10 = &DAT_01cfc5e0;
            pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
          }
          iVar6 = (*(code *)puVar10[3])(pcVar1,&local_12c);
          if (iVar6 != 0) {
            if (*(undefined4 *****)(DAT_01d4c3fc + 0x20) == (undefined4 ****)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c171c4);
            }
            local_cc = &local_110;
            local_90 = *(undefined4 *****)(DAT_01d4c3fc + 0x24);
            local_8c = *(undefined4 **)(DAT_01d4c3fc + 0x28);
            local_d0 = &local_98;
            local_e8 = &local_d0;
            local_e4 = (undefined4 ****)&DAT_00000001;
            local_10c = &local_100;
            local_100 = &local_120;
            local_88 = (undefined4 ****)0x0;
            local_c8 = (undefined4 ****)&DAT_01d2ea4c;
            local_110 = (undefined4 ****)&DAT_005871ce;
            local_fc = (undefined4 ****)FUN_019a7d7c;
            local_e0 = (undefined4 *)(DAT_01d4c3fc + 0x1c);
            local_98 = *(undefined4 *****)(DAT_01d4c3fc + 0x1c);
            local_94 = *(undefined4 *****)(DAT_01d4c3fc + 0x20);
            FUN_01aaa328(iVar5,pcVar1,puVar10[4],&local_12c,&local_e8);
          }
        }
      }
      FUN_01a71aac(&local_98,0xd,"failed to remove tuner profiles",0x1f);
      ppppuVar12 = local_94;
      ppppuVar11 = local_98;
      FUN_01bed4e2(auStack_1d0,&local_90,0x48);
      local_1e8 = local_48;
      uStack_1e4 = uStack_44;
      uStack_1e0 = uStack_40;
      uStack_1dc = uStack_3c;
      uStack_1d8 = uStack_38;
      uStack_1d4 = uStack_34;
      FUN_00df4bf0((uint)local_120 & 0xff,local_11c);
    }
    *(undefined1 *)(param_2 + 0x9b) = 0;
    FUN_00f9604c(param_2 + 0x48);
    goto LAB_00e4485c;
  case 4:
    uVar7 = *(undefined4 *)(param_2 + 0xa0);
    puVar8 = *(undefined **)(param_2 + 0xa4);
LAB_00e43d08:
    (**(code **)(puVar8 + 0xc))(&local_98,uVar7,param_3);
    ppppuVar11 = local_98;
    if (local_98 == (undefined4 ****)0x80000017) {
      uVar2 = 4;
      *param_1 = 4;
      param_1[1] = 0;
      goto LAB_00e44884;
    }
    ppppuStack_178 = local_94;
    ppppuStack_174 = local_90;
    puStack_170 = local_8c;
    ppppuStack_16c = local_88;
    uStack_168 = local_84;
    FUN_01139b38(*(undefined4 *)(param_2 + 0xa0),*(undefined4 *)(param_2 + 0xa4));
    if (ppppuVar11 == (undefined4 ****)&DAT_80000016) goto LAB_00e43d68;
    local_d0 = ppppuVar11;
    local_cc = ppppuStack_178;
    local_c8 = ppppuStack_174;
    local_c4 = puStack_170;
    ppppuStack_c0 = ppppuStack_16c;
    uStack_bc = uStack_168;
    if (((DAT_01d50f88 < 4) &&
        ((DAT_01d4c3ec - 1 < 2 ||
         ((DAT_01d4c3ec != 0 && (cVar3 = FUN_01aaafa8(&DAT_01d4c3e4), cVar3 != '\0')))))) &&
       (iVar5 = FUN_01aaa278(DAT_01d4c3e4), iVar5 != 0)) {
      if (*(undefined4 *****)(DAT_01d4c3e4 + 0x20) == (undefined4 ****)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c171a4);
      }
      local_e4 = &local_120;
      local_90 = *(undefined4 *****)(DAT_01d4c3e4 + 0x24);
      local_8c = *(undefined4 **)(DAT_01d4c3e4 + 0x28);
      local_100 = &local_e8;
      local_fc = (undefined4 ****)&DAT_00000001;
      local_11c = &local_110;
      local_88 = (undefined4 ****)0x0;
      local_e0 = (undefined4 *)&DAT_01d2ea4c;
      local_120 = (undefined4 ****)&DAT_005af29b;
      local_10c = (undefined4 ****)FUN_0121efc4;
      local_110 = &local_d0;
      local_f8 = (undefined4 *)(DAT_01d4c3e4 + 0x1c);
      local_e8 = &local_98;
      local_98 = *(undefined4 *****)(DAT_01d4c3e4 + 0x1c);
      local_94 = *(undefined4 *****)(DAT_01d4c3e4 + 0x20);
      FUN_00e44fa0(&local_100);
    }
    else {
      iVar5 = DAT_01d4c3e4;
      if ((DAT_01d51ae9 == '\0') && (1 < DAT_01d51b00)) {
        local_160 = *(undefined4 *)(DAT_01d4c3e4 + 0x14);
        local_15c = *(undefined4 *)(DAT_01d4c3e4 + 0x18);
        local_164 = 2;
        DataMemoryBarrier(0xb);
        puVar10 = DAT_01d4edc8;
        pcVar1 = DAT_01d4edc4;
        if (DAT_01d51174 != 2) {
          puVar10 = &DAT_01cfc5e0;
          pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
        }
        iVar6 = (*(code *)puVar10[3])(pcVar1,&local_164);
        if (iVar6 != 0) {
          if (*(undefined4 *****)(DAT_01d4c3e4 + 0x20) == (undefined4 ****)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c171a4);
          }
          local_100 = &local_e8;
          local_90 = *(undefined4 *****)(DAT_01d4c3e4 + 0x24);
          local_8c = *(undefined4 **)(DAT_01d4c3e4 + 0x28);
          local_e4 = &local_120;
          local_88 = (undefined4 ****)0x0;
          local_fc = (undefined4 ****)&DAT_00000001;
          local_11c = &local_110;
          local_e0 = (undefined4 *)&DAT_01d2ea4c;
          local_120 = (undefined4 ****)&DAT_005af29b;
          local_10c = (undefined4 ****)FUN_0121efc4;
          local_110 = &local_d0;
          local_f8 = (undefined4 *)(DAT_01d4c3e4 + 0x1c);
          local_e8 = &local_98;
          local_98 = *(undefined4 *****)(DAT_01d4c3e4 + 0x1c);
          local_94 = *(undefined4 *****)(DAT_01d4c3e4 + 0x20);
          FUN_01aaa328(iVar5,pcVar1,puVar10[4],&local_164,&local_100);
        }
      }
    }
    FUN_01a71aac(&local_98,0xd,"failed to stop bosminer, tuner profiles were not removed",0x38);
    ppppuVar12 = local_94;
    ppppuVar11 = local_98;
    FUN_01bed4e2(auStack_1d0,&local_90,0x48);
    local_1e8 = local_48;
    uStack_1e4 = uStack_44;
    uStack_1e0 = uStack_40;
    uStack_1dc = uStack_3c;
    uStack_1d8 = uStack_38;
    uStack_1d4 = uStack_34;
    FUN_00df4ae4(&local_d0);
    break;
  case 5:
    uVar7 = *(undefined4 *)(param_2 + 0xa8);
    puVar8 = *(undefined **)(param_2 + 0xac);
LAB_00e43db4:
    (**(code **)(puVar8 + 0xc))(&local_98,uVar7,param_3);
    ppppuVar11 = local_98;
    if (local_98 == (undefined4 ****)0x80000017) {
      *param_1 = 4;
      param_1[1] = 0;
      uVar2 = 5;
      goto LAB_00e44884;
    }
    ppppuStack_158 = local_94;
    ppppuStack_154 = local_90;
    puStack_150 = local_8c;
    ppppuStack_14c = local_88;
    uStack_148 = local_84;
    FUN_01139b38(*(undefined4 *)(param_2 + 0xa8),*(undefined4 *)(param_2 + 0xac));
    if (ppppuVar11 == (undefined4 ****)&DAT_80000016) goto LAB_00e43e18;
    local_d0 = ppppuVar11;
    local_cc = ppppuStack_158;
    local_c8 = ppppuStack_154;
    local_c4 = puStack_150;
    ppppuStack_c0 = ppppuStack_14c;
    uStack_bc = uStack_148;
    if (*(char *)(param_2 + 0xa0) == '\x04') {
      ppppuVar11 = (undefined4 ****)thunk_FUN_01be5118(0x28);
      if (ppppuVar11 == (undefined4 ****)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(1,0x28);
      }
      FUN_01bed4e2(ppppuVar11,"tuner profiles were successfully removed",0x28);
      local_118 = (undefined4 ****)&DAT_00000028;
      local_120 = (undefined4 ****)&DAT_00000028;
      local_11c = ppppuVar11;
    }
    else {
      local_100 = *(undefined4 *****)(param_2 + 0xa0);
      local_fc = *(undefined4 *****)(param_2 + 0xa4);
      local_e8 = &local_100;
      *(undefined1 *)(param_2 + 0x9b) = 0;
      local_e4 = (undefined4 ****)FUN_019a7d7c;
      FUN_00664898(&local_98,&DAT_00584be6,&local_e8);
      local_120 = local_98;
      local_11c = local_94;
      local_118 = local_90;
      FUN_00df4bf0((uint)local_100 & 0xff,local_fc);
    }
    if (((DAT_01d50f88 < 4) &&
        ((DAT_01d4c3f8 - 1 < 2 ||
         ((DAT_01d4c3f8 != 0 && (cVar3 = FUN_01aaafa8(&DAT_01d4c3f0), cVar3 != '\0')))))) &&
       (iVar5 = FUN_01aaa278(DAT_01d4c3f0), iVar5 != 0)) {
      if (*(undefined4 *****)(DAT_01d4c3f0 + 0x20) == (undefined4 ****)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c171b4);
      }
      local_90 = *(undefined4 *****)(DAT_01d4c3f0 + 0x24);
      local_8c = *(undefined4 **)(DAT_01d4c3f0 + 0x28);
      local_e4 = &local_f0;
      local_fc = (undefined4 ****)&DAT_00000001;
      local_ec = &local_110;
      local_110 = &local_d0;
      local_100 = &local_e8;
      local_88 = (undefined4 ****)0x0;
      local_e0 = (undefined4 *)&DAT_01d2ea4c;
      local_f0 = (undefined4 ****)&DAT_005b0c76;
      local_10c = (undefined4 ****)FUN_0121efc4;
      local_f8 = (undefined4 *)(DAT_01d4c3f0 + 0x1c);
      local_e8 = &local_98;
      local_98 = *(undefined4 *****)(DAT_01d4c3f0 + 0x1c);
      local_94 = *(undefined4 *****)(DAT_01d4c3f0 + 0x20);
      FUN_00e45098(&local_100);
    }
    else {
      iVar5 = DAT_01d4c3f0;
      if ((DAT_01d51ae9 == '\0') && (1 < DAT_01d51b00)) {
        local_13c = *(undefined4 *****)(DAT_01d4c3f0 + 0x14);
        local_138 = *(undefined4 **)(DAT_01d4c3f0 + 0x18);
        local_140 = (undefined4 ****)0x2;
        DataMemoryBarrier(0xb);
        puVar10 = DAT_01d4edc8;
        pcVar1 = DAT_01d4edc4;
        if (DAT_01d51174 != 2) {
          puVar10 = &DAT_01cfc5e0;
          pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
        }
        iVar6 = (*(code *)puVar10[3])(pcVar1,&local_140);
        if (iVar6 != 0) {
          if (*(undefined4 *****)(DAT_01d4c3f0 + 0x20) == (undefined4 ****)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c171b4);
          }
          local_fc = &local_134;
          local_90 = *(undefined4 *****)(DAT_01d4c3f0 + 0x24);
          local_8c = *(undefined4 **)(DAT_01d4c3f0 + 0x28);
          local_110 = &local_100;
          local_10c = (undefined4 ****)0x1;
          local_130 = &local_f0;
          local_88 = (undefined4 ****)0x0;
          local_f8 = (undefined4 *)&DAT_01d2ea4c;
          local_134 = (undefined4 ***)&DAT_005b0c76;
          local_ec = (undefined4 ****)FUN_0121efc4;
          local_f0 = &local_d0;
          local_e8 = local_140;
          local_e4 = local_13c;
          local_e0 = local_138;
          local_108 = (undefined4 ****)(DAT_01d4c3f0 + 0x1c);
          local_100 = &local_98;
          local_98 = *(undefined4 *****)(DAT_01d4c3f0 + 0x1c);
          local_94 = *(undefined4 *****)(DAT_01d4c3f0 + 0x20);
          FUN_01aaa328(iVar5,pcVar1,puVar10[4],&local_e8,&local_110);
        }
      }
    }
    local_10c = (undefined4 ****)&LAB_00632348;
    local_110 = &local_120;
    FUN_00664898(&local_e8,&DAT_005bc301,&local_110);
    local_100 = local_e8;
    local_fc = local_e4;
    local_f8 = local_e0;
    FUN_01a70fd4(&local_98,0xd);
    ppppuVar12 = local_94;
    ppppuVar11 = local_98;
    FUN_01bed4e2(auStack_1d0,&local_90,0x48);
    local_1e8 = local_48;
    uStack_1e4 = uStack_44;
    uStack_1e0 = uStack_40;
    uStack_1dc = uStack_3c;
    uStack_1d8 = uStack_38;
    uStack_1d4 = uStack_34;
    FUN_019bb7e0(local_120,local_11c);
    FUN_00df4ae4(&local_d0);
    *(undefined1 *)(param_2 + 0x9b) = 0;
  }
  FUN_00f9604c(param_2 + 0x48);
  if (*(char *)(param_2 + 0x9a) != '\0') {
    FUN_00f9604c(param_2);
  }
LAB_00e4485c:
  *param_1 = ppppuVar11;
  param_1[1] = ppppuVar12;
  FUN_01bed4e2(param_1 + 2,auStack_1d0,0x48);
  param_1[0x14] = local_1e8;
  param_1[0x15] = uStack_1e4;
  param_1[0x16] = uStack_1e0;
  param_1[0x17] = uStack_1dc;
  param_1[0x18] = uStack_1d8;
  param_1[0x19] = uStack_1d4;
  uVar2 = 1;
LAB_00e44884:
  *(undefined1 *)(param_2 + 0x98) = uVar2;
  return;
}

