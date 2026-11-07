// FUN_01a45008 @ 01a45008 size=136 calls_out=0 calls_in=2
// strings: 

void FUN_01a45008(undefined4 *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_2 + 0xc) == 0) {
LAB_01a45050:
    *param_1 = 1;
    param_1[1] = 0;
    param_1[2] = 4;
    param_1[3] = 0;
    param_1[4] = 0;
    return;
  }
  iVar2 = *(int *)(param_2 + 8);
  iVar1 = 0;
  do {
    if (*(char *)(param_3 + iVar1) != *(char *)(iVar2 + iVar1)) {
      if (iVar1 == 0) goto LAB_01a45050;
      break;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 != 1);
  *(int *)(param_2 + 8) = iVar2 + 1;
  *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + -1;
  param_1[2] = 1;
  *param_1 = 3;
  param_1[1] = iVar2;
  return;
}

