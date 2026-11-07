// FUN_01439a38 @ 01439a38 size=1404 calls_out=18 calls_in=0
// strings: waker missing | hyper::client::connect::dns/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/hyper-0.14.31/src/client/connect/dns.rsevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/hyper-0.14.31/src/proto/h1/conn.rs:793 | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | hyper::client::connect::dns/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/hyper-0.14.31/src/client/connect/dns.rsevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/hyper-0.14.31/src/proto/h1/conn.rs:793 | InvalidParamSegmentInvalidParamInvalidCatchAll

void FUN_01439a38(int param_1)

{
  char *pcVar1;
  undefined4 **ppuVar2;
  undefined1 uVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 extraout_r1;
  undefined4 *puVar8;
  undefined4 ***pppuVar9;
  undefined8 uVar10;
  undefined4 local_c8 [2];
  undefined4 local_c0;
  undefined4 **local_bc;
  int local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a4;
  undefined4 **local_a0;
  int local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 **local_90;
  int local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 ***local_70;
  int local_6c;
  undefined4 ***local_68;
  undefined4 local_64;
  undefined4 *local_60;
  undefined4 ***local_5c;
  undefined **local_58;
  undefined4 *local_54;
  undefined *local_50;
  undefined4 ***local_4c;
  undefined4 ***local_48;
  undefined1 *local_44;
  undefined4 ***local_40;
  undefined **local_3c;
  undefined4 *local_38;
  undefined4 ***local_30;
  undefined **local_2c;
  undefined4 *local_28;
  
  uVar3 = FUN_019d8a74();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(uVar3) {
  case 0:
    if (*(int *)(param_1 + 0x28) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb100("internal error: entered unreachable code: unexpected stage",0x75,&DAT_01d2e13c);
    }
    uVar10 = FUN_019ec558(*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24));
    pppuVar9 = *(undefined4 ****)(param_1 + 0x30);
    iVar6 = *(int *)(param_1 + 0x34);
    *(undefined4 *)(param_1 + 0x30) = 0;
    if (pppuVar9 == (undefined4 ***)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0130739c("[internal",0x2d,&DAT_01d29564);
    }
    FUN_019ec5bc();
    local_70 = pppuVar9;
    local_6c = iVar6;
    if ((DAT_01d50f88 < 2) &&
       (((DAT_01d4ea8c - 1 < 2 ||
         ((DAT_01d4ea8c != 0 && (cVar4 = FUN_01aaafa8(&DAT_01d4ea84), cVar4 != '\0')))) &&
        (iVar6 = FUN_01aaa278(DAT_01d4ea84), iVar6 != 0)))) {
      local_8c = *(int *)(DAT_01d4ea84 + 0x20);
      if (local_8c == 0) {
LAB_01439ef4:
                    /* WARNING: Subroutine does not return */
        FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01cf6b60);
      }
      local_58 = &local_50;
      local_88 = *(undefined4 *)(DAT_01d4ea84 + 0x24);
      local_84 = *(undefined4 *)(DAT_01d4ea84 + 0x28);
      local_60 = (undefined4 *)(DAT_01d4ea84 + 0x1c);
      local_90 = (undefined4 **)*local_60;
      local_5c = &local_90;
      local_68 = &local_5c;
      local_80 = 0;
      local_64 = 1;
      local_4c = &local_48;
      local_48 = &local_70;
      local_54 = (undefined4 *)&DAT_01d2ea4c;
      local_50 = &DAT_005b32fd;
      local_44 = &LAB_019636e0;
      FUN_01aaaecc(DAT_01d4ea84,&local_68);
      iVar6 = DAT_01d4ea84;
      if ((DAT_01d51ae9 == '\0') && (3 < DAT_01d51b00)) {
        local_3c = *(undefined ***)(DAT_01d4ea84 + 0x14);
        local_38 = *(undefined4 **)(DAT_01d4ea84 + 0x18);
        local_40 = (undefined4 ***)&SUB_00000004;
        DataMemoryBarrier(0xb);
        puVar8 = DAT_01d4edc8;
        pcVar1 = DAT_01d4edc4;
        if (DAT_01d51174 != 2) {
          puVar8 = &DAT_01cfc5e0;
          pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
        }
        iVar7 = (*(code *)puVar8[3])(pcVar1,&local_40);
        if (iVar7 != 0) {
          local_30 = local_40;
          local_2c = local_3c;
          local_28 = local_38;
          FUN_01aaa328(iVar6,pcVar1,puVar8[4],&local_30,&local_68);
        }
      }
    }
    else {
      iVar6 = DAT_01d4ea84;
      if ((DAT_01d51ae9 == '\0') && (3 < DAT_01d51b00)) {
        local_64 = *(undefined4 *)(DAT_01d4ea84 + 0x14);
        local_60 = *(undefined4 **)(DAT_01d4ea84 + 0x18);
        local_68 = (undefined4 ***)&SUB_00000004;
        DataMemoryBarrier(0xb);
        puVar8 = DAT_01d4edc8;
        pcVar1 = DAT_01d4edc4;
        if (DAT_01d51174 != 2) {
          puVar8 = &DAT_01cfc5e0;
          pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
        }
        iVar7 = (*(code *)puVar8[3])(pcVar1,&local_68);
        if (iVar7 != 0) {
          local_54 = (undefined4 *)(DAT_01d4ea84 + 0x1c);
          local_90 = (undefined4 **)*local_54;
          local_8c = *(int *)(DAT_01d4ea84 + 0x20);
          if (local_8c == 0) goto LAB_01439ef4;
          local_40 = &local_90;
          local_5c = &local_40;
          local_88 = *(undefined4 *)(DAT_01d4ea84 + 0x24);
          local_80 = 0;
          local_84 = *(undefined4 *)(DAT_01d4ea84 + 0x28);
          local_3c = &local_50;
          local_58 = (undefined **)&DAT_00000001;
          local_38 = (undefined4 *)&DAT_01d2ea4c;
          local_4c = &local_48;
          local_50 = &DAT_005b32fd;
          local_44 = &LAB_019636e0;
          local_48 = &local_70;
          local_30 = local_68;
          local_2c = (undefined **)local_64;
          local_28 = local_60;
          FUN_01aaa328(iVar6,pcVar1,puVar8[4],&local_30,&local_5c);
        }
      }
    }
    local_28 = (undefined4 *)((uint)local_28 & 0xffff0000);
    local_2c = (undefined **)local_6c;
    local_30 = local_70;
    FUN_019bb418(&local_90,&local_30);
    local_94 = local_84;
    local_98 = local_88;
    iVar6 = local_8c;
    ppuVar2 = local_90;
    if (local_6c != 0) {
      thunk_FUN_01be4678(local_70);
    }
    local_9c = iVar6;
    local_a0 = ppuVar2;
    local_a4 = 0;
    FUN_019ec558((int)uVar10,(int)((ulonglong)uVar10 >> 0x20));
    local_90 = (undefined4 **)0x2;
    FUN_01433100(param_1 + 0x18,&local_90);
    local_c0 = 0;
    local_b4 = local_98;
    local_b8 = iVar6;
    local_bc = ppuVar2;
    local_c8[0] = 1;
    local_b0 = local_94;
    local_ac = extraout_r1;
    FUN_01433100(param_1 + 0x18,local_c8);
    break;
  case 1:
    FUN_01433240(param_1 + 0x18);
    break;
  case 2:
    return;
  case 3:
    FUN_014332a0(param_1);
    return;
  }
  uVar5 = FUN_019d8b4c();
  if ((uVar5 & 8) == 0) {
    local_28 = (undefined4 *)0x2;
    FUN_01433100(param_1 + 0x18,&local_28);
  }
  else if ((uVar5 & 0x10) != 0) {
    if (*(int *)(param_1 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb100("waker missing",0x1b,&DAT_01d29c20);
    }
    (**(code **)(*(int *)(param_1 + 0x50) + 8))(*(undefined4 *)(param_1 + 0x54));
    uVar5 = FUN_019d8c50(param_1);
    if ((uVar5 & 8) == 0) {
      if (*(int *)(param_1 + 0x50) != 0) {
        (**(code **)(*(int *)(param_1 + 0x50) + 0xc))(*(undefined4 *)(param_1 + 0x54));
      }
      *(undefined4 *)(param_1 + 0x50) = 0;
    }
  }
  iVar6 = FUN_019d8bc0(param_1,1);
  if (iVar6 == 0) {
    return;
  }
  FUN_014332a0(param_1);
  return;
}

