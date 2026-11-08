// FUN_00a8a6a0 @ 00a8a6a0 size=96 calls_out=2 calls_in=4
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00a8a6a0(int *param_1)

{
  int iVar1;
  int iVar2;
  int local_1c;
  int local_18;
  undefined4 uStack_14;
  
  iVar1 = *param_1;
  iVar2 = 4;
  if (4 < (uint)(iVar1 * 2)) {
    iVar2 = iVar1 << 1;
  }
  FUN_00a8a1c8(&local_1c,iVar1,param_1[1],iVar2,4,0x28);
  if (local_1c == 1) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(local_18,uStack_14);
  }
  *param_1 = iVar2;
  param_1[1] = local_18;
  return;
}

