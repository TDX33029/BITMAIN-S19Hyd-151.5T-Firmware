// FUN_0162ee58 @ 0162ee58 size=68 calls_out=2 calls_in=2
// strings: 

void FUN_0162ee58(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_1[1];
  iVar1 = iVar2;
  for (iVar3 = param_1[2]; iVar3 != 0; iVar3 = iVar3 + -1) {
    FUN_0162ef4c(iVar1);
    iVar1 = iVar1 + 0x30;
  }
  FUN_0134aee0(*param_1,iVar2,8,0x30);
  return;
}

