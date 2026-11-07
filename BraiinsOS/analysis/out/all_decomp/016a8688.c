// FUN_016a8688 @ 016a8688 size=116 calls_out=2 calls_in=2
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_016a8688(uint *param_1,uint param_2,uint param_3,undefined4 param_4,undefined4 param_5)

{
  uint uVar1;
  uint uVar2;
  int local_24;
  uint local_20;
  undefined4 uStack_1c;
  
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
  FUN_016a8354(&local_24,uVar1,param_1[1],uVar2,param_4,param_5);
  if (local_24 == 1) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(local_20,uStack_1c);
  }
  *param_1 = uVar2;
  param_1[1] = local_20;
  return;
}

