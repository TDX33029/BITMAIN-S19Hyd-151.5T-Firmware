// FUN_01817484 @ 01817484 size=2376 calls_out=17 calls_in=0
// strings: hyper::client::pool/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6 | InvalidParamSegmentInvalidParamInvalidCatchAll | hyper::client::pool/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6 | InvalidParamSegmentInvalidParamInvalidCatchAll | hyper::client::pool/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6 | InvalidParamSegmentInvalidParamInvalidCatchAll

bool FUN_01817484(int param_1,undefined4 *param_2)

{
  bool bVar1;
  undefined1 uVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  char *pcVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  uint *******pppppppuVar13;
  int iVar14;
  uint uVar15;
  uint *puVar16;
  uint *puVar17;
  undefined4 uVar18;
  uint *puVar19;
  undefined4 uVar20;
  uint uVar21;
  undefined4 uVar22;
  int iVar23;
  uint uVar24;
  uint uVar25;
  undefined4 *puVar26;
  undefined4 *puVar27;
  uint *******pppppppuVar28;
  uint ******local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  int local_98;
  int local_94;
  undefined1 local_90;
  uint *******local_8c;
  undefined4 local_88;
  undefined4 *local_84;
  undefined *local_80;
  undefined4 local_7c;
  uint *******local_78;
  uint *******local_74;
  uint *******local_70;
  uint *******local_6c;
  undefined **local_68;
  undefined4 *local_64;
  uint *******local_60;
  uint *******local_5c;
  uint *******local_58;
  undefined4 local_54;
  undefined4 local_50;
  uint *******local_48;
  uint *******local_44;
  uint *******local_40;
  uint *******local_38;
  uint *******local_34;
  uint *******local_30;
  
  iVar14 = *(int *)(param_1 + 0x1c);
  uVar10 = *param_2;
  while( true ) {
    iVar4 = FUN_014374f0(param_1 + 0x18,param_2);
    if (iVar4 == 0) break;
    FUN_019f1a74(&local_60,param_1,uVar10);
    bVar1 = local_58 == (uint *******)&DAT_3b9aca00;
    if (local_58 == (uint *******)&DAT_3b9aca00 || iVar14 == 0) {
      return bVar1;
    }
    piVar5 = (int *)FUN_01785780(iVar14);
    if (piVar5 == (int *)0x0) {
      return bVar1;
    }
    FUN_01933ff0(&local_98,piVar5 + 2);
    uVar2 = local_90;
    iVar4 = local_94;
    if (local_98 != 0) {
      FUN_00a97e8c(local_94);
      DataMemoryBarrier(0xb);
      do {
        iVar14 = *piVar5;
        bVar1 = (bool)hasExclusiveAccess(piVar5);
      } while (!bVar1);
      *piVar5 = iVar14 + -1;
      if (iVar14 == 1) {
        DataMemoryBarrier(0xb);
        FUN_017844e8();
        return false;
      }
      return false;
    }
    if (((DAT_01d50f88 == 0) &&
        ((DAT_01d4fa3c - 1 < 2 ||
         ((DAT_01d4fa3c != 0 && (cVar3 = FUN_01aaafa8(&DAT_01d4fa34), cVar3 != '\0')))))) &&
       (iVar23 = FUN_01aaa278(DAT_01d4fa34), iVar23 != 0)) {
      if (*(uint ********)(DAT_01d4fa34 + 0x20) == (uint *******)0x0) {
LAB_01817da0:
                    /* WARNING: Subroutine does not return */
        FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01d1dbfc);
      }
      local_68 = &local_80;
      local_8c = (uint *******)&local_6c;
      local_84 = (undefined4 *)(DAT_01d4fa34 + 0x1c);
      local_60 = (uint *******)*local_84;
      local_58 = *(uint ********)(DAT_01d4fa34 + 0x24);
      local_54 = *(undefined4 *)(DAT_01d4fa34 + 0x28);
      local_6c = (uint *******)&local_60;
      local_50 = 0;
      local_88 = 1;
      local_64 = (undefined4 *)&DAT_01d2ea4c;
      local_7c = 0x45;
      local_80 = &DAT_0050c6b4;
      local_5c = *(uint ********)(DAT_01d4fa34 + 0x20);
      FUN_01aaaecc(DAT_01d4fa34,&local_8c);
      iVar23 = DAT_01d4fa34;
      if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
        local_44 = *(uint ********)(DAT_01d4fa34 + 0x14);
        local_40 = *(uint ********)(DAT_01d4fa34 + 0x18);
        local_48 = (uint *******)&DAT_00000005;
        DataMemoryBarrier(0xb);
        pcVar9 = DAT_01d4edc4;
        if (DAT_01d51174 != 2) {
          pcVar9 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
        }
        puVar8 = DAT_01d4edc8;
        if (DAT_01d51174 != 2) {
          puVar8 = &DAT_01cfc5e0;
        }
        iVar6 = (*(code *)puVar8[3])(pcVar9,&local_48);
        if (iVar6 != 0) {
          local_38 = local_48;
          local_34 = local_44;
          local_30 = local_40;
          FUN_01aaa328(iVar23,pcVar9,puVar8[4],&local_38,&local_8c);
        }
      }
    }
    else {
      iVar23 = DAT_01d4fa34;
      if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
        local_74 = *(uint ********)(DAT_01d4fa34 + 0x14);
        local_70 = *(uint ********)(DAT_01d4fa34 + 0x18);
        local_78 = (uint *******)&DAT_00000005;
        DataMemoryBarrier(0xb);
        pcVar9 = DAT_01d4edc4;
        if (DAT_01d51174 != 2) {
          pcVar9 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
        }
        puVar8 = DAT_01d4edc8;
        if (DAT_01d51174 != 2) {
          puVar8 = &DAT_01cfc5e0;
        }
        iVar6 = (*(code *)puVar8[3])(pcVar9,&local_78);
        if (iVar6 != 0) {
          if (*(uint ********)(DAT_01d4fa34 + 0x20) == (uint *******)0x0) goto LAB_01817da0;
          local_54 = *(undefined4 *)(DAT_01d4fa34 + 0x28);
          local_44 = (uint *******)&local_8c;
          local_58 = *(uint ********)(DAT_01d4fa34 + 0x24);
          local_48 = (uint *******)&local_60;
          local_6c = (uint *******)&local_48;
          local_50 = 0;
          local_68 = (undefined **)&DAT_00000001;
          local_40 = (uint *******)&DAT_01d2ea4c;
          local_88 = 0x45;
          local_8c = (uint *******)&DAT_0050c6b4;
          local_38 = local_78;
          local_34 = local_74;
          local_30 = local_70;
          local_64 = (undefined4 *)(DAT_01d4fa34 + 0x1c);
          local_60 = *(uint ********)(DAT_01d4fa34 + 0x1c);
          local_5c = *(uint ********)(DAT_01d4fa34 + 0x20);
          FUN_01aaa328(iVar23,pcVar9,puVar8[4],&local_38,&local_6c);
        }
      }
    }
    if (*(uint ********)(iVar4 + 0x10) == (uint *******)&DAT_3b9aca00) {
                    /* WARNING: Subroutine does not return */
      FUN_0130739c("interval assumes timeout",0x18,&DAT_01d1da50);
    }
    local_48 = *(uint ********)(iVar4 + 8);
    local_44 = *(uint ********)(iVar4 + 0xc);
    local_40 = *(uint ********)(iVar4 + 0x10);
    FUN_019ac130(&local_60,1);
    iVar23 = *(int *)(iVar4 + 0x44);
    local_34 = local_5c;
    local_38 = local_60;
    local_30 = local_58;
    if (iVar23 != 0) {
      puVar19 = *(uint **)(iVar4 + 0x38);
      puVar16 = puVar19 + 1;
      uVar21 = ~*puVar19 & 0x80808080;
LAB_0181786c:
      puVar17 = puVar16;
      if (uVar21 == 0) {
        do {
          puVar16 = puVar17 + 1;
          uVar21 = *puVar17;
          puVar19 = puVar19 + -0x24;
          puVar17 = puVar16;
        } while ((uVar21 & 0x80808080) == 0x80808080);
        uVar21 = uVar21 & 0x80808080 ^ 0x80808080;
      }
      puVar17 = puVar19 + ((uint)LZCOUNT(uVar21 << 0x18 | (uVar21 >> 8 & 0xff) << 0x10 |
                                         (uVar21 >> 0x10 & 0xff) << 8 | uVar21 >> 0x18) >> 3) * -9;
      pppppppuVar28 = (uint *******)(puVar17 + -9);
      local_58 = (uint *******)&local_48;
      local_5c = (uint *******)&local_38;
      local_60 = (uint *******)&local_6c;
      uVar7 = puVar17[-1];
      local_6c = pppppppuVar28;
      if (uVar7 != 0) {
        puVar26 = (undefined4 *)puVar17[-2];
        uVar15 = 1;
        uVar24 = 0;
        puVar27 = puVar26;
        puVar8 = puVar26;
LAB_01817908:
        puVar8 = puVar8 + 0xc;
        iVar6 = FUN_01776d68(&local_60,puVar27);
        uVar25 = uVar24 + 1;
        if (iVar6 != 0) goto code_r0x01817920;
        FUN_01777468(puVar27);
        while (uVar25 < uVar7) {
          iVar6 = FUN_01776d68(&local_60,puVar8);
          if (iVar6 == 0) {
            FUN_01777468(puVar8);
          }
          else {
            puVar27 = puVar26 + uVar24 * 0xc;
            uVar11 = puVar8[1];
            uVar12 = puVar8[2];
            uVar18 = puVar8[3];
            uVar20 = puVar8[4];
            uVar22 = puVar8[5];
            *puVar27 = *puVar8;
            puVar27[1] = uVar11;
            puVar27[2] = uVar12;
            puVar27[3] = uVar18;
            puVar27[4] = uVar20;
            puVar27[5] = uVar22;
            uVar11 = puVar8[7];
            uVar12 = puVar8[8];
            uVar18 = puVar8[9];
            uVar20 = puVar8[10];
            uVar22 = puVar8[0xb];
            puVar27[6] = puVar8[6];
            puVar27[7] = uVar11;
            puVar27[8] = uVar12;
            puVar27[9] = uVar18;
            puVar27[10] = uVar20;
            puVar27[0xb] = uVar22;
            uVar24 = uVar24 + 1;
          }
          puVar8 = puVar8 + 0xc;
          uVar15 = uVar15 + 1;
          uVar25 = uVar15;
        }
        puVar17[-1] = uVar24;
        goto LAB_01817940;
      }
      goto LAB_0181795c;
    }
LAB_01817a04:
    FUN_00a97e8c(iVar4,uVar2);
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar5;
      bVar1 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar1);
    *piVar5 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_017844e8();
    }
  }
  if ((DAT_01d50f88 == 0) &&
     (((DAT_01d4fa30 - 1 < 2 ||
       ((DAT_01d4fa30 != 0 && (cVar3 = FUN_01aaafa8(&DAT_01d4fa28), cVar3 != '\0')))) &&
      (iVar14 = FUN_01aaa278(DAT_01d4fa28), iVar14 != 0)))) {
    if (*(int *)(DAT_01d4fa28 + 0x20) == 0) {
LAB_01817dbc:
                    /* WARNING: Subroutine does not return */
      FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01d1dbec);
    }
    local_44 = (uint *******)&local_8c;
    local_58 = *(uint ********)(DAT_01d4fa28 + 0x24);
    local_54 = *(undefined4 *)(DAT_01d4fa28 + 0x28);
    local_64 = (undefined4 *)(DAT_01d4fa28 + 0x1c);
    local_60 = (uint *******)*local_64;
    local_48 = (uint *******)&local_60;
    local_6c = (uint *******)&local_48;
    local_50 = 0;
    local_68 = (undefined **)0x1;
    local_8c = (uint *******)&DAT_0050c690;
    pppppppuVar28 = (uint *******)&local_6c;
    local_40 = (uint *******)&DAT_01d2ea4c;
    local_88 = 0x49;
    local_5c = (uint *******)*(int *)(DAT_01d4fa28 + 0x20);
    FUN_01aaaecc(DAT_01d4fa28,pppppppuVar28);
    iVar14 = DAT_01d4fa28;
    if (DAT_01d51ae9 != '\0') {
      return false;
    }
    if (DAT_01d51b00 < 5) {
      return false;
    }
    local_34 = *(uint ********)(DAT_01d4fa28 + 0x14);
    local_30 = *(uint ********)(DAT_01d4fa28 + 0x18);
    local_38 = (uint *******)&DAT_00000005;
    DataMemoryBarrier(0xb);
    puVar8 = &DAT_01cfc5e0;
    if (DAT_01d51174 == 2) {
      puVar8 = DAT_01d4edc8;
    }
    pcVar9 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
    if (DAT_01d51174 == 2) {
      pcVar9 = DAT_01d4edc4;
    }
    iVar4 = (*(code *)puVar8[3])(pcVar9,&local_38);
    if (iVar4 == 0) {
      return false;
    }
    uVar10 = puVar8[4];
    pppppppuVar13 = (uint *******)&local_38;
  }
  else {
    iVar14 = DAT_01d4fa28;
    if (DAT_01d51ae9 != '\0') {
      return false;
    }
    if (DAT_01d51b00 < 5) {
      return false;
    }
    local_a0 = *(undefined4 *)(DAT_01d4fa28 + 0x14);
    local_9c = *(undefined4 *)(DAT_01d4fa28 + 0x18);
    local_a4 = (uint ******)0x5;
    DataMemoryBarrier(0xb);
    puVar8 = &DAT_01cfc5e0;
    if (DAT_01d51174 == 2) {
      puVar8 = DAT_01d4edc8;
    }
    pcVar9 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
    if (DAT_01d51174 == 2) {
      pcVar9 = DAT_01d4edc4;
    }
    iVar4 = (*(code *)puVar8[3])(pcVar9,&local_a4);
    if (iVar4 == 0) {
      return false;
    }
    if (*(int *)(DAT_01d4fa28 + 0x20) == 0) goto LAB_01817dbc;
    local_34 = (uint *******)&local_6c;
    local_58 = *(uint ********)(DAT_01d4fa28 + 0x24);
    local_54 = *(undefined4 *)(DAT_01d4fa28 + 0x28);
    local_38 = (uint *******)&local_60;
    local_48 = (uint *******)&local_38;
    pppppppuVar13 = &local_a4;
    local_50 = 0;
    local_44 = (uint *******)&DAT_00000001;
    local_6c = (uint *******)&DAT_0050c690;
    local_30 = (uint *******)&DAT_01d2ea4c;
    local_68 = (undefined **)0x49;
    pppppppuVar28 = (uint *******)&local_48;
    uVar10 = puVar8[4];
    local_60 = (uint *******)*(uint *******)(DAT_01d4fa28 + 0x1c);
    local_5c = (uint *******)*(int *)(DAT_01d4fa28 + 0x20);
    local_40 = (uint *******)(DAT_01d4fa28 + 0x1c);
  }
  FUN_01aaa328(iVar14,pcVar9,uVar10,pppppppuVar13,pppppppuVar28);
  return false;
code_r0x01817920:
  uVar15 = uVar15 + 1;
  puVar27 = puVar27 + 0xc;
  uVar24 = uVar25;
  if (uVar7 == uVar25) goto code_r0x0181793c;
  goto LAB_01817908;
code_r0x0181793c:
  uVar24 = puVar17[-1];
LAB_01817940:
  if (uVar24 == 0) {
LAB_0181795c:
    FUN_009440d4((undefined4 *)(iVar4 + 0x38),puVar17);
    FUN_0177a928(pppppppuVar28);
  }
  iVar23 = iVar23 + -1;
  uVar21 = uVar21 - 1 & uVar21;
  if (iVar23 == 0) goto LAB_01817a04;
  goto LAB_0181786c;
}

