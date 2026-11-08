// FUN_0063f380 @ 0063f380 size=92 calls_out=2 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0063f380(uint *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int local_1c;
  uint local_18;
  undefined4 uStack_14;
  
  uVar1 = *param_1;
  uVar2 = param_2 + 1;
  if (uVar2 <= uVar1 * 2) {
    uVar2 = uVar1 << 1;
  }
  if (uVar2 < 5) {
    uVar2 = 4;
  }
  FUN_0063f3dc(&local_1c,uVar1,param_1[1],uVar2);
  if (local_1c == 1) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(local_18,uStack_14);
  }
  *param_1 = uVar2;
  param_1[1] = local_18;
  return;
}

