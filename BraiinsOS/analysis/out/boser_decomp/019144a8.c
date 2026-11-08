// FUN_019144a8 @ 019144a8 size=68 calls_out=2 calls_in=0
// strings: 

void FUN_019144a8(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = param_1[2];
  iVar2 = *param_1;
  iVar3 = param_1[1] + 1;
  iVar1 = iVar2;
  while (iVar3 = iVar3 + -1, iVar3 != 0) {
    FUN_018e2294(iVar1);
    iVar1 = iVar1 + 0x18;
  }
  FUN_0134aee0(iVar4,iVar2,4,0x18);
  return;
}

