// FUN_00e47934 @ 00e47934 size=1708 calls_out=26 calls_in=1
// strings: save_action | BUG: request parameters cell was already initialized. | boser::api::grpc::utilsopen/boser/boser/src/api/grpc/utils.rs | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | BUG: request parameters cell was already initialized.

void FUN_00e47934(undefined4 *param_1,int param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  char *pcVar2;
  undefined4 ****ppppuVar3;
  char cVar4;
  int *piVar5;
  char **ppcVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  uint uVar11;
  undefined4 *puVar12;
  undefined1 uVar13;
  undefined1 *puVar14;
  undefined4 ****ppppuVar15;
  undefined4 ****ppppuVar16;
  undefined4 ****local_1e8;
  undefined4 local_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined1 auStack_1d0 [72];
  undefined4 ****local_188;
  undefined4 ****local_184;
  undefined1 *local_180;
  undefined4 local_17c;
  undefined4 ****local_178;
  undefined4 local_174;
  undefined1 *local_170;
  undefined4 ****local_16c;
  undefined4 local_168;
  undefined1 *local_148;
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
  undefined1 *puStack_b8;
  undefined4 ****local_b0;
  undefined4 ****local_ac;
  undefined1 *local_a8;
  char *local_a0;
  undefined4 local_9c;
  undefined4 ****local_98;
  undefined1 *local_94;
  undefined4 ****local_90;
  undefined4 uStack_8c;
  undefined4 ****local_80;
  char **local_7c;
  undefined4 *local_78;
  undefined1 auStack_68 [12];
  int local_5c;
  undefined4 ****local_48;
  undefined4 ****local_44;
  undefined1 *local_40;
  undefined4 ****local_3c;
  undefined4 ****local_38;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined4 ****ppppuStack_2c;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 0x1b4)) {
  case 0:
    uVar10 = *(undefined4 *)(param_2 + 0x1b0);
    *(undefined2 *)(param_2 + 0x1b5) = 0x100;
    FUN_01bed4e2(param_2 + 0x48,param_2,0x48);
    piVar5 = (int *)FUN_00a52660(*(undefined4 *)(param_2 + 0x8c));
    if (piVar5 != (int *)0x0) {
      local_38 = (undefined4 ****)&DAT_80000000;
      local_3c = (undefined4 ****)0x0;
      local_44 = (undefined4 ****)0x0;
      local_48 = (undefined4 ****)0x0;
      ppcVar6 = (char **)FUN_014a7b90(&local_48,"save_action",0xb,*(undefined4 *)(param_2 + 0x88));
      if (ppcVar6 == (char **)0x0) {
        local_188 = local_48;
        local_184 = local_44;
        local_180 = local_40;
        local_17c = local_3c;
        local_178 = local_38;
        local_174 = uStack_34;
        local_170 = puStack_30;
        local_16c = ppppuStack_2c;
        FUN_0196ac88(&local_80);
        uVar13 = local_80._0_1_;
        uVar11 = (uint)local_80 & 0xff;
        if (uVar11 != 6) {
          FUN_01bed4e2((uint)&local_98 | 1,(uint)&local_80 | 1,0x17);
          local_98 = (undefined4 ****)CONCAT31(local_98._1_3_,uVar13);
          if (uVar11 == 5) {
            local_174 = 0;
            local_170 = local_94;
            if (local_94 == (undefined1 *)0x0) {
              uStack_8c = 0;
            }
            local_180 = local_94;
            local_188 = (undefined4 ****)(uint)(local_94 != (undefined1 *)0x0);
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
              puStack_b8 = local_180;
              cVar4 = (char)local_17c;
              local_c4 = local_17c._1_2_;
              local_c2 = local_17c._3_1_;
              FUN_00e0febc(&local_98);
              if (cVar4 != '\x02') {
                local_188 = local_c0;
                local_184 = ppppuStack_bc;
                local_180 = puStack_b8;
                local_17c = (undefined4 ****)CONCAT31(CONCAT12(local_c2,local_c4),cVar4);
                DataMemoryBarrier(0xb);
                if (*(int *)(*piVar5 + 0x18) != 0) {
                  FUN_00b065ec(*piVar5 + 8,&local_188);
                }
                if (((uint)local_17c & 0xff) != 2) {
                  local_48 = local_188;
                  local_44 = local_184;
                  local_40 = local_180;
                  local_3c = local_17c;
                  FUN_019cf348();
                  if ((DAT_01d50f88 < 5) &&
                     (((DAT_01d4c488 - 1 < 2 ||
                       ((DAT_01d4c488 != 0 && (cVar4 = FUN_01aaafa8(&DAT_01d4c480), cVar4 != '\0')))
                       ) && (iVar8 = FUN_01aaa278(DAT_01d4c480), iVar8 != 0)))) {
                    local_78 = (undefined4 *)(DAT_01d4c480 + 0x1c);
                    if (*(undefined4 *****)(DAT_01d4c480 + 0x20) == (undefined4 ****)0x0) {
LAB_00e47fd8:
                    /* WARNING: Subroutine does not return */
                      FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c17708);
                    }
                    local_44 = &local_98;
                    local_180 = *(undefined1 **)(DAT_01d4c480 + 0x24);
                    local_17c = *(undefined4 *****)(DAT_01d4c480 + 0x28);
                    local_48 = &local_188;
                    local_80 = &local_48;
                    local_7c = (char **)&DAT_00000001;
                    local_178 = (undefined4 ****)0x0;
                    local_40 = &DAT_01d2ea4c;
                    local_94 = (undefined1 *)0x6b;
                    local_98 = (undefined4 ****)0x3fe987;
                    local_188 = (undefined4 ****)*local_78;
                    local_184 = *(undefined4 *****)(DAT_01d4c480 + 0x20);
                    FUN_00e0ff40(&local_80);
                  }
                  else {
                    iVar8 = DAT_01d4c480;
                    if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
                      local_ac = *(undefined4 *****)(DAT_01d4c480 + 0x14);
                      local_a8 = *(undefined1 **)(DAT_01d4c480 + 0x18);
                      local_b0 = (undefined4 ****)&DAT_00000001;
                      DataMemoryBarrier(0xb);
                      puVar12 = DAT_01d4edc8;
                      pcVar2 = DAT_01d4edc4;
                      if (DAT_01d51174 != 2) {
                        puVar12 = &DAT_01cfc5e0;
                        pcVar2 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
                      }
                      iVar9 = (*(code *)puVar12[3])(pcVar2,&local_b0);
                      if (iVar9 != 0) {
                        local_90 = (undefined4 ****)(DAT_01d4c480 + 0x1c);
                        if (*(undefined4 *****)(DAT_01d4c480 + 0x20) == (undefined4 ****)0x0)
                        goto LAB_00e47fd8;
                        local_7c = &local_a0;
                        local_17c = *(undefined4 *****)(DAT_01d4c480 + 0x28);
                        local_80 = &local_188;
                        local_180 = *(undefined1 **)(DAT_01d4c480 + 0x24);
                        local_178 = (undefined4 ****)0x0;
                        local_94 = (undefined1 *)0x1;
                        local_78 = (undefined4 *)&DAT_01d2ea4c;
                        local_9c = 0x6b;
                        local_a0 = "BUG: request parameters cell was already initialized.";
                        local_48 = local_b0;
                        local_44 = local_ac;
                        local_40 = local_a8;
                        local_188 = (undefined4 ****)*local_90;
                        local_184 = *(undefined4 *****)(DAT_01d4c480 + 0x20);
                        local_98 = &local_80;
                        FUN_01aaa328(iVar8,pcVar2,puVar12[4],&local_48,&local_98);
                      }
                    }
                  }
                }
              }
              goto LAB_00e47a44;
            }
            FUN_0165a1f4(auStack_68);
          }
          FUN_00e0febc(&local_98);
          goto LAB_00e47a44;
        }
        ppcVar6 = local_7c;
      }
      else {
        local_80 = (undefined4 ****)CONCAT31(local_80._1_3_,6);
        local_7c = ppcVar6;
        FUN_01276d58(&local_48);
      }
      FUN_00e0fe5c(ppcVar6);
    }
LAB_00e47a44:
    *(undefined1 *)(param_2 + 0x1b6) = 0;
    FUN_01bed4e2(&local_188,param_2 + 0x48,0x48);
    uVar7 = FUN_00f07994(&local_188);
    FUN_00a21428(&local_188,uVar7);
    puVar1 = local_180;
    ppppuVar16 = local_184;
    ppppuVar15 = local_188;
    puVar14 = (undefined1 *)((uint)local_180 & 0xff);
    if (local_188 == (undefined4 ****)&DAT_00000003 && local_184 == (undefined4 ****)0x0) {
      *(undefined1 *)(param_2 + 0x151) = 0;
      *(undefined1 *)(param_2 + 0x150) = local_180._0_1_;
      *(undefined4 *)(param_2 + 0xe8) = uVar10;
      *(undefined4 *)(param_2 + 0x98) = 0;
      *(undefined4 *)(param_2 + 0x90) = 0;
      goto switchD_00e47958_caseD_3;
    }
    local_1e8 = local_17c;
    FUN_01bed4e2(auStack_1d0,&local_178,0x48);
    local_1e0 = local_130;
    uStack_1dc = uStack_12c;
    uStack_1d8 = uStack_128;
    uStack_1d4 = uStack_124;
LAB_00e47be0:
    uVar11 = (uint)puVar1 >> 8;
    uVar13 = SUB41(puVar14,0);
    *(undefined1 *)(param_2 + 0x1b6) = 0;
    if (*(char *)(param_2 + 0x1b5) != '\0') {
      FUN_00e46934(param_2);
    }
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c17284);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c17284);
  case 3:
switchD_00e47958_caseD_3:
    FUN_00e392cc(&local_188,param_2 + 0x90,param_3);
    ppppuVar3 = local_17c;
    puVar14 = local_180;
    ppppuVar16 = local_184;
    ppppuVar15 = local_188;
    if (local_188 == (undefined4 ****)&SUB_00000004 && local_184 == (undefined4 ****)0x0) {
      *param_1 = 4;
      param_1[1] = 0;
      uVar13 = 3;
      goto LAB_00e47c40;
    }
    FUN_01bed4e2(auStack_120,&local_178,0x58);
    FUN_00e391e8(param_2 + 0x90);
    if (ppppuVar15 != (undefined4 ****)&DAT_00000003 || ppppuVar16 != (undefined4 ****)0x0) {
      FUN_01bed4e2(auStack_1d0,auStack_120,0x48);
      local_1e0 = local_d8;
      uStack_1dc = uStack_d4;
      uStack_1d8 = uStack_d0;
      uStack_1d4 = uStack_cc;
      local_1e8 = ppppuVar3;
      puVar1 = puVar14;
      goto LAB_00e47be0;
    }
    ppppuVar16 = (undefined4 ****)0x0;
    FUN_0160aaa4(&local_188,0);
    local_1e8 = local_184;
    uVar13 = local_188._0_1_;
    uVar11 = (uint)local_188 >> 8;
    local_140 = 0;
    local_144 = ppppuVar3;
    local_148 = puVar14;
    FUN_01bed4e2(auStack_1d0,&local_180,0x48);
    ppppuVar15 = (undefined4 ****)&DAT_00000003;
    *(undefined1 *)(param_2 + 0x1b6) = 0;
  }
  param_1[3] = local_1e8;
  *(char *)((int)param_1 + 0xb) = (char)(uVar11 >> 0x10);
  *(short *)((int)param_1 + 9) = (short)uVar11;
  *(undefined1 *)(param_1 + 2) = uVar13;
  *param_1 = ppppuVar15;
  param_1[1] = ppppuVar16;
  FUN_01bed4e2(param_1 + 4,auStack_1d0,0x48);
  param_1[0x16] = local_1e0;
  param_1[0x17] = uStack_1dc;
  param_1[0x18] = uStack_1d8;
  param_1[0x19] = uStack_1d4;
  uVar13 = 1;
LAB_00e47c40:
  *(undefined1 *)(param_2 + 0x1b4) = uVar13;
  return;
}

