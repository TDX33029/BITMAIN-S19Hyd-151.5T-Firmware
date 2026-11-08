// FUN_01b5b704 @ 01b5b704 size=192 calls_out=2 calls_in=1
// strings: 

bool FUN_01b5b704(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (param_1 == 0 || param_2 == 0) {
    return false;
  }
  *(int *)(param_2 + 0xcc) = param_3;
  if (param_3 == 0) {
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

