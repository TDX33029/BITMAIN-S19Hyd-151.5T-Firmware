// FUN_010060a0 @ 010060a0 size=92 calls_out=2 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_010060a0(uint *param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  int local_24;
  uint local_20;
  undefined4 uStack_1c;
  
  uVar2 = *param_1;
  uVar1 = param_3 + param_2;
  if (uVar1 <= uVar2 * 2) {
    uVar1 = uVar2 << 1;
  }
  if (uVar1 < 9) {
    uVar1 = 8;
  }
  FUN_012870dc(&local_24,uVar2,param_1[1],uVar1);
  if (local_24 == 1) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(local_20,uStack_1c);
  }
  *param_1 = uVar1;
  param_1[1] = local_20;
  return;
}

