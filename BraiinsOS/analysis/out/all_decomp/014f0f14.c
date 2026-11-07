// FUN_014f0f14 @ 014f0f14 size=104 calls_out=2 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_014f0f14(uint *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int local_24;
  uint local_20;
  undefined4 uStack_1c;
  
  uVar1 = *param_1;
  uVar2 = param_2 + 1;
  if (uVar2 <= uVar1 * 2) {
    uVar2 = uVar1 << 1;
  }
  if (uVar2 < 5) {
    uVar2 = 4;
  }
  FUN_014f0fd8(&local_24,uVar1,param_1[1],uVar2,4,0xc);
  if (local_24 == 1) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(local_20,uStack_1c);
  }
  *param_1 = uVar2;
  param_1[1] = local_20;
  return;
}

