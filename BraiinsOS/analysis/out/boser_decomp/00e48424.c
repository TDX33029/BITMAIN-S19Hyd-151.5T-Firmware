// FUN_00e48424 @ 00e48424 size=1128 calls_out=19 calls_in=1
// strings: save_action | percentage | reference | BUG: request parameters cell was already initialized. | boser::api::grpc::utilsopen/boser/boser/src/api/grpc/utils.rs | InvalidParamSegmentInvalidParamInvalidCatchAll

void FUN_00e48424(int param_1)

{
  uint ***pppuVar1;
  undefined4 uVar2;
  char cVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  undefined4 *puVar8;
  char *local_c8;
  undefined4 local_c4;
  char *local_c0;
  int local_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  uint ****local_a8;
  int local_a4;
  undefined4 *local_a0;
  undefined1 auStack_90 [12];
  int local_84;
  uint ***local_70;
  int local_6c;
  int local_68;
  undefined4 local_64;
  uint ***local_60;
  undefined4 local_5c;
  int local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 ****local_48;
  char **local_44;
  undefined1 *local_40;
  undefined4 local_3c;
  uint ***local_38;
  undefined4 uStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  
  piVar4 = (int *)FUN_00a52660(*(undefined4 *)(param_1 + 0x50));
  if (piVar4 == (int *)0x0) {
    return;
  }
  local_38 = (uint ***)0x80000000;
  local_3c = 0;
  local_44 = (char **)0x0;
  local_48 = (undefined4 ****)0x0;
  iVar5 = FUN_014a7b90(&local_48,"save_action",0xb,*(undefined4 *)(param_1 + 0x48));
  if ((iVar5 == 0) &&
     (iVar5 = FUN_014a7bf4((int)*(undefined8 *)(param_1 + 0x40),&local_48,"percentage",10),
     iVar5 == 0)) {
    iVar5 = FUN_014a7b90(&local_48,"reference",9,*(undefined4 *)(param_1 + 0x4c));
    if (iVar5 == 0) {
      local_70 = (uint ***)local_48;
      local_6c = (int)local_44;
      local_68 = (int)local_40;
      local_64 = local_3c;
      local_60 = local_38;
      local_5c = uStack_34;
      local_58 = iStack_30;
      local_54 = uStack_2c;
      FUN_0196ac88(&local_a8);
      if (((uint)local_a8 & 0xff) != 6) {
        FUN_01bed4e2((uint)&local_c0 | 1,(uint)&local_a8 | 1,0x17);
        local_c0 = (char *)CONCAT31(local_c0._1_3_,local_a8._0_1_);
        if (((uint)local_a8 & 0xff) == 5) {
          local_5c = 0;
          local_58 = local_bc;
          if (local_bc == 0) {
            uStack_b4 = 0;
          }
          local_68 = local_bc;
          local_70 = (uint ***)(uint)(local_bc != 0);
          local_54 = local_b8;
          local_64 = local_b8;
          local_6c = 0;
          local_60 = local_70;
          local_50 = uStack_b4;
          FUN_00fea674(auStack_90,&local_70);
          if (local_84 != 0) {
            FUN_0067b1ac(&local_70,auStack_90);
            uVar2 = local_64;
            iVar6 = local_68;
            iVar5 = local_6c;
            pppuVar1 = local_70;
            cVar3 = (char)local_64;
            FUN_00e0febc(&local_c0);
            if (cVar3 == '\x02') {
              return;
            }
            DataMemoryBarrier(0xb);
            local_70 = pppuVar1;
            local_6c = iVar5;
            local_68 = iVar6;
            local_64 = uVar2;
            if (*(int *)(*piVar4 + 0x18) != 0) {
              FUN_00b065ec(*piVar4 + 8,&local_70);
            }
            if ((char)local_64 == '\x02') {
              return;
            }
            local_48 = (undefined4 ****)local_70;
            local_44 = (char **)local_6c;
            local_40 = (undefined1 *)local_68;
            local_3c = local_64;
            FUN_019cf348(&local_48);
            local_a8 = (uint ****)&local_48;
            if ((DAT_01d50f88 < 5) &&
               (((DAT_01d4c488 - 1 < 2 ||
                 ((DAT_01d4c488 != 0 && (cVar3 = FUN_01aaafa8(&DAT_01d4c480), cVar3 != '\0')))) &&
                (iVar5 = FUN_01aaa278(DAT_01d4c480), iVar5 != 0)))) {
              local_a0 = (undefined4 *)(DAT_01d4c480 + 0x1c);
              if (*(int *)(DAT_01d4c480 + 0x20) != 0) {
                local_68 = *(undefined4 *)(DAT_01d4c480 + 0x24);
                local_64 = *(undefined4 *)(DAT_01d4c480 + 0x28);
                local_a4 = 1;
                local_bc = 0x6b;
                local_60 = (uint ***)0x0;
                local_40 = &DAT_01d2ea4c;
                local_c0 = "BUG: request parameters cell was already initialized.";
                local_70 = (undefined4 ***)*local_a0;
                local_6c = *(int *)(DAT_01d4c480 + 0x20);
                local_48 = &local_70;
                local_44 = &local_c0;
                FUN_00e0ff40(&local_a8);
                return;
              }
            }
            else {
              iVar5 = DAT_01d4c480;
              if (DAT_01d51ae9 != '\0') {
                return;
              }
              if (DAT_01d51b00 == 0) {
                return;
              }
              local_bc = *(int *)(DAT_01d4c480 + 0x14);
              local_b8 = *(undefined4 *)(DAT_01d4c480 + 0x18);
              local_c0 = (char *)0x1;
              DataMemoryBarrier(0xb);
              puVar8 = DAT_01d4edc8;
              if (DAT_01d51174 != 2) {
                puVar8 = &DAT_01cfc5e0;
              }
              pcVar7 = DAT_01d4edc4;
              if (DAT_01d51174 != 2) {
                pcVar7 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
              }
              iVar6 = (*(code *)puVar8[3])(pcVar7,&local_c0);
              if (iVar6 == 0) {
                return;
              }
              local_a0 = (undefined4 *)(DAT_01d4c480 + 0x1c);
              if (*(int *)(DAT_01d4c480 + 0x20) != 0) {
                local_68 = *(undefined4 *)(DAT_01d4c480 + 0x24);
                local_44 = &local_c8;
                local_64 = *(undefined4 *)(DAT_01d4c480 + 0x28);
                local_a4 = 1;
                local_c4 = 0x6b;
                local_60 = (uint ***)0x0;
                local_40 = &DAT_01d2ea4c;
                local_c8 = "BUG: request parameters cell was already initialized.";
                local_70 = (undefined4 ***)*local_a0;
                local_6c = *(int *)(DAT_01d4c480 + 0x20);
                local_48 = &local_70;
                FUN_01aaa328(iVar5,pcVar7,puVar8[4],&local_c0,&local_a8);
                return;
              }
            }
                    /* WARNING: Subroutine does not return */
            FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c17708);
          }
          FUN_0165a1f4(auStack_90);
        }
        FUN_00e0febc(&local_c0);
        return;
      }
      iVar5 = local_a4;
      goto LAB_00e484e0;
    }
  }
  local_a8 = (uint ****)CONCAT31(local_a8._1_3_,6);
  local_a4 = iVar5;
  FUN_01276d58(&local_48);
LAB_00e484e0:
  FUN_00e0fe5c(iVar5);
  return;
}

