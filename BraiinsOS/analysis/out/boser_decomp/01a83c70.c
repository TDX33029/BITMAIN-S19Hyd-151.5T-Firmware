// FUN_01a83c70 @ 01a83c70 size=3088 calls_out=8 calls_in=3
// strings: h2::proto::streams::store/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/store.rsevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/store.rs:315event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/store.rs:303event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/store.rs:300 | InvalidParamSegmentInvalidParamInvalidCatchAll | Queue::push_front | h2::proto::streams::store/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/store.rsevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/store.rs:315event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/store.rs:303event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/store.rs:300 | InvalidParamSegmentInvalidParamInvalidCatchAll | Queue::push_front

void FUN_01a83c70(int *param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 ******ppppppuVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 ******ppppppuVar11;
  undefined4 ******local_a4;
  undefined4 local_a0;
  undefined4 *local_9c;
  char *local_98;
  undefined4 local_94;
  undefined4 ******local_90;
  undefined4 ******local_8c;
  undefined4 *local_88;
  undefined4 *****local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 ******local_6c;
  char **local_68;
  undefined4 *local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 *****local_54;
  int local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 ******local_40;
  undefined4 ******local_3c;
  undefined4 *local_38;
  undefined4 ******local_30;
  undefined4 ******local_2c;
  undefined4 *local_28;
  
  if ((DAT_01d50f88 == 0) &&
     (((DAT_01d50b88 - 1 < 2 ||
       ((DAT_01d50b88 != 0 && (cVar1 = FUN_01aaafa8(&DAT_01d50b80), cVar1 != '\0')))) &&
      (iVar3 = FUN_01aaa278(DAT_01d50b80), iVar3 != 0)))) {
    local_50 = *(int *)(DAT_01d50b80 + 0x20);
    if (local_50 == 0) {
LAB_01a84820:
                    /* WARNING: Subroutine does not return */
      FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01d2dd8c);
    }
    local_68 = &local_98;
    local_4c = *(undefined4 *)(DAT_01d50b80 + 0x24);
    local_48 = *(undefined4 *)(DAT_01d50b80 + 0x28);
    local_9c = (undefined4 *)(DAT_01d50b80 + 0x1c);
    local_54 = (undefined4 *****)*local_9c;
    local_6c = &local_54;
    local_a4 = &local_6c;
    local_44 = 0;
    local_a0 = 1;
    local_94 = 0x23;
    local_64 = (undefined4 *)&DAT_01d2ea4c;
    local_98 = "Queue::push_front";
    FUN_01aaaecc(DAT_01d50b80,&local_a4);
    iVar3 = DAT_01d50b80;
    if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
      local_3c = *(undefined4 *******)(DAT_01d50b80 + 0x14);
      local_38 = *(undefined4 **)(DAT_01d50b80 + 0x18);
      local_40 = (undefined4 ******)&DAT_00000005;
      DataMemoryBarrier(0xb);
      puVar7 = DAT_01d4edc8;
      if (DAT_01d51174 != 2) {
        puVar7 = &DAT_01cfc5e0;
      }
      pcVar4 = DAT_01d4edc4;
      if (DAT_01d51174 != 2) {
        pcVar4 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
      }
      iVar2 = (*(code *)puVar7[3])(pcVar4,&local_40);
      if (iVar2 != 0) {
        local_30 = local_40;
        local_2c = local_3c;
        local_28 = local_38;
        FUN_01aaa328(iVar3,pcVar4,puVar7[4],&local_30,&local_a4);
      }
    }
  }
  else {
    iVar3 = DAT_01d50b80;
    if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
      local_8c = *(undefined4 *******)(DAT_01d50b80 + 0x14);
      local_88 = *(undefined4 **)(DAT_01d50b80 + 0x18);
      local_90 = (undefined4 ******)&DAT_00000005;
      DataMemoryBarrier(0xb);
      puVar7 = DAT_01d4edc8;
      if (DAT_01d51174 != 2) {
        puVar7 = &DAT_01cfc5e0;
      }
      pcVar4 = DAT_01d4edc4;
      if (DAT_01d51174 != 2) {
        pcVar4 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
      }
      iVar2 = (*(code *)puVar7[3])(pcVar4,&local_90);
      if (iVar2 != 0) {
        local_64 = (undefined4 *)(DAT_01d50b80 + 0x1c);
        local_54 = (undefined4 *****)*local_64;
        local_50 = *(int *)(DAT_01d50b80 + 0x20);
        if (local_50 == 0) goto LAB_01a84820;
        local_40 = &local_54;
        local_4c = *(undefined4 *)(DAT_01d50b80 + 0x24);
        local_48 = *(undefined4 *)(DAT_01d50b80 + 0x28);
        local_3c = &local_a4;
        local_6c = &local_40;
        local_68 = (char **)&DAT_00000001;
        local_a0 = 0x23;
        local_44 = 0;
        local_38 = (undefined4 *)&DAT_01d2ea4c;
        local_a4 = (undefined4 ******)0x52fb94;
        local_30 = local_90;
        local_2c = local_8c;
        local_28 = local_88;
        FUN_01aaa328(iVar3,pcVar4,puVar7[4],&local_30,&local_6c);
      }
    }
  }
  iVar2 = *param_2;
  iVar8 = param_2[1];
  iVar9 = param_2[2];
  iVar3 = FUN_01367c40(*(undefined4 *)(iVar2 + 0x34),*(undefined4 *)(iVar2 + 0x38),iVar8,iVar9);
  if (*(char *)(iVar3 + 0xe9) == '\0') {
    iVar3 = FUN_01367cb8(*(undefined4 *)(iVar2 + 0x34),*(undefined4 *)(iVar2 + 0x38),iVar8,iVar9);
    *(undefined1 *)(iVar3 + 0xe9) = 1;
    if (*param_1 == 0) {
      if (((DAT_01d50f88 == 0) &&
          ((DAT_01d50b94 - 1 < 2 ||
           ((DAT_01d50b94 != 0 && (cVar1 = FUN_01aaafa8(&DAT_01d50b8c), cVar1 != '\0')))))) &&
         (iVar3 = FUN_01aaa278(DAT_01d50b8c), iVar3 != 0)) {
        if (*(int *)(DAT_01d50b8c + 0x20) == 0) {
LAB_01a84868:
                    /* WARNING: Subroutine does not return */
          FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01d2dd9c);
        }
        local_3c = &local_a4;
        local_4c = *(undefined4 *)(DAT_01d50b8c + 0x24);
        local_48 = *(undefined4 *)(DAT_01d50b8c + 0x28);
        local_64 = (undefined4 *)(DAT_01d50b8c + 0x1c);
        local_54 = (undefined4 *****)*local_64;
        local_40 = &local_54;
        local_6c = &local_40;
        local_44 = 0;
        local_68 = (char **)0x1;
        local_a0 = 0x1f;
        local_38 = (undefined4 *)&DAT_01d2ea4c;
        local_a4 = (undefined4 ******)0x52fba5;
        local_50 = *(int *)(DAT_01d50b8c + 0x20);
        FUN_01aaaecc(DAT_01d50b8c,&local_6c);
        iVar3 = DAT_01d50b8c;
        if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
          local_2c = *(undefined4 *******)(DAT_01d50b8c + 0x14);
          local_28 = *(undefined4 **)(DAT_01d50b8c + 0x18);
          local_30 = (undefined4 ******)0x5;
          DataMemoryBarrier(0xb);
          puVar7 = DAT_01d4edc8;
          if (DAT_01d51174 != 2) {
            puVar7 = &DAT_01cfc5e0;
          }
          pcVar4 = DAT_01d4edc4;
          if (DAT_01d51174 != 2) {
            pcVar4 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
          }
          iVar2 = (*(code *)puVar7[3])(pcVar4,&local_30);
          if (iVar2 != 0) {
            FUN_01aaa328(iVar3,pcVar4,puVar7[4],&local_30,&local_6c);
          }
        }
      }
      else {
        iVar3 = DAT_01d50b8c;
        if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
          local_5c = *(undefined4 *)(DAT_01d50b8c + 0x14);
          local_58 = *(undefined4 *)(DAT_01d50b8c + 0x18);
          local_60 = 5;
          DataMemoryBarrier(0xb);
          puVar7 = DAT_01d4edc8;
          if (DAT_01d51174 != 2) {
            puVar7 = &DAT_01cfc5e0;
          }
          pcVar4 = DAT_01d4edc4;
          if (DAT_01d51174 != 2) {
            pcVar4 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
          }
          iVar2 = (*(code *)puVar7[3])(pcVar4,&local_60);
          if (iVar2 != 0) {
            if (*(int *)(DAT_01d50b8c + 0x20) == 0) goto LAB_01a84868;
            local_2c = &local_6c;
            local_4c = *(undefined4 *)(DAT_01d50b8c + 0x24);
            local_48 = *(undefined4 *)(DAT_01d50b8c + 0x28);
            local_30 = &local_54;
            local_40 = &local_30;
            local_3c = (undefined4 ******)0x1;
            local_28 = (undefined4 *)&DAT_01d2ea4c;
            local_68 = (char **)0x1f;
            local_44 = 0;
            local_6c = (undefined4 ******)0x52fba5;
            local_54 = *(undefined4 ******)(DAT_01d50b8c + 0x1c);
            local_50 = *(int *)(DAT_01d50b8c + 0x20);
            local_38 = (undefined4 *)(DAT_01d50b8c + 0x1c);
            FUN_01aaa328(iVar3,pcVar4,puVar7[4],&local_60,&local_40);
          }
        }
      }
      iVar3 = param_2[1];
      iVar2 = param_2[2];
      *param_1 = 1;
      param_1[1] = iVar3;
      param_1[2] = iVar2;
      param_1[3] = iVar3;
      param_1[4] = iVar2;
      return;
    }
    if (((DAT_01d50f88 == 0) &&
        ((DAT_01d50ba0 - 1 < 2 ||
         ((DAT_01d50ba0 != 0 && (cVar1 = FUN_01aaafa8(&DAT_01d50b98), cVar1 != '\0')))))) &&
       (iVar3 = FUN_01aaa278(DAT_01d50b98), iVar3 != 0)) {
      if (*(int *)(DAT_01d50b98 + 0x20) == 0) {
LAB_01a84850:
                    /* WARNING: Subroutine does not return */
        FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01d2ddac);
      }
      local_3c = &local_a4;
      local_4c = *(undefined4 *)(DAT_01d50b98 + 0x24);
      local_48 = *(undefined4 *)(DAT_01d50b98 + 0x28);
      local_64 = (undefined4 *)(DAT_01d50b98 + 0x1c);
      local_54 = (undefined4 *****)*local_64;
      local_40 = &local_54;
      local_6c = &local_40;
      local_44 = 0;
      local_68 = (char **)&DAT_00000001;
      local_a0 = 0x29;
      local_38 = (undefined4 *)&DAT_01d2ea4c;
      local_a4 = (undefined4 ******)0x52fbb4;
      local_50 = *(int *)(DAT_01d50b98 + 0x20);
      FUN_01aaaecc(DAT_01d50b98,&local_6c);
      iVar3 = DAT_01d50b98;
      if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
        local_2c = *(undefined4 *******)(DAT_01d50b98 + 0x14);
        local_28 = *(undefined4 **)(DAT_01d50b98 + 0x18);
        local_30 = (undefined4 ******)&DAT_00000005;
        DataMemoryBarrier(0xb);
        puVar7 = DAT_01d4edc8;
        if (DAT_01d51174 != 2) {
          puVar7 = &DAT_01cfc5e0;
        }
        pcVar4 = DAT_01d4edc4;
        if (DAT_01d51174 != 2) {
          pcVar4 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
        }
        iVar2 = (*(code *)puVar7[3])(pcVar4,&local_30);
        if (iVar2 != 0) {
          FUN_01aaa328(iVar3,pcVar4,puVar7[4],&local_30,&local_6c);
        }
      }
    }
    else {
      iVar3 = DAT_01d50b98;
      if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
        local_74 = *(undefined4 *)(DAT_01d50b98 + 0x14);
        local_70 = *(undefined4 *)(DAT_01d50b98 + 0x18);
        local_78 = 5;
        DataMemoryBarrier(0xb);
        puVar7 = DAT_01d4edc8;
        if (DAT_01d51174 != 2) {
          puVar7 = &DAT_01cfc5e0;
        }
        pcVar4 = DAT_01d4edc4;
        if (DAT_01d51174 != 2) {
          pcVar4 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
        }
        iVar2 = (*(code *)puVar7[3])(pcVar4,&local_78);
        if (iVar2 != 0) {
          if (*(int *)(DAT_01d50b98 + 0x20) == 0) goto LAB_01a84850;
          local_2c = &local_6c;
          local_4c = *(undefined4 *)(DAT_01d50b98 + 0x24);
          local_48 = *(undefined4 *)(DAT_01d50b98 + 0x28);
          local_30 = &local_54;
          local_40 = &local_30;
          local_3c = (undefined4 ******)&DAT_00000001;
          local_28 = (undefined4 *)&DAT_01d2ea4c;
          local_68 = (char **)&DAT_00000029;
          local_44 = 0;
          local_6c = (undefined4 ******)0x52fbb4;
          local_54 = *(undefined4 ******)(DAT_01d50b98 + 0x1c);
          local_50 = *(int *)(DAT_01d50b98 + 0x20);
          local_38 = (undefined4 *)(DAT_01d50b98 + 0x1c);
          FUN_01aaa328(iVar3,pcVar4,puVar7[4],&local_78,&local_40);
        }
      }
    }
    iVar2 = param_2[1];
    iVar8 = param_2[2];
    iVar9 = param_1[1];
    iVar10 = param_1[2];
    iVar3 = FUN_01367cb8(*(undefined4 *)(*param_2 + 0x34),*(undefined4 *)(*param_2 + 0x38),iVar2,
                         iVar8);
    *(undefined4 *)(iVar3 + 0x60) = 1;
    *(int *)(iVar3 + 100) = iVar9;
    *(int *)(iVar3 + 0x68) = iVar10;
    param_1[1] = iVar2;
    param_1[2] = iVar8;
    return;
  }
  if ((DAT_01d50f88 == 0) &&
     (((DAT_01d50bac - 1 < 2 ||
       ((DAT_01d50bac != 0 && (cVar1 = FUN_01aaafa8(&DAT_01d50ba4), cVar1 != '\0')))) &&
      (iVar3 = FUN_01aaa278(DAT_01d50ba4), iVar3 != 0)))) {
    if (*(int *)(DAT_01d50ba4 + 0x20) == 0) {
LAB_01a84838:
                    /* WARNING: Subroutine does not return */
      FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01d2ddbc);
    }
    local_3c = &local_a4;
    local_4c = *(undefined4 *)(DAT_01d50ba4 + 0x24);
    local_48 = *(undefined4 *)(DAT_01d50ba4 + 0x28);
    local_64 = (undefined4 *)(DAT_01d50ba4 + 0x1c);
    local_54 = (undefined4 *****)*local_64;
    local_40 = &local_54;
    local_6c = &local_40;
    local_44 = 0;
    ppppppuVar11 = &local_6c;
    local_68 = (char **)0x1;
    local_a0 = 0x25;
    local_38 = (undefined4 *)&DAT_01d2ea4c;
    local_a4 = (undefined4 ******)0x52fbc8;
    local_50 = *(int *)(DAT_01d50ba4 + 0x20);
    FUN_01aaaecc(DAT_01d50ba4,ppppppuVar11);
    iVar3 = DAT_01d50ba4;
    if (DAT_01d51ae9 != '\0') {
      return;
    }
    if (DAT_01d51b00 < 5) {
      return;
    }
    local_2c = *(undefined4 *******)(DAT_01d50ba4 + 0x14);
    local_28 = *(undefined4 **)(DAT_01d50ba4 + 0x18);
    local_30 = (undefined4 ******)&DAT_00000005;
    DataMemoryBarrier(0xb);
    puVar7 = DAT_01d4edc8;
    if (DAT_01d51174 != 2) {
      puVar7 = &DAT_01cfc5e0;
    }
    pcVar4 = DAT_01d4edc4;
    if (DAT_01d51174 != 2) {
      pcVar4 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
    }
    iVar2 = (*(code *)puVar7[3])(pcVar4,&local_30);
    if (iVar2 == 0) {
      return;
    }
    uVar5 = puVar7[4];
    ppppppuVar6 = &local_30;
  }
  else {
    iVar3 = DAT_01d50ba4;
    if (DAT_01d51ae9 != '\0') {
      return;
    }
    if (DAT_01d51b00 < 5) {
      return;
    }
    local_80 = *(undefined4 *)(DAT_01d50ba4 + 0x14);
    local_7c = *(undefined4 *)(DAT_01d50ba4 + 0x18);
    local_84 = (undefined4 *****)0x5;
    DataMemoryBarrier(0xb);
    puVar7 = DAT_01d4edc8;
    if (DAT_01d51174 != 2) {
      puVar7 = &DAT_01cfc5e0;
    }
    pcVar4 = DAT_01d4edc4;
    if (DAT_01d51174 != 2) {
      pcVar4 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
    }
    iVar2 = (*(code *)puVar7[3])(pcVar4,&local_84);
    if (iVar2 == 0) {
      return;
    }
    if (*(int *)(DAT_01d50ba4 + 0x20) == 0) goto LAB_01a84838;
    local_2c = &local_6c;
    local_4c = *(undefined4 *)(DAT_01d50ba4 + 0x24);
    local_48 = *(undefined4 *)(DAT_01d50ba4 + 0x28);
    local_30 = &local_54;
    local_40 = &local_30;
    local_3c = (undefined4 ******)&DAT_00000001;
    local_28 = (undefined4 *)&DAT_01d2ea4c;
    ppppppuVar6 = &local_84;
    local_68 = (char **)0x25;
    ppppppuVar11 = &local_40;
    local_44 = 0;
    local_6c = (undefined4 ******)0x52fbc8;
    uVar5 = puVar7[4];
    local_54 = *(undefined4 ******)(DAT_01d50ba4 + 0x1c);
    local_50 = *(int *)(DAT_01d50ba4 + 0x20);
    local_38 = (undefined4 *)(DAT_01d50ba4 + 0x1c);
  }
  FUN_01aaa328(iVar3,pcVar4,uVar5,ppppppuVar6,ppppppuVar11);
  return;
}

