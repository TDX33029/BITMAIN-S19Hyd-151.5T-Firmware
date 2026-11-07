// FUN_00b91c3c @ 00b91c3c size=56 calls_out=2 calls_in=1
// strings: 

void FUN_00b91c3c(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)thunk_FUN_01be5118(0x10);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x10);
  }
  *(undefined1 *)(puVar1 + 3) = 0;
  *puVar1 = param_1;
  return;
}

