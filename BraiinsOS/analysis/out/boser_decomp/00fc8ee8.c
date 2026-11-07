// FUN_00fc8ee8 @ 00fc8ee8 size=92 calls_out=4 calls_in=1
// strings: there are extra bytes after body has been decompressedapplication/x-www-form-urlencoded

void FUN_00fc8ee8(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = thunk_FUN_01be5118(0x36);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(1,0x36);
  }
  FUN_01bed4e2(iVar1,
               "there are extra bytes after body has been decompressedapplication/x-www-form-urlencoded"
               ,0x36);
  puVar2 = (undefined4 *)thunk_FUN_01be5118(0xc);
  if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0xc);
  }
  *puVar2 = 0x36;
  puVar2[1] = iVar1;
  puVar2[2] = 0x36;
  return;
}

