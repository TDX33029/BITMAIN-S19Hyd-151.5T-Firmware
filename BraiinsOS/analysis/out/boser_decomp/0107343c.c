// FUN_0107343c @ 0107343c size=284 calls_out=8 calls_in=1
// strings: 

void FUN_0107343c(int *param_1,int param_2,undefined4 param_3)

{
  bool bVar1;
  int *piVar2;
  undefined1 uVar3;
  int iVar4;
  undefined *puVar5;
  undefined1 auStack_668 [144];
  int local_5d8;
  undefined1 local_5d4;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 0x54)) {
  case 0:
    iVar4 = *(int *)(param_2 + 0x50);
    *(undefined1 *)(param_2 + 0x55) = 0;
    FUN_01bed4e2(auStack_668,param_2,0x48);
    local_5d8 = iVar4 + 8;
    local_5d4 = 0;
    iVar4 = thunk_FUN_01be5118(0x648);
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(8,0x648);
    }
    FUN_01bed4e2(iVar4,auStack_668,0x648);
    puVar5 = &DAT_01c0bf90;
    *(int *)(param_2 + 0x48) = iVar4;
    *(undefined **)(param_2 + 0x4c) = &DAT_01c0bf90;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c1db78);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c1db78);
  case 3:
    iVar4 = *(int *)(param_2 + 0x48);
    puVar5 = *(undefined **)(param_2 + 0x4c);
  }
  (**(code **)(puVar5 + 0xc))(param_1,iVar4,param_3);
  uVar3 = 3;
  if (*param_1 != 4 || param_1[1] != 0) {
    FUN_01139b38(*(undefined4 *)(param_2 + 0x48),*(undefined4 *)(param_2 + 0x4c));
    piVar2 = *(int **)(param_2 + 0x50);
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar4 + -1;
    uVar3 = 1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01a38efc(*(undefined4 *)(param_2 + 0x50));
    }
  }
  *(undefined1 *)(param_2 + 0x54) = uVar3;
  return;
}

