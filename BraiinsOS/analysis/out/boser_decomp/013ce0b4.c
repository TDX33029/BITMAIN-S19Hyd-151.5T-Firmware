// FUN_013ce0b4 @ 013ce0b4 size=264 calls_out=1 calls_in=2
// strings: 

int * FUN_013ce0b4(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  
  if (param_1[8] == 0) {
    return (int *)0x0;
  }
  param_1[8] = param_1[8] + -1;
  if (*param_1 != 1) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0cc(&DAT_01d2ffe0);
  }
  piVar2 = (int *)param_1[1];
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)param_1[2];
    for (iVar4 = param_1[3]; iVar4 != 0; iVar4 = iVar4 + -1) {
      piVar2 = (int *)piVar2[0xd];
    }
    uVar5 = 0;
    *param_1 = 1;
    param_1[1] = (int)piVar2;
    param_1[2] = 0;
    iVar4 = 0;
    param_1[3] = 0;
  }
  else {
    iVar4 = param_1[2];
    uVar5 = param_1[3];
  }
  piVar3 = piVar2;
  if (*(ushort *)((int)piVar2 + 0x32) <= uVar5) {
    do {
      piVar2 = (int *)*piVar3;
      if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0cc(&DAT_01d2fff0);
      }
      uVar5 = (uint)*(ushort *)(piVar3 + 0xc);
      iVar4 = iVar4 + 1;
      piVar3 = piVar2;
    } while (*(ushort *)((int)piVar2 + 0x32) <= uVar5);
  }
  if (iVar4 == 0) {
    iVar4 = uVar5 + 1;
    piVar3 = piVar2;
  }
  else {
    piVar1 = piVar2 + uVar5 + 0xe;
    do {
      piVar3 = (int *)*piVar1;
      iVar4 = iVar4 + -1;
      piVar1 = piVar3 + 0xd;
    } while (iVar4 != 0);
    iVar4 = 0;
  }
  param_1[1] = (int)piVar3;
  param_1[2] = 0;
  param_1[3] = iVar4;
  return piVar2 + uVar5 + 1;
}

