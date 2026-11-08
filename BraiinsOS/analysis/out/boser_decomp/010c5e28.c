// FUN_010c5e28 @ 010c5e28 size=240 calls_out=7 calls_in=1
// strings: 

void FUN_010c5e28(int *param_1,int param_2,undefined4 param_3)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined *puVar5;
  undefined1 uVar6;
  undefined1 auStack_78 [96];
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 0x6c)) {
  case 0:
    *(undefined1 *)(param_2 + 0x6d) = 0;
    iVar3 = *(int *)(param_2 + 0x68);
    FUN_01bed4e2(auStack_78,param_2,0x60);
    uVar4 = FUN_00e35ea0(iVar3 + 8,auStack_78);
    puVar5 = &DAT_01c170d4;
    *(undefined4 *)(param_2 + 0x60) = uVar4;
    *(undefined **)(param_2 + 100) = &DAT_01c170d4;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c1f6c4);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c1f6c4);
  case 3:
    uVar4 = *(undefined4 *)(param_2 + 0x60);
    puVar5 = *(undefined **)(param_2 + 100);
  }
  (**(code **)(puVar5 + 0xc))(param_1,uVar4,param_3);
  uVar6 = 3;
  if (*param_1 != 4 || param_1[1] != 0) {
    FUN_01139b38(*(undefined4 *)(param_2 + 0x60),*(undefined4 *)(param_2 + 100));
    piVar2 = *(int **)(param_2 + 0x68);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    uVar6 = 1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_011808f4(*(undefined4 *)(param_2 + 0x68));
    }
  }
  *(undefined1 *)(param_2 + 0x6c) = uVar6;
  return;
}

