// FUN_00de5ab4 @ 00de5ab4 size=240 calls_out=7 calls_in=1
// strings: 

void FUN_00de5ab4(int *param_1,int param_2,undefined4 param_3)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined *puVar5;
  undefined1 uVar6;
  undefined1 auStack_a0 [136];
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 0x94)) {
  case 0:
    *(undefined1 *)(param_2 + 0x95) = 0;
    iVar3 = *(int *)(param_2 + 0x90);
    FUN_01bed4e2(auStack_a0,param_2,0x88);
    uVar4 = FUN_00e13acc(iVar3 + 8,auStack_a0);
    puVar5 = &DAT_01c16b44;
    *(undefined4 *)(param_2 + 0x88) = uVar4;
    *(undefined **)(param_2 + 0x8c) = &DAT_01c16b44;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c168dc);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c168dc);
  case 3:
    uVar4 = *(undefined4 *)(param_2 + 0x88);
    puVar5 = *(undefined **)(param_2 + 0x8c);
  }
  (**(code **)(puVar5 + 0xc))(param_1,uVar4,param_3);
  uVar6 = 3;
  if (*param_1 != 4 || param_1[1] != 0) {
    FUN_00fe4378(*(undefined4 *)(param_2 + 0x88),*(undefined4 *)(param_2 + 0x8c));
    piVar2 = *(int **)(param_2 + 0x90);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    uVar6 = 1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_011808f4(*(undefined4 *)(param_2 + 0x90));
    }
  }
  *(undefined1 *)(param_2 + 0x94) = uVar6;
  return;
}

