// FUN_00e71a98 @ 00e71a98 size=148 calls_out=1 calls_in=0
// strings: 

void FUN_00e71a98(int *param_1,char param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *param_1;
  iVar1 = param_1[2];
  if (param_2 == '\0') {
    if (iVar2 != iVar1) {
      param_2 = '\0';
      goto LAB_00e71aec;
    }
  }
  else if (param_2 == '\x01') {
    if (iVar2 != iVar1) {
      param_2 = '\x01';
      goto LAB_00e71aec;
    }
  }
  else if (iVar2 != iVar1) {
    param_2 = '\x02';
    goto LAB_00e71aec;
  }
  FUN_00edff4c(param_1,iVar1,1,1,1);
  iVar1 = param_1[2];
LAB_00e71aec:
  *(char *)(param_1[1] + iVar1) = param_2;
  param_1[2] = iVar1 + 1;
  return;
}

