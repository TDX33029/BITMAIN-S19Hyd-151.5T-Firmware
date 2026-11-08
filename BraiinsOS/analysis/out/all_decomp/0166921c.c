// FUN_0166921c @ 0166921c size=144 calls_out=0 calls_in=1
// strings: 

void FUN_0166921c(undefined4 *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(param_2 + 0xc);
  if (iVar2 == 0) {
LAB_0166928c:
    *param_1 = 1;
    param_1[1] = 0;
    param_1[2] = 4;
    param_1[3] = 0;
    param_1[4] = 0;
    return;
  }
  iVar3 = *(int *)(param_2 + 8);
  iVar1 = 0;
  do {
    if (*(char *)(param_3 + iVar1) != *(char *)(iVar3 + iVar1)) {
      if ((iVar1 == 0) || (iVar2 == 0)) goto LAB_0166928c;
      break;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 != 1);
  *(int *)(param_2 + 8) = iVar3 + 1;
  *(int *)(param_2 + 0xc) = iVar2 + -1;
  param_1[2] = 1;
  *param_1 = 3;
  param_1[1] = iVar3;
  return;
}

