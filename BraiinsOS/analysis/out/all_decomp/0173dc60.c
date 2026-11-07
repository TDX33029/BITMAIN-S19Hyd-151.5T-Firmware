// FUN_0173dc60 @ 0173dc60 size=100 calls_out=2 calls_in=0
// strings: 

undefined4 FUN_0173dc60(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x14);
  if (iVar1 != 0) {
    FUN_0173dc48(iVar1 + 8);
    FUN_0177aafc(*(undefined4 *)(iVar1 + 0x4c8));
    FUN_0177aafc(iVar1);
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  return 0;
}

