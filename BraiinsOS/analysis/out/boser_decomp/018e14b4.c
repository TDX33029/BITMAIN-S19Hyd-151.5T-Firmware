// FUN_018e14b4 @ 018e14b4 size=124 calls_out=2 calls_in=0
// strings: 

void FUN_018e14b4(int param_1)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  *(undefined2 *)(param_1 + 0xae) = 0x101;
  while( true ) {
    if (*(int *)(param_1 + 0x5c) == 0) {
      return;
    }
    uVar3 = *(int *)(param_1 + 0x58) + 1;
    piVar1 = (int *)(*(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x58) * 0xc);
    iVar4 = *piVar1;
    uVar2 = uVar3 - *(uint *)(param_1 + 0x50);
    if (uVar3 < *(uint *)(param_1 + 0x50)) {
      uVar2 = uVar3;
    }
    *(uint *)(param_1 + 0x58) = uVar2;
    iVar5 = piVar1[1];
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + -1;
    if (iVar4 == -0x80000000) break;
    FUN_018e1548(param_1,iVar5,piVar1[2],1);
    FUN_0134bd64(iVar4,iVar5);
  }
  return;
}

