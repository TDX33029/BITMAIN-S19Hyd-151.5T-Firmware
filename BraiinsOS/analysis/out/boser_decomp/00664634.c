// FUN_00664634 @ 00664634 size=108 calls_out=2 calls_in=9
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00664634(uint *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  int local_24;
  uint local_20;
  undefined4 uStack_1c;
  
  uVar2 = param_3 + param_2;
  if (CARRY4(param_3,param_2)) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(0);
  }
  uVar1 = *param_1;
  if (uVar2 <= uVar1 * 2) {
    uVar2 = uVar1 << 1;
  }
  if (uVar2 < 9) {
    uVar2 = 8;
  }
  FUN_006646a0(&local_24,uVar1,param_1[1],uVar2);
  if (local_24 == 1) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(local_20,uStack_1c);
  }
  *param_1 = uVar2;
  param_1[1] = local_20;
  return;
}

