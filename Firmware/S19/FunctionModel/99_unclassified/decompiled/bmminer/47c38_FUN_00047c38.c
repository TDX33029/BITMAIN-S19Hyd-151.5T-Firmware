// FUN_00047c38 @ 00047c38  size=120  callers=2
// program: bmminer


undefined4 FUN_00047c38(uint param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 == 2) {
    iVar1 = FUN_000488bc();
    if (-1 < iVar1) {
      uVar2 = FUN_000488bc();
      return uVar2;
    }
  }
  else if (param_1 < 3) {
    if (param_1 == 1) {
      uVar2 = FUN_00047c18();
      return uVar2;
    }
  }
  else if (param_1 == 0x100) {
    iVar1 = FUN_000488c4();
    if (-1 < iVar1) {
      uVar2 = FUN_000488c4();
      return uVar2;
    }
  }
  else if ((param_1 == 0x101) && (iVar1 = FUN_000488cc(), -1 < iVar1)) {
    uVar2 = FUN_000488cc();
    return uVar2;
  }
  return 0;
}

