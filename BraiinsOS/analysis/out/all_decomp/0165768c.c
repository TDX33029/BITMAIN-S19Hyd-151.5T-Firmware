// FUN_0165768c @ 0165768c size=876 calls_out=11 calls_in=2
// strings: A Tokio 1.x context was found; but IO is disabled. Call `enable_io` on the runtime builder to enable IO.

void FUN_0165768c(uint *param_1,undefined4 param_2,uint param_3,int *param_4,undefined4 param_5)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  uint uVar7;
  char *pcVar8;
  int *piVar9;
  int *piVar10;
  uint local_38;
  int *local_34;
  int *local_30;
  undefined4 local_2c;
  
  iVar3 = 0x180;
  if ((param_3 & 1) != 0) {
    iVar3 = 0xb8;
  }
  if (*(int *)((int)param_4 + iVar3 + 0x30) == -1) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8("A Tokio 1.x context was found, but IO is disabled. Call `enable_io` on the runtime builder to enable IO."
                 ,0x68,param_5);
  }
  pcVar8 = (char *)((int)param_4 + iVar3 + 0x3c);
  if (*pcVar8 == '\0') {
    bVar1 = (bool)hasExclusiveAccess(pcVar8);
    if (!bVar1) goto LAB_016576e8;
    *pcVar8 = '\x01';
    DataMemoryBarrier(0xb);
  }
  else {
    ClearExclusiveLocal();
LAB_016576e8:
    FUN_01280da8(pcVar8);
  }
  FUN_0128236c(pcVar8);
  FUN_0164736c(&local_38,(int)param_4 + iVar3 + 0x40);
  piVar2 = local_34;
  uVar7 = local_38;
  if ((char)local_38 != '\x04') {
    FUN_01282570(pcVar8);
    if (*pcVar8 == '\x01') {
      DataMemoryBarrier(0xb);
      do {
        bVar1 = (bool)hasExclusiveAccess(pcVar8);
        if (bVar1) {
          *pcVar8 = '\0';
          goto LAB_016577e8;
        }
      } while (*pcVar8 == '\x01');
    }
    ClearExclusiveLocal();
    FUN_01280a5c(pcVar8);
LAB_016577e8:
    piVar9 = piVar2;
    if ((uVar7 & 0xff) == 4) goto LAB_016577fc;
    goto LAB_01657954;
  }
  FUN_01282570(pcVar8);
  if (*pcVar8 == '\x01') {
    DataMemoryBarrier(0xb);
    do {
      bVar1 = (bool)hasExclusiveAccess(pcVar8);
      if (bVar1) {
        *pcVar8 = '\0';
        goto LAB_01657758;
      }
    } while (*pcVar8 == '\x01');
  }
  ClearExclusiveLocal();
  FUN_01280a5c(pcVar8);
LAB_01657758:
  local_38 = 0x80002001;
  piVar10 = local_34 + 8;
  local_2c = 0;
  local_30 = piVar10;
  iVar4 = FUN_016d3742(*(undefined4 *)((int)param_4 + iVar3 + 0x30),1,param_2,&local_38);
  if (-1 < iVar4) {
LAB_016577fc:
    *param_1 = param_3;
    param_1[1] = (uint)param_4;
    param_1[2] = (uint)piVar2;
    return;
  }
  puVar5 = (undefined4 *)FUN_016d2bc8();
  piVar9 = (int *)*puVar5;
  local_38 = 0;
  local_34 = piVar9;
  if (*pcVar8 == '\0') {
    bVar1 = (bool)hasExclusiveAccess(pcVar8);
    if (!bVar1) goto LAB_01657848;
    *pcVar8 = '\x01';
    DataMemoryBarrier(0xb);
  }
  else {
    ClearExclusiveLocal();
LAB_01657848:
    FUN_01280da8(pcVar8);
  }
  FUN_0128236c(pcVar8);
  if (*piVar10 == 0) {
    if (*(int **)((int)param_4 + iVar3 + 0x4c) == piVar10) {
      piVar6 = (int *)piVar2[9];
      *(int **)((int)param_4 + iVar3 + 0x4c) = piVar6;
      goto joined_r0x016578d4;
    }
  }
  else {
    piVar6 = (int *)piVar2[9];
    *(int **)(*piVar10 + 4) = piVar6;
joined_r0x016578d4:
    if (piVar6 == (int *)0x0) {
      if (*(int **)((int)param_4 + iVar3 + 0x50) != piVar10) goto LAB_016578e4;
      *(int *)((int)param_4 + iVar3 + 0x50) = *piVar10;
    }
    else {
      *piVar6 = *piVar10;
    }
    piVar2[8] = 0;
    piVar2[9] = 0;
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01659660(piVar2);
    }
  }
LAB_016578e4:
  FUN_01282570(pcVar8);
  if (*pcVar8 == '\x01') {
    DataMemoryBarrier(0xb);
    do {
      bVar1 = (bool)hasExclusiveAccess(pcVar8);
      if (bVar1) {
        *pcVar8 = '\0';
        goto LAB_01657924;
      }
    } while (*pcVar8 == '\x01');
  }
  ClearExclusiveLocal();
  FUN_01280a5c(pcVar8);
LAB_01657924:
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  uVar7 = 0;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01659660(piVar2);
  }
LAB_01657954:
  param_1[2] = (uint)piVar9;
  *param_1 = 2;
  *(char *)((int)param_1 + 7) = (char)(uVar7 >> 0x18);
  *(char *)(param_1 + 1) = (char)uVar7;
  *(short *)((int)param_1 + 5) = (short)(uVar7 >> 8);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *param_4;
    bVar1 = (bool)hasExclusiveAccess(param_4);
  } while (!bVar1);
  *param_4 = iVar3 + -1;
  if (param_3 == 0) {
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01659344(param_4);
      return;
    }
  }
  else if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_016586fc(param_4);
    return;
  }
  return;
}

