// FUN_01076938 @ 01076938 size=284 calls_out=8 calls_in=1
// strings: 

void FUN_01076938(int *param_1,int param_2,undefined4 param_3)

{
  bool bVar1;
  int *piVar2;
  undefined1 uVar3;
  int iVar4;
  undefined *puVar5;
  undefined1 auStack_6d8 [1696];
  int local_38;
  undefined1 local_28;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 0x5c)) {
  case 0:
    iVar4 = *(int *)(param_2 + 0x58);
    *(undefined1 *)(param_2 + 0x5d) = 0;
    FUN_01bed4e2(auStack_6d8,param_2,0x50);
    local_38 = iVar4 + 8;
    local_28 = 0;
    iVar4 = thunk_FUN_01be5118(0x6b8);
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(8,0x6b8);
    }
    FUN_01bed4e2(iVar4,auStack_6d8,0x6b8);
    puVar5 = &DAT_01c1d7dc;
    *(int *)(param_2 + 0x50) = iVar4;
    *(undefined **)(param_2 + 0x54) = &DAT_01c1d7dc;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c1dc98);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c1dc98);
  case 3:
    iVar4 = *(int *)(param_2 + 0x50);
    puVar5 = *(undefined **)(param_2 + 0x54);
  }
  (**(code **)(puVar5 + 0xc))(param_1,iVar4,param_3);
  uVar3 = 3;
  if (*param_1 != 4 || param_1[1] != 0) {
    FUN_01139b38(*(undefined4 *)(param_2 + 0x50),*(undefined4 *)(param_2 + 0x54));
    piVar2 = *(int **)(param_2 + 0x58);
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar4 + -1;
    uVar3 = 1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01180ed4(*(undefined4 *)(param_2 + 0x58));
    }
  }
  *(undefined1 *)(param_2 + 0x5c) = uVar3;
  return;
}

