// FUN_01394640 @ 01394640 size=4092 calls_out=9 calls_in=3
// strings: h2::proto::streams::recv/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/recv.rs | InvalidParamSegmentInvalidParamInvalidCatchAll | h2::proto::streams::recv/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/recv.rs | InvalidParamSegmentInvalidParamInvalidCatchAll | h2::proto::streams::recv/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/recv.rs | InvalidParamSegmentInvalidParamInvalidCatchAll

/* WARNING: Removing unreachable block (ram,0x013955c4) */

void FUN_01394640(int param_1,int *param_2,int param_3)

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
  undefined4 *puVar10;
  int iVar11;
  int iVar12;
  undefined4 ******ppppppuVar13;
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
  undefined *local_54;
  undefined4 local_50;
  char *local_48;
  undefined4 ******local_44;
  undefined4 ******local_40;
  char **local_3c;
  undefined4 *local_38;
  undefined4 ******local_30;
  char **local_2c;
  undefined4 *local_28;
  
  iVar11 = *param_2;
  iVar12 = param_2[1];
  iVar9 = param_2[2];
  iVar2 = FUN_0139f0d0(*(undefined4 *)(iVar11 + 0x34),*(undefined4 *)(iVar11 + 0x38),iVar12,iVar9);
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
  iVar2 = FUN_0139f0d0(*(undefined4 *)(iVar11 + 0x34),*(undefined4 *)(iVar11 + 0x38),iVar12,iVar9);
  if (*(undefined1 **)(iVar2 + 0x18) != &DAT_3b9aca00) {
    return;
  }
  if (((DAT_01d50f88 == 0) && (cVar1 = FUN_01aaafa8(0x1d4d938), cVar1 != '\0')) &&
     (iVar2 = FUN_01aaa278(&DAT_01ceccf4), iVar2 != 0)) {
    local_60 = (undefined4 *****)&DAT_01d2f7e0;
    local_5c = 1;
    local_58 = 0x1d4d938;
    local_54 = &DAT_01cec72c;
    local_50 = 0;
    iVar2 = FUN_0139f0d0(*(undefined4 *)(iVar11 + 0x34),*(undefined4 *)(iVar11 + 0x38),iVar12,iVar9)
    ;
    local_8c = &local_48;
    local_48 = (char *)(iVar2 + 0xcc);
    local_90 = &DAT_0057f79a;
    local_68 = &local_90;
    local_6c = &local_60;
    local_74 = (char **)&DAT_00000001;
    local_78 = &local_6c;
    local_64 = (undefined4 *)&DAT_01d2ea4c;
    local_44 = (undefined4 ******)FUN_00b1c384;
    local_70 = &DAT_01cecd10;
    FUN_01aaaecc(&DAT_01ceccf4,&local_78);
    if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
      local_3c = (char **)0x45cead;
      local_38 = (undefined4 *)&DAT_00000018;
      local_40 = (undefined4 ******)&DAT_00000005;
      DataMemoryBarrier(0xb);
      puVar10 = DAT_01d4edc8;
      if (DAT_01d51174 != 2) {
        puVar10 = &DAT_01cfc5e0;
      }
      pcVar4 = DAT_01d4edc4;
      if (DAT_01d51174 != 2) {
        pcVar4 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
      }
      iVar2 = (*(code *)puVar10[3])(pcVar4,&local_40);
      if (iVar2 != 0) {
        local_30 = local_40;
        local_2c = local_3c;
        local_28 = local_38;
        FUN_01aaa328(&DAT_01ceccf4,pcVar4,puVar10[4],&local_30,&local_78);
      }
    }
  }
  else if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
    local_84 = (char **)0x45cead;
    local_80 = (undefined4 *)&DAT_00000018;
    local_88 = (undefined4 ******)&DAT_00000005;
    DataMemoryBarrier(0xb);
    puVar10 = DAT_01d4edc8;
    if (DAT_01d51174 != 2) {
      puVar10 = &DAT_01cfc5e0;
    }
    pcVar4 = DAT_01d4edc4;
    if (DAT_01d51174 != 2) {
      pcVar4 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
    }
    iVar2 = (*(code *)puVar10[3])(pcVar4,&local_88);
    if (iVar2 != 0) {
      local_60 = (undefined4 *****)&DAT_01d2f7e0;
      local_5c = 1;
      local_58 = 0x1d4d938;
      local_54 = &DAT_01cec72c;
      local_50 = 0;
      iVar2 = FUN_0139f0d0(*(undefined4 *)(*param_2 + 0x34),*(undefined4 *)(*param_2 + 0x38),
                           param_2[1],param_2[2]);
      local_44 = &local_78;
      local_78 = (undefined4 ******)(iVar2 + 0xcc);
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
      local_64 = &DAT_01cecd10;
      FUN_01aaa328(&DAT_01ceccf4,pcVar4,puVar10[4],&local_30,&local_6c);
    }
  }
  if (*(uint *)(param_3 + 0x18) <= *(uint *)(param_3 + 0x1c)) {
    return;
  }
  *(uint *)(param_3 + 0x1c) = *(uint *)(param_3 + 0x1c) + 1;
  if ((DAT_01d50f88 == 0) &&
     (((DAT_01d4db44 - 1 < 2 ||
       ((DAT_01d4db44 != 0 && (cVar1 = FUN_01aaafa8(&DAT_01d4db3c), cVar1 != '\0')))) &&
      (iVar2 = FUN_01aaa278(DAT_01d4db3c), iVar2 != 0)))) {
    if (*(int *)(DAT_01d4db3c + 0x20) == 0) {
LAB_013955dc:
                    /* WARNING: Subroutine does not return */
      FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01ceddfc);
    }
    local_68 = &local_48;
    local_58 = *(undefined4 *)(DAT_01d4db3c + 0x24);
    local_54 = *(undefined **)(DAT_01d4db3c + 0x28);
    local_70 = (undefined4 *)(DAT_01d4db3c + 0x1c);
    local_60 = (undefined4 *****)*local_70;
    local_6c = &local_60;
    local_78 = &local_6c;
    local_50 = 0;
    ppppppuVar13 = &local_78;
    local_74 = (char **)&DAT_00000001;
    local_44 = (undefined4 ******)&DAT_00000021;
    local_64 = (undefined4 *)&DAT_01d2ea4c;
    local_48 = "Queue::push_back";
    local_5c = *(int *)(DAT_01d4db3c + 0x20);
    FUN_01aaaecc(DAT_01d4db3c,ppppppuVar13);
    iVar2 = DAT_01d4db3c;
    if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
      local_3c = *(char ***)(DAT_01d4db3c + 0x14);
      local_38 = *(undefined4 **)(DAT_01d4db3c + 0x18);
      local_40 = (undefined4 ******)&DAT_00000005;
      DataMemoryBarrier(0xb);
      puVar10 = DAT_01d4edc8;
      if (DAT_01d51174 != 2) {
        puVar10 = &DAT_01cfc5e0;
      }
      pcVar4 = DAT_01d4edc4;
      if (DAT_01d51174 != 2) {
        pcVar4 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
      }
      iVar9 = (*(code *)puVar10[3])(pcVar4,&local_40);
      if (iVar9 != 0) {
        local_30 = local_40;
        local_2c = local_3c;
        local_28 = local_38;
        uVar6 = puVar10[4];
        goto LAB_01394b50;
      }
    }
  }
  else {
    iVar2 = DAT_01d4db3c;
    if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
      local_74 = *(char ***)(DAT_01d4db3c + 0x14);
      local_70 = *(undefined4 **)(DAT_01d4db3c + 0x18);
      local_78 = (undefined4 ******)&DAT_00000005;
      DataMemoryBarrier(0xb);
      puVar10 = DAT_01d4edc8;
      if (DAT_01d51174 != 2) {
        puVar10 = &DAT_01cfc5e0;
      }
      pcVar4 = DAT_01d4edc4;
      if (DAT_01d51174 != 2) {
        pcVar4 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
      }
      iVar9 = (*(code *)puVar10[3])(pcVar4,&local_78);
      if (iVar9 != 0) {
        if (*(int *)(DAT_01d4db3c + 0x20) == 0) goto LAB_013955dc;
        local_3c = &local_48;
        local_58 = *(undefined4 *)(DAT_01d4db3c + 0x24);
        local_54 = *(undefined **)(DAT_01d4db3c + 0x28);
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
        ppppppuVar13 = &local_6c;
        uVar6 = puVar10[4];
        local_64 = (undefined4 *)(DAT_01d4db3c + 0x1c);
        local_60 = *(undefined4 ******)(DAT_01d4db3c + 0x1c);
        local_5c = *(int *)(DAT_01d4db3c + 0x20);
LAB_01394b50:
        FUN_01aaa328(iVar2,pcVar4,uVar6,&local_30,ppppppuVar13);
      }
    }
  }
  iVar9 = *param_2;
  iVar12 = param_2[1];
  iVar11 = param_2[2];
  iVar2 = FUN_0139f0d0(*(undefined4 *)(iVar9 + 0x34),*(undefined4 *)(iVar9 + 0x38),iVar12,iVar11);
  if (*(undefined1 **)(iVar2 + 0x18) != &DAT_3b9aca00) {
    if (((DAT_01d50f88 == 0) &&
        ((DAT_01d4db38 - 1 < 2 ||
         ((DAT_01d4db38 != 0 && (cVar1 = FUN_01aaafa8(&DAT_01d4db30), cVar1 != '\0')))))) &&
       (iVar2 = FUN_01aaa278(DAT_01d4db30), iVar2 != 0)) {
      if (*(int *)(DAT_01d4db30 + 0x20) == 0) {
LAB_013955f4:
                    /* WARNING: Subroutine does not return */
        FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01cede2c);
      }
      local_3c = &local_48;
      local_58 = *(undefined4 *)(DAT_01d4db30 + 0x24);
      local_54 = *(undefined **)(DAT_01d4db30 + 0x28);
      local_64 = (undefined4 *)(DAT_01d4db30 + 0x1c);
      local_60 = (undefined4 *****)*local_64;
      local_40 = &local_60;
      local_6c = &local_40;
      local_50 = 0;
      ppppppuVar13 = &local_6c;
      local_68 = (char **)&DAT_00000001;
      local_44 = (undefined4 ******)0x25;
      local_38 = (undefined4 *)&DAT_01d2ea4c;
      local_48 = " -> already queued";
      local_5c = *(int *)(DAT_01d4db30 + 0x20);
      FUN_01aaaecc(DAT_01d4db30,ppppppuVar13);
      iVar2 = DAT_01d4db30;
      if (DAT_01d51ae9 != '\0') {
        return;
      }
      if (DAT_01d51b00 < 5) {
        return;
      }
      local_2c = *(char ***)(DAT_01d4db30 + 0x14);
      local_28 = *(undefined4 **)(DAT_01d4db30 + 0x18);
      local_30 = (undefined4 ******)&DAT_00000005;
      DataMemoryBarrier(0xb);
      puVar10 = DAT_01d4edc8;
      if (DAT_01d51174 != 2) {
        puVar10 = &DAT_01cfc5e0;
      }
      pcVar4 = DAT_01d4edc4;
      if (DAT_01d51174 != 2) {
        pcVar4 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
      }
      iVar9 = (*(code *)puVar10[3])(pcVar4,&local_30);
      if (iVar9 == 0) {
        return;
      }
      uVar6 = puVar10[4];
      ppppppuVar8 = &local_30;
    }
    else {
      iVar2 = DAT_01d4db30;
      if (DAT_01d51ae9 != '\0') {
        return;
      }
      if (DAT_01d51b00 < 5) {
        return;
      }
      local_68 = *(char ***)(DAT_01d4db30 + 0x14);
      local_64 = *(undefined4 **)(DAT_01d4db30 + 0x18);
      local_6c = (undefined4 ******)&DAT_00000005;
      DataMemoryBarrier(0xb);
      puVar10 = DAT_01d4edc8;
      if (DAT_01d51174 != 2) {
        puVar10 = &DAT_01cfc5e0;
      }
      pcVar4 = DAT_01d4edc4;
      if (DAT_01d51174 != 2) {
        pcVar4 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
      }
      iVar9 = (*(code *)puVar10[3])(pcVar4,&local_6c);
      if (iVar9 == 0) {
        return;
      }
      if (*(int *)(DAT_01d4db30 + 0x20) == 0) goto LAB_013955f4;
      local_2c = &local_48;
      local_58 = *(undefined4 *)(DAT_01d4db30 + 0x24);
      local_54 = *(undefined **)(DAT_01d4db30 + 0x28);
      local_30 = &local_60;
      local_40 = &local_30;
      local_3c = (char **)&DAT_00000001;
      local_28 = (undefined4 *)&DAT_01d2ea4c;
      ppppppuVar8 = &local_6c;
      local_44 = (undefined4 ******)0x25;
      ppppppuVar13 = &local_40;
      local_50 = 0;
      local_48 = " -> already queued";
      uVar6 = puVar10[4];
      local_60 = *(undefined4 ******)(DAT_01d4db30 + 0x1c);
      local_5c = *(int *)(DAT_01d4db30 + 0x20);
      local_38 = (undefined4 *)(DAT_01d4db30 + 0x1c);
    }
    FUN_01aaa328(iVar2,pcVar4,uVar6,ppppppuVar8,ppppppuVar13);
    return;
  }
  iVar2 = FUN_0139f148(*(undefined4 *)(iVar9 + 0x34),*(undefined4 *)(iVar9 + 0x38),iVar12,iVar11);
  FUN_019ac130(&local_60,1);
  iVar7 = *(int *)(param_1 + 0x50);
  *(undefined4 ******)(iVar2 + 0x10) = local_60;
  *(int *)(iVar2 + 0x14) = local_5c;
  *(undefined4 *)(iVar2 + 0x18) = local_58;
  if (iVar7 == 0) {
    if (((DAT_01d50f88 == 0) &&
        ((DAT_01d4db20 - 1 < 2 ||
         ((DAT_01d4db20 != 0 && (cVar1 = FUN_01aaafa8(&DAT_01d4db18), cVar1 != '\0')))))) &&
       (iVar2 = FUN_01aaa278(DAT_01d4db18), iVar2 != 0)) {
      if (*(int *)(DAT_01d4db18 + 0x20) == 0) {
LAB_01395624:
                    /* WARNING: Subroutine does not return */
        FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01cede0c);
      }
      local_3c = &local_48;
      local_58 = *(undefined4 *)(DAT_01d4db18 + 0x24);
      local_54 = *(undefined **)(DAT_01d4db18 + 0x28);
      local_64 = (undefined4 *)(DAT_01d4db18 + 0x1c);
      local_60 = (undefined4 *****)*local_64;
      local_6c = &local_40;
      local_50 = 0;
      ppppppuVar13 = &local_6c;
      local_68 = (char **)&DAT_00000001;
      local_44 = (undefined4 ******)0x1f;
      local_38 = (undefined4 *)&DAT_01d2ea4c;
      local_48 = " -> first entry";
      local_5c = *(int *)(DAT_01d4db18 + 0x20);
      local_40 = &local_60;
      FUN_01aaaecc(DAT_01d4db18,ppppppuVar13);
      iVar2 = DAT_01d4db18;
      if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
        local_2c = *(char ***)(DAT_01d4db18 + 0x14);
        local_28 = *(undefined4 **)(DAT_01d4db18 + 0x18);
        local_30 = (undefined4 ******)&DAT_00000005;
        DataMemoryBarrier(0xb);
        puVar10 = DAT_01d4edc8;
        if (DAT_01d51174 != 2) {
          puVar10 = &DAT_01cfc5e0;
        }
        pcVar4 = DAT_01d4edc4;
        if (DAT_01d51174 != 2) {
          pcVar4 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
        }
        iVar9 = (*(code *)puVar10[3])(pcVar4,&local_30);
        if (iVar9 != 0) {
          uVar6 = puVar10[4];
          ppppppuVar8 = &local_30;
          goto LAB_013950ec;
        }
      }
    }
    else {
      iVar2 = DAT_01d4db18;
      if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
        local_68 = *(char ***)(DAT_01d4db18 + 0x14);
        local_64 = *(undefined4 **)(DAT_01d4db18 + 0x18);
        local_6c = (undefined4 ******)&DAT_00000005;
        DataMemoryBarrier(0xb);
        puVar10 = DAT_01d4edc8;
        if (DAT_01d51174 != 2) {
          puVar10 = &DAT_01cfc5e0;
        }
        pcVar4 = DAT_01d4edc4;
        if (DAT_01d51174 != 2) {
          pcVar4 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
        }
        iVar9 = (*(code *)puVar10[3])(pcVar4,&local_6c);
        if (iVar9 != 0) {
          if (*(int *)(DAT_01d4db18 + 0x20) == 0) goto LAB_01395624;
          local_40 = &local_30;
          local_58 = *(undefined4 *)(DAT_01d4db18 + 0x24);
          local_50 = 0;
          local_54 = *(undefined **)(DAT_01d4db18 + 0x28);
          local_2c = &local_48;
          ppppppuVar8 = &local_6c;
          local_3c = (char **)&DAT_00000001;
          local_28 = (undefined4 *)&DAT_01d2ea4c;
          local_44 = (undefined4 ******)0x1f;
          local_48 = " -> first entry";
          ppppppuVar13 = &local_40;
          uVar6 = puVar10[4];
          local_60 = *(undefined4 ******)(DAT_01d4db18 + 0x1c);
          local_5c = *(int *)(DAT_01d4db18 + 0x20);
          local_38 = (undefined4 *)(DAT_01d4db18 + 0x1c);
          local_30 = &local_60;
LAB_013950ec:
          FUN_01aaa328(iVar2,pcVar4,uVar6,ppppppuVar8,ppppppuVar13);
        }
      }
    }
    *(int *)(param_1 + 0x54) = iVar12;
    *(undefined4 *)(param_1 + 0x50) = 1;
    *(int *)(param_1 + 0x58) = iVar11;
    goto LAB_01395548;
  }
  if ((DAT_01d50f88 == 0) &&
     (((DAT_01d4db2c - 1 < 2 ||
       ((DAT_01d4db2c != 0 && (cVar1 = FUN_01aaafa8(&DAT_01d4db24), cVar1 != '\0')))) &&
      (iVar2 = FUN_01aaa278(DAT_01d4db24), iVar2 != 0)))) {
    if (*(int *)(DAT_01d4db24 + 0x20) == 0) {
LAB_0139560c:
                    /* WARNING: Subroutine does not return */
      FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01cede1c);
    }
    local_3c = &local_48;
    local_58 = *(undefined4 *)(DAT_01d4db24 + 0x24);
    local_54 = *(undefined **)(DAT_01d4db24 + 0x28);
    local_64 = (undefined4 *)(DAT_01d4db24 + 0x1c);
    local_60 = (undefined4 *****)*local_64;
    local_6c = &local_40;
    local_68 = (char **)&DAT_00000001;
    local_50 = 0;
    ppppppuVar13 = &local_6c;
    local_38 = (undefined4 *)&DAT_01d2ea4c;
    local_44 = (undefined4 ******)&DAT_00000029;
    local_48 = " -> existing entries";
    local_5c = *(int *)(DAT_01d4db24 + 0x20);
    local_40 = &local_60;
    FUN_01aaaecc(DAT_01d4db24,ppppppuVar13);
    iVar2 = DAT_01d4db24;
    if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
      local_2c = *(char ***)(DAT_01d4db24 + 0x14);
      local_28 = *(undefined4 **)(DAT_01d4db24 + 0x18);
      local_30 = (undefined4 ******)&DAT_00000005;
      DataMemoryBarrier(0xb);
      puVar10 = DAT_01d4edc8;
      if (DAT_01d51174 != 2) {
        puVar10 = &DAT_01cfc5e0;
      }
      pcVar4 = DAT_01d4edc4;
      if (DAT_01d51174 != 2) {
        pcVar4 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
      }
      iVar7 = (*(code *)puVar10[3])(pcVar4,&local_30);
      if (iVar7 != 0) {
        uVar6 = puVar10[4];
        ppppppuVar8 = &local_30;
        goto LAB_01394e90;
      }
    }
  }
  else {
    iVar2 = DAT_01d4db24;
    if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
      local_68 = *(char ***)(DAT_01d4db24 + 0x14);
      local_64 = *(undefined4 **)(DAT_01d4db24 + 0x18);
      local_6c = (undefined4 ******)&DAT_00000005;
      DataMemoryBarrier(0xb);
      puVar10 = DAT_01d4edc8;
      if (DAT_01d51174 != 2) {
        puVar10 = &DAT_01cfc5e0;
      }
      pcVar4 = DAT_01d4edc4;
      if (DAT_01d51174 != 2) {
        pcVar4 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
      }
      iVar7 = (*(code *)puVar10[3])(pcVar4,&local_6c);
      if (iVar7 != 0) {
        if (*(int *)(DAT_01d4db24 + 0x20) == 0) goto LAB_0139560c;
        local_40 = &local_30;
        local_58 = *(undefined4 *)(DAT_01d4db24 + 0x24);
        local_54 = *(undefined **)(DAT_01d4db24 + 0x28);
        local_2c = &local_48;
        local_50 = 0;
        ppppppuVar8 = &local_6c;
        local_3c = (char **)&DAT_00000001;
        local_28 = (undefined4 *)&DAT_01d2ea4c;
        local_44 = (undefined4 ******)&DAT_00000029;
        local_48 = " -> existing entries";
        ppppppuVar13 = &local_40;
        uVar6 = puVar10[4];
        local_60 = *(undefined4 ******)(DAT_01d4db24 + 0x1c);
        local_5c = *(int *)(DAT_01d4db24 + 0x20);
        local_38 = (undefined4 *)(DAT_01d4db24 + 0x1c);
        local_30 = &local_60;
LAB_01394e90:
        FUN_01aaa328(iVar2,pcVar4,uVar6,ppppppuVar8,ppppppuVar13);
      }
    }
  }
  iVar2 = FUN_0139f148(*(undefined4 *)(iVar9 + 0x34),*(undefined4 *)(iVar9 + 0x38),
                       *(undefined4 *)(param_1 + 0x5c),*(undefined4 *)(param_1 + 0x60));
  *(int *)(iVar2 + 0xa4) = iVar12;
  *(undefined4 *)(iVar2 + 0xa0) = 1;
  *(int *)(iVar2 + 0xa8) = iVar11;
LAB_01395548:
  *(int *)(param_1 + 0x5c) = iVar12;
  *(int *)(param_1 + 0x60) = iVar11;
  return;
}

