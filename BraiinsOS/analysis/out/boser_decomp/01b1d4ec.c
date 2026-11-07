// FUN_01b1d4ec @ 01b1d4ec size=112 calls_out=0 calls_in=2
// strings: 

int FUN_01b1d4ec(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar1 = 0;
  iVar2 = 0;
  do {
    iVar4 = *(int *)(param_2 + iVar2 * 4);
    if (iVar4 + 0x3ff00U < 0x7fe01) {
      uVar3 = (uint)(*(int *)(param_3 + iVar2 * 4) != 0);
      if (iVar4 != -0x3ff00) {
        uVar3 = 0;
      }
    }
    else {
      uVar3 = 1;
    }
    *(uint *)(param_1 + iVar2 * 4) = uVar3;
    iVar2 = iVar2 + 1;
    iVar1 = iVar1 + uVar3;
  } while (iVar2 != 0x100);
  return iVar1;
}

