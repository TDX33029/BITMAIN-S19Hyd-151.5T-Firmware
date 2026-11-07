// FUN_016f9430 @ 016f9430 size=56 calls_out=2 calls_in=1
// strings: 

void FUN_016f9430(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  if (iVar1 == -0x80000000) {
    return;
  }
  iVar2 = param_1[1];
  FUN_01936260(iVar2,param_1[2]);
  FUN_0134aee0(iVar1,iVar2,4,0xc);
  return;
}

