// FUN_00e3881c @ 00e3881c size=2160 calls_out=29 calls_in=1
// strings: save_action | down_s | BUG: request parameters cell was already initialized. | boser::api::grpc::utilsopen/boser/boser/src/api/grpc/utils.rs | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll

void FUN_00e3881c(undefined4 *param_1,int param_2,undefined4 param_3)

{
  char *pcVar1;
  undefined4 ****ppppuVar2;
  char cVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 ****ppppuVar8;
  uint uVar9;
  undefined4 *puVar10;
  undefined1 uVar11;
  undefined4 ****ppppuVar12;
  undefined4 ****ppppuVar13;
  undefined4 ****local_1e4;
  undefined4 local_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined1 auStack_1d0 [72];
  undefined4 ****local_188;
  undefined4 ****local_184;
  undefined4 ****local_180;
  undefined4 local_17c;
  undefined4 ****local_178;
  undefined4 local_174;
  undefined4 ****local_170;
  undefined4 ****local_16c;
  undefined4 local_168;
  undefined4 ****local_148;
  undefined4 ****local_144;
  undefined4 local_140;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined1 auStack_120 [72];
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined2 local_c4;
  undefined1 local_c2;
  undefined4 ****local_c0;
  undefined4 ****ppppuStack_bc;
  undefined4 ****ppppuStack_b8;
  undefined4 ****local_b0;
  undefined4 ****local_ac;
  undefined4 ****local_a8;
  undefined4 ***local_a0;
  undefined4 local_9c;
  undefined4 ****local_98;
  undefined4 ****local_94;
  undefined4 ****local_90;
  undefined4 uStack_8c;
  undefined4 ****local_80;
  undefined4 ****local_7c;
  undefined4 ****local_78;
  undefined1 auStack_68 [12];
  int local_5c;
  undefined4 ****local_48;
  undefined4 ****local_44;
  undefined4 ****local_40;
  undefined4 ****local_3c;
  undefined4 ****local_38;
  undefined4 uStack_34;
  undefined4 ****ppppuStack_30;
  undefined4 ****ppppuStack_2c;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 0x1cc)) {
  case 0:
    uVar7 = *(undefined4 *)(param_2 + 0x1c0);
    *(undefined2 *)(param_2 + 0x1cd) = 0x100;
    FUN_01bed4e2(param_2 + 0x50,param_2,0x50);
    piVar4 = (int *)FUN_00a52660(*(undefined4 *)(param_2 + 0x9c));
    if (piVar4 != (int *)0x0) {
      local_38 = (undefined4 ****)&DAT_80000000;
      local_3c = (undefined4 ****)0x0;
      local_44 = (undefined4 ****)0x0;
      local_48 = (undefined4 ****)0x0;
      ppppuVar13 = (undefined4 ****)
                   FUN_014a7b90(&local_48,"save_action",0xb,*(undefined4 *)(param_2 + 0x90));
      if (((ppppuVar13 == (undefined4 ****)0x0) &&
          (ppppuVar13 = (undefined4 ****)
                        FUN_014a7c64(&local_48,&DAT_0056caac,4,*(undefined4 *)(param_2 + 0x94)),
          ppppuVar13 == (undefined4 ****)0x0)) &&
         (ppppuVar13 = (undefined4 ****)
                       FUN_014a7c64(&local_48,"down_s",6,*(undefined4 *)(param_2 + 0x98)),
         ppppuVar13 == (undefined4 ****)0x0)) {
        local_188 = local_48;
        local_184 = local_44;
        local_180 = local_40;
        local_17c = local_3c;
        local_178 = local_38;
        local_174 = uStack_34;
        local_170 = ppppuStack_30;
        local_16c = ppppuStack_2c;
        FUN_0196ac88(&local_80);
        uVar11 = local_80._0_1_;
        uVar9 = (uint)local_80 & 0xff;
        if (uVar9 != 6) {
          FUN_01bed4e2((uint)&local_98 | 1,(uint)&local_80 | 1,0x17);
          local_98 = (undefined4 ****)CONCAT31(local_98._1_3_,uVar11);
          if (uVar9 == 5) {
            local_174 = 0;
            local_170 = local_94;
            if (local_94 == (undefined4 ****)0x0) {
              uStack_8c = 0;
            }
            local_180 = local_94;
            local_188 = (undefined4 ****)(uint)(local_94 != (undefined4 ****)0x0);
            local_16c = local_90;
            local_17c = local_90;
            local_184 = (undefined4 ****)0x0;
            local_178 = local_188;
            local_168 = uStack_8c;
            FUN_00fea674(auStack_68,&local_188);
            if (local_5c != 0) {
              FUN_0067b1ac(&local_188,auStack_68);
              local_c0 = local_188;
              ppppuStack_bc = local_184;
              ppppuStack_b8 = local_180;
              cVar3 = (char)local_17c;
              local_c4 = local_17c._1_2_;
              local_c2 = local_17c._3_1_;
              FUN_00e0febc(&local_98);
              if (cVar3 != '\x02') {
                local_188 = local_c0;
                local_184 = ppppuStack_bc;
                local_180 = ppppuStack_b8;
                local_17c = (undefined4 ****)CONCAT31(CONCAT12(local_c2,local_c4),cVar3);
                DataMemoryBarrier(0xb);
                if (*(int *)(*piVar4 + 0x18) != 0) {
                  FUN_00b065ec(*piVar4 + 8,&local_188);
                }
                if (((uint)local_17c & 0xff) != 2) {
                  local_48 = local_188;
                  local_44 = local_184;
                  local_40 = local_180;
                  local_3c = local_17c;
                  FUN_019cf348();
                  if ((DAT_01d50f88 < 5) &&
                     (((DAT_01d4c488 - 1 < 2 ||
                       ((DAT_01d4c488 != 0 && (cVar3 = FUN_01aaafa8(&DAT_01d4c480), cVar3 != '\0')))
                       ) && (iVar5 = FUN_01aaa278(DAT_01d4c480), iVar5 != 0)))) {
                    local_78 = (undefined4 ****)(DAT_01d4c480 + 0x1c);
                    if (*(undefined4 *****)(DAT_01d4c480 + 0x20) == (undefined4 ****)0x0) {
LAB_00e39084:
                    /* WARNING: Subroutine does not return */
                      FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c17708);
                    }
                    local_180 = *(undefined4 *****)(DAT_01d4c480 + 0x24);
                    local_17c = *(undefined4 *****)(DAT_01d4c480 + 0x28);
                    local_44 = &local_98;
                    local_48 = &local_188;
                    local_80 = &local_48;
                    local_7c = (undefined4 ****)&DAT_00000001;
                    local_178 = (undefined4 ****)0x0;
                    local_40 = (undefined4 ****)&DAT_01d2ea4c;
                    local_94 = (undefined4 ****)&DAT_0000006b;
                    local_98 = (undefined4 ****)0x3fe987;
                    local_188 = (undefined4 ****)*local_78;
                    local_184 = *(undefined4 *****)(DAT_01d4c480 + 0x20);
                    FUN_00e0ff40(&local_80);
                  }
                  else {
                    iVar5 = DAT_01d4c480;
                    if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
                      local_ac = *(undefined4 *****)(DAT_01d4c480 + 0x14);
                      local_a8 = *(undefined4 *****)(DAT_01d4c480 + 0x18);
                      local_b0 = (undefined4 ****)&DAT_00000001;
                      DataMemoryBarrier(0xb);
                      puVar10 = DAT_01d4edc8;
                      pcVar1 = DAT_01d4edc4;
                      if (DAT_01d51174 != 2) {
                        puVar10 = &DAT_01cfc5e0;
                        pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
                      }
                      iVar6 = (*(code *)puVar10[3])(pcVar1,&local_b0);
                      if (iVar6 != 0) {
                        local_90 = (undefined4 ****)(DAT_01d4c480 + 0x1c);
                        if (*(undefined4 *****)(DAT_01d4c480 + 0x20) == (undefined4 ****)0x0)
                        goto LAB_00e39084;
                        local_7c = &local_a0;
                        local_180 = *(undefined4 *****)(DAT_01d4c480 + 0x24);
                        local_17c = *(undefined4 *****)(DAT_01d4c480 + 0x28);
                        local_80 = &local_188;
                        local_98 = &local_80;
                        local_94 = (undefined4 ****)&DAT_00000001;
                        local_178 = (undefined4 ****)0x0;
                        local_78 = (undefined4 ****)&DAT_01d2ea4c;
                        local_9c = 0x6b;
                        local_a0 = (undefined4 ***)0x3fe987;
                        local_48 = local_b0;
                        local_44 = local_ac;
                        local_40 = local_a8;
                        local_188 = (undefined4 ****)*local_90;
                        local_184 = *(undefined4 *****)(DAT_01d4c480 + 0x20);
                        FUN_01aaa328(iVar5,pcVar1,puVar10[4],&local_48,&local_98);
                      }
                    }
                  }
                }
              }
              goto LAB_00e38934;
            }
            FUN_0165a1f4(auStack_68);
          }
          FUN_00e0febc(&local_98);
          goto LAB_00e38934;
        }
        ppppuVar13 = local_7c;
      }
      else {
        local_80 = (undefined4 ****)CONCAT31(local_80._1_3_,6);
        local_7c = ppppuVar13;
        FUN_01276d58(&local_48);
      }
      FUN_00e0fe5c(ppppuVar13);
    }
LAB_00e38934:
    *(undefined1 *)(param_2 + 0x1ce) = 0;
    FUN_01bed4e2(&local_188,param_2 + 0x50,0x50);
    FUN_00f07a48(&local_b0,&local_188);
    FUN_00a21428(&local_188,local_b0);
    ppppuVar8 = local_184;
    ppppuVar13 = local_188;
    ppppuVar12 = (undefined4 ****)((uint)local_180 & 0xff);
    if (local_188 == (undefined4 ****)&DAT_00000003 && local_184 == (undefined4 ****)0x0) {
      *(undefined4 *****)(param_2 + 0x1c4) = local_ac;
      *(undefined4 *****)(param_2 + 0x1c8) = local_a8;
      if ((int)local_ac - 2U < 599) {
        if ((undefined1 *)((int)local_a8 + -2) < (undefined1 *)0x257) {
          *(undefined1 *)(param_2 + 0x160) = local_180._0_1_;
          *(undefined1 *)(param_2 + 0x161) = 0;
          *(undefined4 *)(param_2 + 0xf8) = uVar7;
          *(undefined4 *)(param_2 + 0xa0) = 1;
          *(undefined4 *****)(param_2 + 0xa4) = local_ac;
          *(undefined4 *)(param_2 + 0xa8) = 1;
          *(undefined4 *****)(param_2 + 0xac) = local_a8;
          goto switchD_00e38840_caseD_3;
        }
        local_3c = (undefined4 ****)&LAB_016cd65c;
        local_44 = (undefined4 ****)&LAB_016cd65c;
        local_48 = &local_a0;
        local_a0 = (undefined4 ***)&DAT_003f08d8;
        local_c0 = (undefined4 ****)&DAT_003f08dc;
        local_40 = &local_c0;
        FUN_00664898(&local_80,&DAT_00580c6c,&local_48);
        local_98 = local_80;
        local_94 = local_7c;
        local_90 = local_78;
        FUN_01a70fd4(&local_188,3);
      }
      else {
        local_3c = (undefined4 ****)&LAB_016cd65c;
        local_44 = (undefined4 ****)&LAB_016cd65c;
        local_48 = &local_a0;
        local_a0 = (undefined4 ***)&DAT_003f08d8;
        local_c0 = (undefined4 ****)&DAT_003f08dc;
        local_40 = &local_c0;
        FUN_00664898(&local_80,&DAT_0059168a,&local_48);
        local_98 = local_80;
        local_94 = local_7c;
        local_90 = local_78;
        FUN_01a70fd4(&local_188,3);
      }
      ppppuVar2 = local_180;
      ppppuVar8 = local_184;
      ppppuVar13 = local_188;
      local_1e4 = local_17c;
      ppppuVar12 = (undefined4 ****)((uint)local_180 & 0xff);
      FUN_01bed4e2(auStack_1d0,&local_178,0x48);
      local_1e0 = local_130;
      uStack_1dc = uStack_12c;
      uStack_1d8 = uStack_128;
      uStack_1d4 = uStack_124;
      uVar9 = (uint)ppppuVar2 >> 8;
    }
    else {
      local_1e4 = local_17c;
      uVar9 = (uint)local_180 >> 8;
      FUN_01bed4e2(auStack_1d0,&local_178,0x48);
      local_1e0 = local_130;
      uStack_1dc = uStack_12c;
      uStack_1d8 = uStack_128;
      uStack_1d4 = uStack_124;
    }
LAB_00e38c40:
    uVar11 = SUB41(ppppuVar12,0);
    *(undefined1 *)(param_2 + 0x1ce) = 0;
    if (*(char *)(param_2 + 0x1cd) != '\0') {
      FUN_00e39acc(param_2);
    }
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c17104);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c17104);
  case 3:
switchD_00e38840_caseD_3:
    FUN_00e392cc(&local_188,param_2 + 0xa0,param_3);
    ppppuVar2 = local_17c;
    ppppuVar12 = local_180;
    ppppuVar8 = local_184;
    ppppuVar13 = local_188;
    if (local_188 == (undefined4 ****)&SUB_00000004 && local_184 == (undefined4 ****)0x0) {
      *param_1 = 4;
      param_1[1] = 0;
      uVar11 = 3;
      goto LAB_00e38ca0;
    }
    FUN_01bed4e2(auStack_120,&local_178,0x58);
    FUN_00e391e8(param_2 + 0xa0);
    if (ppppuVar13 != (undefined4 ****)&DAT_00000003 || ppppuVar8 != (undefined4 ****)0x0) {
      FUN_01bed4e2(auStack_1d0,auStack_120,0x48);
      local_1e0 = local_d8;
      uStack_1dc = uStack_d4;
      uStack_1d8 = uStack_d0;
      uStack_1d4 = uStack_cc;
      uVar9 = (uint)ppppuVar12 >> 8;
      local_1e4 = ppppuVar2;
      goto LAB_00e38c40;
    }
    ppppuVar8 = (undefined4 ****)0x0;
    FUN_0160aaa4(&local_188,0);
    local_1e4 = local_184;
    uVar11 = local_188._0_1_;
    uVar9 = (uint)local_188 >> 8;
    local_140 = 0;
    local_144 = ppppuVar2;
    local_148 = ppppuVar12;
    FUN_01bed4e2(auStack_1d0,&local_180,0x48);
    ppppuVar13 = (undefined4 ****)&DAT_00000003;
    *(undefined1 *)(param_2 + 0x1ce) = 0;
  }
  param_1[3] = local_1e4;
  *(char *)((int)param_1 + 0xb) = (char)(uVar9 >> 0x10);
  *param_1 = ppppuVar13;
  *(short *)((int)param_1 + 9) = (short)uVar9;
  *(undefined1 *)(param_1 + 2) = uVar11;
  param_1[1] = ppppuVar8;
  FUN_01bed4e2(param_1 + 4,auStack_1d0,0x48);
  param_1[0x16] = local_1e0;
  param_1[0x17] = uStack_1dc;
  param_1[0x18] = uStack_1d8;
  param_1[0x19] = uStack_1d4;
  uVar11 = 1;
LAB_00e38ca0:
  *(undefined1 *)(param_2 + 0x1cc) = uVar11;
  return;
}

