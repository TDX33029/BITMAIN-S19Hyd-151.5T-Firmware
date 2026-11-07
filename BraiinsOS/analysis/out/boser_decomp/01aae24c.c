// FUN_01aae24c @ 01aae24c size=76 calls_out=2 calls_in=29
// strings: 

void FUN_01aae24c(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = param_1[1];
  if (iVar3 != 0) {
    iVar2 = *param_1;
    FUN_01aae298(iVar2,param_1[3]);
    iVar1 = iVar3 * 0x18 + 0x18;
    if (iVar3 + iVar1 != -5) {
      thunk_FUN_01be4678(iVar2 - iVar1);
      return;
    }
  }
  return;
}

