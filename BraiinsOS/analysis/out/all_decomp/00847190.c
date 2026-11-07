// FUN_00847190 @ 00847190 size=84 calls_out=2 calls_in=0
// strings: 

void FUN_00847190(undefined4 param_1,undefined1 param_2,undefined1 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)thunk_FUN_016d4a50(0x90);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0x90);
  }
  *(undefined1 *)(puVar1 + 7) = param_3;
  *(undefined1 *)((int)puVar1 + 0x1b) = param_2;
  *(undefined1 *)((int)puVar1 + 0x1a) = 0;
  puVar1[5] = param_1;
  *puVar1 = param_4;
  puVar1[1] = param_5;
  return;
}

