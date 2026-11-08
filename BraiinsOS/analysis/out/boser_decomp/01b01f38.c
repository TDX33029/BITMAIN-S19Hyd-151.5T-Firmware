// FUN_01b01f38 @ 01b01f38 size=80 calls_out=3 calls_in=2
// strings: 

int FUN_01b01f38(void)

{
  int iVar1;
  
  iVar1 = FUN_01b6b0a8(0x44);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x3c) = 1;
    FUN_01b7067c(iVar1 + 0x14);
    FUN_01b0c4fc(iVar1 + 0x40);
  }
  return iVar1;
}

