// FUN_0137b1b4 @ 0137b1b4 size=1628 calls_out=8 calls_in=6
// strings: h2::proto::streams::state/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/state.rsevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/state.rs:246event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/state.rs:241 | InvalidParamSegmentInvalidParamInvalidCatchAll | send_close: HalfClosedRemote => Closedevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/state.rs:296event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/state.rs:214event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/state.rs:306 | InvalidParamSegmentInvalidParamInvalidCatchAll | h2::proto::streams::state/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/state.rsevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/state.rs:246event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/state.rs:241 | InvalidParamSegmentInvalidParamInvalidCatchAll

void FUN_0137b1b4(byte ****param_1)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  undefined4 uVar7;
  undefined4 *****pppppuVar8;
  undefined4 *puVar9;
  byte *****pppppbVar10;
  byte local_85;
  byte ***local_84;
  byte ****local_80;
  undefined4 ****local_7c;
  undefined4 local_78;
  undefined4 local_74;
  byte *****local_70;
  code *local_6c;
  undefined4 *local_68;
  byte ****local_64;
  byte *****local_60;
  undefined4 ****local_5c;
  undefined4 local_58;
  undefined4 local_54;
  byte *****local_50;
  byte ****local_4c;
  undefined4 *local_48;
  undefined4 *****local_44;
  code *local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  byte *****local_30;
  byte *****local_2c;
  undefined1 *local_28;
  
  cVar3 = *(byte *)param_1 - 6;
  if (*(byte *)param_1 < 6) {
    cVar3 = '\x06';
  }
  if (cVar3 == '\x03') {
    bVar1 = *(byte *)((int)param_1 + 2);
    local_85 = bVar1;
    if ((DAT_01d50f88 == 0) &&
       (((DAT_01d4d640 - 1 < 2 ||
         ((DAT_01d4d640 != 0 && (cVar3 = FUN_01aaafa8(&DAT_01d4d638), cVar3 != '\0')))) &&
        (iVar5 = FUN_01aaa278(DAT_01d4d638), iVar5 != 0)))) {
      local_40 = *(code **)(DAT_01d4d638 + 0x20);
      if (local_40 == (code *)0x0) {
LAB_0137b7e0:
                    /* WARNING: Subroutine does not return */
        FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01cea24c);
      }
      local_3c = *(undefined4 *)(DAT_01d4d638 + 0x24);
      local_38 = *(undefined4 *)(DAT_01d4d638 + 0x28);
      local_4c = &local_84;
      local_68 = (undefined4 *)(DAT_01d4d638 + 0x1c);
      local_44 = (undefined4 *****)*local_68;
      pppppbVar10 = (byte *****)&local_70;
      local_50 = (byte *****)&local_44;
      local_6c = (code *)0x1;
      local_80 = (byte ****)&local_64;
      local_70 = (byte *****)&local_50;
      local_64 = (byte ****)&local_85;
      local_34 = 0;
      local_48 = (undefined4 *)&DAT_01d2ea4c;
      local_84 = (byte ***)&DAT_005a43fc;
      local_60 = (byte *****)FUN_013b6368;
      FUN_01aaaecc(DAT_01d4d638,pppppbVar10);
      iVar5 = DAT_01d4d638;
      if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
        local_2c = *(byte ******)(DAT_01d4d638 + 0x14);
        local_28 = *(undefined1 **)(DAT_01d4d638 + 0x18);
        local_30 = (byte *****)&DAT_00000005;
        DataMemoryBarrier(0xb);
        puVar9 = DAT_01d4edc8;
        if (DAT_01d51174 != 2) {
          puVar9 = &DAT_01cfc5e0;
        }
        pcVar6 = DAT_01d4edc4;
        if (DAT_01d51174 != 2) {
          pcVar6 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
        }
        iVar4 = (*(code *)puVar9[3])(pcVar6,&local_30);
        if (iVar4 != 0) {
          uVar7 = puVar9[4];
          pppppuVar8 = &local_30;
          goto LAB_0137b45c;
        }
      }
    }
    else {
      iVar5 = DAT_01d4d638;
      if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
        local_78 = *(undefined4 *)(DAT_01d4d638 + 0x14);
        local_74 = *(undefined4 *)(DAT_01d4d638 + 0x18);
        local_7c = (undefined4 ****)0x5;
        DataMemoryBarrier(0xb);
        puVar9 = DAT_01d4edc8;
        if (DAT_01d51174 != 2) {
          puVar9 = &DAT_01cfc5e0;
        }
        pcVar6 = DAT_01d4edc4;
        if (DAT_01d51174 != 2) {
          pcVar6 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
        }
        iVar4 = (*(code *)puVar9[3])(pcVar6,&local_7c);
        if (iVar4 != 0) {
          local_48 = (undefined4 *)(DAT_01d4d638 + 0x1c);
          local_44 = (undefined4 *****)*local_48;
          local_40 = *(code **)(DAT_01d4d638 + 0x20);
          if (local_40 == (code *)0x0) goto LAB_0137b7e0;
          local_2c = &local_64;
          local_3c = *(undefined4 *)(DAT_01d4d638 + 0x24);
          local_38 = *(undefined4 *)(DAT_01d4d638 + 0x28);
          local_30 = (byte *****)&local_44;
          local_50 = (byte *****)&local_30;
          local_34 = 0;
          local_4c = (byte ****)&DAT_00000001;
          local_60 = (byte *****)&local_70;
          local_70 = (byte *****)&local_85;
          local_28 = &DAT_01d2ea4c;
          pppppbVar10 = (byte *****)&local_50;
          local_64 = (byte ****)&DAT_005a43fc;
          pppppuVar8 = &local_7c;
          local_6c = FUN_013b6368;
          uVar7 = puVar9[4];
LAB_0137b45c:
          FUN_01aaa328(iVar5,pcVar6,uVar7,pppppuVar8,pppppbVar10);
        }
      }
    }
    FUN_0137ac50(param_1);
    bVar2 = 10;
    *(byte *)((int)param_1 + 1) = bVar1;
    goto LAB_0137b75c;
  }
  if (cVar3 != '\x05') {
    local_40 = FUN_0137acac;
    local_44 = &local_30;
    local_30 = (byte *****)param_1;
                    /* WARNING: Subroutine does not return */
    FUN_012fb100(&DAT_00583896,&local_44,&DAT_01cea26c);
  }
  if (((DAT_01d50f88 == 0) &&
      ((DAT_01d4d64c - 1 < 2 ||
       ((DAT_01d4d64c != 0 && (cVar3 = FUN_01aaafa8(&DAT_01d4d644), cVar3 != '\0')))))) &&
     (iVar5 = FUN_01aaa278(DAT_01d4d644), iVar5 != 0)) {
    local_40 = *(code **)(DAT_01d4d644 + 0x20);
    if (local_40 == (code *)0x0) {
LAB_0137b7f8:
                    /* WARNING: Subroutine does not return */
      FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01cea25c);
    }
    local_4c = (byte ****)&local_64;
    local_3c = *(undefined4 *)(DAT_01d4d644 + 0x24);
    local_38 = *(undefined4 *)(DAT_01d4d644 + 0x28);
    local_68 = (undefined4 *)(DAT_01d4d644 + 0x1c);
    local_44 = (undefined4 *****)*local_68;
    local_50 = (byte *****)&local_44;
    local_70 = (byte *****)&local_50;
    local_34 = 0;
    pppppbVar10 = (byte *****)&local_70;
    local_6c = (code *)0x1;
    local_60 = (byte *****)&DAT_0000004d;
    local_48 = (undefined4 *)&DAT_01d2ea4c;
    local_64 = (byte ****)0x46e19b;
    FUN_01aaaecc(DAT_01d4d644,pppppbVar10);
    iVar5 = DAT_01d4d644;
    if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
      local_2c = *(byte ******)(DAT_01d4d644 + 0x14);
      local_28 = *(undefined1 **)(DAT_01d4d644 + 0x18);
      local_30 = (byte *****)&DAT_00000005;
      DataMemoryBarrier(0xb);
      puVar9 = DAT_01d4edc8;
      if (DAT_01d51174 != 2) {
        puVar9 = &DAT_01cfc5e0;
      }
      pcVar6 = DAT_01d4edc4;
      if (DAT_01d51174 != 2) {
        pcVar6 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
      }
      iVar4 = (*(code *)puVar9[3])(pcVar6,&local_30);
      if (iVar4 != 0) {
        uVar7 = puVar9[4];
        pppppuVar8 = &local_30;
        goto LAB_0137b310;
      }
    }
  }
  else {
    iVar5 = DAT_01d4d644;
    if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
      local_58 = *(undefined4 *)(DAT_01d4d644 + 0x14);
      local_54 = *(undefined4 *)(DAT_01d4d644 + 0x18);
      local_5c = (undefined4 ****)0x5;
      DataMemoryBarrier(0xb);
      puVar9 = DAT_01d4edc8;
      if (DAT_01d51174 != 2) {
        puVar9 = &DAT_01cfc5e0;
      }
      pcVar6 = DAT_01d4edc4;
      if (DAT_01d51174 != 2) {
        pcVar6 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
      }
      iVar4 = (*(code *)puVar9[3])(pcVar6,&local_5c);
      if (iVar4 != 0) {
        local_48 = (undefined4 *)(DAT_01d4d644 + 0x1c);
        local_44 = (undefined4 *****)*local_48;
        local_40 = *(code **)(DAT_01d4d644 + 0x20);
        if (local_40 == (code *)0x0) goto LAB_0137b7f8;
        local_2c = (byte *****)&local_70;
        local_3c = *(undefined4 *)(DAT_01d4d644 + 0x24);
        local_38 = *(undefined4 *)(DAT_01d4d644 + 0x28);
        local_30 = (byte *****)&local_44;
        local_50 = (byte *****)&local_30;
        local_34 = 0;
        local_4c = (byte ****)&DAT_00000001;
        local_6c = (code *)0x4d;
        local_28 = &DAT_01d2ea4c;
        pppppbVar10 = (byte *****)&local_50;
        local_70 = (byte *****)0x46e19b;
        pppppuVar8 = &local_5c;
        uVar7 = puVar9[4];
LAB_0137b310:
        FUN_01aaa328(iVar5,pcVar6,uVar7,pppppuVar8,pppppbVar10);
      }
    }
  }
  FUN_0137ac50(param_1);
  bVar2 = 3;
LAB_0137b75c:
  *(byte *)param_1 = bVar2;
  return;
}

