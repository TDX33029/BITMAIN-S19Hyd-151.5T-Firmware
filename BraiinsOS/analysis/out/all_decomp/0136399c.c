// FUN_0136399c @ 0136399c size=200 calls_out=4 calls_in=2
// strings: 

void FUN_0136399c(int param_1,int param_2)

{
  uint uVar1;
  uint local_10 [2];
  
  if (*(int *)(param_1 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_003cd660,0x31,&DAT_01892550);
  }
  uVar1 = *(uint *)(param_1 + 0x15c);
  if (0x1f < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa444(&DAT_01892560);
  }
  local_10[0] = *(int *)(param_1 + 8) + (param_2 << (uVar1 & 0xff));
  if (local_10[0] < (uint)(param_2 << (uVar1 & 0xff))) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa444(&DAT_01892590);
  }
  if (0x7ffffffe < local_10[0]) {
    local_10[1] = 0;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_00418ec6,0x2b,local_10,&DAT_01892760,&DAT_01892570);
  }
  if (*(uint *)(param_1 + 0xc) < local_10[0]) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464(&DAT_003cd678,0x29,&DAT_01892580);
  }
  return;
}

