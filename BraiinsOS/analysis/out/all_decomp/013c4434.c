// FUN_013c4434 @ 013c4434 size=128 calls_out=2 calls_in=24
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_013c4434(uint *param_1,uint param_2,uint param_3,undefined4 param_4,int param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int local_1c;
  uint local_18;
  undefined4 uStack_14;
  
  uVar1 = param_3 + param_2;
  if (CARRY4(param_3,param_2)) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0);
  }
  uVar2 = *param_1;
  if (uVar1 <= uVar2 * 2) {
    uVar1 = uVar2 << 1;
  }
  uVar3 = 4;
  if (param_5 == 1) {
    uVar3 = 8;
  }
  if (uVar3 < uVar1) {
    uVar3 = uVar1;
  }
  FUN_013c1098(&local_1c,uVar2,param_1[1],uVar3,param_4,param_5);
  if (local_1c == 1) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(local_18,uStack_14);
  }
  *param_1 = uVar3;
  param_1[1] = local_18;
  return;
}

