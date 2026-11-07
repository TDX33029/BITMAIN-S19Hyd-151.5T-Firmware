// FUN_01afcf38 @ 01afcf38 size=148 calls_out=2 calls_in=4
// strings: 

int FUN_01afcf38(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  iVar1 = FUN_01afca7c();
  if (iVar1 != 0) {
    if (*(char *)(param_1 + 4) == '\0') {
      param_1 = param_1 + 8;
    }
    else {
      param_1 = *(int *)(param_1 + 8);
    }
    iVar1 = FUN_01afc604(param_1,param_2,param_3);
    if (iVar1 != 0) {
      *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + param_3;
      return iVar1;
    }
  }
  return 0;
}

