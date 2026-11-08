// FUN_000316f0 @ 000316f0  size=44  callers=0
// program: bmminer


int FUN_000316f0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00031668();
  if (iVar1 != 0) {
    memset(*(void **)(iVar1 + 0xc),0,*(size_t *)(param_1 + 0x14));
  }
  return iVar1;
}

