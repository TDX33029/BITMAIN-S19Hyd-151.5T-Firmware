// FUN_0139fa58 @ 0139fa58 size=3064 calls_out=8 calls_in=2
// strings: h2::proto::streams::store/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/store.rsevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/store.rs:315event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/store.rs:303event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/store.rs:300 | InvalidParamSegmentInvalidParamInvalidCatchAll | Queue::push_back | h2::proto::streams::store/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/store.rsevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/store.rs:315event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/store.rs:303event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/store.rs:300 | InvalidParamSegmentInvalidParamInvalidCatchAll | Queue::push_back

void FUN_0139fa58(int *param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  undefined4 *******pppppppuVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  undefined4 *******pppppppuVar11;
  undefined4 *******local_a4;
  undefined4 local_a0;
  undefined4 *local_9c;
  char *local_98;
  undefined4 local_94;
  undefined4 *******local_90;
  undefined4 *******local_8c;
  undefined4 *local_88;
  undefined4 ******local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 ******local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 *******local_6c;
  char **local_68;
  undefined4 *local_64;
  undefined4 ******local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 ******local_54;
  int local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 *******local_40;
  undefined4 *******local_3c;
  undefined4 *local_38;
  undefined4 *******local_30;
  undefined4 *******local_2c;
  undefined4 *local_28;
  
  if ((DAT_01d50f88 == 0) &&
     (((DAT_01d4db44 - 1 < 2 ||
       ((DAT_01d4db44 != 0 && (cVar1 = FUN_01aaafa8(&DAT_01d4db3c), cVar1 != '\0')))) &&
      (iVar3 = FUN_01aaa278(DAT_01d4db3c), iVar3 != 0)))) {
    local_50 = *(int *)(DAT_01d4db3c + 0x20);
    if (local_50 == 0) {
LAB_013a05f0:
                    /* WARNING: Subroutine does not return */
      FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01ceddfc);
    }
    local_68 = &local_98;
    local_4c = *(undefined4 *)(DAT_01d4db3c + 0x24);
    local_48 = *(undefined4 *)(DAT_01d4db3c + 0x28);
    local_9c = (undefined4 *)(DAT_01d4db3c + 0x1c);
    local_54 = (undefined4 ******)*local_9c;
    local_6c = &local_54;
    local_a4 = &local_6c;
    local_44 = 0;
    local_a0 = 1;
    local_94 = 0x21;
    local_64 = (undefined4 *)&DAT_01d2ea4c;
    local_98 = "Queue::push_back";
    FUN_01aaaecc(DAT_01d4db3c,&local_a4);
    iVar3 = DAT_01d4db3c;
    if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
      local_3c = *(undefined4 ********)(DAT_01d4db3c + 0x14);
      local_38 = *(undefined4 **)(DAT_01d4db3c + 0x18);
      local_40 = (undefined4 *******)&DAT_00000005;
      DataMemoryBarrier(0xb);
      puVar8 = DAT_01d4edc8;
      if (DAT_01d51174 != 2) {
        puVar8 = &DAT_01cfc5e0;
      }
      pcVar5 = DAT_01d4edc4;
      if (DAT_01d51174 != 2) {
        pcVar5 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
      }
      iVar2 = (*(code *)puVar8[3])(pcVar5,&local_40);
      if (iVar2 != 0) {
        local_30 = local_40;
        local_2c = local_3c;
        local_28 = local_38;
        FUN_01aaa328(iVar3,pcVar5,puVar8[4],&local_30,&local_a4);
      }
    }
  }
  else {
    iVar3 = DAT_01d4db3c;
    if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
      local_8c = *(undefined4 ********)(DAT_01d4db3c + 0x14);
      local_88 = *(undefined4 **)(DAT_01d4db3c + 0x18);
      local_90 = (undefined4 *******)&DAT_00000005;
      DataMemoryBarrier(0xb);
      puVar8 = DAT_01d4edc8;
      if (DAT_01d51174 != 2) {
        puVar8 = &DAT_01cfc5e0;
      }
      pcVar5 = DAT_01d4edc4;
      if (DAT_01d51174 != 2) {
        pcVar5 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
      }
      iVar2 = (*(code *)puVar8[3])(pcVar5,&local_90);
      if (iVar2 != 0) {
        local_64 = (undefined4 *)(DAT_01d4db3c + 0x1c);
        local_54 = (undefined4 ******)*local_64;
        local_50 = *(int *)(DAT_01d4db3c + 0x20);
        if (local_50 == 0) goto LAB_013a05f0;
        local_40 = &local_54;
        local_4c = *(undefined4 *)(DAT_01d4db3c + 0x24);
        local_48 = *(undefined4 *)(DAT_01d4db3c + 0x28);
        local_3c = &local_a4;
        local_6c = &local_40;
        local_44 = 0;
        local_68 = (char **)&DAT_00000001;
        local_a4 = (undefined4 *******)0x568cb8;
        local_38 = (undefined4 *)&DAT_01d2ea4c;
        local_a0 = 0x21;
        local_30 = local_90;
        local_2c = local_8c;
        local_28 = local_88;
        FUN_01aaa328(iVar3,pcVar5,puVar8[4],&local_30,&local_6c);
      }
    }
  }
  iVar2 = *param_2;
  iVar9 = param_2[1];
  iVar10 = param_2[2];
  iVar3 = FUN_0139f0d0(*(undefined4 *)(iVar2 + 0x34),*(undefined4 *)(iVar2 + 0x38),iVar9,iVar10);
  if (*(char *)(iVar3 + 0xe6) != '\0') {
    if (((DAT_01d50f88 == 0) &&
        ((DAT_01d4db38 - 1 < 2 ||
         ((DAT_01d4db38 != 0 && (cVar1 = FUN_01aaafa8(&DAT_01d4db30), cVar1 != '\0')))))) &&
       (iVar3 = FUN_01aaa278(DAT_01d4db30), iVar3 != 0)) {
      if (*(int *)(DAT_01d4db30 + 0x20) == 0) {
LAB_013a0608:
                    /* WARNING: Subroutine does not return */
        FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01cede2c);
      }
      local_3c = &local_a4;
      local_4c = *(undefined4 *)(DAT_01d4db30 + 0x24);
      local_48 = *(undefined4 *)(DAT_01d4db30 + 0x28);
      local_64 = (undefined4 *)(DAT_01d4db30 + 0x1c);
      local_54 = (undefined4 ******)*local_64;
      local_40 = &local_54;
      local_6c = &local_40;
      local_44 = 0;
      pppppppuVar11 = &local_6c;
      local_68 = (char **)0x1;
      local_a0 = 0x25;
      local_38 = (undefined4 *)&DAT_01d2ea4c;
      local_a4 = (undefined4 *******)0x52fbc8;
      local_50 = *(int *)(DAT_01d4db30 + 0x20);
      FUN_01aaaecc(DAT_01d4db30,pppppppuVar11);
      iVar3 = DAT_01d4db30;
      if (DAT_01d51ae9 != '\0') {
        return;
      }
      if (DAT_01d51b00 < 5) {
        return;
      }
      local_2c = *(undefined4 ********)(DAT_01d4db30 + 0x14);
      local_28 = *(undefined4 **)(DAT_01d4db30 + 0x18);
      local_30 = (undefined4 *******)&DAT_00000005;
      DataMemoryBarrier(0xb);
      puVar8 = DAT_01d4edc8;
      if (DAT_01d51174 != 2) {
        puVar8 = &DAT_01cfc5e0;
      }
      pcVar5 = DAT_01d4edc4;
      if (DAT_01d51174 != 2) {
        pcVar5 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
      }
      iVar2 = (*(code *)puVar8[3])(pcVar5,&local_30);
      if (iVar2 == 0) {
        return;
      }
      uVar6 = puVar8[4];
      pppppppuVar7 = &local_30;
    }
    else {
      iVar3 = DAT_01d4db30;
      if (DAT_01d51ae9 != '\0') {
        return;
      }
      if (DAT_01d51b00 < 5) {
        return;
      }
      local_80 = *(undefined4 *)(DAT_01d4db30 + 0x14);
      local_7c = *(undefined4 *)(DAT_01d4db30 + 0x18);
      local_84 = (undefined4 ******)0x5;
      DataMemoryBarrier(0xb);
      puVar8 = DAT_01d4edc8;
      if (DAT_01d51174 != 2) {
        puVar8 = &DAT_01cfc5e0;
      }
      pcVar5 = DAT_01d4edc4;
      if (DAT_01d51174 != 2) {
        pcVar5 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
      }
      iVar2 = (*(code *)puVar8[3])(pcVar5,&local_84);
      if (iVar2 == 0) {
        return;
      }
      if (*(int *)(DAT_01d4db30 + 0x20) == 0) goto LAB_013a0608;
      local_2c = &local_6c;
      local_4c = *(undefined4 *)(DAT_01d4db30 + 0x24);
      local_48 = *(undefined4 *)(DAT_01d4db30 + 0x28);
      local_30 = &local_54;
      local_40 = &local_30;
      local_3c = (undefined4 *******)&DAT_00000001;
      local_28 = (undefined4 *)&DAT_01d2ea4c;
      pppppppuVar7 = &local_84;
      local_68 = (char **)0x25;
      pppppppuVar11 = &local_40;
      local_44 = 0;
      local_6c = (undefined4 *******)0x52fbc8;
      uVar6 = puVar8[4];
      local_54 = *(undefined4 *******)(DAT_01d4db30 + 0x1c);
      local_50 = *(int *)(DAT_01d4db30 + 0x20);
      local_38 = (undefined4 *)(DAT_01d4db30 + 0x1c);
    }
    FUN_01aaa328(iVar3,pcVar5,uVar6,pppppppuVar7,pppppppuVar11);
    return;
  }
  iVar3 = FUN_0139f148(*(undefined4 *)(iVar2 + 0x34),*(undefined4 *)(iVar2 + 0x38),iVar9,iVar10);
  *(undefined1 *)(iVar3 + 0xe6) = 1;
  if (*param_1 == 0) {
    if (((DAT_01d50f88 == 0) &&
        ((DAT_01d4db20 - 1 < 2 ||
         ((DAT_01d4db20 != 0 && (cVar1 = FUN_01aaafa8(&DAT_01d4db18), cVar1 != '\0')))))) &&
       (iVar3 = FUN_01aaa278(DAT_01d4db18), iVar3 != 0)) {
      if (*(int *)(DAT_01d4db18 + 0x20) == 0) {
LAB_013a0638:
                    /* WARNING: Subroutine does not return */
        FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01cede0c);
      }
      local_3c = &local_a4;
      local_4c = *(undefined4 *)(DAT_01d4db18 + 0x24);
      local_48 = *(undefined4 *)(DAT_01d4db18 + 0x28);
      local_64 = (undefined4 *)(DAT_01d4db18 + 0x1c);
      local_54 = (undefined4 ******)*local_64;
      local_40 = &local_54;
      local_6c = &local_40;
      local_44 = 0;
      pppppppuVar11 = &local_6c;
      local_68 = (char **)0x1;
      local_a0 = 0x1f;
      local_38 = (undefined4 *)&DAT_01d2ea4c;
      local_a4 = (undefined4 *******)0x52fba5;
      local_50 = *(int *)(DAT_01d4db18 + 0x20);
      FUN_01aaaecc(DAT_01d4db18,pppppppuVar11);
      iVar3 = DAT_01d4db18;
      if ((DAT_01d51ae9 != '\0') || (DAT_01d51b00 < 5)) goto LAB_013a056c;
      local_2c = *(undefined4 ********)(DAT_01d4db18 + 0x14);
      local_28 = *(undefined4 **)(DAT_01d4db18 + 0x18);
      local_30 = (undefined4 *******)&DAT_00000005;
      DataMemoryBarrier(0xb);
      puVar8 = DAT_01d4edc8;
      if (DAT_01d51174 != 2) {
        puVar8 = &DAT_01cfc5e0;
      }
      pcVar5 = DAT_01d4edc4;
      if (DAT_01d51174 != 2) {
        pcVar5 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
      }
      iVar2 = (*(code *)puVar8[3])(pcVar5,&local_30);
      if (iVar2 == 0) goto LAB_013a056c;
      uVar6 = puVar8[4];
      pppppppuVar7 = &local_30;
    }
    else {
      iVar3 = DAT_01d4db18;
      if ((DAT_01d51ae9 != '\0') || (DAT_01d51b00 < 5)) goto LAB_013a056c;
      local_5c = *(undefined4 *)(DAT_01d4db18 + 0x14);
      local_58 = *(undefined4 *)(DAT_01d4db18 + 0x18);
      local_60 = (undefined4 ******)0x5;
      DataMemoryBarrier(0xb);
      puVar8 = DAT_01d4edc8;
      if (DAT_01d51174 != 2) {
        puVar8 = &DAT_01cfc5e0;
      }
      pcVar5 = DAT_01d4edc4;
      if (DAT_01d51174 != 2) {
        pcVar5 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
      }
      iVar2 = (*(code *)puVar8[3])(pcVar5,&local_60);
      if (iVar2 == 0) goto LAB_013a056c;
      if (*(int *)(DAT_01d4db18 + 0x20) == 0) goto LAB_013a0638;
      local_2c = &local_6c;
      local_4c = *(undefined4 *)(DAT_01d4db18 + 0x24);
      local_48 = *(undefined4 *)(DAT_01d4db18 + 0x28);
      local_30 = &local_54;
      local_40 = &local_30;
      local_3c = (undefined4 *******)&DAT_00000001;
      local_68 = (char **)0x1f;
      pppppppuVar11 = &local_40;
      local_44 = 0;
      pppppppuVar7 = &local_60;
      local_28 = (undefined4 *)&DAT_01d2ea4c;
      local_6c = (undefined4 *******)0x52fba5;
      uVar6 = puVar8[4];
      local_54 = *(undefined4 *******)(DAT_01d4db18 + 0x1c);
      local_50 = *(int *)(DAT_01d4db18 + 0x20);
      local_38 = (undefined4 *)(DAT_01d4db18 + 0x1c);
    }
    FUN_01aaa328(iVar3,pcVar5,uVar6,pppppppuVar7,pppppppuVar11);
LAB_013a056c:
    param_1[3] = iVar9;
    *param_1 = 1;
    param_1[1] = iVar9;
    param_1[2] = iVar10;
    param_1[4] = iVar10;
    return;
  }
  if ((DAT_01d50f88 == 0) &&
     (((DAT_01d4db2c - 1 < 2 ||
       ((DAT_01d4db2c != 0 && (cVar1 = FUN_01aaafa8(&DAT_01d4db24), cVar1 != '\0')))) &&
      (iVar3 = FUN_01aaa278(DAT_01d4db24), iVar3 != 0)))) {
    if (*(int *)(DAT_01d4db24 + 0x20) == 0) {
LAB_013a0620:
                    /* WARNING: Subroutine does not return */
      FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01cede1c);
    }
    local_64 = (undefined4 *)(DAT_01d4db24 + 0x1c);
    local_54 = (undefined4 ******)*local_64;
    local_3c = &local_a4;
    local_4c = *(undefined4 *)(DAT_01d4db24 + 0x24);
    local_48 = *(undefined4 *)(DAT_01d4db24 + 0x28);
    local_40 = &local_54;
    pppppppuVar11 = &local_6c;
    local_6c = &local_40;
    local_68 = (char **)&DAT_00000001;
    local_a0 = 0x29;
    local_44 = 0;
    local_38 = (undefined4 *)&DAT_01d2ea4c;
    local_a4 = (undefined4 *******)0x52fbb4;
    local_50 = *(int *)(DAT_01d4db24 + 0x20);
    FUN_01aaaecc(DAT_01d4db24,pppppppuVar11);
    iVar3 = DAT_01d4db24;
    if ((DAT_01d51ae9 != '\0') || (DAT_01d51b00 < 5)) goto LAB_013a03f4;
    local_2c = *(undefined4 ********)(DAT_01d4db24 + 0x14);
    local_28 = *(undefined4 **)(DAT_01d4db24 + 0x18);
    local_30 = (undefined4 *******)&DAT_00000005;
    DataMemoryBarrier(0xb);
    puVar8 = DAT_01d4edc8;
    if (DAT_01d51174 != 2) {
      puVar8 = &DAT_01cfc5e0;
    }
    pcVar5 = DAT_01d4edc4;
    if (DAT_01d51174 != 2) {
      pcVar5 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
    }
    iVar4 = (*(code *)puVar8[3])(pcVar5,&local_30);
    if (iVar4 == 0) goto LAB_013a03f4;
    uVar6 = puVar8[4];
    pppppppuVar7 = &local_30;
  }
  else {
    iVar3 = DAT_01d4db24;
    if ((DAT_01d51ae9 != '\0') || (DAT_01d51b00 < 5)) goto LAB_013a03f4;
    local_74 = *(undefined4 *)(DAT_01d4db24 + 0x14);
    local_70 = *(undefined4 *)(DAT_01d4db24 + 0x18);
    local_78 = (undefined4 ******)0x5;
    DataMemoryBarrier(0xb);
    puVar8 = DAT_01d4edc8;
    if (DAT_01d51174 != 2) {
      puVar8 = &DAT_01cfc5e0;
    }
    pcVar5 = DAT_01d4edc4;
    if (DAT_01d51174 != 2) {
      pcVar5 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
    }
    iVar4 = (*(code *)puVar8[3])(pcVar5,&local_78);
    if (iVar4 == 0) goto LAB_013a03f4;
    if (*(int *)(DAT_01d4db24 + 0x20) == 0) goto LAB_013a0620;
    local_30 = &local_54;
    local_40 = &local_30;
    local_4c = *(undefined4 *)(DAT_01d4db24 + 0x24);
    local_48 = *(undefined4 *)(DAT_01d4db24 + 0x28);
    local_2c = &local_6c;
    local_44 = 0;
    pppppppuVar7 = &local_78;
    local_3c = (undefined4 *******)&DAT_00000001;
    local_28 = (undefined4 *)&DAT_01d2ea4c;
    local_68 = (char **)&DAT_00000029;
    local_6c = (undefined4 *******)0x52fbb4;
    pppppppuVar11 = &local_40;
    uVar6 = puVar8[4];
    local_54 = *(undefined4 *******)(DAT_01d4db24 + 0x1c);
    local_50 = *(int *)(DAT_01d4db24 + 0x20);
    local_38 = (undefined4 *)(DAT_01d4db24 + 0x1c);
  }
  FUN_01aaa328(iVar3,pcVar5,uVar6,pppppppuVar7,pppppppuVar11);
LAB_013a03f4:
  iVar3 = FUN_0139f148(*(undefined4 *)(iVar2 + 0x34),*(undefined4 *)(iVar2 + 0x38),param_1[3],
                       param_1[4]);
  *(undefined4 *)(iVar3 + 0x88) = 1;
  *(int *)(iVar3 + 0x8c) = iVar9;
  *(int *)(iVar3 + 0x90) = iVar10;
  param_1[3] = iVar9;
  param_1[4] = iVar10;
  return;
}

