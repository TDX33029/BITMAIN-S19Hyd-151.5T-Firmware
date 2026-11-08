// FUN_005c8b90 @ 005c8b90 size=884 calls_out=13 calls_in=2
// strings: A Tokio 1.x context was found; but IO is disabled. Call `enable_io` on the runtime builder to enable IO.

void FUN_005c8b90(ulonglong *param_1,undefined4 param_2,undefined4 param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  int *piVar6;
  char *pcVar7;
  int *piVar8;
  int *piVar9;
  ulonglong uVar10;
  int *local_38;
  int *local_34;
  int *local_30;
  undefined4 local_2c;
  
  uVar10 = FUN_0164ec90(param_3);
  piVar6 = (int *)(uVar10 >> 0x20);
  iVar2 = 0x180;
  if ((uVar10 & 1) != 0) {
    iVar2 = 0xb8;
  }
  if (*(int *)((int)piVar6 + iVar2 + 0x30) == -1) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8("A Tokio 1.x context was found, but IO is disabled. Call `enable_io` on the runtime builder to enable IO."
                 ,0x68,param_3);
  }
  pcVar7 = (char *)((int)piVar6 + iVar2 + 0x3c);
  if (*pcVar7 == '\0') {
    bVar1 = (bool)hasExclusiveAccess(pcVar7);
    if (!bVar1) goto LAB_005c8c00;
    *pcVar7 = '\x01';
    DataMemoryBarrier(0xb);
  }
  else {
    ClearExclusiveLocal();
LAB_005c8c00:
    FUN_01280da8(pcVar7);
  }
  FUN_0128236c(pcVar7);
  FUN_0164736c(&local_38,(int)piVar6 + iVar2 + 0x40);
  piVar8 = local_38;
  piVar9 = local_34;
  if ((char)local_38 == '\x04') {
    FUN_01282570(pcVar7);
    if (*pcVar7 == '\x01') {
      DataMemoryBarrier(0xb);
      do {
        bVar1 = (bool)hasExclusiveAccess(pcVar7);
        if (bVar1) {
          *pcVar7 = '\0';
          goto LAB_005c8c6c;
        }
      } while (*pcVar7 == '\x01');
    }
    ClearExclusiveLocal();
    FUN_01280a5c(pcVar7);
LAB_005c8c6c:
    local_2c = 0;
    local_38 = (int *)0x80002005;
    piVar8 = local_34 + 8;
    local_30 = piVar8;
    iVar3 = FUN_016d3742(*(undefined4 *)((int)piVar6 + iVar2 + 0x30),1,param_2,&local_38);
    if (-1 < iVar3) {
LAB_005c8d0c:
      if ((int)uVar10 != 2) {
        *(undefined4 *)((int)param_1 + 0xc) = param_2;
        *param_1 = uVar10;
        *(int **)(param_1 + 1) = local_34;
        return;
      }
      piVar8 = piVar6;
      goto LAB_005c8ec4;
    }
    puVar4 = (undefined4 *)FUN_016d2bc8();
    piVar9 = (int *)*puVar4;
    if (*pcVar7 == '\0') {
      bVar1 = (bool)hasExclusiveAccess(pcVar7);
      if (!bVar1) goto LAB_005c8d6c;
      *pcVar7 = '\x01';
      DataMemoryBarrier(0xb);
    }
    else {
      ClearExclusiveLocal();
LAB_005c8d6c:
      FUN_01280da8(pcVar7);
    }
    FUN_0128236c(pcVar7);
    if (*piVar8 == 0) {
      if (*(int **)((int)piVar6 + iVar2 + 0x4c) == piVar8) {
        piVar5 = (int *)local_34[9];
        *(int **)((int)piVar6 + iVar2 + 0x4c) = piVar5;
        goto joined_r0x005c8df4;
      }
    }
    else {
      piVar5 = (int *)local_34[9];
      *(int **)(*piVar8 + 4) = piVar5;
joined_r0x005c8df4:
      if (piVar5 == (int *)0x0) {
        if (*(int **)((int)piVar6 + iVar2 + 0x50) != piVar8) goto LAB_005c8e04;
        *(int *)((int)piVar6 + iVar2 + 0x50) = *piVar8;
      }
      else {
        *piVar5 = *piVar8;
      }
      local_34[8] = 0;
      local_34[9] = 0;
      DataMemoryBarrier(0xb);
      do {
        iVar2 = *local_34;
        bVar1 = (bool)hasExclusiveAccess(local_34);
      } while (!bVar1);
      *local_34 = iVar2 + -1;
      if (iVar2 == 1) {
        DataMemoryBarrier(0xb);
        FUN_01659660(local_34);
      }
    }
LAB_005c8e04:
    FUN_01282570(pcVar7);
    if (*pcVar7 == '\x01') {
      DataMemoryBarrier(0xb);
      do {
        bVar1 = (bool)hasExclusiveAccess(pcVar7);
        if (bVar1) {
          *pcVar7 = '\0';
          goto LAB_005c8e44;
        }
      } while (*pcVar7 == '\x01');
    }
    ClearExclusiveLocal();
    FUN_01280a5c(pcVar7);
LAB_005c8e44:
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *local_34;
      bVar1 = (bool)hasExclusiveAccess(local_34);
    } while (!bVar1);
    *local_34 = iVar2 + -1;
    piVar8 = (int *)0x0;
    if (iVar2 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01659660(local_34);
    }
  }
  else {
    FUN_01282570(pcVar7);
    if (*pcVar7 == '\x01') {
      DataMemoryBarrier(0xb);
      do {
        bVar1 = (bool)hasExclusiveAccess(pcVar7);
        if (bVar1) {
          *pcVar7 = '\0';
          goto LAB_005c8cf8;
        }
      } while (*pcVar7 == '\x01');
    }
    ClearExclusiveLocal();
    FUN_01280a5c(pcVar7);
LAB_005c8cf8:
    if (((uint)piVar8 & 0xff) == 4) goto LAB_005c8d0c;
  }
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar6;
    bVar1 = (bool)hasExclusiveAccess(piVar6);
  } while (!bVar1);
  *piVar6 = iVar2 + -1;
  if ((int)uVar10 == 0) {
    if (iVar2 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01659344(piVar6);
    }
  }
  else if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_016586fc(piVar6);
  }
LAB_005c8ec4:
  FUN_016dffb2(param_2);
  *(undefined4 *)param_1 = 2;
  *(int **)((int)param_1 + 4) = piVar8;
  *(int **)(param_1 + 1) = piVar9;
  return;
}

