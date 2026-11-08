// FUN_00d527d4 @ 00d527d4 size=240 calls_out=7 calls_in=0
// strings: 

void FUN_00d527d4(int *param_1,int param_2,undefined4 param_3)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined *puVar5;
  undefined1 uVar6;
  undefined1 auStack_80 [104];
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 0x74)) {
  case 0:
    *(undefined1 *)(param_2 + 0x75) = 0;
    iVar3 = *(int *)(param_2 + 0x70);
    FUN_01bed4e2(auStack_80,param_2,0x68);
    uVar4 = FUN_005d6024(iVar3 + 8,auStack_80);
    puVar5 = &DAT_01c02220;
    *(undefined4 *)(param_2 + 0x68) = uVar4;
    *(undefined **)(param_2 + 0x6c) = &DAT_01c02220;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c15d44);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c15d44);
  case 3:
    uVar4 = *(undefined4 *)(param_2 + 0x68);
    puVar5 = *(undefined **)(param_2 + 0x6c);
  }
  (**(code **)(puVar5 + 0xc))(param_1,uVar4,param_3);
  uVar6 = 3;
  if (*param_1 != 2 || param_1[1] != 0) {
    FUN_01139b38(*(undefined4 *)(param_2 + 0x68),*(undefined4 *)(param_2 + 0x6c));
    piVar2 = *(int **)(param_2 + 0x70);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    uVar6 = 1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01180ed4(*(undefined4 *)(param_2 + 0x70));
    }
  }
  *(undefined1 *)(param_2 + 0x74) = uVar6;
  return;
}

