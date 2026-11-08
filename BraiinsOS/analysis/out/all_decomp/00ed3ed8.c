// FUN_00ed3ed8 @ 00ed3ed8 size=124 calls_out=0 calls_in=4
// strings: 

void FUN_00ed3ed8(undefined1 *param_1,undefined4 *param_2)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  
  pcVar2 = (char *)*param_2;
  iVar3 = param_2[1];
  if (iVar3 == 0) {
    *param_1 = 5;
    *param_2 = pcVar2;
    return;
  }
  cVar1 = *pcVar2;
  param_1[1] = cVar1;
  *param_2 = pcVar2 + 1;
  param_2[1] = iVar3 + -1;
  iVar3 = param_2[3];
  *param_1 = 4;
  if (cVar1 == '\n') {
    param_2[2] = param_2[2] + 1;
    param_2[3] = 0;
    param_2[4] = iVar3 + 1 + param_2[4];
    return;
  }
  param_2[3] = iVar3 + 1;
  return;
}

