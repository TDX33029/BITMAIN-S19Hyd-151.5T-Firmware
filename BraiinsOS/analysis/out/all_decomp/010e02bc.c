// FUN_010e02bc @ 010e02bc size=104 calls_out=2 calls_in=18
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_010e02bc(uint *param_1,uint param_2,uint param_3)

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
  if (uVar2 < 9) {
    uVar2 = 8;
  }
  FUN_00603ee0(&local_1c,uVar1,param_1[1],uVar2);
  if (local_1c == 1) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(local_18,uStack_14);
  }
  *param_1 = uVar2;
  param_1[1] = local_18;
  return;
}

