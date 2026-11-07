// FUN_00ccb398 @ 00ccb398 size=236 calls_out=5 calls_in=0
// strings: 

void FUN_00ccb398(int *param_1,undefined4 *param_2)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  undefined1 uVar4;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 0x49)) {
  case 0:
    param_2[1] = param_2[0x46];
    param_2[2] = param_2[0x47];
    *(undefined2 *)(param_2 + 0x48) = 0;
    *(undefined1 *)((int)param_2 + 0x122) = 0;
    *(undefined1 *)((int)param_2 + 0x41) = 0;
    *(undefined1 *)(param_2 + 0x10) = *(undefined1 *)((int)param_2 + 0x123);
    *param_2 = param_2[0x45];
    param_2[3] = param_2[0x44] + 8;
    param_2[4] = param_2[0x42];
    param_2[5] = param_2[0x43];
    param_2[6] = param_2[0x40];
    param_2[7] = param_2[0x41];
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_01875b28);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_01875b28);
  }
  FUN_00cb6798(param_1,param_2);
  uVar4 = 3;
  if (*param_1 != 8) {
    FUN_00c87100(param_2);
    piVar2 = (int *)param_2[0x44];
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    uVar4 = 1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_008f1030(param_2[0x44]);
    }
  }
  *(undefined1 *)(param_2 + 0x49) = uVar4;
  return;
}

