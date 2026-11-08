// FUN_00b7d750 @ 00b7d750 size=64 calls_out=2 calls_in=0
// strings: 

void FUN_00b7d750(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)thunk_FUN_01be5118(0x100);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0x100);
  }
  puVar1[0x3c] = param_1;
  puVar1[0x3d] = param_4;
  *(undefined1 *)(puVar1 + 0x3e) = 0;
  *puVar1 = param_2;
  puVar1[1] = param_3;
  return;
}

