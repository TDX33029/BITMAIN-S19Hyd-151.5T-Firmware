// FUN_0007ffcc @ 0007ffcc  size=136  callers=1
// program: bmminer


int FUN_0007ffcc(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint local_c;
  
  iVar1 = FUN_0007f548();
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    for (local_c = 0; uVar3 = FUN_0007f66c(param_1), local_c < uVar3; local_c = local_c + 1) {
      uVar2 = FUN_0007f6b8(param_1,local_c);
      FUN_0007e98c(iVar1,uVar2);
    }
  }
  return iVar1;
}

