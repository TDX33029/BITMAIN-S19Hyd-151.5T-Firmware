// FUN_01b077f0 @ 01b077f0 size=164 calls_out=1 calls_in=0
// strings: 

bool FUN_01b077f0(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_01b2be38(**(undefined4 **)(param_1 + 8),**(undefined4 **)(param_2 + 8));
  if ((iVar1 == 0) &&
     (iVar1 = FUN_01b2be38(*(undefined4 *)(*(int *)(param_1 + 8) + 4),
                           *(undefined4 *)(*(int *)(param_2 + 8) + 4)), iVar1 == 0)) {
    iVar1 = FUN_01b2be38(*(undefined4 *)(*(int *)(param_1 + 8) + 8),
                         *(undefined4 *)(*(int *)(param_2 + 8) + 8));
    return iVar1 == 0;
  }
  return false;
}

