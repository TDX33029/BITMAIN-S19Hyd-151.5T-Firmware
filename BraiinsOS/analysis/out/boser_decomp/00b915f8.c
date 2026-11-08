// FUN_00b915f8 @ 00b915f8 size=56 calls_out=2 calls_in=0
// strings: 

void FUN_00b915f8(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)thunk_FUN_01be5118(0xc);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0xc);
  }
  *(undefined1 *)(puVar1 + 2) = 0;
  *puVar1 = param_1;
  return;
}

