// FUN_01681010 @ 01681010 size=72 calls_out=2 calls_in=1
// strings: 

void FUN_01681010(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = FUN_016c2c08(*(byte *)(param_1 + 0x15b) + 1);
  uVar2 = (uVar1 & 0xffff) >> 8;
  if ((uVar1 & 1) != 0) {
    uVar2 = uVar1 >> 0x10;
  }
  if (*(uint *)(param_1 + 0x58) <= uVar2 + param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(uVar2 + param_2,*(uint *)(param_1 + 0x58),&DAT_01d2f26c);
  }
  return;
}

