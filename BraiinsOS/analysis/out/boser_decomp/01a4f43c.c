// FUN_01a4f43c @ 01a4f43c size=228 calls_out=0 calls_in=7
// strings: 

void FUN_01a4f43c(undefined4 *param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  
  iVar3 = *(int *)(param_2 + 0xc);
  if (iVar3 == 0) {
    *(undefined1 *)((int)param_1 + 7) = 0;
    *(undefined2 *)((int)param_1 + 5) = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    *(undefined1 *)(param_1 + 1) = 0;
    param_1[2] = 4;
    *param_1 = 1;
    return;
  }
  pcVar4 = *(char **)(param_2 + 8);
  iVar5 = iVar3 + -1;
  cVar1 = *pcVar4;
  *(char **)(param_2 + 8) = pcVar4 + 1;
  *(int *)(param_2 + 0xc) = iVar5;
  if (cVar1 == '\n') {
LAB_01a4f498:
    uVar2 = 3;
  }
  else {
    if (cVar1 != '\r') {
      *param_1 = 1;
      param_1[1] = 0;
      param_1[2] = 4;
      param_1[3] = 0;
      param_1[4] = 0;
      return;
    }
    if (iVar5 != 0) {
      cVar1 = pcVar4[1];
      *(char **)(param_2 + 8) = pcVar4 + 2;
      *(int *)(param_2 + 0xc) = iVar3 + -2;
      if (cVar1 == '\n') goto LAB_01a4f498;
      *(char **)(param_2 + 8) = pcVar4 + 1;
      *(int *)(param_2 + 0xc) = iVar5;
    }
    *(undefined1 *)((int)param_1 + 7) = 0;
    *(undefined2 *)((int)param_1 + 5) = 0;
    param_1[2] = 4;
    param_1[3] = 0;
    param_1[4] = 0;
    *(undefined1 *)(param_1 + 1) = 0;
    uVar2 = 1;
  }
  *param_1 = uVar2;
  return;
}

