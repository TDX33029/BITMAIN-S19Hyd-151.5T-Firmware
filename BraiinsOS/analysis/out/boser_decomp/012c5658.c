// FUN_012c5658 @ 012c5658 size=172 calls_out=1 calls_in=4
// strings: 

void FUN_012c5658(char *param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = param_2[2];
  if (param_2[3] == iVar2) {
    FUN_012c66e0(param_1,param_2);
    if (*param_1 == '\x05') {
      *param_1 = '\x05';
      return;
    }
    if (*param_1 != '\x04') {
      return;
    }
    cVar1 = param_1[1];
  }
  else {
    iVar3 = *param_2;
    param_2[2] = iVar2 + 1;
    *param_1 = '\x04';
    cVar1 = *(char *)(iVar3 + iVar2);
    param_1[1] = cVar1;
  }
  iVar2 = param_2[7];
  if (cVar1 == '\n') {
    iVar3 = param_2[6];
    iVar4 = param_2[8];
    *param_1 = '\x04';
    param_2[6] = iVar3 + 1;
    param_2[7] = 0;
    param_2[8] = iVar2 + 1 + iVar4;
    return;
  }
  param_2[7] = iVar2 + 1;
  return;
}

