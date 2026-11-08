// FUN_01011a60 @ 01011a60 size=92 calls_out=2 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01011a60(uint *param_1,uint param_2)

{
  uint uVar1;
  int local_1c;
  uint local_18;
  undefined4 uStack_14;
  
  uVar1 = *param_1;
  if (param_2 <= uVar1 * 2) {
    param_2 = uVar1 << 1;
  }
  if (param_2 < 9) {
    param_2 = 8;
  }
  FUN_00603ee0(&local_1c,uVar1,param_1[1],param_2);
  if (local_1c == 1) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(local_18,uStack_14);
  }
  *param_1 = param_2;
  param_1[1] = local_18;
  return;
}

