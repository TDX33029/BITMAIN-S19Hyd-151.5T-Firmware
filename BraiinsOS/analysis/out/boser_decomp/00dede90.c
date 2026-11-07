// FUN_00dede90 @ 00dede90 size=68 calls_out=2 calls_in=0
// strings: 

void FUN_00dede90(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = *param_1;
  iVar2 = param_1[2];
  iVar3 = iVar1;
  for (iVar4 = param_1[1]; iVar4 != 0; iVar4 = iVar4 + -1) {
    FUN_00949bc0(iVar3);
    iVar3 = iVar3 + 0x24;
  }
  FUN_0132b958(iVar2,iVar1,4,0x40);
  return;
}

