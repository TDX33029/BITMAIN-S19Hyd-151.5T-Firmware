// FUN_015fb920 @ 015fb920 size=92 calls_out=1 calls_in=2
// strings: 

bool FUN_015fb920(char *param_1,char *param_2)

{
  int iVar1;
  bool bVar2;
  
  bVar2 = false;
  if (*param_1 == *param_2) {
    if (*param_1 == '\0') {
      bVar2 = *(int *)(param_1 + 1) == *(int *)(param_2 + 1);
    }
    else {
      iVar1 = thunk_FUN_01bed842(param_1 + 1,param_2 + 1,0x10);
      bVar2 = iVar1 == 0;
    }
  }
  return bVar2;
}

