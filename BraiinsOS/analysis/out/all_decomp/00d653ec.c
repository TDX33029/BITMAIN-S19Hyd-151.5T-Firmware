// FUN_00d653ec @ 00d653ec size=152 calls_out=2 calls_in=83
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00d653ec(uint *param_1,uint param_2,uint param_3,undefined4 param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int local_24;
  uint local_20;
  undefined4 uStack_1c;
  
  if ((param_5 == 0) || (uVar1 = param_3 + param_2, CARRY4(param_3,param_2))) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0);
  }
  uVar2 = *param_1;
  uVar3 = 1;
  if (uVar1 <= uVar2 * 2) {
    uVar1 = uVar2 << 1;
  }
  if (param_5 < 0x401) {
    uVar3 = 4;
  }
  if (param_5 == 1) {
    uVar3 = 8;
  }
  if (uVar3 < uVar1) {
    uVar3 = uVar1;
  }
  FUN_00d5044c(&local_24,uVar2,param_1[1],uVar3,param_4,param_5);
  if (local_24 == 1) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(local_20,uStack_1c);
  }
  *param_1 = uVar3;
  param_1[1] = local_20;
  return;
}

