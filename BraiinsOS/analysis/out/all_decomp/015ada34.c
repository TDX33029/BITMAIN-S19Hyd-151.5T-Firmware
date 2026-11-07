// FUN_015ada34 @ 015ada34 size=136 calls_out=2 calls_in=1
// strings: 

void FUN_015ada34(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  if (param_2 != 0) {
    iVar6 = 0;
    do {
      piVar1 = (int *)(param_1 + iVar6 * 8);
      iVar5 = *piVar1;
      iVar6 = iVar6 + 1;
      iVar4 = piVar1[1];
      iVar3 = iVar4 + 1;
      iVar2 = iVar5;
      while (iVar3 = iVar3 + -1, iVar3 != 0) {
        FUN_015ad50c(iVar2);
        iVar2 = iVar2 + 0x1c;
      }
      if (iVar4 != 0) {
        thunk_FUN_016d3fb4(iVar5);
      }
    } while (iVar6 != param_2);
  }
  return;
}

