// FUN_00b7cba8 @ 00b7cba8 size=48 calls_out=2 calls_in=1
// strings: 

void FUN_00b7cba8(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)thunk_FUN_01be5118(0x38);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x38);
  }
  *puVar1 = param_1;
  *(undefined1 *)(puVar1 + 0xd) = 0;
  return;
}

