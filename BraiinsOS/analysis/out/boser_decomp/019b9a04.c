// FUN_019b9a04 @ 019b9a04 size=136 calls_out=2 calls_in=1
// strings: 

void FUN_019b9a04(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  
  iVar3 = *(int *)(param_1 + 0x18);
  iVar4 = *(int *)(param_1 + 0x14);
  if (iVar3 != 0) {
    piVar2 = (int *)(iVar4 + 0x14);
    do {
      if ((piVar2[3] & 0x7fffffffU) != 0) {
        thunk_FUN_01be4678(piVar2[4]);
      }
      iVar1 = piVar2[-1];
      bVar5 = iVar1 != 2;
      if (bVar5) {
        iVar1 = *piVar2;
      }
      if (bVar5 && iVar1 != 0) {
        thunk_FUN_01be4678(piVar2[1]);
      }
      piVar2 = piVar2 + 0xb;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    return;
  }
  thunk_FUN_01be4678(iVar4);
  return;
}

