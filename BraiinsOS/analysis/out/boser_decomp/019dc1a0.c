// FUN_019dc1a0 @ 019dc1a0 size=688 calls_out=12 calls_in=8
// strings: A Tokio 1.x context was found; but IO is disabled. Call `enable_io` on the runtime builder to enable IO.

void FUN_019dc1a0(ulonglong *param_1,uint param_2)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  uint uVar7;
  ulonglong uVar8;
  uint local_3c;
  uint local_38;
  int *local_34;
  uint local_30;
  int *local_2c;
  
  uVar8 = FUN_019ef7f4(&DAT_01d28e34);
  uVar3 = (uint)(uVar8 >> 0x20);
  iVar2 = 0x180;
  if ((uVar8 & 1) != 0) {
    iVar2 = 0xb8;
  }
  piVar6 = (int *)(uVar3 + iVar2);
  local_3c = param_2;
  if (*piVar6 == -1) {
                    /* WARNING: Subroutine does not return */
    FUN_0130739c("A Tokio 1.x context was found, but IO is disabled. Call `enable_io` on the runtime builder to enable IO."
                 ,0x68,&DAT_01d28e34);
  }
  piVar4 = piVar6 + 3;
  if ((char)*piVar4 == '\0') {
    bVar1 = (bool)hasExclusiveAccess(piVar4);
    if (!bVar1) goto LAB_019dc210;
    *(char *)piVar4 = '\x01';
    DataMemoryBarrier(0xb);
  }
  else {
    ClearExclusiveLocal();
LAB_019dc210:
    FUN_0164fba8(piVar4);
  }
  FUN_0165098c(piVar4);
  FUN_019f8030(&local_30,piVar6 + 4);
  piVar5 = local_2c;
  uVar7 = local_30;
  if (((char)local_30 == '\x04') || ((local_30 & 0xff) == 4)) {
    FUN_01650a90(piVar4);
    if ((char)*piVar4 == '\x01') {
      DataMemoryBarrier(0xb);
      do {
        bVar1 = (bool)hasExclusiveAccess(piVar4);
        if (bVar1) {
          *(char *)piVar4 = '\0';
          goto LAB_019dc29c;
        }
      } while ((char)*piVar4 == '\x01');
    }
    ClearExclusiveLocal();
    FUN_0164f86c(piVar4);
LAB_019dc29c:
    FUN_019f13e8(&local_38,piVar6,&local_3c,piVar5 + 8,3);
    if ((char)local_38 != '\x04') {
      local_2c = local_34;
      local_30 = local_38;
      if ((char)*piVar4 == '\0') {
        bVar1 = (bool)hasExclusiveAccess(piVar4);
        if (!bVar1) goto LAB_019dc344;
        *(char *)piVar4 = '\x01';
        DataMemoryBarrier(0xb);
      }
      else {
        ClearExclusiveLocal();
LAB_019dc344:
        FUN_0164fba8(piVar4);
      }
      FUN_0165098c(piVar4);
      FUN_019f7f9c(piVar6 + 4,piVar5);
      FUN_01650a90(piVar4);
      if ((char)*piVar4 == '\x01') {
        DataMemoryBarrier(0xb);
        do {
          bVar1 = (bool)hasExclusiveAccess(piVar4);
          if (bVar1) {
            *(char *)piVar4 = '\0';
            goto LAB_019dc3a0;
          }
        } while ((char)*piVar4 == '\x01');
      }
      ClearExclusiveLocal();
      FUN_0164f86c(piVar4);
LAB_019dc3a0:
      DataMemoryBarrier(0xb);
      do {
        iVar2 = *piVar5;
        bVar1 = (bool)hasExclusiveAccess(piVar5);
      } while (!bVar1);
      *piVar5 = iVar2 + -1;
      uVar7 = local_38;
      if (iVar2 == 1) {
        DataMemoryBarrier(0xb);
        FUN_019db52c(piVar5);
      }
      goto LAB_019dc3cc;
    }
LAB_019dc3dc:
    if ((int)uVar8 != 2) {
      *(uint *)((int)param_1 + 0xc) = param_2;
      goto LAB_019dc41c;
    }
    uVar7 = uVar3;
  }
  else {
    FUN_01650a90(piVar4);
    local_34 = piVar5;
    if ((char)*piVar4 == '\x01') {
      DataMemoryBarrier(0xb);
      do {
        bVar1 = (bool)hasExclusiveAccess(piVar4);
        if (bVar1) {
          *(char *)piVar4 = '\0';
          goto LAB_019dc3cc;
        }
      } while ((char)*piVar4 == '\x01');
    }
    ClearExclusiveLocal();
    FUN_0164f86c(piVar4);
LAB_019dc3cc:
    piVar5 = local_34;
    if ((uVar7 & 0xff) == 4) goto LAB_019dc3dc;
    FUN_014397e4((int)uVar8,uVar3);
  }
  FUN_01bf01d6(param_2);
  uVar8 = CONCAT44(uVar7,2);
LAB_019dc41c:
  *param_1 = uVar8;
  *(int **)(param_1 + 1) = piVar5;
  return;
}

