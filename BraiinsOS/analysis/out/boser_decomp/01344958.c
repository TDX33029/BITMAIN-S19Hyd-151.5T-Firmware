// FUN_01344958 @ 01344958 size=80 calls_out=2 calls_in=1
// strings: 

void FUN_01344958(int param_1,uint param_2,uint param_3)

{
  uint uVar1;
  
  uVar1 = param_3 + 1;
  if (0xfffffffe < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_01306b08();
  }
  if (uVar1 < param_2) {
    if (-0x41 < *(char *)(param_1 + uVar1)) {
      return;
    }
  }
  else if (uVar1 == param_2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012fb514(param_1,param_2,0,uVar1,&DAT_01ce6a6c);
}

