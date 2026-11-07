// FUN_0166ef68 @ 0166ef68 size=192 calls_out=0 calls_in=5
// strings: 

void FUN_0166ef68(undefined4 *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  
  iVar2 = *(int *)(param_2 + 0xc);
  if (iVar2 == 0) {
    *(undefined1 *)((int)param_1 + 7) = 0;
    *(undefined2 *)((int)param_1 + 5) = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    *(undefined1 *)(param_1 + 1) = 0;
    param_1[2] = 4;
    *param_1 = 1;
    return;
  }
  pcVar3 = *(char **)(param_2 + 8);
  iVar4 = iVar2 + -1;
  cVar1 = *pcVar3;
  *(char **)(param_2 + 8) = pcVar3 + 1;
  *(int *)(param_2 + 0xc) = iVar4;
  if (cVar1 == '\n') {
LAB_0166efc4:
    *param_1 = 3;
    return;
  }
  if ((cVar1 == '\r') && (iVar4 != 0)) {
    cVar1 = pcVar3[1];
    *(char **)(param_2 + 8) = pcVar3 + 2;
    *(int *)(param_2 + 0xc) = iVar2 + -2;
    if (cVar1 == '\n') goto LAB_0166efc4;
    *(char **)(param_2 + 8) = pcVar3 + 1;
    *(int *)(param_2 + 0xc) = iVar4;
  }
  param_1[1] = 0;
  *param_1 = 1;
  param_1[2] = 4;
  param_1[3] = 0;
  param_1[4] = 0;
  return;
}

