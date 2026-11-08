// FUN_00b5a49c @ 00b5a49c size=120 calls_out=4 calls_in=1
// strings: 

void FUN_00b5a49c(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_2a [10];
  undefined4 local_20;
  int local_1c;
  undefined4 local_18;
  
  iVar1 = thunk_FUN_01be5118(10);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(1,10);
  }
  local_18 = 0;
  local_20 = 10;
  local_1c = iVar1;
  iVar2 = FUN_012fc81c(0,auStack_2a);
  FUN_01bed4e2(iVar1,auStack_2a + iVar2,10 - iVar2);
  *param_1 = local_20;
  param_1[1] = local_1c;
  param_1[2] = 10 - iVar2;
  return;
}

