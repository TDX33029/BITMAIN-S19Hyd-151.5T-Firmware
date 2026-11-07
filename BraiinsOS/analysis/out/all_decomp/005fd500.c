// FUN_005fd500 @ 005fd500 size=116 calls_out=2 calls_in=2
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_005fd500(uint *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  int local_1c;
  uint local_18;
  undefined4 uStack_14;
  
  uVar2 = param_3 + param_2;
  if (CARRY4(param_3,param_2)) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0);
  }
  uVar1 = *param_1;
  if (uVar2 <= uVar1 * 2) {
    uVar2 = uVar1 << 1;
  }
  if (uVar2 < 5) {
    uVar2 = 4;
  }
  FUN_005fd1b4(&local_1c,uVar1,param_1[1],uVar2,4,4);
  if (local_1c == 1) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(local_18,uStack_14);
  }
  *param_1 = uVar2;
  param_1[1] = local_18;
  return;
}

