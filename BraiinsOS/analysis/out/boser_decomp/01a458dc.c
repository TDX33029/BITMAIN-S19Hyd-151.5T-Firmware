// FUN_01a458dc @ 01a458dc size=72 calls_out=2 calls_in=2
// strings: 

void FUN_01a458dc(int *param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *param_1;
  uVar2 = iVar1 + 0x80000001U & iVar1 >> 0x1f;
  if (uVar2 == 0) {
    FUN_0134bd64(iVar1,param_1[1]);
    param_1 = param_1 + 3;
    if (*param_1 == -0x80000000) {
      return;
    }
  }
  else {
    if (uVar2 != 1) {
      return;
    }
    param_1 = param_1 + 1;
  }
  FUN_01a456c8(param_1);
  return;
}

