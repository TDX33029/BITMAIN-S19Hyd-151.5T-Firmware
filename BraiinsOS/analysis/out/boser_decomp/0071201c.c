// FUN_0071201c @ 0071201c size=564 calls_out=4 calls_in=4
// strings: tokio_tungstenite::compat | tokio_tungstenite::compat | /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/tokio-tungstenite-0.26.2/src/compat.rs:167 Write.write | tokio_tungstenite::compat | tokio_tungstenite::compat | /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/tokio-tungstenite-0.26.2/src/compat.rs:126 AllowStd.with_context

void FUN_0071201c(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined *local_50;
  int local_4c;
  undefined **local_48;
  undefined **local_44;
  undefined4 local_40;
  char *local_38;
  uint local_34;
  char *local_30;
  undefined4 local_2c;
  undefined *local_28;
  
  uVar6 = *(uint *)(param_2 + 0x38);
  if (uVar6 != 0) {
    uVar2 = *param_3;
    iVar5 = param_3[1];
    iVar3 = param_3[6];
    iVar7 = *(int *)(param_2 + 0x34);
    while( true ) {
      if (4 < DAT_01d51b00) {
        local_2c = 0x19;
        local_34 = 0x19;
        local_30 = "tokio_tungstenite::compat";
        local_28 = &DAT_01c0720c;
        local_38 = "tokio_tungstenite::compat";
        FUN_01ac6264("/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/tokio-tungstenite-0.26.2/src/compat.rs:167 Write.write"
                     ,0x16b,5,&local_38);
      }
      if (4 < DAT_01d51b00) {
        local_2c = 0x19;
        local_34 = 0x19;
        local_30 = "tokio_tungstenite::compat";
        local_28 = &DAT_01c071ac;
        local_38 = "tokio_tungstenite::compat";
        FUN_01ac6264("/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/tokio-tungstenite-0.26.2/src/compat.rs:126 AllowStd.with_context"
                     ,0x17f,5,&local_38);
      }
      local_40 = 0;
      local_50 = &DAT_01c0719c;
      local_48 = &local_50;
      local_4c = iVar3 + 8;
      local_44 = local_48;
      if (4 < DAT_01d51b00) {
        local_2c = 0x19;
        local_34 = 0x19;
        local_30 = "tokio_tungstenite::compat";
        local_28 = &DAT_01c0721c;
        local_38 = "tokio_tungstenite::compat";
        FUN_01ac6264("/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/tokio-tungstenite-0.26.2/src/compat.rs:169 Write.with_context write -> poll_writepath didn\'t start with \'/\'. axum should have caught this higher up.axum::extract::multipart/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/axum-0.8.4/src/extract/multipart.rsevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/axum-0.8.4/src/extract/multipart.rs:299"
                     ,0x1a1,5,&local_38);
      }
      (**(code **)(iVar5 + 0x10))(&local_38,uVar2,&local_48,iVar7,uVar6);
      pcVar4 = local_38;
      uVar1 = local_34;
      if (((uint)local_38 & 0xff) == 5) {
        pcVar4 = (char *)0xd01;
        uVar1 = 0;
      }
      if (((uint)pcVar4 & 0xff) != 4) {
        *param_1 = 5;
        param_1[1] = 0;
        param_1[2] = pcVar4;
        param_1[3] = uVar1;
        return;
      }
      if (uVar1 == 0) {
        FUN_019a18a8(param_1 + 2,3,
                     "Connection reset while sendingAlreadyClosedWriteBufferFullAttackAttemptHttpFormataxum_core::extract::rejection/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/axum-core-0.5.2/src/extract/rejection.rsevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/axum-core-0.5.2/src/extract/rejection.rs:40event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/axum-core-0.5.2/src/extract/rejection.rs:50"
                     ,0x1e);
        *param_1 = 5;
        param_1[1] = 0;
        return;
      }
      if (uVar6 < uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_012faff4(0,uVar1,uVar6,&DAT_01d2fe30);
      }
      uVar6 = uVar6 - uVar1;
      *(undefined4 *)(param_2 + 0x38) = 0;
      if (uVar6 == 0) break;
      FUN_01bed864(iVar7,iVar7 + uVar1,uVar6);
      *(uint *)(param_2 + 0x38) = uVar6;
    }
  }
  *param_1 = 0xf;
  param_1[1] = 0;
  return;
}

