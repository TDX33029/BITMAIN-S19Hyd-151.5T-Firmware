// FUN_00e939d0 @ 00e939d0 size=1288 calls_out=22 calls_in=1
// strings: BUG: request parameters cell was already initialized. | boser::api::grpc::utilsopen/boser/boser/src/api/grpc/utils.rs | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | BUG: request parameters cell was already initialized. | InvalidParamSegmentInvalidParamInvalidCatchAll

void FUN_00e939d0(undefined4 *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  char *pcVar3;
  undefined1 uVar4;
  char cVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined1 auStack_730 [64];
  undefined4 local_6f0;
  undefined1 auStack_6e8 [80];
  undefined4 *****local_698;
  char **local_694;
  undefined1 *local_690;
  undefined4 local_68c;
  undefined4 *****local_688;
  undefined4 local_684;
  int *local_680;
  undefined4 *local_67c;
  undefined4 local_678;
  undefined1 local_674;
  undefined1 local_a8;
  undefined2 local_9c;
  undefined1 local_9a;
  undefined4 *****local_98;
  char **ppcStack_94;
  undefined1 *puStack_90;
  char *local_8c;
  undefined4 local_88;
  undefined4 local_84;
  char *local_80;
  undefined4 local_7c;
  undefined4 *****local_78;
  undefined1 *local_74;
  undefined4 *local_70;
  undefined4 local_6c;
  undefined4 *****local_60;
  char **local_5c;
  undefined1 *local_58;
  char local_54;
  undefined2 local_53;
  undefined1 local_51;
  undefined1 auStack_48 [12];
  int local_3c;
  
  if (*(char *)(param_2 + 0x4c) != '\0') {
    if (*(char *)(param_2 + 0x4c) == '\x01') {
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c17ccc);
    }
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c17ccc);
  }
  iVar10 = *(int *)(param_2 + 0x48);
  FUN_01bed4e2(auStack_730,param_2,0x48);
  piVar6 = (int *)FUN_00a52660(local_6f0);
  if (piVar6 != (int *)0x0) {
    local_688 = (undefined4 *****)&DAT_80000000;
    local_68c = (undefined4 *)0x0;
    local_694 = (char **)0x0;
    local_698 = (undefined4 *****)0x0;
    FUN_0196ac88(&local_60,&local_698);
    uVar4 = local_60._0_1_;
    uVar9 = (uint)local_60 & 0xff;
    if (uVar9 == 6) {
      FUN_00e0fe5c(local_5c);
    }
    else {
      FUN_01bed4e2((uint)&local_78 | 1,(uint)&local_60 | 1,0x17);
      local_78 = (undefined4 *****)CONCAT31(local_78._1_3_,uVar4);
      if (uVar9 == 5) {
        if (local_74 == (undefined1 *)0x0) {
          local_6c = 0;
        }
        local_680 = (int *)local_74;
        local_690 = local_74;
        local_698 = (undefined4 *****)(uint)(local_74 != (undefined1 *)0x0);
        local_67c = local_70;
        local_684 = 0;
        local_68c = local_70;
        local_694 = (char **)0x0;
        local_688 = local_698;
        local_678 = local_6c;
        FUN_00fea674(auStack_48,&local_698);
        if (local_3c != 0) {
          FUN_0067b1ac(&local_698,auStack_48);
          local_98 = local_698;
          ppcStack_94 = local_694;
          puStack_90 = local_690;
          cVar5 = (char)local_68c;
          local_9c = local_68c._1_2_;
          local_9a = local_68c._3_1_;
          FUN_00e0febc(&local_78);
          if (cVar5 != '\x02') {
            local_698 = local_98;
            local_694 = ppcStack_94;
            local_690 = puStack_90;
            local_68c = (undefined4 *)CONCAT31(CONCAT12(local_9a,local_9c),cVar5);
            DataMemoryBarrier(0xb);
            if (*(int *)(*piVar6 + 0x18) != 0) {
              FUN_00b065ec(*piVar6 + 8,&local_698);
            }
            if ((char)local_68c != '\x02') {
              local_60 = local_698;
              local_5c = local_694;
              local_58 = local_690;
              local_51 = local_68c._3_1_;
              local_53 = local_68c._1_2_;
              local_54 = (char)local_68c;
              FUN_019cf348(&local_60);
              if ((DAT_01d50f88 < 5) &&
                 (((DAT_01d4c488 - 1 < 2 ||
                   ((DAT_01d4c488 != 0 && (cVar5 = FUN_01aaafa8(&DAT_01d4c480), cVar5 != '\0')))) &&
                  (iVar7 = FUN_01aaa278(DAT_01d4c480), iVar7 != 0)))) {
                local_70 = (undefined4 *)(DAT_01d4c480 + 0x1c);
                if (*(char ***)(DAT_01d4c480 + 0x20) == (char **)0x0) {
LAB_00e93ec0:
                    /* WARNING: Subroutine does not return */
                  FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c17708);
                }
                local_690 = *(undefined1 **)(DAT_01d4c480 + 0x24);
                local_68c = *(undefined4 **)(DAT_01d4c480 + 0x28);
                local_5c = &local_8c;
                local_60 = &local_698;
                local_688 = (undefined4 *****)0x0;
                local_74 = (undefined1 *)0x1;
                local_58 = &DAT_01d2ea4c;
                local_88 = 0x6b;
                local_8c = "BUG: request parameters cell was already initialized.";
                local_698 = (undefined4 *****)*local_70;
                local_694 = *(char ***)(DAT_01d4c480 + 0x20);
                local_78 = &local_60;
                FUN_00e0ff40(&local_78);
              }
              else {
                iVar7 = DAT_01d4c480;
                if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
                  local_88 = *(undefined4 *)(DAT_01d4c480 + 0x14);
                  local_84 = *(undefined4 *)(DAT_01d4c480 + 0x18);
                  local_8c = (char *)0x1;
                  DataMemoryBarrier(0xb);
                  puVar11 = DAT_01d4edc8;
                  pcVar3 = DAT_01d4edc4;
                  if (DAT_01d51174 != 2) {
                    puVar11 = &DAT_01cfc5e0;
                    pcVar3 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
                  }
                  iVar8 = (*(code *)puVar11[3])(pcVar3,&local_8c);
                  if (iVar8 != 0) {
                    local_70 = (undefined4 *)(DAT_01d4c480 + 0x1c);
                    if (*(char ***)(DAT_01d4c480 + 0x20) == (char **)0x0) goto LAB_00e93ec0;
                    local_5c = &local_80;
                    local_690 = *(undefined1 **)(DAT_01d4c480 + 0x24);
                    local_68c = *(undefined4 **)(DAT_01d4c480 + 0x28);
                    local_60 = &local_698;
                    local_74 = (undefined1 *)0x1;
                    local_688 = (undefined4 *****)0x0;
                    local_58 = &DAT_01d2ea4c;
                    local_7c = 0x6b;
                    local_80 = "BUG: request parameters cell was already initialized.";
                    local_698 = (undefined4 *****)*local_70;
                    local_694 = *(char ***)(DAT_01d4c480 + 0x20);
                    local_78 = &local_60;
                    FUN_01aaa328(iVar7,pcVar3,puVar11[4],&local_8c,&local_78);
                  }
                }
              }
            }
          }
          goto LAB_00e93c70;
        }
        FUN_0165a1f4(auStack_48);
      }
      FUN_00e0febc(&local_78);
    }
  }
LAB_00e93c70:
  piVar6 = *(int **)(iVar10 + 4);
  do {
    iVar10 = *piVar6;
    bVar2 = (bool)hasExclusiveAccess(piVar6);
  } while (!bVar2);
  *piVar6 = iVar10 + 1;
  if (iVar10 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0xe93ed8);
    (*pcVar1)();
  }
  local_674 = 0;
  local_a8 = 0;
  local_680 = piVar6;
  iVar10 = thunk_FUN_01be5118(0x5f8);
  if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0x5f8);
  }
  FUN_01bed4e2(iVar10,&local_698,0x5f8);
  FUN_00d91c94(&local_698,iVar10,&DAT_01c14bec);
  FUN_01bed4e2(auStack_6e8,&local_698,0x50);
  FUN_00f9604c(auStack_730);
  *param_1 = 3;
  param_1[1] = 0;
  FUN_01bed4e2(param_1 + 2,auStack_6e8,0x50);
  *(undefined1 *)(param_2 + 0x4c) = 1;
  return;
}

