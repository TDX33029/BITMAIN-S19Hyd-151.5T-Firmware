// FUN_0137a160 @ 0137a160 size=2420 calls_out=7 calls_in=2
// strings: h2::proto::streams::state/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/state.rsevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/state.rs:246event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/state.rs:241 | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | h2::proto::streams::state/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/state.rsevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/state.rs:246event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/state.rs:241 | InvalidParamSegmentInvalidParamInvalidCatchAll | recv_close: HalfClosedLocal => Closedevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/state.rs:277event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/state.rs:327event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/state.rs:323

/* WARNING: Type propagation algorithm not settling */

void FUN_0137a160(undefined2 *param_1,undefined4 ****param_2)

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
         (((DAT_01d4d610 - 1 < 2 ||
           ((DAT_01d4d610 != 0 && (cVar2 = FUN_01aaafa8(&DAT_01d4d608), cVar2 != '\0')))) &&
          (iVar4 = FUN_01aaa278(DAT_01d4d608), iVar4 != 0)))) {
        local_48 = *(int *)(DAT_01d4d608 + 0x20);
        if (local_48 == 0) {
LAB_0137aa8c:
                    /* WARNING: Subroutine does not return */
          FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01cea16c);
        }
        local_54 = &local_6c;
        local_44 = *(undefined4 *)(DAT_01d4d608 + 0x24);
        local_40 = *(undefined4 *)(DAT_01d4d608 + 0x28);
        local_70 = (undefined4 *)(DAT_01d4d608 + 0x1c);
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
        local_34 = (byte *****)FUN_0137acac;
        FUN_01aaaecc(DAT_01d4d608,pppppbVar9);
        iVar4 = DAT_01d4d608;
        if ((DAT_01d51ae9 != '\0') || (DAT_01d51b00 < 4)) goto LAB_0137a9f4;
        local_2c = *(byte ******)(DAT_01d4d608 + 0x14);
        local_28 = *(undefined1 **)(DAT_01d4d608 + 0x18);
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
        if (iVar3 == 0) goto LAB_0137a9f4;
        uVar6 = puVar8[4];
        ppppbVar7 = (byte ****)&local_30;
      }
      else {
        iVar4 = DAT_01d4d608;
        if ((DAT_01d51ae9 != '\0') || (DAT_01d51b00 < 4)) goto LAB_0137a9f4;
        local_60 = *(undefined4 *)(DAT_01d4d608 + 0x14);
        local_5c = *(undefined4 *)(DAT_01d4d608 + 0x18);
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
        if (iVar3 == 0) goto LAB_0137a9f4;
        local_50 = (undefined4 *)(DAT_01d4d608 + 0x1c);
        local_4c = (byte ***)*local_50;
        local_48 = *(int *)(DAT_01d4d608 + 0x20);
        if (local_48 == 0) goto LAB_0137aa8c;
        local_2c = &local_38;
        local_44 = *(undefined4 *)(DAT_01d4d608 + 0x24);
        local_40 = *(undefined4 *)(DAT_01d4d608 + 0x28);
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
        local_74 = FUN_0137acac;
        uVar6 = puVar8[4];
      }
      FUN_01aaa328(iVar4,pcVar5,uVar6,ppppbVar7,pppppbVar9);
LAB_0137a9f4:
      *param_1 = 0x101;
      *(undefined4 *)(param_1 + 2) = 1;
      *(undefined ***)(param_1 + 4) = &PTR_FUN_01ceb2a4;
      *(undefined4 *)(param_1 + 6) = 1;
      *(undefined4 *)(param_1 + 8) = 0;
      *(undefined4 *)(param_1 + 10) = 0;
      return;
    }
    bVar1 = *(byte *)((int)param_2 + 1);
    local_95 = bVar1;
    if (((DAT_01d50f88 == 0) &&
        ((DAT_01d4d61c - 1 < 2 ||
         ((DAT_01d4d61c != 0 && (cVar2 = FUN_01aaafa8(&DAT_01d4d614), cVar2 != '\0')))))) &&
       (iVar4 = FUN_01aaa278(DAT_01d4d614), iVar4 != 0)) {
      local_48 = *(int *)(DAT_01d4d614 + 0x20);
      if (local_48 == 0) {
LAB_0137aaa4:
                    /* WARNING: Subroutine does not return */
        FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01cea14c);
      }
      local_44 = *(undefined4 *)(DAT_01d4d614 + 0x24);
      local_40 = *(undefined4 *)(DAT_01d4d614 + 0x28);
      local_54 = &local_6c;
      local_70 = (undefined4 *)(DAT_01d4d614 + 0x1c);
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
      FUN_01aaaecc(DAT_01d4d614,pppppbVar9);
      iVar4 = DAT_01d4d614;
      if ((DAT_01d51ae9 != '\0') || (DAT_01d51b00 < 5)) goto LAB_0137a720;
      local_2c = *(byte ******)(DAT_01d4d614 + 0x14);
      local_28 = *(undefined1 **)(DAT_01d4d614 + 0x18);
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
      if (iVar3 == 0) goto LAB_0137a720;
      uVar6 = puVar8[4];
      ppppbVar7 = (byte ****)&local_30;
    }
    else {
      iVar4 = DAT_01d4d614;
      if ((DAT_01d51ae9 != '\0') || (DAT_01d51b00 < 5)) goto LAB_0137a720;
      local_90 = *(undefined4 *)(DAT_01d4d614 + 0x14);
      local_8c = *(undefined4 *)(DAT_01d4d614 + 0x18);
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
      if (iVar3 == 0) goto LAB_0137a720;
      local_50 = (undefined4 *)(DAT_01d4d614 + 0x1c);
      local_4c = (byte ***)*local_50;
      local_48 = *(int *)(DAT_01d4d614 + 0x20);
      if (local_48 == 0) goto LAB_0137aaa4;
      local_30 = (undefined4 ****)&local_4c;
      local_44 = *(undefined4 *)(DAT_01d4d614 + 0x24);
      local_40 = *(undefined4 *)(DAT_01d4d614 + 0x28);
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
LAB_0137a720:
    FUN_0137ac50(param_2);
    *(byte *)((int)param_2 + 1) = bVar1;
    *(byte *)param_2 = 0xb;
    *(undefined1 *)param_1 = 3;
    return;
  }
  if (((DAT_01d50f88 == 0) &&
      ((DAT_01d4d628 - 1 < 2 ||
       ((DAT_01d4d628 != 0 && (cVar2 = FUN_01aaafa8(&DAT_01d4d620), cVar2 != '\0')))))) &&
     (iVar4 = FUN_01aaa278(DAT_01d4d620), iVar4 != 0)) {
    local_48 = *(int *)(DAT_01d4d620 + 0x20);
    if (local_48 == 0) {
LAB_0137aabc:
                    /* WARNING: Subroutine does not return */
      FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01cea15c);
    }
    local_54 = (undefined4 *****)&local_38;
    local_44 = *(undefined4 *)(DAT_01d4d620 + 0x24);
    pppppbVar9 = (byte *****)&local_78;
    local_40 = *(undefined4 *)(DAT_01d4d620 + 0x28);
    local_70 = (undefined4 *)(DAT_01d4d620 + 0x1c);
    local_4c = (byte ***)*local_70;
    local_58 = &local_4c;
    local_78 = (undefined4 *****)&local_58;
    local_74 = (code *)0x1;
    local_34 = (byte *****)&DAT_0000004b;
    local_3c = 0;
    local_50 = (undefined4 *)&DAT_01d2ea4c;
    local_38 = (byte ****)0x46df6f;
    FUN_01aaaecc(DAT_01d4d620,pppppbVar9);
    iVar4 = DAT_01d4d620;
    if ((DAT_01d51ae9 != '\0') || (DAT_01d51b00 < 5)) goto LAB_0137a8a0;
    local_2c = *(byte ******)(DAT_01d4d620 + 0x14);
    local_28 = *(undefined1 **)(DAT_01d4d620 + 0x18);
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
    if (iVar3 == 0) goto LAB_0137a8a0;
    uVar6 = puVar8[4];
    ppppbVar7 = (byte ****)&local_30;
  }
  else {
    iVar4 = DAT_01d4d620;
    if ((DAT_01d51ae9 != '\0') || (DAT_01d51b00 < 5)) goto LAB_0137a8a0;
    local_84 = *(undefined4 *)(DAT_01d4d620 + 0x14);
    local_80 = *(undefined4 *)(DAT_01d4d620 + 0x18);
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
    if (iVar3 == 0) goto LAB_0137a8a0;
    local_50 = (undefined4 *)(DAT_01d4d620 + 0x1c);
    local_4c = (byte ***)*local_50;
    local_48 = *(int *)(DAT_01d4d620 + 0x20);
    if (local_48 == 0) goto LAB_0137aabc;
    local_2c = (byte *****)&local_78;
    local_44 = *(undefined4 *)(DAT_01d4d620 + 0x24);
    local_40 = *(undefined4 *)(DAT_01d4d620 + 0x28);
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
LAB_0137a8a0:
  FUN_0137ac50(param_2);
  *(undefined1 *)param_1 = 3;
  *(byte *)param_2 = 3;
  return;
}

