// FUN_016e9a80 @ 016e9a80 size=184 calls_out=3 calls_in=1
// strings: 

undefined4 FUN_016e9a80(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_01782028(0);
  if (iVar1 == 0) {
    iVar1 = FUN_016d38c8(0x10c,1);
    if (iVar1 == 0) {
      return 0;
    }
    iVar2 = FUN_017820bc(0,iVar1,FUN_016e9958);
    if (iVar2 == 0) {
      return 0;
    }
  }
  if (*(int *)(iVar1 + 0x104) == *(int *)(iVar1 + 0x100)) {
    return 0;
  }
  return *(undefined4 *)(iVar1 + (*(int *)(iVar1 + 0x104) + 1U & 0xf) * 0x10 + 8);
}

