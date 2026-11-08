// FUN_019b9cbc @ 019b9cbc size=76 calls_out=2 calls_in=0
// strings: 

void FUN_019b9cbc(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_1[1];
  iVar3 = param_1[2];
  if (iVar3 != 0) {
    iVar1 = iVar2;
    do {
      FUN_019b9a04(iVar1);
      iVar1 = iVar1 + 0x1c;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  if (*param_1 == 0) {
    return;
  }
  thunk_FUN_01be4678(iVar2);
  return;
}

