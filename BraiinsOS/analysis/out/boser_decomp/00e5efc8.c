// FUN_00e5efc8 @ 00e5efc8 size=916 calls_out=15 calls_in=2
// strings: BUG: request parameters cell was already initialized. | boser::api::grpc::utilsopen/boser/boser/src/api/grpc/utils.rs | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | BUG: request parameters cell was already initialized. | FieldSet corrupted (this is a bug)

void FUN_00e5efc8(int param_1)

{
  undefined1 uVar1;
  uint ***pppuVar2;
  undefined4 uVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  char *pcVar9;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  uint ****local_94;
  undefined4 local_90;
  undefined4 *local_8c;
  char *local_88;
  undefined4 local_84;
  undefined4 ****local_80;
  char **local_7c;
  undefined1 *local_78;
  undefined4 local_74;
  undefined1 auStack_68 [12];
  int local_5c;
  uint ***local_48;
  int local_44;
  int local_40;
  undefined4 local_3c;
  uint ***local_38;
  undefined4 local_34;
  int local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  FUN_0096b934(&local_48);
  uVar1 = local_48._0_1_;
  uVar7 = (uint)local_48 & 0xff;
  if (uVar7 == 6) {
    FUN_00e0fe5c(local_44);
  }
  else {
    FUN_01bed4e2((uint)&local_80 | 1,(uint)&local_48 | 1,0x17);
    local_80 = (undefined4 ****)CONCAT31(local_80._1_3_,uVar1);
    if (uVar7 == 5) {
      local_34 = 0;
      local_30 = (int)local_7c;
      if (local_7c == (char **)0x0) {
        local_74 = 0;
      }
      local_40 = (int)local_7c;
      local_48 = (uint ***)(uint)(local_7c != (char **)0x0);
      local_2c = local_78;
      local_3c = local_78;
      local_44 = 0;
      local_38 = local_48;
      local_28 = local_74;
      FUN_00fea674(auStack_68,&local_48);
      if (local_5c != 0) {
        FUN_0067b1ac(&local_48,auStack_68);
        uVar3 = local_3c;
        iVar6 = local_40;
        iVar5 = local_44;
        pppuVar2 = local_48;
        cVar4 = (char)local_3c;
        FUN_00e0febc(&local_80);
        if (cVar4 == '\x02') {
          return;
        }
        DataMemoryBarrier(0xb);
        local_48 = pppuVar2;
        local_44 = iVar5;
        local_40 = iVar6;
        local_3c = uVar3;
        if (*(int *)(param_1 + 0x18) != 0) {
          FUN_00b065ec(param_1 + 8,&local_48);
        }
        if ((char)local_3c == '\x02') {
          return;
        }
        local_80 = (undefined4 ****)local_48;
        local_7c = (char **)local_44;
        local_78 = (undefined1 *)local_40;
        local_74 = local_3c;
        FUN_019cf348(&local_80);
        local_94 = (uint ****)&local_80;
        if ((DAT_01d50f88 < 5) &&
           (((DAT_01d4c488 - 1 < 2 ||
             ((DAT_01d4c488 != 0 && (cVar4 = FUN_01aaafa8(&DAT_01d4c480), cVar4 != '\0')))) &&
            (iVar5 = FUN_01aaa278(DAT_01d4c480), iVar5 != 0)))) {
          local_8c = (undefined4 *)(DAT_01d4c480 + 0x1c);
          if (*(int *)(DAT_01d4c480 + 0x20) != 0) {
            local_40 = *(undefined4 *)(DAT_01d4c480 + 0x24);
            local_3c = *(undefined4 *)(DAT_01d4c480 + 0x28);
            local_7c = &local_88;
            local_90 = 1;
            local_84 = 0x6b;
            local_38 = (uint ***)0x0;
            local_78 = &DAT_01d2ea4c;
            local_88 = "BUG: request parameters cell was already initialized.";
            local_80 = &local_48;
            local_48 = (undefined4 ***)*local_8c;
            local_44 = *(int *)(DAT_01d4c480 + 0x20);
            FUN_00e0ff40(&local_94);
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
          local_9c = *(undefined4 *)(DAT_01d4c480 + 0x14);
          local_98 = *(undefined4 *)(DAT_01d4c480 + 0x18);
          local_a0 = 1;
          DataMemoryBarrier(0xb);
          puVar8 = DAT_01d4edc8;
          if (DAT_01d51174 != 2) {
            puVar8 = &DAT_01cfc5e0;
          }
          pcVar9 = DAT_01d4edc4;
          if (DAT_01d51174 != 2) {
            pcVar9 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
          }
          iVar6 = (*(code *)puVar8[3])(pcVar9,&local_a0);
          if (iVar6 == 0) {
            return;
          }
          local_8c = (undefined4 *)(DAT_01d4c480 + 0x1c);
          if (*(int *)(DAT_01d4c480 + 0x20) != 0) {
            local_40 = *(undefined4 *)(DAT_01d4c480 + 0x24);
            local_3c = *(undefined4 *)(DAT_01d4c480 + 0x28);
            local_7c = &local_88;
            local_90 = 1;
            local_78 = &DAT_01d2ea4c;
            local_84 = 0x6b;
            local_38 = (uint ***)0x0;
            local_88 = "BUG: request parameters cell was already initialized.";
            local_80 = &local_48;
            local_48 = (undefined4 ***)*local_8c;
            local_44 = *(int *)(DAT_01d4c480 + 0x20);
            FUN_01aaa328(iVar5,pcVar9,puVar8[4],&local_a0,&local_94);
            return;
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c17708);
      }
      FUN_0165a1f4(auStack_68);
    }
    FUN_00e0febc(&local_80);
  }
  return;
}

