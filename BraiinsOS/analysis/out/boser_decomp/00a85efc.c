// FUN_00a85efc @ 00a85efc size=1032 calls_out=13 calls_in=2
// strings: InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | FieldSet corrupted (this is a bug)

void FUN_00a85efc(byte *param_1)

{
  bool bVar1;
  char *pcVar2;
  uint *puVar3;
  undefined **ppuVar4;
  char cVar5;
  uint **ppuVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  uint *puVar10;
  uint uVar11;
  uint uVar12;
  uint *unaff_r9;
  int local_90;
  undefined4 uStack_8c;
  uint local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  int local_7c;
  byte local_78;
  byte local_77;
  undefined2 local_76;
  uint local_70;
  uint *local_6c;
  uint local_68;
  uint local_64;
  undefined4 local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  uint **local_4c;
  undefined4 local_48;
  uint *local_44;
  uint *local_40;
  undefined **local_3c;
  undefined1 *local_38;
  undefined *local_34;
  byte **ppbStack_30;
  byte *pbStack_2c;
  code *pcStack_28;
  
  local_77 = param_1[0x31];
  local_76 = *(undefined2 *)(param_1 + 0x32);
  param_1[0x31] = 2;
  if (local_77 == 2) {
    return;
  }
  local_90 = *(int *)(param_1 + 0x18);
  uStack_8c = *(undefined4 *)(param_1 + 0x1c);
  local_88 = *(uint *)(param_1 + 0x20);
  uStack_84 = *(undefined4 *)(param_1 + 0x24);
  uStack_80 = *(undefined4 *)(param_1 + 0x28);
  local_7c = *(int *)(param_1 + 0x2c);
  local_78 = param_1[0x30];
  if (*(char *)(local_7c + 8) == '\0') {
    DataMemoryBarrier(0xb);
    if ((local_88 & 0xff) == 2) {
      if (*(int *)(local_90 + 8) == 3) goto LAB_00a85f50;
    }
    else if (*(int *)(local_90 + 8) != 1) goto LAB_00a85f50;
    if ((*(int *)(param_1 + 0x34) == 0) ||
       (ppuVar6 = (uint **)FUN_01785780(), ppuVar6 == (uint **)0x0)) {
      if ((char)local_88 != '\x02') {
        if ((DAT_01d50f88 == 0) &&
           (((DAT_01d4fbb0 - 1 < 2 ||
             ((DAT_01d4fbb0 != 0 && (cVar5 = FUN_01aaafa8(&DAT_01d4fba8), cVar5 != '\0')))) &&
            (iVar8 = FUN_01aaa278(DAT_01d4fba8), iVar8 != 0)))) {
          local_44 = (uint *)(DAT_01d4fba8 + 0x1c);
          local_70 = *local_44;
          local_6c = *(uint **)(DAT_01d4fba8 + 0x20);
          if (local_6c == (uint *)0x0) {
LAB_00a862ec:
                    /* WARNING: Subroutine does not return */
            FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01d20fd8);
          }
          local_3c = &local_34;
          local_68 = *(uint *)(DAT_01d4fba8 + 0x24);
          local_64 = *(uint *)(DAT_01d4fba8 + 0x28);
          local_40 = &local_70;
          local_4c = &local_40;
          local_60 = 0;
          local_48 = 1;
          ppbStack_30 = &pbStack_2c;
          local_38 = &DAT_01d2ea4c;
          local_34 = &DAT_0059b92a;
          pcStack_28 = FUN_0188d23c;
          pbStack_2c = param_1;
          FUN_01711128(&local_4c);
        }
        else {
          iVar8 = DAT_01d4fba8;
          if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
            local_54 = *(undefined4 *)(DAT_01d4fba8 + 0x14);
            local_50 = *(undefined4 *)(DAT_01d4fba8 + 0x18);
            local_58 = 5;
            DataMemoryBarrier(0xb);
            puVar9 = DAT_01d4edc8;
            pcVar2 = DAT_01d4edc4;
            if (DAT_01d51174 != 2) {
              puVar9 = &DAT_01cfc5e0;
              pcVar2 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
            }
            iVar7 = (*(code *)puVar9[3])(pcVar2,&local_58);
            if (iVar7 != 0) {
              local_44 = (uint *)(DAT_01d4fba8 + 0x1c);
              local_70 = *local_44;
              local_6c = *(uint **)(DAT_01d4fba8 + 0x20);
              if (local_6c == (uint *)0x0) goto LAB_00a862ec;
              local_3c = &local_34;
              local_68 = *(uint *)(DAT_01d4fba8 + 0x24);
              local_64 = *(uint *)(DAT_01d4fba8 + 0x28);
              local_40 = &local_70;
              local_4c = &local_40;
              local_60 = 0;
              local_48 = 1;
              ppbStack_30 = &pbStack_2c;
              local_38 = &DAT_01d2ea4c;
              local_34 = &DAT_0059b92a;
              pcStack_28 = FUN_0188d23c;
              pbStack_2c = param_1;
              FUN_01aaa328(iVar8,pcVar2,puVar9[4],&local_58,&local_4c);
            }
          }
        }
      }
    }
    else {
      local_4c = ppuVar6;
      FUN_01933ff0(&local_40,ppuVar6 + 2);
      ppuVar4 = local_3c;
      puVar3 = local_40;
      uVar11 = (uint)local_38 & 0xff;
      if (local_40 == (uint *)0x0) {
        uVar12 = (uint)*param_1;
        if (uVar12 == 0) {
          local_70 = 0;
        }
        else if (uVar12 == 1) {
          local_70 = (uint)param_1[1] << 8;
        }
        else {
          unaff_r9 = (uint *)FUN_014333b0();
          puVar9 = *(undefined4 **)(param_1 + 4);
          (**(code **)*puVar9)(&local_70,puVar9 + 3,puVar9[1],puVar9[2]);
          *unaff_r9 = local_70;
          unaff_r9[1] = (uint)local_6c;
          unaff_r9[2] = local_68;
          unaff_r9[3] = local_64;
          local_70 = 0;
        }
        local_70 = local_70 | uVar12;
        local_6c = unaff_r9;
        (*(code *)**(undefined4 **)(param_1 + 8))
                  (&local_68,param_1 + 0x14,*(undefined4 *)(param_1 + 0xc),
                   *(undefined4 *)(param_1 + 0x10));
        FUN_00a7df18(ppuVar4 + 2,&local_70,&local_90,&local_4c);
      }
      FUN_00a97e8c(ppuVar4,uVar11);
      DataMemoryBarrier(0xb);
      do {
        puVar10 = *ppuVar6;
        bVar1 = (bool)hasExclusiveAccess(ppuVar6);
      } while (!bVar1);
      *ppuVar6 = (uint *)((int)puVar10 + -1);
      if (puVar10 == (uint *)0x1) {
        DataMemoryBarrier(0xb);
        FUN_00a8021c(ppuVar6);
      }
      if (puVar3 == (uint *)0x0) {
        return;
      }
    }
  }
LAB_00a85f50:
  FUN_009d65c0(&local_90);
  return;
}

