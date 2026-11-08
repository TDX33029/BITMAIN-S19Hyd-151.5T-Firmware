// FUN_000488c4 @ 000488c4  size=44  callers=0
// program: bmminer


int FUN_000488c4(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0004883c();
  if (iVar1 != 0) {
    memset(*(void **)(iVar1 + 0xc),0,*(size_t *)(param_1 + 0x14));
  }
  return iVar1;
}

