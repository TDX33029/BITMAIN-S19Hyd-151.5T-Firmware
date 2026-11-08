// FUN_00e51d8c @ 00e51d8c size=2944 calls_out=35 calls_in=1
// strings: BUG: request parameters cell was already initialized. | Missing or invalid authentication token | boser::api::grpc::authentication | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | boser::api::grpc::authentication

void FUN_00e51d8c(undefined4 *param_1,int param_2,undefined4 param_3)

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
  uint ****ppppuVar11;
  uint ****ppppuVar12;
  uint ****ppppuVar13;
  uint ****local_268;
  uint ****ppppuStack_264;
  uint ****ppppuStack_260;
  undefined4 uStack_25c;
  undefined4 uStack_258;
  undefined4 uStack_254;
  undefined1 auStack_250 [72];
  undefined1 auStack_208 [68];
  uint ****local_1c4;
  uint ****ppppuStack_1c0;
  uint ****ppppuStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  uint ****local_1a8;
  uint ****local_1a4;
  uint ****local_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  uint ****local_190;
  uint ****ppppuStack_18c;
  uint ****ppppuStack_188;
  uint ****ppppuStack_184;
  undefined4 uStack_180;
  uint ****local_178;
  uint ****local_174;
  uint ****local_170;
  uint ****local_16c;
  uint ****local_168;
  uint ****ppppuStack_164;
  uint ****ppppuStack_160;
  uint ****ppppuStack_15c;
  uint ****ppppuStack_158;
  undefined4 uStack_154;
  uint ****local_114;
  code *local_110;
  undefined4 *local_10c;
  uint ***local_108;
  uint ****local_104;
  uint ****local_100;
  uint ****local_fc;
  uint ****local_f8;
  uint ****local_f0;
  uint ****local_ec;
  uint ****local_e8;
  uint ****local_e4;
  uint ****local_e0;
  undefined1 auStack_d8 [12];
  int local_cc;
  uint ****local_b8;
  uint ****local_b4;
  uint ****local_b0;
  uint ****local_ac;
  uint ****local_a8;
  undefined4 local_a4;
  uint ****local_a0;
  uint ****local_9c;
  uint ****local_98;
  undefined4 local_78;
  uint ****local_68;
  uint ****ppppuStack_64;
  uint ****ppppuStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  uint ****local_50;
  uint ****local_4c;
  uint ****local_48;
  uint ****local_44;
  uint ****local_40;
  undefined4 uStack_3c;
  uint ****local_38;
  uint ****local_34;
  uint ****local_30;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 0xb4)) {
  case 0:
    *(undefined4 *)(param_2 + 0xa4) = *(undefined4 *)(param_2 + 0xa0);
    *(undefined4 *)(param_2 + 0xb5) = 1;
    FUN_01bed4e2(param_2 + 0x50,param_2,0x50);
    piVar4 = (int *)FUN_00a52660(*(undefined4 *)(param_2 + 0x9c));
    if (piVar4 != (int *)0x0) {
      FUN_0096ba54(&local_b8,param_2 + 0x90);
      uVar2 = local_b8._0_1_;
      uVar9 = (uint)local_b8 & 0xff;
      if (uVar9 == 6) {
        FUN_00e0fe5c(local_b4);
      }
      else {
        FUN_01bed4e2((uint)&local_178 | 1,(uint)&local_b8 | 1,0x17);
        local_178 = (uint ****)CONCAT31(local_178._1_3_,uVar2);
        if (uVar9 == 5) {
          local_a4 = 0;
          local_a0 = local_174;
          local_98 = local_16c;
          if (local_174 == (uint ****)0x0) {
            local_98 = (uint ****)0x0;
          }
          local_b0 = local_174;
          local_b8 = (uint ****)(uint)(local_174 != (uint ****)0x0);
          local_9c = local_170;
          local_ac = local_170;
          local_b4 = (uint ****)0x0;
          local_a8 = local_b8;
          FUN_00fea674(auStack_d8,&local_b8);
          if (local_cc != 0) {
            FUN_0067b1ac(&local_b8,auStack_d8);
            local_e8 = local_b8;
            local_e4 = local_b4;
            local_e0 = local_b0;
            cVar3 = (char)local_ac;
            local_f0._0_3_ = (undefined3)((uint)local_ac >> 8);
            FUN_00e0febc(&local_178);
            if (cVar3 != '\x02') {
              local_b8 = local_e8;
              local_b4 = local_e4;
              local_b0 = local_e0;
              local_ac = (uint ****)CONCAT31((int3)local_f0,cVar3);
              DataMemoryBarrier(0xb);
              if (*(int *)(*piVar4 + 0x18) != 0) {
                FUN_00b065ec(*piVar4 + 8,&local_b8);
              }
              if ((char)local_ac != '\x02') {
                local_178 = local_b8;
                local_174 = local_b4;
                local_170 = local_b0;
                local_16c = local_ac;
                FUN_019cf348(&local_178);
                if ((DAT_01d50f88 < 5) &&
                   (((DAT_01d4c488 - 1 < 2 ||
                     ((DAT_01d4c488 != 0 && (cVar3 = FUN_01aaafa8(&DAT_01d4c480), cVar3 != '\0'))))
                    && (iVar5 = FUN_01aaa278(DAT_01d4c480), iVar5 != 0)))) {
                  local_48 = (uint ****)(DAT_01d4c480 + 0x1c);
                  if (*(uint *****)(DAT_01d4c480 + 0x20) == (uint ****)0x0) {
LAB_00e52910:
                    /* WARNING: Subroutine does not return */
                    FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c17708);
                  }
                  local_b0 = *(uint *****)(DAT_01d4c480 + 0x24);
                  local_ac = *(uint *****)(DAT_01d4c480 + 0x28);
                  local_174 = (uint ****)&local_1a8;
                  local_178 = (uint ****)&local_b8;
                  local_4c = (uint ****)&DAT_00000001;
                  local_a8 = (uint ****)0x0;
                  local_170 = (uint ****)&DAT_01d2ea4c;
                  local_1a4 = (uint ****)&DAT_0000006b;
                  local_1a8 = (uint ****)0x3fe987;
                  local_b8 = (uint ****)*local_48;
                  local_b4 = *(uint *****)(DAT_01d4c480 + 0x20);
                  local_50 = (uint ****)&local_178;
                  FUN_00e0ff40(&local_50);
                }
                else {
                  iVar5 = DAT_01d4c480;
                  if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
                    local_34 = *(uint *****)(DAT_01d4c480 + 0x14);
                    local_30 = *(uint *****)(DAT_01d4c480 + 0x18);
                    local_38 = (uint ****)&DAT_00000001;
                    DataMemoryBarrier(0xb);
                    puVar10 = DAT_01d4edc8;
                    pcVar1 = DAT_01d4edc4;
                    if (DAT_01d51174 != 2) {
                      puVar10 = &DAT_01cfc5e0;
                      pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
                    }
                    iVar6 = (*(code *)puVar10[3])(pcVar1,&local_38);
                    if (iVar6 != 0) {
                      local_1a0 = (uint ****)(DAT_01d4c480 + 0x1c);
                      if (*(uint *****)(DAT_01d4c480 + 0x20) == (uint ****)0x0) goto LAB_00e52910;
                      local_4c = (uint ****)&local_114;
                      local_b0 = *(uint *****)(DAT_01d4c480 + 0x24);
                      local_ac = *(uint *****)(DAT_01d4c480 + 0x28);
                      local_50 = (uint ****)&local_b8;
                      local_1a8 = (uint ****)&local_50;
                      local_a8 = (uint ****)0x0;
                      local_1a4 = (uint ****)&DAT_00000001;
                      local_48 = (uint ****)&DAT_01d2ea4c;
                      local_110 = (code *)0x6b;
                      local_114 = (uint ****)0x3fe987;
                      local_178 = local_38;
                      local_174 = local_34;
                      local_170 = local_30;
                      local_b8 = (uint ****)*local_1a0;
                      local_b4 = *(uint *****)(DAT_01d4c480 + 0x20);
                      FUN_01aaa328(iVar5,pcVar1,puVar10[4],&local_178,&local_1a8);
                    }
                  }
                }
              }
            }
            goto LAB_00e52040;
          }
          FUN_0165a1f4(auStack_d8);
        }
        FUN_00e0febc(&local_178);
      }
    }
LAB_00e52040:
    ppppuVar12 = (uint ****)FUN_011de1f0(*(undefined4 *)(param_2 + 0x9c));
    if (ppppuVar12 != (uint ****)0x0) {
LAB_00e52098:
      FUN_006666fc(param_2 + 200,ppppuVar12[1],ppppuVar12[2]);
      *(undefined1 *)(param_2 + 0xd4) = *(undefined1 *)(ppppuVar12 + 3);
      *(undefined1 *)(param_2 + 0xb7) = 1;
      *(undefined1 *)(param_2 + 0xb5) = 0;
      FUN_01bed4e2(&local_b8,param_2 + 0x50,0x50);
      FUN_00f07a48((undefined4 *)(param_2 + 0xa8),&local_b8);
      *(undefined1 *)(param_2 + 0xb8) = 1;
      iVar5 = **(int **)(param_2 + 0xa4);
      *(undefined1 *)(param_2 + 0xb8) = 0;
      local_b8 = *(uint *****)(param_2 + 0xa8);
      local_b4 = *(uint *****)(param_2 + 0xac);
      local_b0 = *(uint *****)(param_2 + 0xb0);
      uVar7 = FUN_00b6a784(iVar5 + 8,&local_b8);
      puVar8 = &DAT_01c133b0;
      *(undefined4 *)(param_2 + 0xc0) = uVar7;
      *(undefined **)(param_2 + 0xc4) = &DAT_01c133b0;
      goto LAB_00e52124;
    }
    FUN_01a71aac(&local_b8,0x10,"Missing or invalid authentication token",0x27);
    ppppuVar11 = local_b0;
    ppppuVar13 = local_b4;
    ppppuVar12 = local_b8;
    if (local_b8 == (uint ****)&DAT_00000003 && local_b4 == (uint ****)0x0) {
      ppppuVar12 = local_b0;
      goto LAB_00e52098;
    }
    FUN_01bed4e2(auStack_208,&local_ac,0x5c);
    FUN_01bed4e2(auStack_250,auStack_208,0x44);
    local_268 = local_1c4;
    ppppuStack_264 = ppppuStack_1c0;
    ppppuStack_260 = ppppuStack_1bc;
    uStack_25c = uStack_1b8;
    uStack_258 = uStack_1b4;
    uStack_254 = uStack_1b0;
LAB_00e524ec:
    *(undefined1 *)(param_2 + 0xb7) = 0;
    if (*(char *)(param_2 + 0xb5) != '\0') {
      FUN_005f11d4(param_2 + 0x50);
    }
    *(undefined1 *)(param_2 + 0xb5) = 0;
    if (*(char *)(param_2 + 0xb6) != '\0') {
      FUN_005f11d4(param_2);
    }
    goto LAB_00e526f8;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c173a4);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c173a4);
  case 3:
    uVar7 = *(undefined4 *)(param_2 + 0xc0);
    puVar8 = *(undefined **)(param_2 + 0xc4);
LAB_00e52124:
    (**(code **)(puVar8 + 0xc))(&local_b8,uVar7,param_3);
    ppppuVar12 = local_b8;
    if (local_b8 == (uint ****)0x80000017) {
      *param_1 = 4;
      param_1[1] = 0;
      uVar2 = 3;
      goto LAB_00e52728;
    }
    local_190 = local_b4;
    ppppuStack_18c = local_b0;
    ppppuStack_188 = local_ac;
    ppppuStack_184 = local_a8;
    uStack_180 = local_a4;
    FUN_01139b38(*(undefined4 *)(param_2 + 0xc0),*(undefined4 *)(param_2 + 0xc4));
    if (ppppuVar12 != (uint ****)&DAT_80000016) {
      local_38 = (uint ****)&local_50;
      local_50 = ppppuVar12;
      local_4c = local_190;
      local_48 = ppppuStack_18c;
      local_44 = ppppuStack_188;
      local_40 = ppppuStack_184;
      uStack_3c = uStack_180;
      local_34 = (uint ****)FUN_0121efc4;
      FUN_00664898(&local_b8,&DAT_0059b112,&local_38);
      local_38 = local_b8;
      local_34 = local_b4;
      local_30 = local_b0;
      FUN_01a70fd4(&local_b8,0xd,&local_38);
      FUN_00df4ae4(&local_50);
      ppppuVar11 = local_b0;
      ppppuVar13 = local_b4;
      ppppuVar12 = local_b8;
      FUN_01bed4e2(&local_178,&local_ac,0x44);
      local_1a8 = local_68;
      local_1a4 = ppppuStack_64;
      local_1a0 = ppppuStack_60;
      uStack_19c = uStack_5c;
      uStack_198 = uStack_58;
      uStack_194 = uStack_54;
      if (ppppuVar12 != (uint ****)&DAT_00000003 || ppppuVar13 != (uint ****)0x0) {
        FUN_01bed4e2(auStack_250,&local_178,0x44);
        local_268 = local_1a8;
        ppppuStack_264 = local_1a4;
        ppppuStack_260 = local_1a0;
        uStack_25c = uStack_19c;
        uStack_258 = uStack_198;
        uStack_254 = uStack_194;
        *(undefined1 *)(param_2 + 0xb8) = 0;
        FUN_019bb7e0(*(undefined4 *)(param_2 + 200),*(undefined4 *)(param_2 + 0xcc));
        goto LAB_00e524ec;
      }
    }
    iVar5 = *(int *)(*(int *)(param_2 + 0xa4) + 4);
    *(undefined1 *)(param_2 + 0xb7) = 0;
    local_b8 = *(uint *****)(param_2 + 200);
    local_b4 = *(uint *****)(param_2 + 0xcc);
    local_b0 = *(uint *****)(param_2 + 0xd0);
    local_ac = *(uint *****)(param_2 + 0xd4);
    uVar7 = FUN_00b820d4(iVar5 + 8);
    puVar8 = &DAT_01c139e8;
    *(undefined4 *)(param_2 + 0xc0) = uVar7;
    *(undefined **)(param_2 + 0xc4) = &DAT_01c139e8;
    break;
  case 4:
    uVar7 = *(undefined4 *)(param_2 + 0xc0);
    puVar8 = *(undefined **)(param_2 + 0xc4);
  }
  (**(code **)(puVar8 + 0xc))(&local_b8,uVar7,param_3);
  if (local_ac == (uint ****)&DAT_00000003) {
    uVar2 = 4;
    *param_1 = 4;
    param_1[1] = 0;
    goto LAB_00e52728;
  }
  FUN_01bed4e2(&local_178,&local_b8,0x60);
  FUN_01139b38(*(undefined4 *)(param_2 + 0xc0),*(undefined4 *)(param_2 + 0xc4));
  if (local_16c == (uint ****)0x2) {
    local_b8 = local_168;
    local_b4 = ppppuStack_164;
    local_b0 = ppppuStack_160;
    local_ac = ppppuStack_15c;
    local_a8 = ppppuStack_158;
    local_a4 = uStack_154;
    if (((DAT_01d50f88 < 4) &&
        ((DAT_01d4c410 - 1 < 2 ||
         ((DAT_01d4c410 != 0 && (cVar3 = FUN_01aaafa8(&DAT_01d4c408), cVar3 != '\0')))))) &&
       (iVar5 = FUN_01aaa278(DAT_01d4c408), iVar5 != 0)) {
      if (*(uint *****)(DAT_01d4c408 + 0x20) == (uint ****)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c173b4);
      }
      local_e4 = &local_108;
      local_48 = *(uint *****)(DAT_01d4c408 + 0x24);
      local_44 = *(uint *****)(DAT_01d4c408 + 0x28);
      local_10c = (undefined4 *)(DAT_01d4c408 + 0x1c);
      local_50 = (uint ****)*local_10c;
      local_e8 = (uint ****)&local_50;
      local_114 = (uint ****)&local_e8;
      local_40 = (uint ****)0x0;
      local_110 = (code *)0x1;
      local_104 = (uint ****)&local_f0;
      local_e0 = (uint ****)&DAT_01d2ea4c;
      local_108 = (uint ***)&DAT_0058e4ad;
      local_ec = (uint ****)FUN_00b81f38;
      local_f0 = (uint ****)&local_b8;
      local_4c = *(uint *****)(DAT_01d4c408 + 0x20);
      FUN_01aaaecc(DAT_01d4c408,&local_114);
      iVar5 = DAT_01d4c408;
      if ((DAT_01d51ae9 == '\0') && (1 < DAT_01d51b00)) {
        local_34 = *(uint *****)(DAT_01d4c408 + 0x14);
        local_30 = *(uint *****)(DAT_01d4c408 + 0x18);
        local_38 = (uint ****)0x2;
        DataMemoryBarrier(0xb);
        puVar10 = DAT_01d4edc8;
        pcVar1 = DAT_01d4edc4;
        if (DAT_01d51174 != 2) {
          puVar10 = &DAT_01cfc5e0;
          pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
        }
        iVar6 = (*(code *)puVar10[3])(pcVar1,&local_38);
        if (iVar6 != 0) {
          local_1a8 = local_38;
          local_1a4 = local_34;
          local_1a0 = local_30;
          FUN_01aaa328(iVar5,pcVar1,puVar10[4],&local_1a8,&local_114);
        }
      }
    }
    else {
      iVar5 = DAT_01d4c408;
      if ((DAT_01d51ae9 == '\0') && (1 < DAT_01d51b00)) {
        local_fc = *(uint *****)(DAT_01d4c408 + 0x14);
        local_f8 = *(uint *****)(DAT_01d4c408 + 0x18);
        local_100 = (uint ****)0x2;
        DataMemoryBarrier(0xb);
        puVar10 = DAT_01d4edc8;
        pcVar1 = DAT_01d4edc4;
        if (DAT_01d51174 != 2) {
          puVar10 = &DAT_01cfc5e0;
          pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
        }
        iVar6 = (*(code *)puVar10[3])(pcVar1,&local_100);
        if (iVar6 != 0) {
          if (*(uint *****)(DAT_01d4c408 + 0x20) == (uint ****)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c173b4);
          }
          local_34 = (uint ****)&local_f0;
          local_48 = *(uint *****)(DAT_01d4c408 + 0x24);
          local_44 = *(uint *****)(DAT_01d4c408 + 0x28);
          local_38 = (uint ****)&local_50;
          local_e8 = (uint ****)&local_38;
          local_e4 = (uint ****)&DAT_00000001;
          local_ec = (uint ****)&local_114;
          local_40 = (uint ****)0x0;
          local_30 = (uint ****)&DAT_01d2ea4c;
          local_110 = FUN_00b81f38;
          local_f0 = (uint ****)&DAT_0058e4ad;
          local_1a8 = local_100;
          local_1a4 = local_fc;
          local_1a0 = local_f8;
          local_114 = (uint ****)&local_b8;
          local_e0 = (uint ****)(DAT_01d4c408 + 0x1c);
          local_50 = *(uint *****)(DAT_01d4c408 + 0x1c);
          local_4c = *(uint *****)(DAT_01d4c408 + 0x20);
          FUN_01aaa328(iVar5,pcVar1,puVar10[4],&local_1a8,&local_e8);
        }
      }
    }
    if ((undefined1 *)0x3 < (undefined1 *)((int)local_b8 + 0x7fffffea)) {
      FUN_00df4ae4(&local_b8);
    }
    if (local_16c != (uint ****)0x2) goto LAB_00e526b4;
  }
  else {
LAB_00e526b4:
    FUN_00e52bd8(&local_178);
  }
  ppppuVar13 = (uint ****)0x0;
  FUN_0160aaa4(&local_b8,0);
  ppppuVar11 = local_b8;
  local_78 = 0;
  FUN_01bed4e2(auStack_250,(uint)&local_b8 | 4,0x44);
  *(undefined2 *)(param_2 + 0xb7) = 0;
  *(undefined1 *)(param_2 + 0xb5) = 0;
  ppppuVar12 = (uint ****)&DAT_00000003;
LAB_00e526f8:
  *param_1 = ppppuVar12;
  param_1[1] = ppppuVar13;
  param_1[2] = ppppuVar11;
  FUN_01bed4e2(param_1 + 3,auStack_250,0x44);
  param_1[0x14] = local_268;
  param_1[0x15] = ppppuStack_264;
  param_1[0x16] = ppppuStack_260;
  param_1[0x17] = uStack_25c;
  param_1[0x18] = uStack_258;
  param_1[0x19] = uStack_254;
  uVar2 = 1;
LAB_00e52728:
  *(undefined1 *)(param_2 + 0xb4) = uVar2;
  return;
}

