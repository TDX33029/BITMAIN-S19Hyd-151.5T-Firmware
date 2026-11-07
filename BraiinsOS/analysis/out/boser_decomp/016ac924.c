// FUN_016ac924 @ 016ac924 size=124 calls_out=2 calls_in=2
// strings: 

undefined4 FUN_016ac924(int param_1,uint param_2)

{
  uint uVar1;
  
  if (((param_2 == 0) || (param_2 < *(uint *)(param_1 + 8))) || (*(uint *)(param_1 + 0xc) < param_2)
     ) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec(&DAT_004ce5f7,0x29,&DAT_01d0857c);
  }
  uVar1 = (param_2 - *(uint *)(param_1 + 8) >> (*(uint *)(param_1 + 0x15c) & 0x1f)) << 1 | 1;
  if (*(uint *)(param_1 + 0x168) <= uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(uVar1,*(uint *)(param_1 + 0x168),&DAT_01d0860c);
  }
  return *(undefined4 *)(*(int *)(param_1 + 0x164) + uVar1 * 4);
}

