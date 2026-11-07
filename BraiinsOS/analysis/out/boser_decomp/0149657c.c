// FUN_0149657c @ 0149657c size=152 calls_out=4 calls_in=47
// strings: 

void FUN_0149657c(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar1 = FUN_01298504(param_4,1);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(1,param_4);
  }
  FUN_01bed4e2(iVar1,param_3,param_4);
  iVar3 = *(int *)(param_2 + 0xf0);
  if (iVar3 == *(int *)(param_2 + 0xe8)) {
    FUN_019abd3c();
  }
  *(int *)(param_2 + 0xf0) = iVar3 + 1;
  puVar2 = (undefined4 *)(*(int *)(param_2 + 0xec) + iVar3 * 0xc);
  *puVar2 = param_4;
  puVar2[1] = iVar1;
  puVar2[2] = param_4;
  FUN_01bed4e2(param_1,param_2,0x178);
  return;
}

