// FUN_009d5a6c @ 009d5a6c size=72 calls_out=3 calls_in=2
// strings: 

void FUN_009d5a6c(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  iVar2 = param_1[1];
  if (iVar1 == 4 && iVar2 == 0) {
    FUN_009d5afc(param_1 + 2);
    return;
  }
  FUN_009d5b2c(param_1 + 0x26);
  if (iVar1 == 3 && iVar2 == 0) {
    return;
  }
  FUN_009d57a8(param_1);
  return;
}

