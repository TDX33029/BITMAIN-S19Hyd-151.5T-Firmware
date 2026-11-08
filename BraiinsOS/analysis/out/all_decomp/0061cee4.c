// FUN_0061cee4 @ 0061cee4 size=100 calls_out=2 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0061cee4(int *param_1)

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
  FUN_0061ca68(&local_1c,iVar1,param_1[1],iVar2,8,0x20);
  if (local_1c == 1) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(local_18,uStack_14);
  }
  *param_1 = iVar2;
  param_1[1] = local_18;
  return;
}

