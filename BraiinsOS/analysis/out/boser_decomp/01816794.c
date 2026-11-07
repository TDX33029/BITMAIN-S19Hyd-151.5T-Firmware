// FUN_01816794 @ 01816794 size=1024 calls_out=14 calls_in=3
// strings: hyper::client::pool/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6 | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | FieldSet corrupted (this is a bug)

void FUN_01816794(byte *param_1)

{
  byte bVar1;
  bool bVar2;
  char *pcVar3;
  undefined ***pppuVar4;
  char cVar5;
  int iVar6;
  byte *pbVar7;
  int iVar8;
  undefined4 *puVar9;
  uint uVar10;
  uint uVar11;
  undefined **ppuVar12;
  uint uVar13;
  undefined *local_a0;
  undefined *puStack_9c;
  undefined *local_98;
  undefined *local_94;
  undefined4 uStack_90;
  undefined **ppuStack_8c;
  undefined4 local_88;
  undefined **local_80;
  undefined **local_7c;
  undefined1 *local_78 [4];
  undefined *local_68;
  undefined *local_64;
  undefined *local_60;
  undefined *local_5c;
  undefined4 local_58;
  undefined **ppuStack_54;
  undefined4 uStack_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined ***local_40;
  int local_3c;
  undefined4 *local_38;
  undefined *local_34;
  byte **local_30;
  byte *local_2c;
  code *local_28;
  
  bVar1 = param_1[0x31];
  param_1[0x31] = 2;
  if (bVar1 != 2) {
    local_a0 = *(undefined **)(param_1 + 0x18);
    puStack_9c = *(undefined **)(param_1 + 0x1c);
    local_98 = *(undefined **)(param_1 + 0x20);
    local_94 = *(undefined **)(param_1 + 0x24);
    uStack_90 = *(undefined4 *)(param_1 + 0x28);
    ppuVar12 = *(undefined ***)(param_1 + 0x2c);
    local_88 = CONCAT22(*(undefined2 *)(param_1 + 0x32),CONCAT11(bVar1,param_1[0x30]));
    ppuStack_8c = ppuVar12;
    iVar6 = FUN_0179a948(&local_a0);
    if (iVar6 != 0) {
      if ((*(int *)(param_1 + 0x34) == 0) ||
         (pbVar7 = (byte *)FUN_01785780(), pbVar7 == (byte *)0x0)) {
        if ((char)local_98 != '\x02') {
          if ((DAT_01d50f88 == 0) &&
             (((DAT_01d4fa18 - 1 < 2 ||
               ((DAT_01d4fa18 != 0 && (cVar5 = FUN_01aaafa8(&DAT_01d4fa10), cVar5 != '\0')))) &&
              (iVar6 = FUN_01aaa278(DAT_01d4fa10), iVar6 != 0)))) {
            local_38 = (undefined4 *)(DAT_01d4fa10 + 0x1c);
            local_68 = (undefined *)*local_38;
            local_64 = *(undefined **)(DAT_01d4fa10 + 0x20);
            if (local_64 == (undefined *)0x0) {
LAB_01816b7c:
                    /* WARNING: Subroutine does not return */
              FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01d1dbbc);
            }
            local_7c = &local_34;
            local_60 = *(undefined **)(DAT_01d4fa10 + 0x24);
            local_5c = *(undefined **)(DAT_01d4fa10 + 0x28);
            local_80 = &local_68;
            local_40 = &local_80;
            local_58 = 0;
            local_3c = 1;
            local_30 = &local_2c;
            local_78[0] = &DAT_01d2ea4c;
            local_34 = &DAT_0059b92a;
            local_28 = FUN_017bdb4c;
            local_2c = param_1;
            FUN_01816c8c(&local_40);
          }
          else {
            iVar6 = DAT_01d4fa10;
            if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
              local_48 = *(undefined4 *)(DAT_01d4fa10 + 0x14);
              local_44 = *(undefined4 *)(DAT_01d4fa10 + 0x18);
              local_4c = 5;
              DataMemoryBarrier(0xb);
              puVar9 = DAT_01d4edc8;
              pcVar3 = DAT_01d4edc4;
              if (DAT_01d51174 != 2) {
                puVar9 = &DAT_01cfc5e0;
                pcVar3 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
              }
              iVar8 = (*(code *)puVar9[3])(pcVar3,&local_4c);
              if (iVar8 != 0) {
                local_38 = (undefined4 *)(DAT_01d4fa10 + 0x1c);
                local_68 = (undefined *)*local_38;
                local_64 = *(undefined **)(DAT_01d4fa10 + 0x20);
                if (local_64 == (undefined *)0x0) goto LAB_01816b7c;
                local_7c = &local_34;
                local_60 = *(undefined **)(DAT_01d4fa10 + 0x24);
                local_5c = *(undefined **)(DAT_01d4fa10 + 0x28);
                local_80 = &local_68;
                local_40 = &local_80;
                local_3c = 1;
                local_30 = &local_2c;
                local_58 = 0;
                local_78[0] = &DAT_01d2ea4c;
                local_34 = &DAT_0059b92a;
                local_28 = FUN_017bdb4c;
                local_2c = param_1;
                FUN_01aaa328(iVar6,pcVar3,puVar9[4],&local_4c,&local_40);
              }
            }
          }
        }
      }
      else {
        local_2c = pbVar7;
        FUN_01933ff0(&local_40,pbVar7 + 8);
        iVar6 = local_3c;
        pppuVar4 = local_40;
        uVar11 = (uint)local_38 & 0xff;
        if (local_40 == (undefined ***)0x0) {
          uVar13 = (uint)*param_1;
          if (uVar13 == 0) {
            uVar10 = 0;
          }
          else if (uVar13 == 1) {
            uVar10 = (uint)param_1[1] << 8;
          }
          else {
            ppuVar12 = (undefined **)FUN_014333b0();
            puVar9 = *(undefined4 **)(param_1 + 4);
            (**(code **)*puVar9)(&local_68,puVar9 + 3,puVar9[1],puVar9[2]);
            *ppuVar12 = local_68;
            ppuVar12[1] = local_64;
            ppuVar12[2] = local_60;
            ppuVar12[3] = local_5c;
            uVar10 = 0;
          }
          local_80 = (undefined **)(uVar10 | uVar13);
          local_7c = ppuVar12;
          (*(code *)**(undefined4 **)(param_1 + 8))
                    (local_78,param_1 + 0x14,*(undefined4 *)(param_1 + 0xc),
                     *(undefined4 *)(param_1 + 0x10));
          local_68 = local_a0;
          local_64 = puStack_9c;
          local_60 = local_98;
          local_5c = local_94;
          local_58 = uStack_90;
          ppuStack_54 = ppuStack_8c;
          uStack_50 = local_88;
          FUN_018136a4(iVar6 + 8,&local_80,&local_68,&local_2c);
        }
        FUN_00a97e8c(iVar6,uVar11);
        DataMemoryBarrier(0xb);
        do {
          iVar6 = *(int *)pbVar7;
          bVar2 = (bool)hasExclusiveAccess(pbVar7);
        } while (!bVar2);
        *(int *)pbVar7 = iVar6 + -1;
        if (iVar6 == 1) {
          DataMemoryBarrier(0xb);
          FUN_017844e8(pbVar7);
        }
        if (pppuVar4 == (undefined ***)0x0) {
          return;
        }
      }
    }
    FUN_01810ce0(&local_a0);
  }
  return;
}

