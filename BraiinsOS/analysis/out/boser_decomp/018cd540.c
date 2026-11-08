// FUN_018cd540 @ 018cd540 size=132 calls_out=1 calls_in=3
// strings: 

bool FUN_018cd540(char *param_1,char *param_2)

{
  int iVar1;
  
  if (*param_1 != *param_2) {
    return false;
  }
  if (*param_1 == '\0') {
    iVar1 = *(int *)(param_1 + 0xc);
    if (iVar1 != *(int *)(param_2 + 0xc)) {
      return false;
    }
    param_1 = *(char **)(param_1 + 8);
    param_2 = *(char **)(param_2 + 8);
  }
  else {
    if (param_1[1] != param_2[1]) {
      return false;
    }
    if (param_1[1] == '\0') {
      iVar1 = *(int *)(param_1 + 2) - *(int *)(param_2 + 2);
      goto LAB_018cd5a8;
    }
    param_1 = param_1 + 2;
    param_2 = param_2 + 2;
    iVar1 = 0x10;
  }
  iVar1 = thunk_FUN_01bed842(param_1,param_2,iVar1);
LAB_018cd5a8:
  return iVar1 == 0;
}

