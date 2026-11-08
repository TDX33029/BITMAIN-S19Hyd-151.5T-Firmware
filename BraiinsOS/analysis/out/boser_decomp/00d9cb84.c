// FUN_00d9cb84 @ 00d9cb84 size=72 calls_out=3 calls_in=1
// strings: 

void FUN_00d9cb84(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = thunk_FUN_01be5118(0x37);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(1,0x37);
  }
  FUN_01bed4e2(iVar1,&DAT_003ef8a0,0x37);
  *param_1 = 0x37;
  param_1[1] = iVar1;
  param_1[2] = 0x37;
  return;
}

