// FUN_0135abbc @ 0135abbc size=4092 calls_out=9 calls_in=10
// strings: h2::proto::streams::recv/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/recv.rs | InvalidParamSegmentInvalidParamInvalidCatchAll | h2::proto::streams::recv/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/recv.rs | InvalidParamSegmentInvalidParamInvalidCatchAll | h2::proto::streams::recv/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/recv.rs | InvalidParamSegmentInvalidParamInvalidCatchAll

void FUN_0135abbc(int param_1,int *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 ******ppppppuVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  undefined4 ******ppppppuVar14;
  char *local_90;
  char **local_8c;
  undefined4 ******local_88;
  char **local_84;
  undefined4 *local_80;
  undefined4 ******local_78;
  char **local_74;
  undefined4 *local_70;
  undefined4 ******local_6c;
  char **local_68;
  undefined4 *local_64;
  undefined4 *****local_60;
  int local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  char *local_48;
  undefined4 ******local_44;
  undefined4 ******local_40;
  char **local_3c;
  undefined4 *local_38;
  undefined4 ******local_30;
  char **local_2c;
  undefined4 *local_28;
  
  iVar10 = *param_2;
  iVar11 = param_2[1];
  iVar9 = param_2[2];
  iVar2 = FUN_01367c40(*(undefined4 *)(iVar10 + 0x34),*(undefined4 *)(iVar10 + 0x38),iVar11,iVar9);
  uVar3 = (uint)*(byte *)(iVar2 + 0x20);
  if (5 < uVar3) {
    return;
  }
  uVar5 = 1;
  if (2 < uVar3) {
    uVar5 = uVar3 - 3;
  }
  if (uVar5 == 0) {
    return;
  }
  if ((((uVar5 & 0xff) == 1) && (uVar3 < 2)) && (1 < *(byte *)(iVar2 + 0x21))) {
    return;
  }
  iVar2 = FUN_01367c40(*(undefined4 *)(iVar10 + 0x34),*(undefined4 *)(iVar10 + 0x38),iVar11,iVar9);
  if (*(undefined1 **)(iVar2 + 0x18) != &DAT_3b9aca00) {
    return;
  }
  if ((DAT_01d50f88 == 0) &&
     (((DAT_01d4d154 - 1 < 2 ||
       ((DAT_01d4d154 != 0 && (cVar1 = FUN_01aaafa8(&DAT_01d4d14c), cVar1 != '\0')))) &&
      (iVar2 = FUN_01aaa278(DAT_01d4d14c), iVar2 != 0)))) {
    puVar13 = (undefined4 *)(DAT_01d4d14c + 0x1c);
    local_60 = (undefined4 *****)*puVar13;
    local_5c = *(int *)(DAT_01d4d14c + 0x20);
    if (local_5c == 0) {
LAB_0135bb40:
                    /* WARNING: Subroutine does not return */
      FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01ce7784);
    }
    local_58 = *(undefined4 *)(DAT_01d4d14c + 0x24);
    local_54 = *(undefined4 *)(DAT_01d4d14c + 0x28);
    local_50 = 0;
    iVar2 = FUN_01367c40(*(undefined4 *)(iVar10 + 0x34),*(undefined4 *)(iVar10 + 0x38),iVar11,iVar9)
    ;
    local_8c = &local_48;
    local_48 = (char *)(iVar2 + 0xd4);
    local_90 = &DAT_0057f79a;
    local_68 = &local_90;
    local_6c = &local_60;
    local_74 = (char **)&DAT_00000001;
    local_78 = &local_6c;
    local_64 = (undefined4 *)&DAT_01d2ea4c;
    local_44 = (undefined4 ******)FUN_00b1c384;
    local_70 = puVar13;
    FUN_01aaaecc(DAT_01d4d14c,&local_78);
    iVar2 = DAT_01d4d14c;
    if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
      local_3c = *(char ***)(DAT_01d4d14c + 0x14);
      local_38 = *(undefined4 **)(DAT_01d4d14c + 0x18);
      local_40 = (undefined4 ******)&DAT_00000005;
      DataMemoryBarrier(0xb);
      puVar13 = DAT_01d4edc8;
      if (DAT_01d51174 != 2) {
        puVar13 = &DAT_01cfc5e0;
      }
      pcVar4 = DAT_01d4edc4;
      if (DAT_01d51174 != 2) {
        pcVar4 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
      }
      iVar9 = (*(code *)puVar13[3])(pcVar4,&local_40);
      if (iVar9 != 0) {
        local_30 = local_40;
        local_2c = local_3c;
        local_28 = local_38;
        FUN_01aaa328(iVar2,pcVar4,puVar13[4],&local_30,&local_78);
      }
    }
  }
  else {
    iVar2 = DAT_01d4d14c;
    if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
      local_84 = *(char ***)(DAT_01d4d14c + 0x14);
      local_80 = *(undefined4 **)(DAT_01d4d14c + 0x18);
      local_88 = (undefined4 ******)&DAT_00000005;
      DataMemoryBarrier(0xb);
      puVar13 = DAT_01d4edc8;
      if (DAT_01d51174 != 2) {
        puVar13 = &DAT_01cfc5e0;
      }
      pcVar4 = DAT_01d4edc4;
      if (DAT_01d51174 != 2) {
        pcVar4 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
      }
      iVar9 = (*(code *)puVar13[3])(pcVar4,&local_88);
      if (iVar9 != 0) {
        puVar12 = (undefined4 *)(DAT_01d4d14c + 0x1c);
        local_60 = (undefined4 *****)*puVar12;
        local_5c = *(int *)(DAT_01d4d14c + 0x20);
        if (local_5c == 0) goto LAB_0135bb40;
        local_58 = *(undefined4 *)(DAT_01d4d14c + 0x24);
        local_54 = *(undefined4 *)(DAT_01d4d14c + 0x28);
        local_50 = 0;
        iVar9 = FUN_01367c40(*(undefined4 *)(*param_2 + 0x34),*(undefined4 *)(*param_2 + 0x38),
                             param_2[1],param_2[2]);
        local_44 = &local_78;
        local_78 = (undefined4 ******)(iVar9 + 0xd4);
        local_48 = &DAT_0057f79a;
        local_3c = &local_48;
        local_40 = &local_60;
        local_68 = (char **)&DAT_00000001;
        local_6c = &local_40;
        local_38 = (undefined4 *)&DAT_01d2ea4c;
        local_74 = (char **)FUN_00b1c384;
        local_30 = local_88;
        local_2c = local_84;
        local_28 = local_80;
        local_64 = puVar12;
        FUN_01aaa328(iVar2,pcVar4,puVar13[4],&local_30,&local_6c);
      }
    }
  }
  if (*(uint *)(param_3 + 0x18) <= *(uint *)(param_3 + 0x1c)) {
    return;
  }
  *(uint *)(param_3 + 0x1c) = *(uint *)(param_3 + 0x1c) + 1;
  if (((DAT_01d50f88 == 0) &&
      ((DAT_01d4d34c - 1 < 2 ||
       ((DAT_01d4d34c != 0 && (cVar1 = FUN_01aaafa8(&DAT_01d4d344), cVar1 != '\0')))))) &&
     (iVar2 = FUN_01aaa278(DAT_01d4d344), iVar2 != 0)) {
    if (*(int *)(DAT_01d4d344 + 0x20) == 0) {
LAB_0135bb58:
                    /* WARNING: Subroutine does not return */
      FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01ce8834);
    }
    local_68 = &local_48;
    local_58 = *(undefined4 *)(DAT_01d4d344 + 0x24);
    local_54 = *(undefined4 *)(DAT_01d4d344 + 0x28);
    local_70 = (undefined4 *)(DAT_01d4d344 + 0x1c);
    local_60 = (undefined4 *****)*local_70;
    local_6c = &local_60;
    local_78 = &local_6c;
    local_50 = 0;
    ppppppuVar14 = &local_78;
    local_74 = (char **)&DAT_00000001;
    local_44 = (undefined4 ******)&DAT_00000021;
    local_64 = (undefined4 *)&DAT_01d2ea4c;
    local_48 = "Queue::push_back";
    local_5c = *(int *)(DAT_01d4d344 + 0x20);
    FUN_01aaaecc(DAT_01d4d344,ppppppuVar14);
    iVar2 = DAT_01d4d344;
    if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
      local_3c = *(char ***)(DAT_01d4d344 + 0x14);
      local_38 = *(undefined4 **)(DAT_01d4d344 + 0x18);
      local_40 = (undefined4 ******)&DAT_00000005;
      DataMemoryBarrier(0xb);
      puVar13 = DAT_01d4edc8;
      if (DAT_01d51174 != 2) {
        puVar13 = &DAT_01cfc5e0;
      }
      pcVar4 = DAT_01d4edc4;
      if (DAT_01d51174 != 2) {
        pcVar4 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
      }
      iVar9 = (*(code *)puVar13[3])(pcVar4,&local_40);
      if (iVar9 != 0) {
        local_30 = local_40;
        local_2c = local_3c;
        local_28 = local_38;
        uVar6 = puVar13[4];
        goto LAB_0135b0cc;
      }
    }
  }
  else {
    iVar2 = DAT_01d4d344;
    if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
      local_74 = *(char ***)(DAT_01d4d344 + 0x14);
      local_70 = *(undefined4 **)(DAT_01d4d344 + 0x18);
      local_78 = (undefined4 ******)&DAT_00000005;
      DataMemoryBarrier(0xb);
      puVar13 = DAT_01d4edc8;
      if (DAT_01d51174 != 2) {
        puVar13 = &DAT_01cfc5e0;
      }
      pcVar4 = DAT_01d4edc4;
      if (DAT_01d51174 != 2) {
        pcVar4 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
      }
      iVar9 = (*(code *)puVar13[3])(pcVar4,&local_78);
      if (iVar9 != 0) {
        if (*(int *)(DAT_01d4d344 + 0x20) == 0) goto LAB_0135bb58;
        local_3c = &local_48;
        local_58 = *(undefined4 *)(DAT_01d4d344 + 0x24);
        local_54 = *(undefined4 *)(DAT_01d4d344 + 0x28);
        local_40 = &local_60;
        local_6c = &local_40;
        local_50 = 0;
        local_68 = (char **)&DAT_00000001;
        local_38 = (undefined4 *)&DAT_01d2ea4c;
        local_44 = (undefined4 ******)&DAT_00000021;
        local_48 = "Queue::push_back";
        local_30 = local_78;
        local_2c = local_74;
        local_28 = local_70;
        ppppppuVar14 = &local_6c;
        uVar6 = puVar13[4];
        local_64 = (undefined4 *)(DAT_01d4d344 + 0x1c);
        local_60 = *(undefined4 ******)(DAT_01d4d344 + 0x1c);
        local_5c = *(int *)(DAT_01d4d344 + 0x20);
LAB_0135b0cc:
        FUN_01aaa328(iVar2,pcVar4,uVar6,&local_30,ppppppuVar14);
      }
    }
  }
  iVar9 = *param_2;
  iVar11 = param_2[1];
  iVar10 = param_2[2];
  iVar2 = FUN_01367c40(*(undefined4 *)(iVar9 + 0x34),*(undefined4 *)(iVar9 + 0x38),iVar11,iVar10);
  if (*(undefined1 **)(iVar2 + 0x18) != &DAT_3b9aca00) {
    if (((DAT_01d50f88 == 0) &&
        ((DAT_01d4d334 - 1 < 2 ||
         ((DAT_01d4d334 != 0 && (cVar1 = FUN_01aaafa8(&DAT_01d4d32c), cVar1 != '\0')))))) &&
       (iVar2 = FUN_01aaa278(DAT_01d4d32c), iVar2 != 0)) {
      if (*(int *)(DAT_01d4d32c + 0x20) == 0) {
LAB_0135bb70:
                    /* WARNING: Subroutine does not return */
        FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01ce8864);
      }
      local_3c = &local_48;
      local_58 = *(undefined4 *)(DAT_01d4d32c + 0x24);
      local_54 = *(undefined4 *)(DAT_01d4d32c + 0x28);
      local_64 = (undefined4 *)(DAT_01d4d32c + 0x1c);
      local_60 = (undefined4 *****)*local_64;
      local_40 = &local_60;
      local_6c = &local_40;
      local_50 = 0;
      ppppppuVar14 = &local_6c;
      local_68 = (char **)&DAT_00000001;
      local_44 = (undefined4 ******)0x25;
      local_38 = (undefined4 *)&DAT_01d2ea4c;
      local_48 = " -> already queued";
      local_5c = *(int *)(DAT_01d4d32c + 0x20);
      FUN_01aaaecc(DAT_01d4d32c,ppppppuVar14);
      iVar2 = DAT_01d4d32c;
      if (DAT_01d51ae9 != '\0') {
        return;
      }
      if (DAT_01d51b00 < 5) {
        return;
      }
      local_2c = *(char ***)(DAT_01d4d32c + 0x14);
      local_28 = *(undefined4 **)(DAT_01d4d32c + 0x18);
      local_30 = (undefined4 ******)&DAT_00000005;
      DataMemoryBarrier(0xb);
      puVar13 = DAT_01d4edc8;
      if (DAT_01d51174 != 2) {
        puVar13 = &DAT_01cfc5e0;
      }
      pcVar4 = DAT_01d4edc4;
      if (DAT_01d51174 != 2) {
        pcVar4 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
      }
      iVar9 = (*(code *)puVar13[3])(pcVar4,&local_30);
      if (iVar9 == 0) {
        return;
      }
      uVar6 = puVar13[4];
      ppppppuVar8 = &local_30;
    }
    else {
      iVar2 = DAT_01d4d32c;
      if (DAT_01d51ae9 != '\0') {
        return;
      }
      if (DAT_01d51b00 < 5) {
        return;
      }
      local_68 = *(char ***)(DAT_01d4d32c + 0x14);
      local_64 = *(undefined4 **)(DAT_01d4d32c + 0x18);
      local_6c = (undefined4 ******)&DAT_00000005;
      DataMemoryBarrier(0xb);
      puVar13 = DAT_01d4edc8;
      if (DAT_01d51174 != 2) {
        puVar13 = &DAT_01cfc5e0;
      }
      pcVar4 = DAT_01d4edc4;
      if (DAT_01d51174 != 2) {
        pcVar4 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
      }
      iVar9 = (*(code *)puVar13[3])(pcVar4,&local_6c);
      if (iVar9 == 0) {
        return;
      }
      if (*(int *)(DAT_01d4d32c + 0x20) == 0) goto LAB_0135bb70;
      local_2c = &local_48;
      local_58 = *(undefined4 *)(DAT_01d4d32c + 0x24);
      local_54 = *(undefined4 *)(DAT_01d4d32c + 0x28);
      local_30 = &local_60;
      local_40 = &local_30;
      local_3c = (char **)&DAT_00000001;
      local_28 = (undefined4 *)&DAT_01d2ea4c;
      ppppppuVar8 = &local_6c;
      local_44 = (undefined4 ******)0x25;
      ppppppuVar14 = &local_40;
      local_50 = 0;
      local_48 = " -> already queued";
      uVar6 = puVar13[4];
      local_60 = *(undefined4 ******)(DAT_01d4d32c + 0x1c);
      local_5c = *(int *)(DAT_01d4d32c + 0x20);
      local_38 = (undefined4 *)(DAT_01d4d32c + 0x1c);
    }
    FUN_01aaa328(iVar2,pcVar4,uVar6,ppppppuVar8,ppppppuVar14);
    return;
  }
  iVar2 = FUN_01367cb8(*(undefined4 *)(iVar9 + 0x34),*(undefined4 *)(iVar9 + 0x38),iVar11,iVar10);
  FUN_019ac130(&local_60,1);
  iVar7 = *(int *)(param_1 + 0x50);
  *(undefined4 ******)(iVar2 + 0x10) = local_60;
  *(int *)(iVar2 + 0x14) = local_5c;
  *(undefined4 *)(iVar2 + 0x18) = local_58;
  if (iVar7 == 0) {
    if ((DAT_01d50f88 == 0) &&
       (((DAT_01d4d358 - 1 < 2 ||
         ((DAT_01d4d358 != 0 && (cVar1 = FUN_01aaafa8(&DAT_01d4d350), cVar1 != '\0')))) &&
        (iVar2 = FUN_01aaa278(DAT_01d4d350), iVar2 != 0)))) {
      if (*(int *)(DAT_01d4d350 + 0x20) == 0) {
LAB_0135bba0:
                    /* WARNING: Subroutine does not return */
        FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01ce8844);
      }
      local_3c = &local_48;
      local_58 = *(undefined4 *)(DAT_01d4d350 + 0x24);
      local_54 = *(undefined4 *)(DAT_01d4d350 + 0x28);
      local_64 = (undefined4 *)(DAT_01d4d350 + 0x1c);
      local_60 = (undefined4 *****)*local_64;
      local_6c = &local_40;
      local_50 = 0;
      ppppppuVar14 = &local_6c;
      local_68 = (char **)&DAT_00000001;
      local_44 = (undefined4 ******)0x1f;
      local_38 = (undefined4 *)&DAT_01d2ea4c;
      local_48 = " -> first entry";
      local_5c = *(int *)(DAT_01d4d350 + 0x20);
      local_40 = &local_60;
      FUN_01aaaecc(DAT_01d4d350,ppppppuVar14);
      iVar2 = DAT_01d4d350;
      if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
        local_2c = *(char ***)(DAT_01d4d350 + 0x14);
        local_28 = *(undefined4 **)(DAT_01d4d350 + 0x18);
        local_30 = (undefined4 ******)&DAT_00000005;
        DataMemoryBarrier(0xb);
        puVar13 = DAT_01d4edc8;
        if (DAT_01d51174 != 2) {
          puVar13 = &DAT_01cfc5e0;
        }
        pcVar4 = DAT_01d4edc4;
        if (DAT_01d51174 != 2) {
          pcVar4 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
        }
        iVar9 = (*(code *)puVar13[3])(pcVar4,&local_30);
        if (iVar9 != 0) {
          uVar6 = puVar13[4];
          ppppppuVar8 = &local_30;
          goto LAB_0135b668;
        }
      }
    }
    else {
      iVar2 = DAT_01d4d350;
      if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
        local_68 = *(char ***)(DAT_01d4d350 + 0x14);
        local_64 = *(undefined4 **)(DAT_01d4d350 + 0x18);
        local_6c = (undefined4 ******)&DAT_00000005;
        DataMemoryBarrier(0xb);
        puVar13 = DAT_01d4edc8;
        if (DAT_01d51174 != 2) {
          puVar13 = &DAT_01cfc5e0;
        }
        pcVar4 = DAT_01d4edc4;
        if (DAT_01d51174 != 2) {
          pcVar4 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
        }
        iVar9 = (*(code *)puVar13[3])(pcVar4,&local_6c);
        if (iVar9 != 0) {
          if (*(int *)(DAT_01d4d350 + 0x20) == 0) goto LAB_0135bba0;
          local_40 = &local_30;
          local_58 = *(undefined4 *)(DAT_01d4d350 + 0x24);
          local_50 = 0;
          local_54 = *(undefined4 *)(DAT_01d4d350 + 0x28);
          local_2c = &local_48;
          ppppppuVar8 = &local_6c;
          local_3c = (char **)&DAT_00000001;
          local_28 = (undefined4 *)&DAT_01d2ea4c;
          local_44 = (undefined4 ******)0x1f;
          local_48 = " -> first entry";
          ppppppuVar14 = &local_40;
          uVar6 = puVar13[4];
          local_60 = *(undefined4 ******)(DAT_01d4d350 + 0x1c);
          local_5c = *(int *)(DAT_01d4d350 + 0x20);
          local_38 = (undefined4 *)(DAT_01d4d350 + 0x1c);
          local_30 = &local_60;
LAB_0135b668:
          FUN_01aaa328(iVar2,pcVar4,uVar6,ppppppuVar8,ppppppuVar14);
        }
      }
    }
    *(int *)(param_1 + 0x54) = iVar11;
    *(undefined4 *)(param_1 + 0x50) = 1;
    *(int *)(param_1 + 0x58) = iVar10;
    goto LAB_0135bac4;
  }
  if (((DAT_01d50f88 == 0) &&
      ((DAT_01d4d340 - 1 < 2 ||
       ((DAT_01d4d340 != 0 && (cVar1 = FUN_01aaafa8(&DAT_01d4d338), cVar1 != '\0')))))) &&
     (iVar2 = FUN_01aaa278(DAT_01d4d338), iVar2 != 0)) {
    if (*(int *)(DAT_01d4d338 + 0x20) == 0) {
LAB_0135bb88:
                    /* WARNING: Subroutine does not return */
      FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01ce8854);
    }
    local_3c = &local_48;
    local_58 = *(undefined4 *)(DAT_01d4d338 + 0x24);
    local_54 = *(undefined4 *)(DAT_01d4d338 + 0x28);
    local_64 = (undefined4 *)(DAT_01d4d338 + 0x1c);
    local_60 = (undefined4 *****)*local_64;
    local_6c = &local_40;
    local_68 = (char **)&DAT_00000001;
    local_50 = 0;
    ppppppuVar14 = &local_6c;
    local_38 = (undefined4 *)&DAT_01d2ea4c;
    local_44 = (undefined4 ******)&DAT_00000029;
    local_48 = " -> existing entries";
    local_5c = *(int *)(DAT_01d4d338 + 0x20);
    local_40 = &local_60;
    FUN_01aaaecc(DAT_01d4d338,ppppppuVar14);
    iVar2 = DAT_01d4d338;
    if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
      local_2c = *(char ***)(DAT_01d4d338 + 0x14);
      local_28 = *(undefined4 **)(DAT_01d4d338 + 0x18);
      local_30 = (undefined4 ******)&DAT_00000005;
      DataMemoryBarrier(0xb);
      puVar13 = DAT_01d4edc8;
      if (DAT_01d51174 != 2) {
        puVar13 = &DAT_01cfc5e0;
      }
      pcVar4 = DAT_01d4edc4;
      if (DAT_01d51174 != 2) {
        pcVar4 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
      }
      iVar7 = (*(code *)puVar13[3])(pcVar4,&local_30);
      if (iVar7 != 0) {
        uVar6 = puVar13[4];
        ppppppuVar8 = &local_30;
        goto LAB_0135b40c;
      }
    }
  }
  else {
    iVar2 = DAT_01d4d338;
    if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
      local_68 = *(char ***)(DAT_01d4d338 + 0x14);
      local_64 = *(undefined4 **)(DAT_01d4d338 + 0x18);
      local_6c = (undefined4 ******)&DAT_00000005;
      DataMemoryBarrier(0xb);
      puVar13 = DAT_01d4edc8;
      if (DAT_01d51174 != 2) {
        puVar13 = &DAT_01cfc5e0;
      }
      pcVar4 = DAT_01d4edc4;
      if (DAT_01d51174 != 2) {
        pcVar4 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
      }
      iVar7 = (*(code *)puVar13[3])(pcVar4,&local_6c);
      if (iVar7 != 0) {
        if (*(int *)(DAT_01d4d338 + 0x20) == 0) goto LAB_0135bb88;
        local_40 = &local_30;
        local_58 = *(undefined4 *)(DAT_01d4d338 + 0x24);
        local_54 = *(undefined4 *)(DAT_01d4d338 + 0x28);
        local_2c = &local_48;
        local_50 = 0;
        ppppppuVar8 = &local_6c;
        local_3c = (char **)&DAT_00000001;
        local_28 = (undefined4 *)&DAT_01d2ea4c;
        local_44 = (undefined4 ******)&DAT_00000029;
        local_48 = " -> existing entries";
        ppppppuVar14 = &local_40;
        uVar6 = puVar13[4];
        local_60 = *(undefined4 ******)(DAT_01d4d338 + 0x1c);
        local_5c = *(int *)(DAT_01d4d338 + 0x20);
        local_38 = (undefined4 *)(DAT_01d4d338 + 0x1c);
        local_30 = &local_60;
LAB_0135b40c:
        FUN_01aaa328(iVar2,pcVar4,uVar6,ppppppuVar8,ppppppuVar14);
      }
    }
  }
  iVar2 = FUN_01367cb8(*(undefined4 *)(iVar9 + 0x34),*(undefined4 *)(iVar9 + 0x38),
                       *(undefined4 *)(param_1 + 0x5c),*(undefined4 *)(param_1 + 0x60));
  *(int *)(iVar2 + 0xac) = iVar11;
  *(undefined4 *)(iVar2 + 0xa8) = 1;
  *(int *)(iVar2 + 0xb0) = iVar10;
LAB_0135bac4:
  *(int *)(param_1 + 0x5c) = iVar11;
  *(int *)(param_1 + 0x60) = iVar10;
  return;
}

