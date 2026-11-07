// FUN_00a9a1e4 @ 00a9a1e4 size=124 calls_out=0 calls_in=1
// strings: 

void FUN_00a9a1e4(undefined4 *param_1,int param_2,char *param_3)

{
  int iVar1;
  char *pcVar2;
  
  iVar1 = *(int *)(param_2 + 0xc);
  if ((((iVar1 == 0) || (pcVar2 = *(char **)(param_2 + 8), *param_3 != *pcVar2)) || (iVar1 == 1)) ||
     (param_3[1] != pcVar2[1])) {
    *param_1 = 1;
    param_1[1] = 0;
    param_1[2] = 4;
    param_1[3] = 0;
    param_1[4] = 0;
    return;
  }
  *(char **)(param_2 + 8) = pcVar2 + 2;
  *(int *)(param_2 + 0xc) = iVar1 + -2;
  param_1[2] = 2;
  *param_1 = 3;
  param_1[1] = pcVar2;
  return;
}

