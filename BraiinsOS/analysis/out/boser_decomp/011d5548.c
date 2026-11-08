// FUN_011d5548 @ 011d5548 size=288 calls_out=8 calls_in=0
// strings: 

void FUN_011d5548(int *param_1,int param_2,undefined4 param_3)

{
  bool bVar1;
  undefined *puVar2;
  int *piVar3;
  undefined1 uVar4;
  int iVar5;
  undefined1 auStack_158 [304];
  int local_28;
  undefined1 local_24;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 0x13c)) {
  case 0:
    iVar5 = *(int *)(param_2 + 0x138);
    *(undefined1 *)(param_2 + 0x13d) = 0;
    FUN_01bed4e2(auStack_158,param_2,0x130);
    local_28 = iVar5 + 8;
    local_24 = 0;
    iVar5 = thunk_FUN_01be5118(0x138);
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(8,0x138);
    }
    FUN_01bed4e2(iVar5,auStack_158,0x138);
    *(int *)(param_2 + 0x130) = iVar5;
    puVar2 = &DAT_01d2e19c;
    *(undefined **)(param_2 + 0x134) = &DAT_01d2e19c;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c21e84);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c21e84);
  case 3:
    iVar5 = *(int *)(param_2 + 0x130);
    puVar2 = *(undefined **)(param_2 + 0x134);
  }
  (**(code **)(puVar2 + 0xc))(param_1,iVar5,param_3);
  uVar4 = 3;
  if (*param_1 != 4 || param_1[1] != 0) {
    FUN_01139b38(*(undefined4 *)(param_2 + 0x130),*(undefined4 *)(param_2 + 0x134));
    piVar3 = *(int **)(param_2 + 0x138);
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar5 + -1;
    uVar4 = 1;
    if (iVar5 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01a9c6d8(*(undefined4 *)(param_2 + 0x138));
    }
  }
  *(undefined1 *)(param_2 + 0x13c) = uVar4;
  return;
}

