// FUN_009c25f0 @ 009c25f0 size=64 calls_out=2 calls_in=0
// strings: 

void FUN_009c25f0(undefined4 *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)thunk_FUN_016d4a50(4);
  if (piVar1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,4);
  }
  iVar2 = *param_2;
  *param_1 = 1;
  param_1[1] = piVar1;
  param_1[2] = 1;
  *piVar1 = iVar2 + 0x10;
  return;
}

