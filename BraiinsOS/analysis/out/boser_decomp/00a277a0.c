// FUN_00a277a0 @ 00a277a0 size=132 calls_out=4 calls_in=2
// strings: BUG: missing client statistics

void FUN_00a277a0(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined1 auStack_1c8 [144];
  undefined1 auStack_138 [144];
  undefined1 auStack_a8 [144];
  
  if (*(int *)(param_3 + 0x20) == 2 && *(int *)(param_3 + 0x24) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0130739c("BUG: missing client statistics",0x1e,&DAT_01c1d098);
  }
  FUN_00a27844(auStack_a8,param_3 + 0x108);
  FUN_01bed4e2(auStack_1c8,param_2,0x90);
  FUN_01bed4e2(auStack_138,auStack_a8,0x90);
  FUN_0122208c(param_1,auStack_1c8,auStack_138);
  return;
}

