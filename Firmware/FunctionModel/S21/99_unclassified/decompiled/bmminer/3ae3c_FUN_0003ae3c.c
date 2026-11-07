// FUN_0003ae3c @ 0003ae3c  size=124  callers=0
// program: bmminer


bool FUN_0003ae3c(int param_1,int *param_2,int *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  
  iVar3 = *(int *)(param_1 + 0x70) + *param_4 * 0xc;
  bVar4 = *(int *)(iVar3 + 8) != 7;
  if (bVar4) {
    iVar3 = *(int *)(iVar3 + 4);
    *param_2 = *(int *)(param_1 + 0x18) + *(int *)(*(int *)(param_1 + 0x70) + *param_4 * 0xc);
    param_2[1] = iVar3;
    iVar3 = *param_4;
    *param_4 = iVar3 + 1;
    iVar3 = (iVar3 + 1) * 0xc;
    iVar1 = *(int *)(param_1 + 0x18);
    iVar2 = *(int *)(*(int *)(param_1 + 0x70) + iVar3);
    param_3[1] = *(int *)(*(int *)(param_1 + 0x70) + iVar3 + 4);
    *param_3 = iVar1 + iVar2;
  }
  return bVar4;
}

