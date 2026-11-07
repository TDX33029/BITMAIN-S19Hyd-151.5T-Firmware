// FUN_01a4e62c @ 01a4e62c size=84 calls_out=0 calls_in=7
// strings: 

void FUN_01a4e62c(undefined4 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(param_2 + 8);
  iVar3 = *(int *)(param_2 + 0xc);
  iVar1 = 0;
  if (iVar3 != 0) {
    do {
      if (*(char *)(iVar2 + iVar1) != ' ' && *(char *)(iVar2 + iVar1) != '\t') goto LAB_01a4e660;
      iVar1 = iVar1 + 1;
    } while (iVar3 != iVar1);
    iVar1 = iVar3;
  }
LAB_01a4e660:
  *(int *)(param_2 + 8) = iVar2 + iVar1;
  *(int *)(param_2 + 0xc) = iVar3 - iVar1;
  *param_1 = 3;
  param_1[1] = iVar2;
  param_1[2] = iVar1;
  return;
}

