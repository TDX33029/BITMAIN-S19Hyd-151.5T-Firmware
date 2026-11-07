// FUN_00b8a1bc @ 00b8a1bc size=48 calls_out=2 calls_in=31
// strings: 

void FUN_00b8a1bc(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)thunk_FUN_01be5118(8);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,8);
  }
  *puVar1 = param_1;
  *(undefined1 *)(puVar1 + 1) = 0;
  return;
}

