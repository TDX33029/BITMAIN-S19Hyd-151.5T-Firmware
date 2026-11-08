// FUN_006bd5f4 @ 006bd5f4 size=192 calls_out=2 calls_in=2
// strings: 

void FUN_006bd5f4(int *param_1,int *param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  uVar2 = 8;
  if (param_1[4] < 0) {
    uVar2 = param_1[4] ^ 0x80000000;
  }
  if (uVar2 == 0) {
    iVar5 = param_2[2];
    iVar3 = *param_1;
    iVar4 = param_1[1];
    if (iVar5 == *param_2) {
      FUN_01aa1bc0(param_2);
    }
    piVar1 = (int *)(param_2[1] + iVar5 * 8);
    *piVar1 = iVar3 + 8;
    piVar1[1] = iVar4;
    param_2[2] = iVar5 + 1;
    return;
  }
  if (uVar2 == 7) {
    if (param_1[2] != 0) {
      iVar4 = param_1[1];
      iVar3 = param_1[2] * 0x30;
      do {
        FUN_006bd5f4(iVar4,param_2);
        iVar4 = iVar4 + 0x30;
        iVar3 = iVar3 + -0x30;
      } while (iVar3 != 0);
    }
  }
  else if (uVar2 == 8) {
    iVar4 = param_1[5];
    for (iVar3 = param_1[6] << 6; iVar3 != 0; iVar3 = iVar3 + -0x40) {
      FUN_006bd5f4(iVar4,param_2);
      iVar4 = iVar4 + 0x40;
    }
  }
  return;
}

