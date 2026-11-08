// FUN_01816d84 @ 01816d84 size=1428 calls_out=14 calls_in=1
// strings: hyper::client::pool/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6 | InvalidParamSegmentInvalidParamInvalidCatchAll | hyper::client::pool/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6 | InvalidParamSegmentInvalidParamInvalidCatchAll | hyper::client::pool/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6 | InvalidParamSegmentInvalidParamInvalidCatchAll

void FUN_01816d84(undefined4 *******param_1)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  undefined *puVar7;
  uint uVar8;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined4 *puVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  char *pcVar18;
  undefined4 *******pppppppuVar19;
  uint uVar20;
  uint uVar21;
  undefined4 *******pppppppuVar22;
  undefined *local_9c;
  undefined4 *******local_8c;
  code *local_88;
  int *local_84;
  undefined *local_80;
  undefined4 *******local_7c;
  undefined4 *******local_78;
  undefined4 *******local_74;
  undefined1 *local_70;
  undefined4 *******local_68;
  undefined **local_64;
  int *local_60;
  undefined4 ******local_5c;
  int iStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 local_4c;
  undefined4 *******local_48;
  undefined4 *******local_44;
  undefined4 *******local_40;
  undefined4 *******local_3c;
  undefined1 *local_38;
  undefined4 *******local_30;
  undefined4 *******local_2c;
  undefined1 *local_28;
  
  local_5c = param_1[7];
  param_1[7] = (undefined4 ******)0x0;
  if (local_5c == (undefined4 ******)0x0) {
    return;
  }
  FUN_01811480(&local_5c);
  if ((DAT_01d50f88 == 0) &&
     (((DAT_01d4fa24 - 1 < 2 ||
       ((DAT_01d4fa24 != 0 && (cVar2 = FUN_01aaafa8(&DAT_01d4fa1c), cVar2 != '\0')))) &&
      (iVar16 = FUN_01aaa278(DAT_01d4fa1c), iVar16 != 0)))) {
    iStack_58 = *(int *)(DAT_01d4fa1c + 0x20);
    if (iStack_58 == 0) {
LAB_01817304:
                    /* WARNING: Subroutine does not return */
      FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01d1dbcc);
    }
    local_64 = &local_80;
    uStack_54 = *(undefined4 *)(DAT_01d4fa1c + 0x24);
    uStack_50 = *(undefined4 *)(DAT_01d4fa1c + 0x28);
    pppppppuVar22 = &local_8c;
    local_84 = (int *)(DAT_01d4fa1c + 0x1c);
    local_5c = (undefined4 ******)*local_84;
    local_8c = &local_68;
    local_4c = 0;
    local_88 = (code *)0x1;
    local_7c = &local_48;
    local_60 = (int *)&DAT_01d2ea4c;
    local_80 = &DAT_0058d40d;
    local_44 = (undefined4 *******)FUN_017bdb4c;
    local_68 = &local_5c;
    local_48 = param_1;
    FUN_01aaaecc(DAT_01d4fa1c,pppppppuVar22);
    iVar16 = DAT_01d4fa1c;
    if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
      local_3c = *(undefined4 ********)(DAT_01d4fa1c + 0x14);
      local_38 = *(undefined1 **)(DAT_01d4fa1c + 0x18);
      local_40 = (undefined4 *******)&DAT_00000005;
      DataMemoryBarrier(0xb);
      puVar13 = DAT_01d4edc8;
      if (DAT_01d51174 != 2) {
        puVar13 = &DAT_01cfc5e0;
      }
      pcVar18 = DAT_01d4edc4;
      if (DAT_01d51174 != 2) {
        pcVar18 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
      }
      iVar3 = (*(code *)puVar13[3])(pcVar18,&local_40);
      if (iVar3 != 0) {
        local_30 = local_40;
        local_2c = local_3c;
        local_28 = local_38;
        uVar9 = puVar13[4];
        goto LAB_01816efc;
      }
    }
  }
  else {
    iVar16 = DAT_01d4fa1c;
    if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
      local_74 = *(undefined4 ********)(DAT_01d4fa1c + 0x14);
      local_70 = *(undefined1 **)(DAT_01d4fa1c + 0x18);
      local_78 = (undefined4 *******)&DAT_00000005;
      DataMemoryBarrier(0xb);
      puVar13 = DAT_01d4edc8;
      if (DAT_01d51174 != 2) {
        puVar13 = &DAT_01cfc5e0;
      }
      pcVar18 = DAT_01d4edc4;
      if (DAT_01d51174 != 2) {
        pcVar18 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
      }
      iVar3 = (*(code *)puVar13[3])(pcVar18,&local_78);
      if (iVar3 != 0) {
        local_60 = (int *)(DAT_01d4fa1c + 0x1c);
        iStack_58 = *(int *)(DAT_01d4fa1c + 0x20);
        if (iStack_58 == 0) goto LAB_01817304;
        local_3c = &local_48;
        uStack_54 = *(undefined4 *)(DAT_01d4fa1c + 0x24);
        uStack_50 = *(undefined4 *)(DAT_01d4fa1c + 0x28);
        local_68 = &local_40;
        local_64 = (undefined **)&DAT_00000001;
        local_44 = &local_8c;
        local_4c = 0;
        local_38 = &DAT_01d2ea4c;
        local_88 = FUN_017bdb4c;
        local_48 = (undefined4 *******)&DAT_0058d40d;
        local_30 = local_78;
        local_2c = local_74;
        local_28 = local_70;
        pppppppuVar22 = &local_68;
        uVar9 = puVar13[4];
        local_8c = param_1;
        local_5c = (undefined4 ******)*local_60;
        local_40 = &local_5c;
LAB_01816efc:
        FUN_01aaa328(iVar16,pcVar18,uVar9,&local_30,pppppppuVar22);
      }
    }
  }
  if (param_1[6] == (undefined4 ******)0x0) {
    return;
  }
  FUN_01933ff0(&local_30,param_1[6] + 2);
  puVar1 = local_28;
  pppppppuVar22 = local_2c;
  if ((local_30 == (undefined4 *******)0x2) || (((uint)local_30 & 1) != 0)) {
    if (((uint)local_30 & 1) == 0) {
      return;
    }
    goto LAB_018172d0;
  }
  pppppppuVar19 = local_2c + 0x16;
  puVar4 = (uint *)FUN_0178e5c0(pppppppuVar19,param_1);
  if (puVar4 == (uint *)0x0) goto LAB_018172d0;
  uVar8 = puVar4[3];
  if (uVar8 == 0) {
    uVar12 = 0;
    uVar5 = 0;
LAB_0181716c:
    if (uVar5 < uVar8) {
      uVar6 = puVar4[1];
      uVar15 = puVar4[2];
      uVar20 = *puVar4;
      local_9c = &DAT_01d20e1c;
      puVar7 = &DAT_0056c0e8;
      do {
        while( true ) {
          uVar17 = uVar20;
          if (uVar15 + uVar5 < uVar20) {
            uVar17 = 0;
          }
          DataMemoryBarrier(0xb);
          if (*(char *)(*(int *)(uVar6 + uVar15 * 4 + uVar17 * -4 + uVar5 * 4) + 0x40) == '\0')
          break;
          uVar5 = uVar5 + 1;
          if (uVar8 <= uVar5) goto LAB_01817230;
        }
        if (puVar4[3] <= uVar12) {
LAB_018172f0:
                    /* WARNING: Subroutine does not return */
          FUN_012fb0ec(puVar7,0x20,local_9c);
        }
        if (puVar4[3] <= uVar5) {
          puVar7 = &DAT_0056c748;
          local_9c = &DAT_01d20e2c;
          goto LAB_018172f0;
        }
        uVar21 = *puVar4;
        uVar14 = puVar4[1];
        uVar10 = puVar4[2] + uVar5;
        uVar17 = uVar10 - uVar21;
        if (uVar10 < uVar21) {
          uVar17 = uVar10;
        }
        uVar11 = puVar4[2] + uVar12;
        uVar12 = uVar12 + 1;
        uVar10 = uVar11 - uVar21;
        if (uVar11 < uVar21) {
          uVar10 = uVar11;
        }
        uVar9 = *(undefined4 *)(uVar14 + uVar10 * 4);
        *(undefined4 *)(uVar14 + uVar10 * 4) = *(undefined4 *)(uVar14 + uVar17 * 4);
        uVar5 = uVar5 + 1;
        *(undefined4 *)(uVar14 + uVar17 * 4) = uVar9;
      } while (uVar5 < uVar8);
    }
LAB_01817230:
    if (uVar5 == uVar12) goto LAB_018172a4;
    uVar8 = puVar4[3];
    if (uVar12 < uVar8) {
      uVar6 = *puVar4;
      uVar15 = puVar4[1];
      uVar20 = puVar4[2];
      puVar4[3] = uVar12;
      uVar5 = uVar20 - uVar6;
      if (uVar20 < uVar6) {
        uVar5 = uVar20;
      }
      uVar6 = uVar6 - uVar5;
      iVar16 = uVar8 - uVar6;
      if (uVar8 < uVar6) {
        iVar16 = 0;
      }
      if (uVar6 < uVar8) {
        uVar8 = uVar6;
      }
      if (uVar6 < uVar12) {
        iVar16 = iVar16 - (uVar12 - uVar8);
        uVar15 = uVar15 + (uVar12 - uVar8) * 4;
      }
      else {
        FUN_017e25e4(uVar15 + uVar5 * 4 + uVar12 * 4,uVar8 - uVar12);
      }
      FUN_017e25e4(uVar15,iVar16);
      goto LAB_018172a4;
    }
  }
  else {
    uVar12 = 0;
    do {
      uVar5 = *puVar4;
      if (puVar4[2] + uVar12 < *puVar4) {
        uVar5 = 0;
      }
      DataMemoryBarrier(0xb);
      if (*(char *)(*(int *)(puVar4[1] + puVar4[2] * 4 + uVar5 * -4 + uVar12 * 4) + 0x40) != '\0') {
        uVar5 = uVar12 + 1;
        goto LAB_0181716c;
      }
      uVar12 = uVar12 + 1;
    } while (uVar8 != uVar12);
LAB_018172a4:
    uVar8 = puVar4[3];
  }
  if (uVar8 == 0) {
    FUN_0178e214(&local_5c,pppppppuVar19,param_1);
    FUN_0181604c(&local_5c);
  }
LAB_018172d0:
  FUN_00a97e8c(pppppppuVar22,(uint)puVar1 & 0xff);
  return;
}

