// FUN_01897c88 @ 01897c88 size=60 calls_out=1 calls_in=2
// strings: 

void FUN_01897c88(int param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0xc);
  if ((uVar1 < *(uint *)(param_1 + 8)) || (*(uint *)(param_1 + 4) < uVar1)) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(*(uint *)(param_1 + 8),uVar1,*(uint *)(param_1 + 4),&DAT_01d21b4c);
  }
  return;
}

