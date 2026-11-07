// FUN_019ee374 @ 019ee374 size=60 calls_out=2 calls_in=2
// strings: 

void FUN_019ee374(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)thunk_FUN_01be5118(0x14);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x14);
  }
  *(undefined1 *)(puVar1 + 4) = 0;
  *puVar1 = 1;
  puVar1[1] = 1;
  puVar1[2] = 0;
  puVar1[3] = 0;
  return;
}

