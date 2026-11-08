// FUN_019e23ac @ 019e23ac size=1088 calls_out=14 calls_in=2
// strings: A Tokio 1.x context was found; but IO is disabled. Call `enable_io` on the runtime builder to enable IO.

void FUN_019e23ac(int *param_1,int *param_2)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  byte bVar7;
  bool bVar8;
  char *pcVar9;
  int local_24;
  int *local_20;
  code *local_1c;
  
  if (*param_1 == -0x80000000) {
    iVar3 = param_1[1];
    piVar4 = (int *)(iVar3 + 8);
    if (*piVar4 == 2) {
      DataMemoryBarrier(0xb);
      do {
        bVar8 = (bool)hasExclusiveAccess(piVar4);
        if (bVar8) {
          *piVar4 = 0;
          DataMemoryBarrier(0xb);
          return;
        }
      } while (*piVar4 == 2);
    }
    ClearExclusiveLocal();
    pcVar9 = (char *)(iVar3 + 0x10);
    DataMemoryBarrier(0xb);
    if (*pcVar9 == '\0') {
      bVar8 = (bool)hasExclusiveAccess(pcVar9);
      if (bVar8) {
        *pcVar9 = '\x01';
        DataMemoryBarrier(0xb);
        goto LAB_019ee414;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    FUN_0164fba8(pcVar9);
LAB_019ee414:
    FUN_0165098c(pcVar9);
    local_24 = *piVar4;
    if (local_24 == 0) {
      bVar8 = true;
      DataMemoryBarrier(0xb);
      do {
        bVar1 = (bool)hasExclusiveAccess(piVar4);
        if (bVar1) {
          *piVar4 = 1;
          goto LAB_019ee450;
        }
        local_24 = *piVar4;
      } while (local_24 == 0);
    }
    bVar8 = false;
    ClearExclusiveLocal();
LAB_019ee450:
    DataMemoryBarrier(0xb);
    if (!bVar8) {
      if (local_24 != 2) {
        local_20 = &local_24;
        local_1c = FUN_012fd02c;
                    /* WARNING: Subroutine does not return */
        FUN_012fb100(&DAT_0058138c,&local_20,&DAT_01d29660);
      }
      DataMemoryBarrier(0xb);
      do {
        bVar8 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar8);
      *piVar4 = 0;
LAB_019ee4d0:
      DataMemoryBarrier(0xb);
      FUN_01650a90(pcVar9);
      if (*pcVar9 == '\x01') {
        DataMemoryBarrier(0xb);
        do {
          bVar8 = (bool)hasExclusiveAccess(pcVar9);
          if (bVar8) {
            *pcVar9 = '\0';
            return;
          }
        } while (*pcVar9 == '\x01');
      }
      ClearExclusiveLocal();
      FUN_0164f86c(pcVar9);
      return;
    }
    do {
      FUN_0164f0b8(iVar3 + 0xc,pcVar9);
      if (*piVar4 == 2) {
        DataMemoryBarrier(0xb);
        do {
          bVar8 = (bool)hasExclusiveAccess(piVar4);
          if (bVar8) {
            *piVar4 = 0;
            goto LAB_019ee4d0;
          }
        } while (*piVar4 == 2);
      }
      ClearExclusiveLocal();
      DataMemoryBarrier(0xb);
    } while( true );
  }
  if (*param_2 == -1) {
                    /* WARNING: Subroutine does not return */
    FUN_0130739c("A Tokio 1.x context was found, but IO is disabled. Call `enable_io` on the runtime builder to enable IO."
                 ,0x68,&DAT_01d299f0);
  }
  FUN_019f81ec(param_1);
  FUN_019df5e4(param_1);
  bVar7 = DAT_01d50464;
  do {
    bVar2 = DAT_01d50464;
    if ((bVar7 & 1) != 0) {
      return;
    }
    if (DAT_01d50464 == bVar7) {
      bVar1 = (bool)hasExclusiveAccess(0x1d50464);
      if (bVar1) {
        DAT_01d50464 = bVar7 | 1;
      }
      bVar8 = false;
      if (bVar1) {
        DataMemoryBarrier(0xb);
        bVar8 = true;
      }
    }
    else {
      bVar8 = false;
      ClearExclusiveLocal();
    }
    bVar7 = bVar2;
  } while (!bVar8);
  FUN_0165098c();
  if (DAT_01d50468 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    uVar5 = DAT_01d50468[0x27] & 0xfffffffe;
    if (DAT_01d5046c == uVar5) {
      uVar6 = 1;
      if ((DAT_01d50468[0x27] & 1U) == 0) {
        uVar6 = 2;
      }
    }
    else {
      uVar6 = 0;
      DAT_01d5046c = uVar5;
    }
    if ((uVar6 == 2) || ((uVar6 & 1) != 0)) goto LAB_019ea898;
    if (DAT_01d50454 == '\0') {
      bVar8 = (bool)hasExclusiveAccess(0x1d50454);
      if (!bVar8) goto LAB_019ea854;
      DAT_01d50454 = '\x01';
      DataMemoryBarrier(0xb);
    }
    else {
      ClearExclusiveLocal();
LAB_019ea854:
      FUN_0164fba8(&DAT_01d50454);
    }
    FUN_0165098c(&DAT_01d50454);
    FUN_019f7d9c();
    goto LAB_019ea898;
  }
  if (DAT_01d50454 == '\0') {
    bVar8 = (bool)hasExclusiveAccess(0x1d50454);
    if (!bVar8) goto LAB_019ea7f0;
    DAT_01d50454 = '\x01';
    DataMemoryBarrier(0xb);
  }
  else {
    ClearExclusiveLocal();
LAB_019ea7f0:
    FUN_0164fba8(&DAT_01d50454);
  }
  FUN_0165098c(&DAT_01d50454);
  if (DAT_01d50460 != 0) {
    FUN_019ea158(&local_24,0x11,param_1[7]);
    if (local_24 == 0) {
      if (DAT_01d50468 != (int *)0x0) {
        FUN_019d8724(&DAT_01d50468);
      }
      DAT_01d50468 = local_20;
      DAT_01d5046c = (uint)local_1c;
      FUN_019f7d9c();
      goto LAB_019ea898;
    }
    FUN_019f7edc(&local_24);
  }
  FUN_019f6ff0();
LAB_019ea898:
  FUN_01650a90(&DAT_01d50464);
  if (DAT_01d50464 != 1) {
    ClearExclusiveLocal();
    FUN_0164f86c(&DAT_01d50464);
    return;
  }
  DataMemoryBarrier(0xb);
  do {
    bVar8 = (bool)hasExclusiveAccess(0x1d50464);
  } while (!bVar8);
  DAT_01d50464 = 0;
  return;
}

