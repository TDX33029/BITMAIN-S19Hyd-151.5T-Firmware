// FUN_0155f750 @ 0155f750 size=68 calls_out=2 calls_in=1
// strings: 

void FUN_0155f750(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = param_1[1];
  iVar2 = param_1[2] + 1;
  iVar1 = iVar3;
  while (iVar2 = iVar2 + -1, iVar2 != 0) {
    FUN_014fe99c(iVar1);
    iVar1 = iVar1 + 0x18;
  }
  FUN_01af7af8(*param_1,iVar3,4,0x18);
  return;
}

