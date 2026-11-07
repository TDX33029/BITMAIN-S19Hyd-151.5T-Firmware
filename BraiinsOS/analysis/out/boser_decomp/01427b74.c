// FUN_01427b74 @ 01427b74 size=56 calls_out=2 calls_in=50
// strings: 

void FUN_01427b74(undefined1 param_1,undefined1 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)thunk_FUN_01be5118(0xc);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0xc);
  }
  *(undefined1 *)((int)puVar1 + 9) = param_2;
  *(undefined1 *)(puVar1 + 2) = param_1;
  *puVar1 = 0;
  return;
}

