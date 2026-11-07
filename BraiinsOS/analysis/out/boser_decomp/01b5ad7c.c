// FUN_01b5ad7c @ 01b5ad7c size=192 calls_out=2 calls_in=3
// strings: 

bool FUN_01b5ad7c(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0 || param_1 == 0) {
    return false;
  }
  if (*(int *)(param_2 + 0xcc) == 0) {
    return true;
  }
  iVar1 = FUN_01b59a48(param_2);
  if (iVar1 != 0) {
    FUN_01b59b24(param_2,param_1,*(undefined4 *)(param_2 + 0xcc),*(undefined4 *)(param_2 + 200),
                 *(undefined1 *)(param_2 + 0x17d));
    *(undefined1 *)(param_2 + 0x17d) = 2;
  }
  return iVar1 != 0;
}

