// FUN_013e0464 @ 013e0464 size=92 calls_out=2 calls_in=0
// strings: 

void FUN_013e0464(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)thunk_FUN_016d4a50(0x34);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x34);
  }
  *puVar1 = 1;
  puVar1[1] = 0;
  puVar1[2] = 1;
  puVar1[3] = 0;
  puVar1[4] = 1;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  *(undefined1 *)((int)puVar1 + 0x32) = 0;
  *(undefined2 *)(puVar1 + 0xc) = 1;
  return;
}

