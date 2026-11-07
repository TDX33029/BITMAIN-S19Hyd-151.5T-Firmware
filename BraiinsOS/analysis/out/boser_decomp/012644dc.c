// FUN_012644dc @ 012644dc size=156 calls_out=4 calls_in=1
// strings: 

void FUN_012644dc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  int iStack_28;
  undefined4 uStack_24;
  
  iVar1 = thunk_FUN_01be5118(0xd);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(1,0xd);
  }
  FUN_01bed4e2(iVar1,param_3,0xd);
  local_2c = 0xd;
  uStack_24 = 0xd;
  local_30 = 0;
  local_34 = 4;
  local_38 = 0;
  local_3c = param_4;
  iStack_28 = iVar1;
  FUN_01ab05d8(param_2,&local_3c);
  FUN_01bed4e2(param_1,param_2,0xec);
  return;
}

