// FUN_01266ec4 @ 01266ec4 size=72 calls_out=3 calls_in=1
// strings: Contact Braiins Support.struct ErrorEntrystruct SettingSchema

void FUN_01266ec4(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = thunk_FUN_01be5118(0x18);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(1,0x18);
  }
  FUN_01bed4e2(iVar1,"Contact Braiins Support.struct ErrorEntrystruct SettingSchema",0x18);
  *param_1 = 0x18;
  param_1[1] = iVar1;
  param_1[2] = 0x18;
  return;
}

