// FUN_013b5878 @ 013b5878 size=2420 calls_out=7 calls_in=2
// strings: h2::proto::streams::state/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/state.rsevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/state.rs:246event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/state.rs:241 | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | h2::proto::streams::state/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/state.rsevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/state.rs:246event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/state.rs:241 | InvalidParamSegmentInvalidParamInvalidCatchAll | recv_close: HalfClosedLocal => Closedevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/state.rs:277event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/state.rs:327event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/state.rs:323

/* WARNING: Type propagation algorithm not settling */

void FUN_013b5878(undefined2 *param_1,undefined4 ****param_2)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  byte ****ppppbVar7;
  undefined4 *puVar8;
  byte *****pppppbVar9;
  byte local_95;
  byte ***local_94;
  undefined4 local_90;
  undefined4 local_8c;
  byte ***local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 ****local_7c;
  undefined4 *****local_78;
  code *local_74;
  undefined4 *local_70;
  undefined4 ****local_6c;
  undefined4 *****local_68;
  byte ***local_64;
  undefined4 local_60;
  undefined4 local_5c;
  byte ****local_58;
  undefined4 *****local_54;
  undefined4 *local_50;
  byte ***local_4c;
  int local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  byte ****local_38;
  byte *****local_34;
  undefined4 ****local_30;
  byte *****local_2c;
  undefined1 *local_28;
  
  cVar2 = *(byte *)param_2 - 6;
  if (*(byte *)param_2 < 6) {
    cVar2 = '\x06';
  }
  if (cVar2 != '\x04') {
    if (cVar2 != '\x03') {
      local_7c = param_2;
      if ((DAT_01d50f88 < 2) &&
         (((DAT_01d4de20 - 1 < 2 ||
           ((DAT_01d4de20 != 0 && (cVar2 = FUN_01aaafa8(&DAT_01d4de18), cVar2 != '\0')))) &&
          (iVar4 = FUN_01aaa278(DAT_01d4de18), iVar4 != 0)))) {
        local_48 = *(int *)(DAT_01d4de18 + 0x20);
        if (local_48 == 0) {
LAB_013b61a4:
                    /* WARNING: Subroutine does not return */
          FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01cf06a8);
        }
        local_54 = &local_6c;
        local_44 = *(undefined4 *)(DAT_01d4de18 + 0x24);
        local_40 = *(undefined4 *)(DAT_01d4de18 + 0x28);
        local_70 = (undefined4 *)(DAT_01d4de18 + 0x1c);
        local_4c = (byte ***)*local_70;
        local_58 = &local_4c;
        local_78 = (undefined4 *****)&local_58;
        local_3c = 0;
        pppppbVar9 = (byte *****)&local_78;
        local_74 = (code *)0x1;
        local_68 = (undefined4 *****)&local_38;
        local_38 = (byte ****)&local_7c;
        local_50 = (undefined4 *)&DAT_01d2ea4c;
        local_6c = (undefined4 ****)&DAT_0057e170;
        local_34 = (byte *****)FUN_013b640c;
        FUN_01aaaecc(DAT_01d4de18,pppppbVar9);
        iVar4 = DAT_01d4de18;
        if ((DAT_01d51ae9 != '\0') || (DAT_01d51b00 < 4)) goto LAB_013b610c;
        local_2c = *(byte ******)(DAT_01d4de18 + 0x14);
        local_28 = *(undefined1 **)(DAT_01d4de18 + 0x18);
        local_30 = (undefined4 ****)&SUB_00000004;
        DataMemoryBarrier(0xb);
        puVar8 = DAT_01d4edc8;
        if (DAT_01d51174 != 2) {
          puVar8 = &DAT_01cfc5e0;
        }
        pcVar5 = DAT_01d4edc4;
        if (DAT_01d51174 != 2) {
          pcVar5 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
        }
        iVar3 = (*(code *)puVar8[3])(pcVar5,&local_30);
        if (iVar3 == 0) goto LAB_013b610c;
        uVar6 = puVar8[4];
        ppppbVar7 = (byte ****)&local_30;
      }
      else {
        iVar4 = DAT_01d4de18;
        if ((DAT_01d51ae9 != '\0') || (DAT_01d51b00 < 4)) goto LAB_013b610c;
        local_60 = *(undefined4 *)(DAT_01d4de18 + 0x14);
        local_5c = *(undefined4 *)(DAT_01d4de18 + 0x18);
        local_64 = (byte ***)0x4;
        DataMemoryBarrier(0xb);
        puVar8 = DAT_01d4edc8;
        if (DAT_01d51174 != 2) {
          puVar8 = &DAT_01cfc5e0;
        }
        pcVar5 = DAT_01d4edc4;
        if (DAT_01d51174 != 2) {
          pcVar5 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
        }
        iVar3 = (*(code *)puVar8[3])(pcVar5,&local_64);
        if (iVar3 == 0) goto LAB_013b610c;
        local_50 = (undefined4 *)(DAT_01d4de18 + 0x1c);
        local_4c = (byte ***)*local_50;
        local_48 = *(int *)(DAT_01d4de18 + 0x20);
        if (local_48 == 0) goto LAB_013b61a4;
        local_2c = &local_38;
        local_44 = *(undefined4 *)(DAT_01d4de18 + 0x24);
        local_40 = *(undefined4 *)(DAT_01d4de18 + 0x28);
        local_30 = (undefined4 ****)&local_4c;
        local_58 = (byte ****)&local_30;
        local_3c = 0;
        local_54 = (undefined4 *****)&DAT_00000001;
        local_34 = (byte *****)&local_78;
        local_78 = &local_7c;
        local_28 = &DAT_01d2ea4c;
        pppppbVar9 = &local_58;
        local_38 = (byte ****)&DAT_0057e170;
        ppppbVar7 = &local_64;
        local_74 = FUN_013b640c;
        uVar6 = puVar8[4];
      }
      FUN_01aaa328(iVar4,pcVar5,uVar6,ppppbVar7,pppppbVar9);
LAB_013b610c:
      *param_1 = 0x101;
      *(undefined4 *)(param_1 + 2) = 1;
      *(undefined ***)(param_1 + 4) = &PTR_FUN_01cf1710;
      *(undefined4 *)(param_1 + 6) = 1;
      *(undefined4 *)(param_1 + 8) = 0;
      *(undefined4 *)(param_1 + 10) = 0;
      return;
    }
    bVar1 = *(byte *)((int)param_2 + 1);
    local_95 = bVar1;
    if (((DAT_01d50f88 == 0) &&
        ((DAT_01d4de08 - 1 < 2 ||
         ((DAT_01d4de08 != 0 && (cVar2 = FUN_01aaafa8(&DAT_01d4de00), cVar2 != '\0')))))) &&
       (iVar4 = FUN_01aaa278(DAT_01d4de00), iVar4 != 0)) {
      local_48 = *(int *)(DAT_01d4de00 + 0x20);
      if (local_48 == 0) {
LAB_013b61bc:
                    /* WARNING: Subroutine does not return */
        FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01cf0688);
      }
      local_44 = *(undefined4 *)(DAT_01d4de00 + 0x24);
      local_40 = *(undefined4 *)(DAT_01d4de00 + 0x28);
      local_54 = &local_6c;
      local_70 = (undefined4 *)(DAT_01d4de00 + 0x1c);
      local_4c = (byte ***)*local_70;
      local_58 = &local_4c;
      local_74 = (code *)0x1;
      local_68 = (undefined4 *****)&local_38;
      local_34 = (byte *****)FUN_013b6368;
      pppppbVar9 = (byte *****)&local_78;
      local_78 = (undefined4 *****)&local_58;
      local_38 = (byte ****)&local_95;
      local_3c = 0;
      local_50 = (undefined4 *)&DAT_01d2ea4c;
      local_6c = (undefined4 ****)&DAT_005aad46;
      FUN_01aaaecc(DAT_01d4de00,pppppbVar9);
      iVar4 = DAT_01d4de00;
      if ((DAT_01d51ae9 != '\0') || (DAT_01d51b00 < 5)) goto LAB_013b5e38;
      local_2c = *(byte ******)(DAT_01d4de00 + 0x14);
      local_28 = *(undefined1 **)(DAT_01d4de00 + 0x18);
      local_30 = (undefined4 ****)&DAT_00000005;
      DataMemoryBarrier(0xb);
      puVar8 = DAT_01d4edc8;
      if (DAT_01d51174 != 2) {
        puVar8 = &DAT_01cfc5e0;
      }
      pcVar5 = DAT_01d4edc4;
      if (DAT_01d51174 != 2) {
        pcVar5 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
      }
      iVar3 = (*(code *)puVar8[3])(pcVar5,&local_30);
      if (iVar3 == 0) goto LAB_013b5e38;
      uVar6 = puVar8[4];
      ppppbVar7 = (byte ****)&local_30;
    }
    else {
      iVar4 = DAT_01d4de00;
      if ((DAT_01d51ae9 != '\0') || (DAT_01d51b00 < 5)) goto LAB_013b5e38;
      local_90 = *(undefined4 *)(DAT_01d4de00 + 0x14);
      local_8c = *(undefined4 *)(DAT_01d4de00 + 0x18);
      local_94 = (byte ***)0x5;
      DataMemoryBarrier(0xb);
      puVar8 = DAT_01d4edc8;
      if (DAT_01d51174 != 2) {
        puVar8 = &DAT_01cfc5e0;
      }
      pcVar5 = DAT_01d4edc4;
      if (DAT_01d51174 != 2) {
        pcVar5 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
      }
      iVar3 = (*(code *)puVar8[3])(pcVar5,&local_94);
      if (iVar3 == 0) goto LAB_013b5e38;
      local_50 = (undefined4 *)(DAT_01d4de00 + 0x1c);
      local_4c = (byte ***)*local_50;
      local_48 = *(int *)(DAT_01d4de00 + 0x20);
      if (local_48 == 0) goto LAB_013b61bc;
      local_30 = (undefined4 ****)&local_4c;
      local_44 = *(undefined4 *)(DAT_01d4de00 + 0x24);
      local_40 = *(undefined4 *)(DAT_01d4de00 + 0x28);
      local_2c = &local_38;
      local_58 = (byte ****)&local_30;
      local_3c = 0;
      local_54 = (undefined4 *****)&DAT_00000001;
      local_34 = (byte *****)&local_78;
      ppppbVar7 = &local_94;
      local_28 = &DAT_01d2ea4c;
      local_38 = (byte ****)&DAT_005aad46;
      local_74 = FUN_013b6368;
      local_78 = (undefined4 *****)&local_95;
      pppppbVar9 = &local_58;
      uVar6 = puVar8[4];
    }
    FUN_01aaa328(iVar4,pcVar5,uVar6,ppppbVar7,pppppbVar9);
LAB_013b5e38:
    FUN_013b63b0(param_2);
    *(byte *)((int)param_2 + 1) = bVar1;
    *(byte *)param_2 = 0xb;
    *(undefined1 *)param_1 = 3;
    return;
  }
  if (((DAT_01d50f88 == 0) &&
      ((DAT_01d4de14 - 1 < 2 ||
       ((DAT_01d4de14 != 0 && (cVar2 = FUN_01aaafa8(&DAT_01d4de0c), cVar2 != '\0')))))) &&
     (iVar4 = FUN_01aaa278(DAT_01d4de0c), iVar4 != 0)) {
    local_48 = *(int *)(DAT_01d4de0c + 0x20);
    if (local_48 == 0) {
LAB_013b61d4:
                    /* WARNING: Subroutine does not return */
      FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01cf0698);
    }
    local_54 = (undefined4 *****)&local_38;
    local_44 = *(undefined4 *)(DAT_01d4de0c + 0x24);
    pppppbVar9 = (byte *****)&local_78;
    local_40 = *(undefined4 *)(DAT_01d4de0c + 0x28);
    local_70 = (undefined4 *)(DAT_01d4de0c + 0x1c);
    local_4c = (byte ***)*local_70;
    local_58 = &local_4c;
    local_78 = (undefined4 *****)&local_58;
    local_74 = (code *)0x1;
    local_34 = (byte *****)&DAT_0000004b;
    local_3c = 0;
    local_50 = (undefined4 *)&DAT_01d2ea4c;
    local_38 = (byte ****)0x46df6f;
    FUN_01aaaecc(DAT_01d4de0c,pppppbVar9);
    iVar4 = DAT_01d4de0c;
    if ((DAT_01d51ae9 != '\0') || (DAT_01d51b00 < 5)) goto LAB_013b5fb8;
    local_2c = *(byte ******)(DAT_01d4de0c + 0x14);
    local_28 = *(undefined1 **)(DAT_01d4de0c + 0x18);
    local_30 = (undefined4 ****)&DAT_00000005;
    DataMemoryBarrier(0xb);
    puVar8 = DAT_01d4edc8;
    if (DAT_01d51174 != 2) {
      puVar8 = &DAT_01cfc5e0;
    }
    pcVar5 = DAT_01d4edc4;
    if (DAT_01d51174 != 2) {
      pcVar5 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
    }
    iVar3 = (*(code *)puVar8[3])(pcVar5,&local_30);
    if (iVar3 == 0) goto LAB_013b5fb8;
    uVar6 = puVar8[4];
    ppppbVar7 = (byte ****)&local_30;
  }
  else {
    iVar4 = DAT_01d4de0c;
    if ((DAT_01d51ae9 != '\0') || (DAT_01d51b00 < 5)) goto LAB_013b5fb8;
    local_84 = *(undefined4 *)(DAT_01d4de0c + 0x14);
    local_80 = *(undefined4 *)(DAT_01d4de0c + 0x18);
    local_88 = (byte ***)0x5;
    DataMemoryBarrier(0xb);
    puVar8 = DAT_01d4edc8;
    if (DAT_01d51174 != 2) {
      puVar8 = &DAT_01cfc5e0;
    }
    pcVar5 = DAT_01d4edc4;
    if (DAT_01d51174 != 2) {
      pcVar5 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
    }
    iVar3 = (*(code *)puVar8[3])(pcVar5,&local_88);
    if (iVar3 == 0) goto LAB_013b5fb8;
    local_50 = (undefined4 *)(DAT_01d4de0c + 0x1c);
    local_4c = (byte ***)*local_50;
    local_48 = *(int *)(DAT_01d4de0c + 0x20);
    if (local_48 == 0) goto LAB_013b61d4;
    local_2c = (byte *****)&local_78;
    local_44 = *(undefined4 *)(DAT_01d4de0c + 0x24);
    local_40 = *(undefined4 *)(DAT_01d4de0c + 0x28);
    local_30 = (undefined4 ****)&local_4c;
    local_58 = (byte ****)&local_30;
    local_3c = 0;
    local_54 = (undefined4 *****)&DAT_00000001;
    local_74 = (code *)0x4b;
    local_28 = &DAT_01d2ea4c;
    pppppbVar9 = &local_58;
    local_78 = (undefined4 *****)0x46df6f;
    ppppbVar7 = &local_88;
    uVar6 = puVar8[4];
  }
  FUN_01aaa328(iVar4,pcVar5,uVar6,ppppbVar7,pppppbVar9);
LAB_013b5fb8:
  FUN_013b63b0(param_2);
  *(undefined1 *)param_1 = 3;
  *(byte *)param_2 = 3;
  return;
}

