// FUN_0003aeb8 @ 0003aeb8  size=268  callers=0
// program: bmminer


undefined4 FUN_0003aeb8(int param_1,int *param_2,int *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  if (*param_4 == 0) {
    if (0 < *(int *)(param_1 + 0x78)) {
      piVar4 = *(int **)(param_1 + 0x70);
      if (piVar4[2] != 4) {
        iVar2 = 0xc;
        iVar3 = 1;
        do {
          *param_4 = iVar3;
          if (*(int *)(param_1 + 0x78) <= iVar3) {
            return 0;
          }
          piVar4 = (int *)(*(int *)(param_1 + 0x70) + iVar2);
          iVar2 = iVar2 + 0xc;
          iVar3 = iVar3 + 1;
        } while (piVar4[2] != 4);
      }
      iVar3 = piVar4[1];
      *param_2 = *(int *)(param_1 + 0x18) + *piVar4;
      param_2[1] = iVar3;
LAB_0003af68:
      iVar3 = *param_4;
      *param_4 = iVar3 + 1;
      iVar3 = (iVar3 + 1) * 0xc;
      iVar2 = *(int *)(param_1 + 0x18);
      iVar1 = *(int *)(*(int *)(param_1 + 0x70) + iVar3);
      param_3[1] = *(int *)(*(int *)(param_1 + 0x70) + iVar3 + 4);
      *param_3 = iVar2 + iVar1;
      return 1;
    }
  }
  else {
    iVar3 = *param_4 + 1;
    *param_4 = iVar3;
    iVar3 = iVar3 * 0xc;
    iVar2 = *(int *)(param_1 + 0x70) + iVar3;
    if (*(int *)(iVar2 + 8) != 7) {
      iVar2 = *(int *)(iVar2 + 4);
      *param_2 = *(int *)(param_1 + 0x18) + *(int *)(*(int *)(param_1 + 0x70) + iVar3);
      param_2[1] = iVar2;
      goto LAB_0003af68;
    }
  }
  return 0;
}

