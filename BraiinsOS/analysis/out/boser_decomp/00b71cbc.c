// FUN_00b71cbc @ 00b71cbc size=56 calls_out=2 calls_in=1
// strings: 

void FUN_00b71cbc(undefined4 param_1,undefined1 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)thunk_FUN_01be5118(8);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,8);
  }
  *(undefined1 *)((int)puVar1 + 5) = param_2;
  *(undefined1 *)(puVar1 + 1) = 0;
  *puVar1 = param_1;
  return;
}

