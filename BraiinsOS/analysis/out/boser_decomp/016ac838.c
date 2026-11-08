// FUN_016ac838 @ 016ac838 size=200 calls_out=4 calls_in=2
// strings: 

void FUN_016ac838(int param_1,int param_2)

{
  uint uVar1;
  uint local_10 [2];
  
  if (*(int *)(param_1 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb100(&DAT_004ce645,0x31,&DAT_01d0861c);
  }
  uVar1 = *(uint *)(param_1 + 0x15c);
  if (0x1f < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0cc(&DAT_01d0862c);
  }
  local_10[0] = *(int *)(param_1 + 8) + (param_2 << (uVar1 & 0xff));
  if (local_10[0] < (uint)(param_2 << (uVar1 & 0xff))) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0cc(&DAT_01d0863c);
  }
  if (0x7ffffffe < local_10[0]) {
    local_10[1] = 0;
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00533467,0x2b,local_10,&DAT_01d088bc,&DAT_01d0864c);
  }
  if (*(uint *)(param_1 + 0xc) < local_10[0]) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec(&DAT_004ce65d,0x29,&DAT_01d0865c);
  }
  return;
}

