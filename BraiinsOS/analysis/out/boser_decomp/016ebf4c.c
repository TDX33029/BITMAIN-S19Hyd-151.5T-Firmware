// FUN_016ebf4c @ 016ebf4c size=68 calls_out=2 calls_in=1
// strings: 

void FUN_016ebf4c(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = param_1[1];
  iVar2 = param_1[2] + 1;
  iVar1 = iVar3;
  while (iVar2 = iVar2 + -1, iVar2 != 0) {
    FUN_016e3e38(iVar1);
    iVar1 = iVar1 + 0x58;
  }
  FUN_0134aee0(*param_1,iVar3,4,0x58);
  return;
}

