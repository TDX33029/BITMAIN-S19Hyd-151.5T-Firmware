// FUN_01177064 @ 01177064 size=232 calls_out=4 calls_in=1
// strings: 

uint FUN_01177064(undefined8 *param_1,undefined4 param_2)

{
  bool bVar1;
  undefined1 uVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  code *pcVar6;
  undefined8 uVar7;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)((int)param_1 + 0x1f)) {
  case 0:
    iVar5 = *(int *)(*(int *)((int)param_1 + 0xc) + 8);
    pcVar6 = *(code **)(*(int *)((int)param_1 + 0xc) + 0xc);
    *(undefined1 *)((int)param_1 + 0x1e) = 0;
    *(undefined2 *)((int)param_1 + 0x1c) = 0;
    uVar7 = (*pcVar6)(*(int *)(param_1 + 1) + (iVar5 - 1U & 0xfffffff8) + 8,
                      *(undefined4 *)(param_1 + 2),*(undefined4 *)((int)param_1 + 0x14),
                      *(undefined4 *)(param_1 + 3));
    *param_1 = uVar7;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c20a6c);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c20a6c);
  case 3:
    uVar7 = *param_1;
  }
  uVar3 = (**(code **)((int)((ulonglong)uVar7 >> 0x20) + 0xc))((int)uVar7,param_2);
  if ((uVar3 & 1) == 0) {
    FUN_01139b38(*(undefined4 *)param_1,*(undefined4 *)((int)param_1 + 4));
    piVar4 = *(int **)(param_1 + 1);
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar4;
      bVar1 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar1);
    *piVar4 = iVar5 + -1;
    if (iVar5 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01177254(*(undefined4 *)(param_1 + 1),*(undefined4 *)((int)param_1 + 0xc));
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 3;
    uVar3 = 1;
  }
  *(undefined1 *)((int)param_1 + 0x1f) = uVar2;
  return uVar3;
}

