// FUN_00f4329c @ 00f4329c size=120 calls_out=4 calls_in=3
// strings: 

void FUN_00f4329c(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = thunk_FUN_01be5118(0xb);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(1,0xb);
  }
  FUN_01bed4e2(iVar1,param_3,0xb);
  FUN_019bb7e0(*(undefined4 *)(param_2 + 0xc4),*(undefined4 *)(param_2 + 200));
  *(undefined4 *)(param_2 + 0xc4) = 0xb;
  *(int *)(param_2 + 200) = iVar1;
  *(undefined4 *)(param_2 + 0xcc) = 0xb;
  FUN_01bed4e2(param_1,param_2,0xd8);
  return;
}

