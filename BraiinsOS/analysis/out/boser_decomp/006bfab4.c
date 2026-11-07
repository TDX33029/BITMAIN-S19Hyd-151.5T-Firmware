// FUN_006bfab4 @ 006bfab4 size=200 calls_out=1 calls_in=2
// strings: 

void FUN_006bfab4(int *param_1,int param_2,uint param_3,int param_4,undefined4 param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  if (param_3 < 2) {
    return;
  }
  piVar1 = (int *)(param_2 + param_3 * 4 + -8);
  iVar2 = 0;
  if (piVar1 != (int *)0x0) {
    iVar2 = *piVar1;
  }
  if (piVar1 != (int *)0x0 && iVar2 != 0) {
    uVar4 = 2;
    if ((int)*(uint *)(iVar2 + 0x10) < 0) {
      uVar4 = *(uint *)(iVar2 + 0x10) ^ 0x80000000;
    }
    if (uVar4 != 2) {
      if (uVar4 != 1) {
        return;
      }
      iVar2 = iVar2 + 0x18;
    }
    piVar1 = (int *)FUN_006e05dc(iVar2,param_4 + 8,param_5);
    if (piVar1 != (int *)0x0) {
      iVar2 = *param_1;
      if (iVar2 == -1) {
        iVar3 = -1;
      }
      else {
        iVar5 = *piVar1;
        if (iVar5 == -1) {
          iVar3 = iVar5;
        }
        else {
          iVar3 = iVar2;
          if (iVar5 != 0) {
            if (iVar5 < iVar2) {
              iVar3 = iVar5;
            }
            if (iVar2 == 0) {
              iVar3 = iVar5;
            }
          }
        }
      }
      *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) & *(byte *)(piVar1 + 1);
      *param_1 = iVar3;
    }
  }
  return;
}

