// FUN_0070f10c @ 0070f10c size=344 calls_out=1 calls_in=2
// strings: /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/tokio-tungstenite-0.26.2/src/compat.rs:178 Write.flush | tokio_tungstenite::compat | tokio_tungstenite::compat | /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/tokio-tungstenite-0.26.2/src/compat.rs:126 AllowStd.with_context | tokio_tungstenite::compat | tokio_tungstenite::compat

void FUN_0070f10c(undefined4 *param_1,undefined4 *param_2)

{
  undefined *local_48;
  int local_44;
  undefined1 *local_40;
  undefined1 *local_3c;
  undefined4 local_38;
  char *local_30;
  undefined4 local_2c;
  char *local_28;
  undefined4 local_24;
  undefined *local_20;
  
  if (4 < DAT_01d51b00) {
    local_24 = 0x19;
    local_2c = 0x19;
    local_20 = &DAT_01c071ec;
    local_28 = "tokio_tungstenite::compat";
    local_30 = "tokio_tungstenite::compat";
    FUN_01ac6264("/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/tokio-tungstenite-0.26.2/src/compat.rs:178 Write.flush"
                 ,0x16b,5,&local_30);
  }
  if (4 < DAT_01d51b00) {
    local_24 = 0x19;
    local_2c = 0x19;
    local_20 = &DAT_01c071ac;
    local_28 = "tokio_tungstenite::compat";
    local_30 = "tokio_tungstenite::compat";
    FUN_01ac6264("/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/tokio-tungstenite-0.26.2/src/compat.rs:126 AllowStd.with_context"
                 ,0x17f,5,&local_30);
  }
  local_48 = &DAT_01c0719c;
  local_44 = param_2[6] + 8;
  local_38 = 0;
  local_40 = (undefined1 *)&local_48;
  local_3c = (undefined1 *)&local_48;
  if (4 < DAT_01d51b00) {
    local_24 = 0x19;
    local_2c = 0x19;
    local_20 = &DAT_01c071fc;
    local_28 = "tokio_tungstenite::compat";
    local_30 = "tokio_tungstenite::compat";
    local_40 = (undefined1 *)&local_48;
    local_3c = (undefined1 *)&local_48;
    FUN_01ac6264("/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/tokio-tungstenite-0.26.2/src/compat.rs:180 Write.with_context flush -> poll_flush"
                 ,0x1a1,5,&local_30);
  }
  (**(code **)(param_2[1] + 0x14))(&local_30,*param_2,&local_40);
  if (((uint)local_30 & 0xff) == 5) {
    local_30 = (char *)0xd01;
    local_2c = 0;
  }
  *param_1 = local_30;
  param_1[1] = local_2c;
  return;
}

