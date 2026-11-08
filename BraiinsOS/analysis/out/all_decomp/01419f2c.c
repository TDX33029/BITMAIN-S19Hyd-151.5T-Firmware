// FUN_01419f2c @ 01419f2c size=76 calls_out=2 calls_in=1
// strings: 

void FUN_01419f2c(undefined1 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)thunk_FUN_016d4a50(0xc);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0xc);
  }
  *(undefined1 *)(puVar1 + 2) = 0x25;
  *puVar1 = 1;
  *(undefined4 **)(param_1 + 4) = puVar1;
  *param_1 = 3;
  puVar1[1] = &DAT_018a4010;
  return;
}

