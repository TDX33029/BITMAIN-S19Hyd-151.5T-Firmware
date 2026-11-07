// FUN_00e9a754 @ 00e9a754 size=1296 calls_out=22 calls_in=1
// strings: BUG: request parameters cell was already initialized. | boser::api::grpc::utilsopen/boser/boser/src/api/grpc/utils.rs | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | BUG: request parameters cell was already initialized. | InvalidParamSegmentInvalidParamInvalidCatchAll

void FUN_00e9a754(undefined4 *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  char *pcVar3;
  undefined1 uVar4;
  char cVar5;
  int *piVar6;
  int iVar7;
  int ****ppppiVar8;
  int iVar9;
  int ***pppiVar10;
  int ****ppppiVar11;
  uint uVar12;
  int iVar13;
  undefined4 *puVar14;
  undefined1 auStack_250 [64];
  undefined4 local_210;
  undefined1 auStack_208 [80];
  int *****local_1b8;
  char **local_1b4;
  undefined1 *local_1b0;
  undefined4 local_1ac;
  int *****local_1a8;
  undefined4 local_1a4;
  undefined1 *local_1a0;
  undefined4 *local_19c;
  undefined4 local_198;
  undefined1 local_118;
  undefined1 local_a8;
  undefined2 local_9c;
  undefined1 local_9a;
  int *****local_98;
  char **ppcStack_94;
  undefined1 *puStack_90;
  char *local_8c;
  undefined4 local_88;
  undefined4 local_84;
  char *local_80;
  undefined4 local_7c;
  int *****local_78;
  undefined1 *local_74;
  undefined4 *local_70;
  undefined4 uStack_6c;
  int *****local_60;
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
      FUN_013079f0(&DAT_01c17d7c);
    }
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c17d7c);
  }
  iVar13 = *(int *)(param_2 + 0x48);
  FUN_01bed4e2(auStack_250,param_2,0x48);
  piVar6 = (int *)FUN_00a52660(local_210);
  if (piVar6 != (int *)0x0) {
    local_1a8 = (int *****)&DAT_80000000;
    local_1ac = (undefined4 *)0x0;
    local_1b4 = (char **)0x0;
    local_1b8 = (int *****)0x0;
    FUN_0196ac88(&local_60,&local_1b8);
    uVar4 = local_60._0_1_;
    uVar12 = (uint)local_60 & 0xff;
    if (uVar12 == 6) {
      FUN_00e0fe5c(local_5c);
    }
    else {
      FUN_01bed4e2((uint)&local_78 | 1,(uint)&local_60 | 1,0x17);
      local_78 = (int *****)CONCAT31(local_78._1_3_,uVar4);
      if (uVar12 == 5) {
        local_1a4 = 0;
        local_1a0 = local_74;
        if (local_74 == (undefined1 *)0x0) {
          uStack_6c = 0;
        }
        local_1b0 = local_74;
        local_1b8 = (int *****)(uint)(local_74 != (undefined1 *)0x0);
        local_19c = local_70;
        local_1ac = local_70;
        local_1b4 = (char **)0x0;
        local_1a8 = local_1b8;
        local_198 = uStack_6c;
        FUN_00fea674(auStack_48,&local_1b8);
        if (local_3c != 0) {
          FUN_0067b1ac(&local_1b8,auStack_48);
          local_98 = local_1b8;
          ppcStack_94 = local_1b4;
          puStack_90 = local_1b0;
          cVar5 = (char)local_1ac;
          local_9c = local_1ac._1_2_;
          local_9a = local_1ac._3_1_;
          FUN_00e0febc(&local_78);
          if (cVar5 != '\x02') {
            local_1b8 = local_98;
            local_1b4 = ppcStack_94;
            local_1b0 = puStack_90;
            local_1ac = (undefined4 *)CONCAT31(CONCAT12(local_9a,local_9c),cVar5);
            DataMemoryBarrier(0xb);
            if (*(int *)(*piVar6 + 0x18) != 0) {
              FUN_00b065ec(*piVar6 + 8,&local_1b8);
            }
            if ((char)local_1ac != '\x02') {
              local_60 = local_1b8;
              local_5c = local_1b4;
              local_58 = local_1b0;
              local_51 = local_1ac._3_1_;
              local_53 = local_1ac._1_2_;
              local_54 = (char)local_1ac;
              FUN_019cf348(&local_60);
              if ((DAT_01d50f88 < 5) &&
                 (((DAT_01d4c488 - 1 < 2 ||
                   ((DAT_01d4c488 != 0 && (cVar5 = FUN_01aaafa8(&DAT_01d4c480), cVar5 != '\0')))) &&
                  (iVar7 = FUN_01aaa278(DAT_01d4c480), iVar7 != 0)))) {
                local_70 = (undefined4 *)(DAT_01d4c480 + 0x1c);
                if (*(char ***)(DAT_01d4c480 + 0x20) == (char **)0x0) {
LAB_00e9ac4c:
                    /* WARNING: Subroutine does not return */
                  FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c17708);
                }
                local_5c = &local_8c;
                local_1b0 = *(undefined1 **)(DAT_01d4c480 + 0x24);
                local_1ac = *(undefined4 **)(DAT_01d4c480 + 0x28);
                local_60 = (int *****)&local_1b8;
                local_1a8 = (int *****)0x0;
                local_74 = (undefined1 *)0x1;
                local_58 = &DAT_01d2ea4c;
                local_88 = 0x6b;
                local_8c = "BUG: request parameters cell was already initialized.";
                local_1b8 = (int *****)*local_70;
                local_1b4 = *(char ***)(DAT_01d4c480 + 0x20);
                local_78 = (int *****)&local_60;
                FUN_00e0ff40(&local_78);
              }
              else {
                iVar7 = DAT_01d4c480;
                if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
                  local_88 = *(undefined4 *)(DAT_01d4c480 + 0x14);
                  local_84 = *(undefined4 *)(DAT_01d4c480 + 0x18);
                  local_8c = (char *)0x1;
                  DataMemoryBarrier(0xb);
                  puVar14 = DAT_01d4edc8;
                  pcVar3 = DAT_01d4edc4;
                  if (DAT_01d51174 != 2) {
                    puVar14 = &DAT_01cfc5e0;
                    pcVar3 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
                  }
                  iVar9 = (*(code *)puVar14[3])(pcVar3,&local_8c);
                  if (iVar9 != 0) {
                    local_70 = (undefined4 *)(DAT_01d4c480 + 0x1c);
                    if (*(char ***)(DAT_01d4c480 + 0x20) == (char **)0x0) goto LAB_00e9ac4c;
                    local_5c = &local_80;
                    local_1b0 = *(undefined1 **)(DAT_01d4c480 + 0x24);
                    local_1ac = *(undefined4 **)(DAT_01d4c480 + 0x28);
                    local_60 = (int *****)&local_1b8;
                    local_74 = (undefined1 *)0x1;
                    local_1a8 = (int *****)0x0;
                    local_58 = &DAT_01d2ea4c;
                    local_7c = 0x6b;
                    local_80 = "BUG: request parameters cell was already initialized.";
                    local_1b8 = (int *****)*local_70;
                    local_1b4 = *(char ***)(DAT_01d4c480 + 0x20);
                    local_78 = (int *****)&local_60;
                    FUN_01aaa328(iVar7,pcVar3,puVar14[4],&local_8c,&local_78);
                  }
                }
              }
            }
          }
          goto LAB_00e9a9dc;
        }
        FUN_0165a1f4(auStack_48);
      }
      FUN_00e0febc(&local_78);
    }
  }
LAB_00e9a9dc:
  ppppiVar8 = *(int *****)(*(int *)(*(int *)(iVar13 + 4) + 0x68) + 8);
  do {
    pppiVar10 = *ppppiVar8;
    bVar2 = (bool)hasExclusiveAccess(ppppiVar8);
  } while (!bVar2);
  *ppppiVar8 = (int ***)((int)pppiVar10 + 1);
  if ((int)pppiVar10 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0xe9ac64);
    (*pcVar1)();
  }
  ppppiVar11 = ppppiVar8 + 0x34;
  DataMemoryBarrier(0xb);
  do {
    bVar2 = (bool)hasExclusiveAccess(ppppiVar11);
  } while (!bVar2);
  *ppppiVar11 = (int ***)((int)*ppppiVar11 + 1);
  local_1b4 = (char **)((uint)ppppiVar8[0x33] & 0xfffffffe);
  local_118 = 0;
  local_a8 = 0;
  local_1b8 = (int *****)ppppiVar8;
  iVar13 = thunk_FUN_01be5118(0x118);
  if (iVar13 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0x118);
  }
  FUN_01bed4e2(iVar13,&local_1b8,0x118);
  FUN_00d91c94(&local_1b8,iVar13,&DAT_01c14c14);
  FUN_01bed4e2(auStack_208,&local_1b8,0x50);
  FUN_00f9604c(auStack_250);
  *param_1 = 3;
  param_1[1] = 0;
  FUN_01bed4e2(param_1 + 2,auStack_208,0x50);
  *(undefined1 *)(param_2 + 0x4c) = 1;
  return;
}

