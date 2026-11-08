// FUN_016f1f2c @ 016f1f2c size=192 calls_out=0 calls_in=2
// strings: 

void FUN_016f1f2c(undefined4 *param_1,uint param_2,uint *param_3)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  
  if ((param_2 & 1) != 0) {
    uVar3 = *param_3;
    uVar4 = param_3[1];
    *param_1 = 2;
    param_1[1] = param_3;
    param_1[2] = uVar3;
    param_1[3] = uVar4;
    return;
  }
  iVar1 = 2;
  if (0x10 < *param_3 >> 0x10) {
    iVar1 = *param_3 - 0x110000;
  }
  if (iVar1 == 6) {
    piVar2 = (int *)param_3[1];
    if (*piVar2 == 0x110008) {
      *param_1 = 1;
      param_1[1] = piVar2 + 1;
      return;
    }
    *param_1 = 0;
    param_1[1] = piVar2;
    param_1[2] = 4;
    param_1[3] = 0;
    return;
  }
  if ((iVar1 == 7) && (uVar3 = param_3[3], uVar3 != 0)) {
    uVar4 = param_3[2];
    *param_1 = 0;
    param_1[1] = uVar4;
    param_1[2] = uVar4 + 0x58;
    param_1[3] = uVar3 - 1;
    return;
  }
  *param_1 = 4;
  return;
}

