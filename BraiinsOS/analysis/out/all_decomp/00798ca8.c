// FUN_00798ca8 @ 00798ca8 size=56 calls_out=2 calls_in=0
// strings: 

void FUN_00798ca8(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)thunk_FUN_016d4a50(0x10);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x10);
  }
  *(undefined1 *)(puVar1 + 3) = 0;
  *puVar1 = param_1;
  return;
}

