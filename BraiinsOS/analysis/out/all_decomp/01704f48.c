// FUN_01704f48 @ 01704f48 size=108 calls_out=2 calls_in=0
// strings: 

undefined4 FUN_01704f48(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x14);
  if (iVar1 != 0) {
    FUN_0177aafc(*(undefined4 *)(iVar1 + 8));
    FUN_0177aafc(*(undefined4 *)(iVar1 + 0x10));
    FUN_016e0fd8(iVar1 + 0x18);
    FUN_0177aafc(iVar1);
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  return 0;
}

