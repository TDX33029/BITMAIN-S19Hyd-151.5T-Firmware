// FUN_019f598c @ 019f598c size=1280 calls_out=11 calls_in=9
// strings: A Tokio 1.x context was found; but timers are disabled. Call `enable_time` on the runtime builder to enable timers. | Timer already fired

uint FUN_019f598c(uint *param_1,undefined4 param_2,uint param_3,uint param_4,uint param_5,
                 int param_6)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  char *pcVar8;
  uint *puVar9;
  uint uVar10;
  int iVar11;
  bool bVar12;
  undefined8 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  
  iVar4 = 0x180;
  if (param_1[0xc] != 0) {
    iVar4 = 0xb8;
  }
  iVar4 = param_1[0xd] + iVar4;
  *(char *)(param_1 + 0x12) = (char)param_6;
  param_1[0xe] = param_3;
  param_1[0xf] = param_4;
  param_1[0x10] = param_5;
  if (*(undefined1 **)(iVar4 + 0x60) == &DAT_3b9aca00) {
LAB_019f5e4c:
                    /* WARNING: Subroutine does not return */
    FUN_0130739c("A Tokio 1.x context was found, but timers are disabled. Call `enable_time` on the runtime builder to enable timers."
                 ,0x73,&DAT_01d298d8);
  }
  puVar9 = param_1 + 6;
  uVar14 = 0;
  uVar15 = 999999;
  FUN_019fa158(&local_38);
  uVar13 = FUN_019f5ec0(*(undefined4 *)(iVar4 + 0x58),*(undefined4 *)(iVar4 + 0x5c),
                        *(undefined4 *)(iVar4 + 0x60),local_38,local_38,local_34,local_30,uVar14,
                        uVar15);
  uVar3 = (uint)((ulonglong)uVar13 >> 0x20);
  if ((*param_1 & 1) == 0) {
    *puVar9 = 0xffffffff;
    param_1[7] = 0xffffffff;
    param_1[10] = 0;
    param_1[0xb] = 0;
    *param_1 = 1;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[8] = 0;
  }
  ClearExclusiveLocal();
  uVar10 = *puVar9;
  uVar5 = param_1[7];
  while (bVar12 = uVar10 <= (uint)uVar13, uVar5 < uVar3 || uVar3 - uVar5 < (uint)bVar12) {
    uVar1 = *puVar9;
    if (uVar1 == uVar10 && param_1[7] == uVar5) {
      DataMemoryBarrier(0xb);
      bVar12 = (bool)hasExclusiveAccess(puVar9);
      if (bVar12) {
        *(undefined8 *)puVar9 = uVar13;
      }
    }
    else {
      bVar12 = false;
      ClearExclusiveLocal();
    }
    DataMemoryBarrier(0xb);
    uVar10 = uVar1;
    uVar5 = param_1[7];
    if (bVar12) {
      return uVar1;
    }
  }
  if (param_6 == 0) {
    return uVar3 - (uVar5 + !bVar12);
  }
  iVar4 = 0x180;
  if (param_1[0xc] != 0) {
    iVar4 = 0xb8;
  }
  iVar4 = param_1[0xd] + iVar4;
  if (*(undefined1 **)(iVar4 + 0x60) == &DAT_3b9aca00) goto LAB_019f5e4c;
  pcVar8 = (char *)(iVar4 + 0x28);
  if (*pcVar8 == '\0') {
    bVar12 = (bool)hasExclusiveAccess(pcVar8);
    if (!bVar12) goto LAB_019f5e40;
    *pcVar8 = '\x01';
    DataMemoryBarrier(0xb);
  }
  else {
    ClearExclusiveLocal();
LAB_019f5e40:
    FUN_0164fba8(pcVar8);
  }
  FUN_0165098c(pcVar8);
  ClearExclusiveLocal();
  if ((param_1[7] & *puVar9) != 0xffffffff) {
    FUN_019e1e8c(iVar4 + 0x38,param_1 + 2);
  }
  DataMemoryBarrier(0xb);
  if (*(char *)(iVar4 + 0x50) == '\0') {
    do {
      bVar12 = (bool)hasExclusiveAccess(puVar9);
    } while (!bVar12);
    *(undefined8 *)puVar9 = uVar13;
    puVar6 = param_1 + 4;
    do {
      bVar12 = (bool)hasExclusiveAccess(puVar6);
    } while (!bVar12);
    *(undefined8 *)puVar6 = uVar13;
    uVar1 = *(uint *)(iVar4 + 0x38);
    uVar10 = *(uint *)(iVar4 + 0x3c);
    iVar11 = *(int *)(iVar4 + 0x48);
    uVar5 = *puVar9;
    uVar3 = param_1[7];
    ClearExclusiveLocal();
    if (uVar5 == 0xffffffff && uVar3 == 0xffffffff) {
                    /* WARNING: Subroutine does not return */
      FUN_0130739c("Timer already fired",0x13,&DAT_01d298e8);
    }
    do {
      bVar12 = (bool)hasExclusiveAccess(puVar6);
    } while (!bVar12);
    *puVar6 = uVar5;
    param_1[5] = uVar3;
    if (uVar10 <= uVar3 && (uint)(uVar5 <= uVar1) <= uVar10 - uVar3) {
      uVar10 = uVar10 ^ uVar3;
      uVar7 = uVar1 ^ uVar5 | 0x3f;
      bVar12 = (uint)(0xfffffffd < uVar7) <= uVar10 - 0xf;
      uVar1 = 0xfffffffe;
      if (uVar10 < 0x10 && bVar12) {
        uVar1 = uVar7;
      }
      if (uVar10 >= 0x10 || !bVar12) {
        uVar10 = 0xf;
      }
      uVar1 = LZCOUNT(uVar1) | 0x20;
      if (uVar10 != 0) {
        uVar1 = LZCOUNT(uVar10);
      }
      uVar1 = uVar1 ^ 0x3e;
      uVar10 = uVar1 / 6;
      if (0x23 < uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(uVar10,6,&DAT_01d2909c,uVar1 * 0x2aaaaaab);
      }
      ClearExclusiveLocal();
      iVar11 = iVar11 + (uVar10 | uVar10 << 5) * 0x10;
      uVar1 = *(int *)(iVar11 + 0x208) * 6 & 0x3e;
      uVar10 = *puVar6 >> uVar1 | param_1[5] << (0x20 - uVar1 & 0xff);
      if (-1 < (int)(uVar1 - 0x20)) {
        uVar10 = param_1[5] >> (uVar1 - 0x20 & 0xff);
      }
      uVar10 = uVar10 & 0x3f;
      FUN_019e0740(iVar11 + uVar10 * 8,param_1 + 2);
      uVar1 = 1 << uVar10;
      uVar7 = uVar10 - 0x20;
      if (-1 < (int)uVar7) {
        uVar1 = 0;
      }
      *(uint *)(iVar11 + 0x200) = uVar1 | *(uint *)(iVar11 + 0x200);
      uVar10 = 1 >> (0x20 - uVar10 & 0xff);
      if (-1 < (int)uVar7) {
        uVar10 = 1 << (uVar7 & 0xff);
      }
      iVar2 = *(int *)(iVar4 + 0x30);
      *(uint *)(iVar11 + 0x204) = uVar10 | *(uint *)(iVar11 + 0x204);
      uVar10 = *(int *)(iVar4 + 0x34) - (uint)(iVar2 == 0);
      if (uVar3 < uVar10 || uVar10 - uVar3 < (uint)(uVar5 <= iVar2 - 1U)) {
        FUN_019e2824(iVar4);
      }
      FUN_01650a90(pcVar8);
      if (*pcVar8 == '\x01') {
        DataMemoryBarrier(0xb);
        do {
          bVar12 = (bool)hasExclusiveAccess(pcVar8);
          if (bVar12) {
            *pcVar8 = '\0';
            return 0;
          }
        } while (*pcVar8 == '\x01');
      }
      ClearExclusiveLocal();
      uVar3 = FUN_0164f86c(pcVar8);
      return uVar3;
    }
    ClearExclusiveLocal();
    if (*puVar9 != 0xffffffff || param_1[7] != 0xffffffff) {
      *(undefined1 *)(param_1 + 0xb) = 0;
      DataMemoryBarrier(0xb);
      do {
        bVar12 = (bool)hasExclusiveAccess(puVar9);
      } while (!bVar12);
      *puVar9 = 0xffffffff;
      param_1[7] = 0xffffffff;
      puVar9 = param_1 + 10;
      DataMemoryBarrier(0xb);
      do {
        uVar10 = *puVar9;
        bVar12 = (bool)hasExclusiveAccess(puVar9);
      } while (!bVar12);
      *puVar9 = uVar10 | 2;
      DataMemoryBarrier(0xb);
      if (uVar10 == 0) goto LAB_019f5db8;
    }
  }
  else {
    uVar10 = 0;
    ClearExclusiveLocal();
    if (*puVar9 != 0xffffffff || param_1[7] != 0xffffffff) {
      *(undefined1 *)(param_1 + 0xb) = 1;
      DataMemoryBarrier(0xb);
      do {
        bVar12 = (bool)hasExclusiveAccess(puVar9);
      } while (!bVar12);
      *puVar9 = 0xffffffff;
      param_1[7] = 0xffffffff;
      puVar9 = param_1 + 10;
      DataMemoryBarrier(0xb);
      do {
        uVar5 = *puVar9;
        bVar12 = (bool)hasExclusiveAccess(puVar9);
      } while (!bVar12);
      *puVar9 = uVar5 | 2;
      DataMemoryBarrier(0xb);
      if (uVar5 != 0) goto LAB_019f5dd8;
LAB_019f5db8:
      uVar10 = param_1[8];
      uVar3 = param_1[9];
      param_1[8] = 0;
      DataMemoryBarrier(0xb);
      do {
        bVar12 = (bool)hasExclusiveAccess(param_1 + 10);
      } while (!bVar12);
      param_1[10] = 0;
      goto LAB_019f5dd8;
    }
  }
  uVar10 = 0;
LAB_019f5dd8:
  FUN_01650a90(pcVar8);
  if (*pcVar8 == '\x01') {
    uVar5 = 0;
    DataMemoryBarrier(0xb);
    do {
      bVar12 = (bool)hasExclusiveAccess(pcVar8);
      if (bVar12) {
        *pcVar8 = '\0';
        goto LAB_019f5e18;
      }
    } while (*pcVar8 == '\x01');
  }
  ClearExclusiveLocal();
  uVar5 = FUN_0164f86c(pcVar8);
LAB_019f5e18:
  if (uVar10 == 0) {
    return uVar5;
  }
                    /* WARNING: Could not recover jumptable at 0x019f5e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)(uVar10 + 4))(uVar3);
  return uVar3;
}

