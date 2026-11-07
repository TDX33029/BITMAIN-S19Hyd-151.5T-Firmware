// FUN_00b7c208 @ 00b7c208 size=64 calls_out=2 calls_in=2
// strings: 

void FUN_00b7c208(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)thunk_FUN_01be5118(0x18);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x18);
  }
  *puVar1 = param_1;
  *(undefined1 *)(puVar1 + 5) = 0;
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  return;
}

