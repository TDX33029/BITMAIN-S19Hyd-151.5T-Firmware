// FUN_00eb1d2c @ 00eb1d2c size=176 calls_out=3 calls_in=1
// strings: Failed to ignore SIGPIPE event bosminer-plus/bosminer-plus-tuner/src/main.rs:785event bosminer-plus/bosminer-plus-tuner/src/main.rs:766event bosminer-plus/bosminer-plus-tuner/src/main.rs:707event bosminer-plus/bosminer-plus-tuner/src/main.rs:594event bosminer-plus/bosminer-plus-tuner/src/main.rs:626event bosminer-plus/bosminer-plus-tuner/src/main.rs:620 | stderr

void FUN_00eb1d2c(void)

{
  int iVar1;
  char *pcStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined1 *local_18;
  undefined4 *local_14;
  undefined4 *local_10;
  code *local_c;
  
  iVar1 = FUN_016da752(0xd,1);
  if (iVar1 == -1) {
    pcStack_30 = "stderr";
    uStack_2c = 6;
    FUN_015ee5cc(&local_28,&DAT_018dd9d8,
                 "Failed to ignore SIGPIPE\nevent bosminer-plus/bosminer-plus-tuner/src/main.rs:785event bosminer-plus/bosminer-plus-tuner/src/main.rs:766event bosminer-plus/bosminer-plus-tuner/src/main.rs:707event bosminer-plus/bosminer-plus-tuner/src/main.rs:594event bosminer-plus/bosminer-plus-tuner/src/main.rs:626event bosminer-plus/bosminer-plus-tuner/src/main.rs:620"
                 ,0x33);
    if ((char)local_28 != '\x04') {
      local_c = FUN_015ef5b4;
      local_10 = &local_20;
      local_1c = local_24;
      local_20 = local_28;
      local_14 = &DAT_015bee04;
      local_18 = (undefined1 *)&pcStack_30;
                    /* WARNING: Subroutine does not return */
      FUN_00faa478(&DAT_0056faa6,&local_18,&DAT_018aab78);
    }
  }
  return;
}

