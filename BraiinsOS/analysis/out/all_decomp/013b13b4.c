// FUN_013b13b4 @ 013b13b4 size=56 calls_out=1 calls_in=1
// strings: 

void FUN_013b13b4(int param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = (uint)*(byte *)(param_1 + 0x15b) + param_2 + 1;
  if (*(uint *)(param_1 + 0x58) <= uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(uVar1,*(uint *)(param_1 + 0x58),&DAT_018ae9c4);
  }
  return;
}

