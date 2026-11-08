// FUN_006bfb7c @ 006bfb7c size=152 calls_out=0 calls_in=2
// strings: 

void FUN_006bfb7c(int *param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (param_3 != 0) {
    piVar1 = (int *)(param_2 + param_3 * 4 + -4);
    iVar2 = 0;
    if (piVar1 != (int *)0x0) {
      iVar2 = *piVar1;
    }
    if (piVar1 != (int *)0x0 && iVar2 != 0) {
      if (*(int *)(iVar2 + 0x10) != -0x7fffffff) {
        return;
      }
      iVar5 = *param_1;
      if (iVar5 == -1) {
        iVar3 = -1;
      }
      else {
        iVar4 = *(int *)(iVar2 + 0x48);
        if (iVar4 == -1) {
          iVar3 = iVar4;
        }
        else {
          iVar3 = iVar5;
          if (iVar4 != 0) {
            if (iVar4 < iVar5) {
              iVar3 = iVar4;
            }
            if (iVar5 == 0) {
              iVar3 = iVar4;
            }
          }
        }
      }
      *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) & *(byte *)(iVar2 + 0x4c);
      *param_1 = iVar3;
      return;
    }
  }
  return;
}

