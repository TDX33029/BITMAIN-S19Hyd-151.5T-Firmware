// FUN_00e2e2f8 @ 00e2e2f8 size=1372 calls_out=23 calls_in=1
// strings: BUG: request parameters cell was already initialized. | boser::api::grpc::utilsopen/boser/boser/src/api/grpc/utils.rs | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | BUG: request parameters cell was already initialized. | boser::api::grpc::utilsopen/boser/boser/src/api/grpc/utils.rs

void FUN_00e2e2f8(undefined4 *param_1,int param_2,undefined4 param_3)

{
  char *pcVar1;
  undefined1 uVar2;
  char cVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined4 *puVar9;
  bool bVar10;
  undefined1 auStack_140 [72];
  undefined4 ****local_f8;
  undefined4 ****local_f4;
  char **local_f0;
  undefined4 local_ec;
  undefined4 ****local_e8;
  undefined4 local_e4;
  char **local_e0;
  undefined4 *local_dc;
  undefined4 local_d8;
  undefined4 local_b8;
  undefined1 local_b4;
  undefined2 local_ac;
  undefined1 local_aa;
  undefined4 ****local_a8;
  undefined4 ****ppppuStack_a4;
  char **ppcStack_a0;
  undefined4 ****local_98;
  undefined4 ****local_94;
  char **local_90;
  undefined4 ****local_8c;
  undefined4 local_88;
  undefined4 *local_84;
  char *local_80;
  undefined4 local_7c;
  undefined4 ****local_78;
  char **local_74;
  undefined4 *local_70;
  undefined4 uStack_6c;
  undefined4 ****local_60;
  undefined4 ****local_5c;
  char **local_58;
  undefined1 local_54;
  undefined2 local_53;
  undefined1 local_51;
  undefined1 auStack_48 [12];
  int local_3c;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 0x98)) {
  case 0:
    *(undefined1 *)(param_2 + 0x99) = 0;
    iVar5 = *(int *)(param_2 + 0x90);
    FUN_01bed4e2(param_2 + 0x48,param_2,0x48);
    piVar4 = (int *)FUN_00a52660(*(undefined4 *)(param_2 + 0x88));
    if (piVar4 != (int *)0x0) {
      local_e8 = (undefined4 ****)&DAT_80000000;
      local_ec = (undefined4 *)0x0;
      local_f4 = (undefined4 ****)0x0;
      local_f8 = (undefined4 ****)0x0;
      FUN_0196ac88(&local_60,&local_f8);
      uVar2 = local_60._0_1_;
      uVar8 = (uint)local_60 & 0xff;
      if (uVar8 == 6) {
        FUN_00e0fe5c(local_5c);
      }
      else {
        FUN_01bed4e2((uint)&local_78 | 1,(uint)&local_60 | 1,0x17);
        local_78 = (undefined4 ****)CONCAT31(local_78._1_3_,uVar2);
        if (uVar8 == 5) {
          local_e4 = 0;
          local_e0 = local_74;
          if (local_74 == (char **)0x0) {
            uStack_6c = 0;
          }
          local_f0 = local_74;
          local_f8 = (undefined4 ****)(uint)(local_74 != (char **)0x0);
          local_dc = local_70;
          local_ec = local_70;
          local_f4 = (undefined4 ****)0x0;
          local_e8 = local_f8;
          local_d8 = uStack_6c;
          FUN_00fea674(auStack_48,&local_f8);
          if (local_3c != 0) {
            FUN_0067b1ac(&local_f8,auStack_48);
            local_a8 = local_f8;
            ppppuStack_a4 = local_f4;
            ppcStack_a0 = local_f0;
            cVar3 = (char)local_ec;
            local_ac = local_ec._1_2_;
            local_aa = local_ec._3_1_;
            FUN_00e0febc(&local_78);
            if (cVar3 != '\x02') {
              local_f8 = local_a8;
              local_f4 = ppppuStack_a4;
              local_f0 = ppcStack_a0;
              local_ec = (undefined4 *)CONCAT31(CONCAT12(local_aa,local_ac),cVar3);
              DataMemoryBarrier(0xb);
              if (*(int *)(*piVar4 + 0x18) != 0) {
                FUN_00b065ec(*piVar4 + 8,&local_f8);
              }
              if (((uint)local_ec & 0xff) != 2) {
                local_60 = local_f8;
                local_5c = local_f4;
                local_58 = local_f0;
                local_51 = local_ec._3_1_;
                local_53 = local_ec._1_2_;
                local_54 = (char)local_ec;
                FUN_019cf348();
                if ((DAT_01d50f88 < 5) &&
                   (((DAT_01d4c488 - 1 < 2 ||
                     ((DAT_01d4c488 != 0 && (cVar3 = FUN_01aaafa8(&DAT_01d4c480), cVar3 != '\0'))))
                    && (iVar6 = FUN_01aaa278(DAT_01d4c480), iVar6 != 0)))) {
                  local_70 = (undefined4 *)(DAT_01d4c480 + 0x1c);
                  if (*(undefined4 *****)(DAT_01d4c480 + 0x20) == (undefined4 ****)0x0) {
LAB_00e2e854:
                    /* WARNING: Subroutine does not return */
                    FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c17708);
                  }
                  local_5c = &local_8c;
                  local_f0 = *(char ***)(DAT_01d4c480 + 0x24);
                  local_ec = *(undefined4 **)(DAT_01d4c480 + 0x28);
                  local_60 = &local_f8;
                  local_78 = &local_60;
                  local_e8 = (undefined4 ****)0x0;
                  local_74 = (char **)&DAT_00000001;
                  local_58 = (char **)&DAT_01d2ea4c;
                  local_88 = 0x6b;
                  local_8c = (undefined4 ****)0x3fe987;
                  local_f8 = (undefined4 ****)*local_70;
                  local_f4 = *(undefined4 *****)(DAT_01d4c480 + 0x20);
                  FUN_00e0ff40(&local_78);
                }
                else {
                  iVar6 = DAT_01d4c480;
                  if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
                    local_94 = *(undefined4 *****)(DAT_01d4c480 + 0x14);
                    local_90 = *(char ***)(DAT_01d4c480 + 0x18);
                    local_98 = (undefined4 ****)&DAT_00000001;
                    DataMemoryBarrier(0xb);
                    puVar9 = DAT_01d4edc8;
                    pcVar1 = DAT_01d4edc4;
                    if (DAT_01d51174 != 2) {
                      puVar9 = &DAT_01cfc5e0;
                      pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
                    }
                    iVar7 = (*(code *)puVar9[3])(pcVar1,&local_98);
                    if (iVar7 != 0) {
                      local_84 = (undefined4 *)(DAT_01d4c480 + 0x1c);
                      if (*(undefined4 *****)(DAT_01d4c480 + 0x20) == (undefined4 ****)0x0)
                      goto LAB_00e2e854;
                      local_74 = &local_80;
                      local_78 = &local_f8;
                      local_8c = &local_78;
                      local_f0 = *(char ***)(DAT_01d4c480 + 0x24);
                      local_ec = *(undefined4 **)(DAT_01d4c480 + 0x28);
                      local_e8 = (undefined4 ****)0x0;
                      local_88 = 1;
                      local_70 = (undefined4 *)&DAT_01d2ea4c;
                      local_7c = 0x6b;
                      local_80 = "BUG: request parameters cell was already initialized.";
                      local_60 = local_98;
                      local_5c = local_94;
                      local_58 = local_90;
                      local_f8 = (undefined4 ****)*local_84;
                      local_f4 = *(undefined4 *****)(DAT_01d4c480 + 0x20);
                      FUN_01aaa328(iVar6,pcVar1,puVar9[4],&local_60,&local_8c);
                    }
                  }
                }
              }
            }
            goto LAB_00e2e5b0;
          }
          FUN_0165a1f4(auStack_48);
        }
        FUN_00e0febc(&local_78);
      }
    }
LAB_00e2e5b0:
    iVar5 = *(int *)(iVar5 + 4);
    *(undefined1 *)(param_2 + 0xd8) = 0;
    *(int *)(param_2 + 0xa0) = iVar5 + 8;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c16f94);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c16f94);
  case 4:
    if ((*(byte *)(param_2 + 0xa4) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c1ddbc);
    }
    iVar5 = *(int *)(param_2 + 0xa0);
    goto LAB_00e2e60c;
  }
  iVar5 = FUN_00ba6b7c((int *)(param_2 + 0xa0),param_3);
  if (iVar5 == 0) {
    *param_1 = 4;
    param_1[1] = 0;
    uVar2 = 3;
  }
  else {
    *(int *)(param_2 + 0x94) = iVar5;
    if (*(char *)(param_2 + 0xd8) == '\x03') {
      cVar3 = *(char *)(param_2 + 0xd4);
      bVar10 = cVar3 == '\x03';
      if (bVar10) {
        cVar3 = *(char *)(param_2 + 0xb0);
      }
      if (bVar10 && cVar3 == '\x04') {
        FUN_0193c3cc(param_2 + 0xb4);
        iVar5 = *(int *)(param_2 + 0x94);
      }
    }
    iVar5 = iVar5 + 0x14;
    *(int *)(param_2 + 0xa0) = iVar5;
    *(undefined4 *)(param_2 + 0xa4) = 0;
LAB_00e2e60c:
    cVar3 = *(char *)(iVar5 + 0x30);
    *(undefined1 *)(param_2 + 0xa4) = 1;
    FUN_0160aaa4(&local_f8,0);
    local_b8 = 0;
    local_b4 = cVar3 == '\x01';
    FUN_01bed4e2(auStack_140,&local_f8,0x48);
    FUN_019f8c54(*(undefined4 *)(param_2 + 0x94),1);
    FUN_00f9604c(param_2 + 0x48);
    *param_1 = 3;
    param_1[1] = 0;
    FUN_01bed4e2(param_1 + 2,auStack_140,0x48);
    uVar2 = 1;
  }
  *(undefined1 *)(param_2 + 0x98) = uVar2;
  return;
}

