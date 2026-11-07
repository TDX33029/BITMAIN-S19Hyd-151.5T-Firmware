// FUN_016810e0 @ 016810e0 size=56 calls_out=1 calls_in=1
// strings: 

void FUN_016810e0(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  
  uVar1 = param_2 + (uint)*(byte *)(param_1 + (param_3 & 0xff) + 0x5c);
  if (*(uint *)(param_1 + 0x58) <= uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(uVar1,*(uint *)(param_1 + 0x58),&DAT_01d0828c);
  }
  return;
}

