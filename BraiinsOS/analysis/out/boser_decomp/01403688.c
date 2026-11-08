// FUN_01403688 @ 01403688 size=336 calls_out=5 calls_in=1
// strings: 

void FUN_01403688(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  bool bVar8;
  int local_38;
  int local_34;
  undefined1 local_30;
  int local_2c;
  undefined1 local_28;
  
  FUN_01656cb0(&local_38,param_1);
  if (local_38 == 1) {
    local_28 = local_30;
    local_2c = local_34;
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00533467,0x2b,&local_2c,&DAT_01cf3798,&DAT_01cf3ab8);
  }
  iVar1 = *(int *)(local_34 + 0x10);
  if (iVar1 != 0) {
    piVar6 = *(int **)(local_34 + 0xc);
    piVar5 = piVar6;
    do {
      piVar7 = piVar5 + 3;
      piVar4 = (int *)(*piVar5 + 0x14);
      if (*piVar4 == 0) {
        DataMemoryBarrier(0xb);
LAB_014036f4:
        bVar8 = (bool)hasExclusiveAccess(piVar4);
        if (!bVar8) goto code_r0x01403700;
        *piVar4 = 2;
        DataMemoryBarrier(0xb);
        DataMemoryBarrier(0xb);
        piVar5 = (int *)(*(int *)(*piVar5 + 0x10) + 0x18);
        do {
          iVar2 = *piVar5;
          bVar8 = (bool)hasExclusiveAccess(piVar5);
        } while (!bVar8);
        *piVar5 = 1;
        if (iVar2 == -1) {
          FUN_01be6c3c(0xf0,piVar5,0x81,1);
        }
        goto LAB_01403714;
      }
LAB_0140370c:
      ClearExclusiveLocal();
      DataMemoryBarrier(0xb);
LAB_01403714:
      piVar5 = piVar7;
    } while (piVar7 != piVar6 + iVar1 * 3);
  }
  FUN_01403810(local_34 + 8);
  uVar3 = 0;
  bVar8 = *(int *)(local_34 + 0x10) == 0;
  if (bVar8) {
    uVar3 = *(uint *)(local_34 + 0x1c);
  }
  DataMemoryBarrier(0xb);
  if (bVar8) {
    uVar3 = (uint)(uVar3 == 0);
  }
  *(char *)(param_1 + 0x20) = (char)uVar3;
  DataMemoryBarrier(0xb);
  FUN_00a97e8c(local_34,local_30);
  return;
code_r0x01403700:
  if (*piVar4 != 0) goto LAB_0140370c;
  goto LAB_014036f4;
}

