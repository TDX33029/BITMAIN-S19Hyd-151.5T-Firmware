// FUN_01aed27c @ 01aed27c size=52 calls_out=1 calls_in=1
// strings: 

void FUN_01aed27c(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (-0x7fffffff < *(int *)(param_1 + iVar1)) {
      FUN_0134bd64(*(int *)(param_1 + iVar1),*(undefined4 *)(param_1 + iVar1 + 4));
    }
    iVar1 = iVar1 + 0x7c;
  } while (iVar1 != 0x2e8);
  return;
}

