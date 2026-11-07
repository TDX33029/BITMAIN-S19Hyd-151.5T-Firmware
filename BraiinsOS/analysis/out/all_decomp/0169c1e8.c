// FUN_0169c1e8 @ 0169c1e8 size=292 calls_out=2 calls_in=0
// strings: Lazy instance has previously been poisoned

undefined4 FUN_0169c1e8(undefined4 *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  int *piVar11;
  int local_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  
  puVar10 = (undefined4 *)param_1[1];
  iVar2 = *(int *)*param_1;
  *(int *)*param_1 = 0;
  pcVar4 = *(code **)(iVar2 + 0x20);
  *(undefined4 *)(iVar2 + 0x20) = 0;
  if (pcVar4 == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa478("Lazy instance has previously been poisoned",0x55,&DAT_018ae384);
  }
  (*pcVar4)(&local_40);
  piVar11 = (int *)*puVar10;
  if (*piVar11 != 0) {
    iVar2 = piVar11[6];
    if (iVar2 != 0) {
      iVar9 = piVar11[5];
      iVar8 = 0;
      do {
        piVar5 = (int *)(iVar9 + iVar8 * 0xc);
        iVar3 = 0;
        if (*piVar5 != 0) {
          iVar3 = piVar5[1];
        }
        if (*piVar5 != 0 && iVar3 != -1) {
          iVar6 = piVar5[2];
          piVar5 = (int *)(iVar3 + 4);
          DataMemoryBarrier(0xb);
          do {
            iVar3 = *piVar5;
            bVar1 = (bool)hasExclusiveAccess(piVar5);
          } while (!bVar1);
          *piVar5 = iVar3 + -1;
          if (iVar3 == 1) {
            DataMemoryBarrier(0xb);
            uVar7 = *(uint *)(iVar6 + 8);
            if (uVar7 < 5) {
              uVar7 = 4;
            }
            if ((*(int *)(iVar6 + 4) + uVar7 + 7 & -uVar7) != 0) {
              thunk_FUN_016d3fb4();
            }
          }
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 != iVar2);
    }
    if (piVar11[4] != 0) {
      thunk_FUN_016d3fb4(piVar11[5]);
    }
    piVar11 = (int *)*puVar10;
  }
  *piVar11 = 1;
  piVar11[1] = local_40;
  piVar11[2] = iStack_3c;
  piVar11[3] = iStack_38;
  piVar11[4] = iStack_34;
  piVar11[5] = iStack_30;
  piVar11[6] = iStack_2c;
  return 1;
}

