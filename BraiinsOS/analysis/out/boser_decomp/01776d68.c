// FUN_01776d68 @ 01776d68 size=1572 calls_out=8 calls_in=1
// strings: hyper::client::pool/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6 | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | hyper::client::pool/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6 | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll

undefined4 FUN_01776d68(undefined4 *param_1,undefined4 *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 *******pppppppuVar7;
  uint *puVar8;
  undefined4 *puVar9;
  uint uVar10;
  undefined4 *******pppppppuVar11;
  undefined4 *******local_78;
  undefined4 local_74;
  undefined4 *local_70;
  undefined4 *******local_6c;
  undefined **local_68;
  undefined4 *local_64;
  undefined *local_60;
  undefined4 *local_5c;
  undefined4 local_58;
  undefined *local_54;
  undefined4 *******local_50;
  undefined **local_4c;
  undefined1 *local_48;
  undefined4 ******local_40;
  int iStack_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  
  iVar2 = FUN_0179a948(param_2 + 4);
  if (iVar2 == 0) {
    if ((DAT_01d50f88 != 0) ||
       (((1 < DAT_01d4f160 - 1 &&
         ((DAT_01d4f160 == 0 || (cVar1 = FUN_01aaafa8(&DAT_01d4f158), cVar1 == '\0')))) ||
        (iVar2 = FUN_01aaa278(DAT_01d4f158), iVar2 == 0)))) {
      iVar2 = DAT_01d4f158;
      if (DAT_01d51ae9 != '\0') {
        return 0;
      }
      if (DAT_01d51b00 < 5) {
        return 0;
      }
      local_74 = *(undefined4 *)(DAT_01d4f158 + 0x14);
      local_70 = *(undefined4 **)(DAT_01d4f158 + 0x18);
      local_78 = (undefined4 *******)&DAT_00000005;
      DataMemoryBarrier(0xb);
      puVar9 = DAT_01d4edc8;
      if (DAT_01d51174 != 2) {
        puVar9 = &DAT_01cfc5e0;
      }
      pcVar4 = DAT_01d4edc4;
      if (DAT_01d51174 != 2) {
        pcVar4 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
      }
      iVar3 = (*(code *)puVar9[3])(pcVar4,&local_78);
      if (iVar3 == 0) {
        return 0;
      }
      local_64 = (undefined4 *)(DAT_01d4f158 + 0x1c);
      local_40 = (undefined4 ******)*local_64;
      iStack_3c = *(int *)(DAT_01d4f158 + 0x20);
      if (iStack_3c != 0) {
        local_4c = &local_60;
        local_38 = *(undefined4 *)(DAT_01d4f158 + 0x24);
        local_34 = *(undefined4 *)(DAT_01d4f158 + 0x28);
        local_50 = &local_40;
        local_6c = &local_50;
        local_68 = (undefined **)&DAT_00000001;
        local_58 = *param_1;
        local_5c = &local_58;
        pppppppuVar7 = &local_78;
        pppppppuVar11 = &local_6c;
        local_30 = 0;
        local_48 = &DAT_01d2ea4c;
        local_60 = &DAT_00577224;
        local_54 = &DAT_017bdb44;
        uVar6 = puVar9[4];
        goto LAB_017770a8;
      }
LAB_0177735c:
                    /* WARNING: Subroutine does not return */
      FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01d1a370);
    }
    iStack_3c = *(int *)(DAT_01d4f158 + 0x20);
    if (iStack_3c == 0) goto LAB_0177735c;
    local_38 = *(undefined4 *)(DAT_01d4f158 + 0x24);
    local_34 = *(undefined4 *)(DAT_01d4f158 + 0x28);
    local_70 = (undefined4 *)(DAT_01d4f158 + 0x1c);
    local_40 = (undefined4 ******)*local_70;
    local_68 = &local_60;
    local_6c = &local_40;
    local_78 = &local_6c;
    local_30 = 0;
    local_64 = (undefined4 *)&DAT_01d2ea4c;
    local_74 = 1;
    local_58 = *param_1;
    local_5c = &local_58;
    local_60 = &DAT_00577224;
    local_54 = &DAT_017bdb44;
    FUN_01aaaecc(DAT_01d4f158,&local_78);
    if (DAT_01d51ae9 != '\0') {
      return 0;
    }
    if (DAT_01d51b00 < 5) {
      return 0;
    }
    iVar2 = DAT_01d4f158;
  }
  else {
    local_50 = (undefined4 *******)*param_2;
    local_4c = (undefined **)param_2[1];
    local_48 = (undefined1 *)param_2[2];
    FUN_019ac248(&local_40,param_1[1],&local_50);
    puVar8 = (uint *)param_1[2];
    uVar10 = puVar8[1];
    if (((uint)local_40 & 1) != 0) {
      local_34 = 0;
      local_38 = 0;
    }
    uVar5 = (uint)(uVar10 <= local_34 && (uint)(local_38 <= *puVar8) <= uVar10 - local_34);
    if (local_38 == *puVar8 && local_34 == uVar10) {
      uVar5 = (uint)(puVar8[2] < local_30) & ~(uint)local_40;
    }
    if (uVar5 == 0) {
      return 1;
    }
    if (((DAT_01d50f88 != 0) ||
        ((1 < DAT_01d4f16c - 1 &&
         ((DAT_01d4f16c == 0 || (cVar1 = FUN_01aaafa8(&DAT_01d4f164), cVar1 == '\0')))))) ||
       (iVar2 = FUN_01aaa278(DAT_01d4f164), iVar2 == 0)) {
      iVar2 = DAT_01d4f164;
      if (DAT_01d51ae9 != '\0') {
        return 0;
      }
      if (DAT_01d51b00 < 5) {
        return 0;
      }
      local_74 = *(undefined4 *)(DAT_01d4f164 + 0x14);
      local_70 = *(undefined4 **)(DAT_01d4f164 + 0x18);
      local_78 = (undefined4 *******)&DAT_00000005;
      DataMemoryBarrier(0xb);
      puVar9 = DAT_01d4edc8;
      if (DAT_01d51174 != 2) {
        puVar9 = &DAT_01cfc5e0;
      }
      pcVar4 = DAT_01d4edc4;
      if (DAT_01d51174 != 2) {
        pcVar4 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
      }
      iVar3 = (*(code *)puVar9[3])(pcVar4,&local_78);
      if (iVar3 == 0) {
        return 0;
      }
      local_64 = (undefined4 *)(DAT_01d4f164 + 0x1c);
      local_40 = (undefined4 ******)*local_64;
      iStack_3c = *(int *)(DAT_01d4f164 + 0x20);
      if (iStack_3c == 0) goto LAB_01777374;
      local_38 = *(undefined4 *)(DAT_01d4f164 + 0x24);
      local_4c = &local_60;
      local_34 = *(undefined4 *)(DAT_01d4f164 + 0x28);
      local_68 = (undefined **)&DAT_00000001;
      local_5c = &local_58;
      pppppppuVar7 = &local_78;
      local_30 = 0;
      local_48 = &DAT_01d2ea4c;
      local_60 = &DAT_0059a93d;
      local_58 = *param_1;
      pppppppuVar11 = &local_6c;
      local_54 = &DAT_017bdb44;
      uVar6 = puVar9[4];
      local_6c = &local_50;
      local_50 = &local_40;
      goto LAB_017770a8;
    }
    iStack_3c = *(int *)(DAT_01d4f164 + 0x20);
    if (iStack_3c == 0) {
LAB_01777374:
                    /* WARNING: Subroutine does not return */
      FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01d1a380);
    }
    local_38 = *(undefined4 *)(DAT_01d4f164 + 0x24);
    local_34 = *(undefined4 *)(DAT_01d4f164 + 0x28);
    local_70 = (undefined4 *)(DAT_01d4f164 + 0x1c);
    local_40 = (undefined4 ******)*local_70;
    local_68 = &local_60;
    local_78 = &local_6c;
    local_30 = 0;
    local_64 = (undefined4 *)&DAT_01d2ea4c;
    local_74 = 1;
    local_58 = *param_1;
    local_5c = &local_58;
    local_60 = &DAT_0059a93d;
    local_54 = &DAT_017bdb44;
    local_6c = &local_40;
    FUN_01aaaecc(DAT_01d4f164,&local_78);
    if (DAT_01d51ae9 != '\0') {
      return 0;
    }
    if (DAT_01d51b00 < 5) {
      return 0;
    }
    iVar2 = DAT_01d4f164;
  }
  pppppppuVar11 = &local_78;
  local_4c = *(undefined ***)(iVar2 + 0x14);
  local_48 = *(undefined1 **)(iVar2 + 0x18);
  local_50 = (undefined4 *******)&DAT_00000005;
  DataMemoryBarrier(0xb);
  puVar9 = DAT_01d4edc8;
  if (DAT_01d51174 != 2) {
    puVar9 = &DAT_01cfc5e0;
  }
  pcVar4 = DAT_01d4edc4;
  if (DAT_01d51174 != 2) {
    pcVar4 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
  }
  iVar3 = (*(code *)puVar9[3])(pcVar4,&local_50);
  if (iVar3 == 0) {
    return 0;
  }
  uVar6 = puVar9[4];
  pppppppuVar7 = &local_50;
LAB_017770a8:
  FUN_01aaa328(iVar2,pcVar4,uVar6,pppppppuVar7,pppppppuVar11);
  return 0;
}

