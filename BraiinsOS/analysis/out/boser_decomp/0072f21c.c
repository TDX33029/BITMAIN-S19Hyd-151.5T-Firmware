// FUN_0072f21c @ 0072f21c size=68 calls_out=2 calls_in=1
// strings: 

void FUN_0072f21c(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_1[1];
  iVar3 = param_1[2];
  if (iVar3 != 0) {
    iVar1 = iVar2;
    do {
      FUN_007243f0(iVar1);
      iVar1 = iVar1 + 0x28;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_0134c054(*param_1,iVar2,8,0x28);
  return;
}

