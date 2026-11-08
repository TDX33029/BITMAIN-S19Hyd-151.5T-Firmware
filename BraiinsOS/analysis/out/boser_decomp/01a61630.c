// FUN_01a61630 @ 01a61630 size=60 calls_out=2 calls_in=2
// strings: 

void FUN_01a61630(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xc);
  if ((iVar1 != -0x7ffffffd) && (-1 < iVar1)) {
    FUN_0134bd64(iVar1,*(undefined4 *)(param_1 + 0x10));
  }
  *(undefined4 *)(param_1 + 0xc) = 0x80000003;
  FUN_01a55128(param_1 + 0x18);
  FUN_01a55128(param_1 + 0x30);
  return;
}

