// FUN_00933524 @ 00933524 size=100 calls_out=2 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00933524(int *param_1)

{
  int iVar1;
  int iVar2;
  int local_1c;
  int local_18;
  undefined4 uStack_14;
  
  iVar1 = *param_1;
  iVar2 = 8;
  if (8 < (uint)(iVar1 * 2)) {
    iVar2 = iVar1 << 1;
  }
  FUN_0093323c(&local_1c,iVar1,param_1[1],iVar2,1,1);
  if (local_1c == 1) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(local_18,uStack_14);
  }
  *param_1 = iVar2;
  param_1[1] = local_18;
  return;
}

