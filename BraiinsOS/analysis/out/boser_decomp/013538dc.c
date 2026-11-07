// FUN_013538dc @ 013538dc size=1912 calls_out=7 calls_in=3
// strings: h2::proto::streams::state/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/state.rsevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/state.rs:246event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/state.rs:241 | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | h2::proto::streams::recv/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/recv.rs | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll

void FUN_013538dc(undefined1 *param_1,undefined4 **param_2,undefined4 param_3,int param_4,
                 int param_5)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 ****ppppuVar6;
  uint ***pppuVar7;
  undefined1 uVar8;
  byte *pbVar9;
  undefined4 *puVar10;
  undefined4 ***pppuVar11;
  undefined4 ****ppppuVar12;
  uint **local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 ***local_8c;
  undefined4 local_88;
  byte local_81;
  byte *local_80;
  undefined4 ****local_7c;
  undefined4 ****local_78;
  undefined4 *local_74;
  undefined4 ****local_70;
  undefined4 ***local_6c;
  undefined4 *local_68;
  undefined4 ***local_64;
  undefined4 ****local_60;
  undefined1 *local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 ***local_50;
  undefined4 ****local_4c;
  undefined4 ***local_48;
  code *local_44;
  byte **local_40;
  code *local_3c;
  byte *local_38;
  undefined1 *local_34;
  uint ***local_30;
  undefined4 ***local_2c;
  undefined4 *local_28;
  
  if (*(char *)(param_4 + 0xee) != '\0') {
    pppuVar11 = *(undefined4 ****)(param_5 + 0x20);
    if (pppuVar11 <= *(undefined4 ****)(param_5 + 0x24)) {
      if ((DAT_01d50f88 < 4) &&
         (((DAT_01d4d070 - 1 < 2 ||
           ((DAT_01d4d070 != 0 && (cVar1 = FUN_01aaafa8(&DAT_01d4d068), cVar1 != '\0')))) &&
          (iVar3 = FUN_01aaa278(DAT_01d4d068), iVar3 != 0)))) {
        local_44 = *(code **)(DAT_01d4d068 + 0x20);
        if (local_44 == (code *)0x0) {
LAB_0135403c:
                    /* WARNING: Subroutine does not return */
          FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01ce7174);
        }
        local_2c = &local_50;
        local_40 = *(byte ***)(DAT_01d4d068 + 0x24);
        local_3c = *(code **)(DAT_01d4d068 + 0x28);
        local_68 = (undefined4 *)(DAT_01d4d068 + 0x1c);
        local_48 = (undefined4 ***)*local_68;
        local_30 = (uint ***)&local_48;
        local_70 = &local_30;
        local_38 = (byte *)0x0;
        ppppuVar12 = &local_70;
        local_6c = (undefined4 ***)0x1;
        local_4c = &local_7c;
        local_7c = &local_8c;
        local_28 = (undefined4 *)&DAT_01d2ea4c;
        local_50 = (undefined4 ***)&DAT_005a6edf;
        local_78 = (undefined4 ****)&LAB_01a6a304;
        local_8c = pppuVar11;
        FUN_01aaaecc(DAT_01d4d068,ppppuVar12);
        iVar3 = DAT_01d4d068;
        if ((DAT_01d51ae9 == '\0') && (1 < DAT_01d51b00)) {
          local_60 = *(undefined4 *****)(DAT_01d4d068 + 0x14);
          local_5c = *(undefined1 **)(DAT_01d4d068 + 0x18);
          local_64 = (undefined4 ***)0x2;
          DataMemoryBarrier(0xb);
          puVar10 = DAT_01d4edc8;
          if (DAT_01d51174 != 2) {
            puVar10 = &DAT_01cfc5e0;
          }
          pcVar4 = DAT_01d4edc4;
          if (DAT_01d51174 != 2) {
            pcVar4 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
          }
          iVar2 = (*(code *)puVar10[3])(pcVar4,&local_64);
          if (iVar2 != 0) {
            uVar5 = puVar10[4];
            pppuVar7 = (uint ***)&local_64;
            goto LAB_01353fc0;
          }
        }
      }
      else {
        iVar3 = DAT_01d4d068;
        if ((DAT_01d51ae9 == '\0') && (1 < DAT_01d51b00)) {
          local_94 = *(undefined4 *)(DAT_01d4d068 + 0x14);
          local_90 = *(undefined4 *)(DAT_01d4d068 + 0x18);
          local_98 = (uint **)0x2;
          DataMemoryBarrier(0xb);
          puVar10 = DAT_01d4edc8;
          if (DAT_01d51174 != 2) {
            puVar10 = &DAT_01cfc5e0;
          }
          pcVar4 = DAT_01d4edc4;
          if (DAT_01d51174 != 2) {
            pcVar4 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
          }
          iVar2 = (*(code *)puVar10[3])(pcVar4,&local_98);
          if (iVar2 != 0) {
            local_28 = (undefined4 *)(DAT_01d4d068 + 0x1c);
            local_48 = (undefined4 ***)*local_28;
            local_44 = *(code **)(DAT_01d4d068 + 0x20);
            if (local_44 == (code *)0x0) goto LAB_0135403c;
            local_60 = &local_7c;
            local_40 = *(byte ***)(DAT_01d4d068 + 0x24);
            local_3c = *(code **)(DAT_01d4d068 + 0x28);
            local_64 = &local_48;
            local_30 = (uint ***)&local_64;
            local_2c = (undefined4 ***)&DAT_00000001;
            local_78 = &local_70;
            local_38 = (byte *)0x0;
            local_70 = &local_50;
            ppppuVar12 = &local_30;
            local_5c = &DAT_01d2ea4c;
            pppuVar7 = &local_98;
            local_7c = (undefined4 ****)&DAT_005a6edf;
            local_6c = (undefined4 ***)&LAB_01a6a304;
            uVar5 = puVar10[4];
            local_50 = pppuVar11;
LAB_01353fc0:
            FUN_01aaa328(iVar3,pcVar4,uVar5,pppuVar7,ppppuVar12);
          }
        }
      }
      uVar8 = 1;
      param_1[1] = 1;
      *(undefined4 *)(param_1 + 4) = 0xb;
      *(undefined **)(param_1 + 8) = &DAT_01c25b04;
      *(char **)(param_1 + 0xc) =
           "too_many_resetsevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/recv.rs:203event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/recv.rs:228event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/recv.rs:182event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/recv.rs:161event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/recv.rs:233event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/recv.rs:322"
      ;
      *(undefined4 *)(param_1 + 0x10) = 0xf;
      *(undefined4 *)(param_1 + 0x14) = 0;
      goto LAB_01353ffc;
    }
    *(undefined **)(param_5 + 0x24) = (undefined *)((int)*(undefined4 ****)(param_5 + 0x24) + 1);
  }
  local_81 = *(byte *)(param_4 + 0xe9);
  pbVar9 = (byte *)(param_4 + 0x20);
  local_8c = (undefined4 ***)param_2;
  local_88 = param_3;
  if ((5 < *pbVar9) || ((local_81 & 1) != 0)) {
    local_80 = pbVar9;
    if (((DAT_01d50f88 == 0) &&
        ((DAT_01d4d634 - 1 < 2 ||
         ((DAT_01d4d634 != 0 && (cVar1 = FUN_01aaafa8(&DAT_01d4d62c), cVar1 != '\0')))))) &&
       (iVar3 = FUN_01aaa278(DAT_01d4d62c), iVar3 != 0)) {
      local_60 = *(undefined4 *****)(DAT_01d4d62c + 0x20);
      if (local_60 == (undefined4 ****)0x0) {
LAB_01354024:
                    /* WARNING: Subroutine does not return */
        FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01cea1bc);
      }
      local_70 = &local_64;
      local_5c = *(undefined1 **)(DAT_01d4d62c + 0x24);
      local_6c = &local_50;
      local_58 = *(undefined4 *)(DAT_01d4d62c + 0x28);
      local_74 = (undefined4 *)(DAT_01d4d62c + 0x1c);
      local_64 = (undefined4 ***)*local_74;
      local_7c = &local_70;
      local_78 = (undefined4 ****)0x1;
      local_4c = &local_48;
      local_38 = &local_81;
      local_34 = &LAB_01a705e0;
      ppppuVar12 = &local_7c;
      local_54 = 0;
      local_68 = (undefined4 *)&DAT_01d2ea4c;
      local_50 = (undefined4 ***)&DAT_005ab21f;
      local_3c = FUN_0137acac;
      local_40 = &local_80;
      local_44 = FUN_0137b130;
      local_48 = &local_8c;
      FUN_01aaaecc(DAT_01d4d62c,ppppuVar12);
      iVar3 = DAT_01d4d62c;
      if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
        local_2c = *(undefined4 ****)(DAT_01d4d62c + 0x14);
        local_28 = *(undefined4 **)(DAT_01d4d62c + 0x18);
        local_30 = (uint ***)&DAT_00000005;
        DataMemoryBarrier(0xb);
        puVar10 = DAT_01d4edc8;
        if (DAT_01d51174 != 2) {
          puVar10 = &DAT_01cfc5e0;
        }
        pcVar4 = DAT_01d4edc4;
        if (DAT_01d51174 != 2) {
          pcVar4 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
        }
        iVar2 = (*(code *)puVar10[3])(pcVar4,&local_30);
        if (iVar2 != 0) {
          uVar5 = puVar10[4];
          ppppuVar6 = &local_30;
          goto LAB_01353aa8;
        }
      }
    }
    else {
      iVar3 = DAT_01d4d62c;
      if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
        local_78 = *(undefined4 *****)(DAT_01d4d62c + 0x14);
        local_74 = *(undefined4 **)(DAT_01d4d62c + 0x18);
        local_7c = (undefined4 ****)&DAT_00000005;
        DataMemoryBarrier(0xb);
        puVar10 = DAT_01d4edc8;
        if (DAT_01d51174 != 2) {
          puVar10 = &DAT_01cfc5e0;
        }
        pcVar4 = DAT_01d4edc4;
        if (DAT_01d51174 != 2) {
          pcVar4 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
        }
        iVar2 = (*(code *)puVar10[3])(pcVar4,&local_7c);
        if (iVar2 != 0) {
          local_68 = (undefined4 *)(DAT_01d4d62c + 0x1c);
          local_64 = (undefined4 ***)*local_68;
          local_60 = *(undefined4 *****)(DAT_01d4d62c + 0x20);
          if (local_60 == (undefined4 ****)0x0) goto LAB_01354024;
          local_30 = (uint ***)&local_64;
          local_5c = *(undefined1 **)(DAT_01d4d62c + 0x24);
          local_58 = *(undefined4 *)(DAT_01d4d62c + 0x28);
          local_2c = &local_50;
          local_70 = &local_30;
          local_54 = 0;
          local_6c = (undefined4 ***)&DAT_00000001;
          local_4c = &local_48;
          ppppuVar6 = &local_7c;
          local_28 = (undefined4 *)&DAT_01d2ea4c;
          local_50 = (undefined4 ***)&DAT_005ab21f;
          local_34 = &LAB_01a705e0;
          local_38 = &local_81;
          local_3c = FUN_0137acac;
          local_40 = &local_80;
          local_44 = FUN_0137b130;
          local_48 = &local_8c;
          ppppuVar12 = &local_70;
          uVar5 = puVar10[4];
LAB_01353aa8:
          FUN_01aaa328(iVar3,pcVar4,uVar5,ppppuVar6,ppppuVar12);
        }
      }
    }
    uVar5 = local_88;
    pppuVar11 = local_8c;
    FUN_0137ac50(pbVar9);
    *(undefined4 ****)(param_4 + 0x24) = pppuVar11;
    *(undefined4 *)(param_4 + 0x28) = uVar5;
    *(undefined2 *)(param_4 + 0x20) = 0x200;
  }
  iVar3 = *(int *)(param_4 + 0x40);
  *(undefined4 *)(param_4 + 0x40) = 0;
  if (iVar3 != 0) {
    (**(code **)(iVar3 + 4))(*(undefined4 *)(param_4 + 0x44));
  }
  iVar3 = *(int *)(param_4 + 0x50);
  *(undefined4 *)(param_4 + 0x50) = 0;
  if (iVar3 != 0) {
    (**(code **)(iVar3 + 4))(*(undefined4 *)(param_4 + 0x54));
  }
  iVar3 = *(int *)(param_4 + 0x58);
  *(undefined4 *)(param_4 + 0x58) = 0;
  uVar8 = 3;
  if (iVar3 != 0) {
    (**(code **)(iVar3 + 4))(*(undefined4 *)(param_4 + 0x5c));
  }
LAB_01353ffc:
  *param_1 = uVar8;
  return;
}

