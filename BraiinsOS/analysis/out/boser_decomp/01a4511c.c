// FUN_01a4511c @ 01a4511c size=148 calls_out=0 calls_in=2
// strings: 

void FUN_01a4511c(undefined4 *param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = *(uint *)(param_2 + 0xc);
  uVar1 = uVar3;
  if (1 < uVar3) {
    uVar1 = 2;
  }
  if (uVar3 != 0) {
    iVar4 = *(int *)(param_2 + 8);
    uVar2 = 0;
    do {
      if (*(char *)(param_3 + uVar2) != *(char *)(iVar4 + uVar2)) {
        if (uVar2 < uVar1) goto LAB_01a45190;
        break;
      }
      uVar2 = uVar2 + 1;
    } while (uVar1 != uVar2);
    if (uVar3 != 1) {
      *(int *)(param_2 + 8) = iVar4 + 2;
      *(uint *)(param_2 + 0xc) = uVar3 - 2;
      param_1[2] = 2;
      *param_1 = 3;
      param_1[1] = iVar4;
      return;
    }
  }
LAB_01a45190:
  *param_1 = 1;
  param_1[1] = 0;
  param_1[2] = 4;
  param_1[3] = 0;
  param_1[4] = 0;
  return;
}

