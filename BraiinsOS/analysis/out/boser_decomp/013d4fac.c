// FUN_013d4fac @ 013d4fac size=64 calls_out=2 calls_in=2
// strings: 

void FUN_013d4fac(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)thunk_FUN_01be5118(0x68);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0x68);
  }
  *puVar1 = param_1;
  *(undefined1 *)(puVar1 + 0x18) = 0;
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  return;
}

