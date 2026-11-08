// FUN_00adfcfc @ 00adfcfc size=136 calls_out=4 calls_in=9
// strings: 

void FUN_00adfcfc(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  if (param_4 == 0) {
    iVar1 = 1;
    iVar2 = 0;
  }
  else {
    iVar1 = FUN_01298504(param_4,1);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,param_4);
    }
    iVar2 = param_4;
  }
  FUN_01bed4e2(iVar1,param_3,param_4);
  FUN_019bb7e0(*(undefined4 *)(param_2 + 0x38),*(undefined4 *)(param_2 + 0x3c));
  *(int *)(param_2 + 0x38) = iVar2;
  *(int *)(param_2 + 0x3c) = iVar1;
  *(int *)(param_2 + 0x40) = param_4;
  FUN_01bed4e2(param_1,param_2,0x48);
  return;
}

