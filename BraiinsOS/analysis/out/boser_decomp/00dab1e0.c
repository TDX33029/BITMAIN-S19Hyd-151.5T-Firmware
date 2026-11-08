// FUN_00dab1e0 @ 00dab1e0 size=68 calls_out=2 calls_in=1
// strings: 

void FUN_00dab1e0(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = param_1[1];
  iVar2 = param_1[2] + 1;
  iVar1 = iVar3;
  while (iVar2 = iVar2 + -1, iVar2 != 0) {
    FUN_00def04c(iVar1);
    iVar1 = iVar1 + 0x3c;
  }
  FUN_0132b958(*param_1,iVar3,4,0x3c);
  return;
}

