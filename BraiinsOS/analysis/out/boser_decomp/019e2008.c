// FUN_019e2008 @ 019e2008 size=780 calls_out=10 calls_in=2
// strings: A Tokio 1.x context was found; but IO is disabled. Call `enable_io` on the runtime builder to enable IO.

void FUN_019e2008(int *param_1,int *param_2,uint param_3,uint param_4,int param_5)

{
  bool bVar1;
  byte bVar2;
  byte bVar3;
  undefined1 *puVar4;
  uint uVar5;
  uint uVar6;
  int unaff_r4;
  char *pcVar7;
  uint unaff_r5;
  uint uVar8;
  int *piVar9;
  int iVar10;
  bool bVar11;
  int local_34;
  int *local_30;
  code *local_2c;
  int local_28;
  int iStack_24;
  
  if (*param_1 == -0x80000000) {
    iVar10 = param_1[1];
    piVar9 = (int *)(iVar10 + 8);
    if (*piVar9 == 2) {
      DataMemoryBarrier(0xb);
      do {
        bVar11 = (bool)hasExclusiveAccess(piVar9);
        if (bVar11) {
          *piVar9 = 0;
          DataMemoryBarrier(0xb);
          return;
        }
      } while (*piVar9 == 2);
    }
    bVar11 = param_3 == 0 && param_4 == 0;
    ClearExclusiveLocal();
    if (param_3 == 0 && param_4 == 0) {
      bVar11 = param_5 == 0;
    }
    DataMemoryBarrier(0xb);
    if (bVar11) {
      return;
    }
    pcVar7 = (char *)(iVar10 + 0x10);
    if (*pcVar7 == '\0') {
      bVar11 = (bool)hasExclusiveAccess(pcVar7);
      if (bVar11) {
        *pcVar7 = '\x01';
        DataMemoryBarrier(0xb);
        goto LAB_019e2098;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    FUN_0164fba8(pcVar7);
LAB_019e2098:
    FUN_0165098c(pcVar7);
    local_34 = *piVar9;
    if (local_34 == 0) {
      bVar11 = true;
      DataMemoryBarrier(0xb);
      do {
        bVar1 = (bool)hasExclusiveAccess(piVar9);
        if (bVar1) {
          *piVar9 = 1;
          goto LAB_019e20d4;
        }
        local_34 = *piVar9;
      } while (local_34 == 0);
    }
    bVar11 = false;
    ClearExclusiveLocal();
LAB_019e20d4:
    DataMemoryBarrier(0xb);
    if (bVar11) {
      FUN_019ac130(&local_30,1);
      uVar5 = (int)local_30 + param_3;
      uVar8 = (int)local_2c + param_4 + (uint)CARRY4((uint)local_30,param_3);
      uVar6 = (uint)((int)(((uint)local_2c ^ uVar8) & ~((uint)local_2c ^ param_4)) < 0);
      if ((int)param_4 < 0 == uVar6) {
        puVar4 = (undefined1 *)(local_28 + param_5);
        if (puVar4 < &DAT_3b9aca00) {
          uVar6 = uVar8;
        }
        else {
          bVar11 = 0xfffffffe < uVar5;
          uVar5 = uVar5 + 1;
          puVar4 = puVar4 + -1000000000;
          uVar6 = uVar8 + bVar11;
          if ((int)((uVar8 ^ uVar6) & ~uVar8) < 0) {
            puVar4 = &DAT_3b9aca00;
          }
        }
      }
      else {
        puVar4 = &DAT_3b9aca00;
      }
      FUN_0164f0b8(iVar10 + 0xc,pcVar7,uVar5,uVar6,puVar4);
      DataMemoryBarrier(0xb);
      do {
        local_34 = *piVar9;
        bVar11 = (bool)hasExclusiveAccess(piVar9);
      } while (!bVar11);
      *piVar9 = 0;
      DataMemoryBarrier(0xb);
      if (1 < local_34 - 1U) {
        local_30 = &local_34;
        local_2c = FUN_012fd02c;
                    /* WARNING: Subroutine does not return */
        FUN_012fb100(&DAT_005806a3,&local_30,&DAT_01d29640);
      }
      FUN_01650a90(pcVar7);
      if (*pcVar7 == '\x01') {
        DataMemoryBarrier(0xb);
        do {
          bVar11 = (bool)hasExclusiveAccess(pcVar7);
          if (bVar11) {
            *pcVar7 = '\0';
            return;
          }
        } while (*pcVar7 == '\x01');
      }
    }
    else {
      if (local_34 != 2) {
        local_30 = &local_34;
        local_2c = FUN_012fd02c;
                    /* WARNING: Subroutine does not return */
        FUN_012fb100(&DAT_0057b7bc,&local_30,&DAT_01d29650);
      }
      DataMemoryBarrier(0xb);
      do {
        bVar11 = (bool)hasExclusiveAccess(piVar9);
      } while (!bVar11);
      *piVar9 = 0;
      DataMemoryBarrier(0xb);
      FUN_01650a90(pcVar7);
      if (*pcVar7 == '\x01') {
        DataMemoryBarrier(0xb);
        do {
          bVar11 = (bool)hasExclusiveAccess(pcVar7);
          if (bVar11) {
            *pcVar7 = '\0';
            return;
          }
        } while (*pcVar7 == '\x01');
      }
    }
    ClearExclusiveLocal();
    FUN_0164f86c(pcVar7);
    return;
  }
  if (*param_2 == -1) {
                    /* WARNING: Subroutine does not return */
    FUN_0130739c("A Tokio 1.x context was found, but IO is disabled. Call `enable_io` on the runtime builder to enable IO."
                 ,0x68,&DAT_01d299e0);
  }
  FUN_019f81ec(param_1,param_2,param_3,param_4,param_5);
  FUN_019df5e4(param_1);
  bVar3 = DAT_01d50464;
  do {
    bVar2 = DAT_01d50464;
    if ((bVar3 & 1) != 0) {
      return;
    }
    if (DAT_01d50464 == bVar3) {
      bVar1 = (bool)hasExclusiveAccess(0x1d50464);
      if (bVar1) {
        DAT_01d50464 = bVar3 | 1;
      }
      bVar11 = false;
      if (bVar1) {
        DataMemoryBarrier(0xb);
        bVar11 = true;
      }
    }
    else {
      bVar11 = false;
      ClearExclusiveLocal();
    }
    bVar3 = bVar2;
  } while (!bVar11);
  FUN_0165098c();
  if (DAT_01d50468 != 0) {
    DataMemoryBarrier(0xb);
    uVar6 = *(uint *)(DAT_01d50468 + 0x9c) & 0xfffffffe;
    if (DAT_01d5046c == uVar6) {
      uVar5 = 1;
      if ((*(uint *)(DAT_01d50468 + 0x9c) & 1) == 0) {
        uVar5 = 2;
      }
    }
    else {
      uVar5 = 0;
      DAT_01d5046c = uVar6;
    }
    if ((uVar5 == 2) || ((uVar5 & 1) != 0)) goto LAB_019ea898;
    if (DAT_01d50454 == '\0') {
      bVar11 = (bool)hasExclusiveAccess(0x1d50454);
      if (!bVar11) goto LAB_019ea854;
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
    bVar11 = (bool)hasExclusiveAccess(0x1d50454);
    if (!bVar11) goto LAB_019ea7f0;
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
    FUN_019ea158(&iStack_24,0x11,param_1[7]);
    if (iStack_24 == 0) {
      if (DAT_01d50468 != 0) {
        FUN_019d8724(&DAT_01d50468);
      }
      DAT_01d50468 = unaff_r4;
      DAT_01d5046c = unaff_r5;
      FUN_019f7d9c();
      goto LAB_019ea898;
    }
    FUN_019f7edc(&iStack_24);
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
    bVar11 = (bool)hasExclusiveAccess(0x1d50464);
  } while (!bVar11);
  DAT_01d50464 = 0;
  return;
}

