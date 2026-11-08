// FUN_01b3b160 @ 01b3b160 size=72 calls_out=2 calls_in=3
// strings: 

int FUN_01b3b160(void)

{
  int iVar1;
  
  iVar1 = FUN_01b6b0a8(0x44);
  if (iVar1 != 0) {
    FUN_01b7067c(iVar1 + 0x18);
    *(undefined4 *)(iVar1 + 0x40) = 1;
  }
  return iVar1;
}

