// FUN_00a80510 @ 00a80510 size=192 calls_out=1 calls_in=3
// strings: 

int * FUN_00a80510(int param_1,int param_2)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int *in_r12;
  undefined *local_10;
  undefined4 *local_c;
  
  if (param_2 != 0) {
    in_r12 = *(int **)(param_1 + param_2 * 4 + -4);
  }
  if (param_2 != 0 && in_r12 != (int *)0xffffffff) {
    iVar3 = *in_r12;
    while (iVar3 != 0) {
      if (iVar3 < 0) {
        local_c = &DAT_0157d360;
        local_10 = &DAT_018ae270;
                    /* WARNING: Subroutine does not return */
        FUN_00faa478(&DAT_00590e71,&local_10,&DAT_018ae288);
      }
      iVar4 = *in_r12;
      if (iVar4 == iVar3) {
        bVar1 = (bool)hasExclusiveAccess(in_r12);
        if (bVar1) {
          *in_r12 = iVar3 + 1;
        }
        bVar2 = false;
        if (bVar1) {
          DataMemoryBarrier(0xb);
          bVar2 = true;
        }
      }
      else {
        bVar2 = false;
        ClearExclusiveLocal();
      }
      iVar3 = iVar4;
      if (bVar2) {
        return in_r12;
      }
    }
  }
  return (int *)0x0;
}

