// FUN_00b8c768 @ 00b8c768 size=72 calls_out=3 calls_in=3
// strings: /etc/init.d/S99bosminer

void FUN_00b8c768(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = thunk_FUN_01be5118(0x17);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(1,0x17);
  }
  FUN_01bed4e2(iVar1,"/etc/init.d/S99bosminer",0x17);
  *param_1 = 0x17;
  param_1[1] = iVar1;
  param_1[2] = 0x17;
  return;
}

