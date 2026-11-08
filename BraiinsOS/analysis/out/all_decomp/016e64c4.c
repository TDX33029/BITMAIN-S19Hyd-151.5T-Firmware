// FUN_016e64c4 @ 016e64c4 size=80 calls_out=3 calls_in=1
// strings: 

int FUN_016e64c4(void)

{
  int iVar1;
  
  iVar1 = FUN_0177a9c0(0x44);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x3c) = 1;
    FUN_01781e28(iVar1 + 0x14);
    FUN_016f19c4(iVar1 + 0x40);
  }
  return iVar1;
}

