// FUN_011ef738 @ 011ef738 size=204 calls_out=2 calls_in=15
// strings: 

void FUN_011ef738(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  char local_19;
  
  uVar5 = *param_2;
  local_19 = '\0';
  while (iVar1 = FUN_016e0250(uVar5,&local_19,1), iVar1 == -1) {
    piVar2 = (int *)FUN_016d2bc8();
    iVar1 = *piVar2;
    if (iVar1 != 4) {
      *param_1 = 0;
      param_1[1] = iVar1;
      return;
    }
  }
  if (iVar1 == 0) {
    *(undefined1 *)param_1 = 5;
    return;
  }
  *(char *)((int)param_1 + 1) = local_19;
  *(undefined1 *)param_1 = 4;
  if (local_19 == '\n') {
    iVar1 = param_2[1];
    iVar3 = param_2[2];
    iVar4 = param_2[3];
    *(undefined2 *)param_1 = 0xa04;
    param_2[1] = iVar1 + 1;
    param_2[2] = 0;
    param_2[3] = iVar3 + iVar4 + 1;
    return;
  }
  param_2[2] = param_2[2] + 1;
  return;
}

