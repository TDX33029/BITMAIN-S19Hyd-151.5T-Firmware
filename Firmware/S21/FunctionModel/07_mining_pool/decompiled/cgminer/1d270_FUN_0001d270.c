// FUN_0001d270 @ 0001d270  size=44  callers=0
// program: cgminer


int FUN_0001d270(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0001d1e8();
  if (iVar1 != 0) {
    memset(*(void **)(iVar1 + 0xc),0,*(size_t *)(param_1 + 0x14));
  }
  return iVar1;
}

