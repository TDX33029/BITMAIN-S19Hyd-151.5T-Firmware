// FUN_01641448 @ 01641448 size=904 calls_out=13 calls_in=1
// strings: A Tokio 1.x context was found; but IO is disabled. Call `enable_io` on the runtime builder to enable IO.

void FUN_01641448(ulonglong *param_1,undefined4 param_2)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  int *piVar7;
  char *pcVar8;
  int *piVar9;
  ulonglong uVar10;
  int *local_3c;
  int *local_38;
  int *local_34;
  int *local_30;
  undefined4 local_2c;
  
  uVar10 = FUN_0164ec90(&DAT_018aca40);
  piVar7 = (int *)(uVar10 >> 0x20);
  iVar3 = 0x180;
  if ((uVar10 & 1) != 0) {
    iVar3 = 0xb8;
  }
  if (*(int *)((int)piVar7 + iVar3 + 0x30) == -1) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8("A Tokio 1.x context was found, but IO is disabled. Call `enable_io` on the runtime builder to enable IO."
                 ,0x68,&DAT_018aca40);
  }
  pcVar8 = (char *)((int)piVar7 + iVar3 + 0x3c);
  if (*pcVar8 == '\0') {
    bVar1 = (bool)hasExclusiveAccess(pcVar8);
    if (!bVar1) goto LAB_016414b0;
    *pcVar8 = '\x01';
    DataMemoryBarrier(0xb);
  }
  else {
    ClearExclusiveLocal();
LAB_016414b0:
    FUN_01280da8(pcVar8);
  }
  FUN_0128236c(pcVar8);
  FUN_0164736c(&local_38,(int)piVar7 + iVar3 + 0x40);
  piVar2 = local_34;
  piVar9 = local_38;
  if ((char)local_38 == '\x04') {
    FUN_01282570(pcVar8);
    if (*pcVar8 == '\x01') {
      DataMemoryBarrier(0xb);
      do {
        bVar1 = (bool)hasExclusiveAccess(pcVar8);
        if (bVar1) {
          *pcVar8 = '\0';
          goto LAB_01641520;
        }
      } while (*pcVar8 == '\x01');
    }
    ClearExclusiveLocal();
    FUN_01280a5c(pcVar8);
LAB_01641520:
    local_38 = (int *)0x80002005;
    piVar9 = piVar2 + 8;
    local_2c = 0;
    local_30 = piVar9;
    iVar4 = FUN_016d3742(*(undefined4 *)((int)piVar7 + iVar3 + 0x30),1,param_2,&local_38);
    if (iVar4 < 0) {
      puVar5 = (undefined4 *)FUN_016d2bc8();
      local_3c = (int *)*puVar5;
      local_38 = (int *)0x0;
      local_34 = local_3c;
      if (*pcVar8 == '\0') {
        bVar1 = (bool)hasExclusiveAccess(pcVar8);
        if (!bVar1) goto LAB_01641628;
        *pcVar8 = '\x01';
        DataMemoryBarrier(0xb);
      }
      else {
        ClearExclusiveLocal();
LAB_01641628:
        FUN_01280da8(pcVar8);
      }
      FUN_0128236c(pcVar8);
      if (*piVar9 == 0) {
        if (*(int **)((int)piVar7 + iVar3 + 0x4c) == piVar9) {
          piVar6 = (int *)piVar2[9];
          *(int **)((int)piVar7 + iVar3 + 0x4c) = piVar6;
          goto joined_r0x016416b0;
        }
      }
      else {
        piVar6 = (int *)piVar2[9];
        *(int **)(*piVar9 + 4) = piVar6;
joined_r0x016416b0:
        if (piVar6 == (int *)0x0) {
          if (*(int **)((int)piVar7 + iVar3 + 0x50) != piVar9) goto LAB_016416c0;
          *(int *)((int)piVar7 + iVar3 + 0x50) = *piVar9;
        }
        else {
          *piVar6 = *piVar9;
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
LAB_016416c0:
      FUN_01282570(pcVar8);
      if (*pcVar8 == '\x01') {
        DataMemoryBarrier(0xb);
        do {
          bVar1 = (bool)hasExclusiveAccess(pcVar8);
          if (bVar1) {
            *pcVar8 = '\0';
            goto LAB_01641700;
          }
        } while (*pcVar8 == '\x01');
      }
      ClearExclusiveLocal();
      FUN_01280a5c(pcVar8);
LAB_01641700:
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *piVar2;
        bVar1 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar1);
      *piVar2 = iVar3 + -1;
      piVar9 = (int *)0x0;
      if (iVar3 == 1) {
        DataMemoryBarrier(0xb);
        FUN_01659660(piVar2);
      }
      goto LAB_01641730;
    }
LAB_016415c8:
    local_3c = piVar2;
    if ((int)uVar10 != 2) {
      *(undefined4 *)((int)param_1 + 0xc) = param_2;
      goto LAB_0164178c;
    }
  }
  else {
    local_3c = local_34;
    FUN_01282570(pcVar8);
    if (*pcVar8 == '\x01') {
      DataMemoryBarrier(0xb);
      do {
        bVar1 = (bool)hasExclusiveAccess(pcVar8);
        if (bVar1) {
          *pcVar8 = '\0';
          goto LAB_016415b4;
        }
      } while (*pcVar8 == '\x01');
    }
    ClearExclusiveLocal();
    FUN_01280a5c(pcVar8);
LAB_016415b4:
    if (((uint)piVar9 & 0xff) == 4) goto LAB_016415c8;
LAB_01641730:
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar7;
      bVar1 = (bool)hasExclusiveAccess(piVar7);
    } while (!bVar1);
    *piVar7 = iVar3 + -1;
    if ((int)uVar10 == 0) {
      uVar10 = CONCAT44(piVar9,2);
      if (iVar3 == 1) {
        DataMemoryBarrier(0xb);
        FUN_01659344(piVar7);
        uVar10 = CONCAT44(piVar9,2);
      }
    }
    else {
      uVar10 = CONCAT44(piVar9,2);
      if (iVar3 == 1) {
        DataMemoryBarrier(0xb);
        FUN_016586fc(piVar7);
        uVar10 = CONCAT44(piVar9,2);
      }
    }
  }
  FUN_016dffb2(param_2);
LAB_0164178c:
  *param_1 = uVar10;
  *(int **)(param_1 + 1) = local_3c;
  return;
}

