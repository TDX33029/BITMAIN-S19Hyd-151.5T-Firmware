// FUN_01639598 @ 01639598 size=888 calls_out=5 calls_in=4
// strings: 

void FUN_01639598(int param_1,uint param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  char *pcVar9;
  int local_124 [65];
  
  local_124[0x40] = 0;
  pcVar9 = (char *)(param_1 + 0xc);
  if (*pcVar9 == '\0') {
    bVar1 = (bool)hasExclusiveAccess(pcVar9);
    if (!bVar1) goto LAB_016395d8;
    *pcVar9 = '\x01';
    DataMemoryBarrier(0xb);
  }
  else {
    ClearExclusiveLocal();
LAB_016395d8:
    FUN_01280da8(pcVar9);
  }
  FUN_0128236c(pcVar9);
  if ((param_2 & 5) != 0) {
    iVar6 = *(int *)(param_1 + 0x18);
    iVar3 = *(int *)(param_1 + 0x1c);
    *(undefined4 *)(param_1 + 0x18) = 0;
    if (iVar6 != 0) {
      if (0x1f < (uint)local_124[0x40]) goto LAB_01639900;
      local_124[local_124[0x40] * 2] = iVar6;
      local_124[local_124[0x40] * 2 + 1] = iVar3;
      local_124[0x40] = local_124[0x40] + 1;
    }
  }
  if ((param_2 & 10) != 0) {
    iVar6 = *(int *)(param_1 + 0x20);
    iVar3 = *(int *)(param_1 + 0x24);
    *(undefined4 *)(param_1 + 0x20) = 0;
    if (iVar6 != 0) {
      if (0x1f < (uint)local_124[0x40]) {
LAB_01639900:
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(local_124[0x40],0x20,&DAT_018ad394);
      }
      local_124[local_124[0x40] * 2] = iVar6;
      local_124[local_124[0x40] * 2 + 1] = iVar3;
      local_124[0x40] = local_124[0x40] + 1;
    }
  }
  do {
    if ((uint)local_124[0x40] < 0x20) {
      piVar5 = *(int **)(param_1 + 0x10);
LAB_01639698:
      do {
        do {
          piVar4 = piVar5;
          if (piVar4 == (int *)0x0) {
LAB_0163983c:
            FUN_01282570(pcVar9);
            if (*pcVar9 != '\x01') goto LAB_01639870;
            DataMemoryBarrier(0xb);
            goto LAB_01639858;
          }
          piVar5 = (int *)piVar4[1];
          uVar7 = piVar4[4];
          uVar8 = -(uVar7 & 1) & 5 | (uVar7 >> 1 & 1) << 1 | (uVar7 >> 1 & 1) << 3;
          if ((uVar7 & 0x10) != 0) {
            uVar8 = uVar8 | 0x14;
          }
        } while (((uVar8 | uVar7 & 0x20) & param_2) == 0);
        if (*piVar4 == 0) {
          if (*(int **)(param_1 + 0x10) != piVar4) goto LAB_0163983c;
          *(int **)(param_1 + 0x10) = piVar5;
        }
        else {
          *(int **)(*piVar4 + 4) = piVar5;
        }
        if (piVar5 == (int *)0x0) {
          if (*(int **)(param_1 + 0x14) != piVar4) goto LAB_0163983c;
          *(int *)(param_1 + 0x14) = *piVar4;
        }
        else {
          *piVar5 = *piVar4;
        }
        iVar3 = piVar4[2];
        iVar6 = piVar4[3];
        *piVar4 = 0;
        piVar4[1] = 0;
        piVar4[2] = 0;
        if (iVar3 == 0) {
          if (0x1f < (uint)local_124[0x40]) break;
          goto LAB_01639698;
        }
        *(undefined1 *)(piVar4 + 5) = 1;
        if (0x1f < (uint)local_124[0x40]) goto LAB_01639900;
        local_124[local_124[0x40] * 2] = iVar3;
        local_124[local_124[0x40] * 2 + 1] = iVar6;
        local_124[0x40] = local_124[0x40] + 1;
      } while ((uint)local_124[0x40] < 0x20);
    }
    FUN_01282570(pcVar9);
    if (*pcVar9 == '\x01') {
      DataMemoryBarrier(0xb);
      do {
        bVar1 = (bool)hasExclusiveAccess(pcVar9);
        if (bVar1) {
          *pcVar9 = '\0';
          goto LAB_016397c0;
        }
      } while (*pcVar9 == '\x01');
    }
    ClearExclusiveLocal();
    FUN_01280a5c(pcVar9);
LAB_016397c0:
    iVar3 = local_124[0x40];
    piVar5 = local_124;
    local_124[0x40] = 0;
    for (iVar3 = iVar3 << 3; iVar3 != 0; iVar3 = iVar3 + -8) {
      iVar6 = *piVar5;
      piVar4 = piVar5 + 1;
      piVar5 = piVar5 + 2;
      (**(code **)(iVar6 + 4))(*piVar4);
    }
    if (*pcVar9 == '\0') {
      bVar1 = (bool)hasExclusiveAccess(pcVar9);
      if (!bVar1) goto LAB_01639820;
      *pcVar9 = '\x01';
      DataMemoryBarrier(0xb);
    }
    else {
      ClearExclusiveLocal();
LAB_01639820:
      FUN_01280da8(pcVar9);
    }
    FUN_0128236c(pcVar9);
  } while( true );
  while (*pcVar9 == '\x01') {
LAB_01639858:
    bVar1 = (bool)hasExclusiveAccess(pcVar9);
    if (bVar1) {
      *pcVar9 = '\0';
      goto LAB_0163987c;
    }
  }
LAB_01639870:
  ClearExclusiveLocal();
  FUN_01280a5c(pcVar9);
LAB_0163987c:
  iVar3 = local_124[0x40];
  piVar5 = local_124;
  local_124[0x40] = 0;
  for (iVar6 = 0; iVar3 * 8 != iVar6; iVar6 = iVar6 + 8) {
    iVar2 = *piVar5;
    piVar4 = piVar5 + 1;
    piVar5 = piVar5 + 2;
    (**(code **)(iVar2 + 4))(*piVar4);
  }
  piVar5 = local_124 + 1;
  for (iVar3 = local_124[0x40]; iVar3 != 0; iVar3 = iVar3 + -1) {
    piVar4 = piVar5 + -1;
    iVar6 = *piVar5;
    piVar5 = piVar5 + 2;
    (**(code **)(*piVar4 + 0xc))(iVar6);
  }
  return;
}

