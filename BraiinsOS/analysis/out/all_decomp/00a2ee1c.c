// FUN_00a2ee1c @ 00a2ee1c size=164 calls_out=2 calls_in=0
// strings: /tmp/telemetry_debug.jsonl | BUG: failed to create telemetry debug filebosminer_plus::bos_mgmt::client_handlerbosminer-plus/bosminer-plus/src/bos_mgmt/client_handler.rsevent bosminer-plus/bosminer-plus/src/bos_mgmt/client_handler.rs:272event bosminer-plus/bosminer-plus/src/bos_mgmt/client_handler.rs:284event bosminer-plus/bosminer-plus/src/bos_mgmt.rs:256bosminer_plus::bos_mgmtbosminer-plus/bosminer-plus/src/bos_mgmt.rs

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00a2ee1c(undefined4 *param_1)

{
  char local_28 [4];
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined2 local_14;
  
  local_1c = 0x1b6;
  local_18 = 0x1000100;
  local_14 = 1;
  local_20 = 0;
  FUN_015ec1bc(local_28,&local_20,"/tmp/telemetry_debug.jsonl",0x1a);
  if (local_28[0] != '\x04') {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8("BUG: failed to create telemetry debug filebosminer_plus::bos_mgmt::client_handlerbosminer-plus/bosminer-plus/src/bos_mgmt/client_handler.rsevent bosminer-plus/bosminer-plus/src/bos_mgmt/client_handler.rs:272event bosminer-plus/bosminer-plus/src/bos_mgmt/client_handler.rs:284event bosminer-plus/bosminer-plus/src/bos_mgmt.rs:256bosminer_plus::bos_mgmtbosminer-plus/bosminer-plus/src/bos_mgmt.rs"
                 ,0x2a,&local_20,&DAT_0186bfd8);
  }
  param_1[2] = local_24;
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = 0;
  return;
}

