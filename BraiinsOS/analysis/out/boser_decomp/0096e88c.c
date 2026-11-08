// FUN_0096e88c @ 0096e88c size=148 calls_out=5 calls_in=0
// strings: 

void FUN_0096e88c(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined1 *local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 *local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  local_40 = (undefined1 *)thunk_FUN_01be5118(0x80);
  if (local_40 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(1);
  }
  local_34 = 1;
  local_38 = 0x80;
  local_3c = 0;
  local_30 = (undefined1 *)&local_40;
  uVar1 = FUN_0096addc(param_2,&local_30);
  local_30 = local_40;
  uStack_2c = local_3c;
  uStack_28 = local_38;
  uStack_24 = local_34;
  FUN_00710a2c(param_1,&local_30,uVar1);
  FUN_00db4764(param_2);
  return;
}

