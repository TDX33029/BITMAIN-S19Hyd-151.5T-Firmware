// FUN_019f81ec @ 019f81ec size=724 calls_out=12 calls_in=2
// strings: 

void FUN_019f81ec(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  undefined4 *puVar9;
  undefined4 *puVar8;
  char *pcVar10;
  uint uVar11;
  undefined4 *puVar12;
  int *piVar13;
  uint uVar14;
  undefined4 *puVar15;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 *local_34;
  undefined4 *local_30;
  undefined4 local_2c;
  undefined4 *local_28;
  
  DataMemoryBarrier(0xb);
  if (*(int *)(param_2 + 8) == 0) goto LAB_019f831c;
  pcVar10 = (char *)(param_2 + 0xc);
  if (*pcVar10 == '\0') {
    bVar7 = (bool)hasExclusiveAccess(pcVar10);
    if (!bVar7) goto LAB_019f8478;
    *pcVar10 = '\x01';
    DataMemoryBarrier(0xb);
  }
  else {
    ClearExclusiveLocal();
LAB_019f8478:
    FUN_0164fba8(pcVar10);
  }
  FUN_0165098c(pcVar10);
  puVar12 = (undefined4 *)(param_2 + 0x10);
  local_2c = *puVar12;
  iVar3 = *(int *)(param_2 + 0x18);
  local_34 = *(undefined4 **)(param_2 + 0x14);
  *puVar12 = 0;
  *(undefined4 *)(param_2 + 0x14) = 4;
  puVar15 = local_34 + iVar3;
  *(undefined4 *)(param_2 + 0x18) = 0;
  puVar8 = local_34;
  local_30 = local_34;
  local_28 = puVar15;
  if (iVar3 != 0) {
    do {
      puVar9 = puVar8 + 1;
      piVar13 = (int *)*puVar8;
      local_30 = puVar9;
      FUN_019f7f9c(puVar12,piVar13);
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *piVar13;
        bVar7 = (bool)hasExclusiveAccess(piVar13);
      } while (!bVar7);
      *piVar13 = iVar3 + -1;
      if (iVar3 == 1) {
        DataMemoryBarrier(0xb);
        FUN_019db52c(piVar13);
      }
      puVar8 = puVar9;
    } while (puVar9 != puVar15);
  }
  FUN_019dcc1c(&local_34);
  DataMemoryBarrier(0xb);
  *(undefined4 *)(param_2 + 8) = 0;
  FUN_01650a90(pcVar10);
  if (*pcVar10 == '\x01') {
    DataMemoryBarrier(0xb);
    do {
      bVar7 = (bool)hasExclusiveAccess(pcVar10);
      if (bVar7) {
        *pcVar10 = '\0';
        goto LAB_019f831c;
      }
    } while (*pcVar10 == '\x01');
  }
  ClearExclusiveLocal();
  FUN_0164f86c(pcVar10);
LAB_019f831c:
  FUN_0160a000(&local_48,*(undefined4 *)(param_1 + 0xc),param_1);
  if ((char)local_48 != '\x04') {
    cVar1 = FUN_005ef5e8(&local_48);
    if (cVar1 != '#') {
      local_30 = (undefined4 *)&LAB_019ac374;
      local_34 = &local_40;
      local_3c = local_44;
      local_40 = local_48;
                    /* WARNING: Subroutine does not return */
      FUN_012fb100(&DAT_005914a7,&local_34,&DAT_01d29a00,local_48,param_3,param_4,param_5);
    }
    FUN_0069603c(&local_48);
  }
  uVar11 = 0;
  while (uVar11 < *(uint *)(param_1 + 8)) {
    puVar4 = (uint *)(*(int *)(param_1 + 4) + uVar11 * 0x10);
    uVar11 = uVar11 + 1;
    uVar2 = puVar4[2];
    if (uVar2 != 0) {
      if (uVar2 == 1) {
        *(undefined1 *)(param_1 + 0x10) = 1;
      }
      else {
        uVar5 = *puVar4;
        uVar6 = uVar5 >> 1 & 2;
        if ((uVar5 & 3) != 0) {
          uVar6 = uVar6 | 1;
        }
        if ((uVar5 & 0x10) == 0) {
          if ((~uVar5 & 0x2001) == 0) {
            uVar6 = uVar6 | 4;
          }
        }
        else {
          uVar6 = uVar6 | 4;
        }
        uVar14 = uVar6 | 8;
        DataMemoryBarrier(0xb);
        if ((~uVar5 & 0xc) == 0) {
          uVar6 = uVar14;
        }
        if ((uVar5 & 0x10) != 0) {
          uVar6 = uVar14;
        }
        if (uVar5 == 8) {
          uVar6 = uVar14;
        }
        puVar4 = (uint *)(uVar2 + 8);
        uVar2 = *(uint *)(uVar2 + 8);
        do {
          uVar14 = *puVar4;
          if (uVar14 == uVar2) {
            DataMemoryBarrier(0xb);
            bVar7 = (bool)hasExclusiveAccess(puVar4);
            if (bVar7) {
              *puVar4 = uVar2 + 0x10000 & 0x7fff0000 |
                        uVar6 | (uVar5 & 8) << 2 | (uVar5 & 2) << 3 | uVar2 & 0x3f;
            }
          }
          else {
            bVar7 = false;
            ClearExclusiveLocal();
          }
          DataMemoryBarrier(0xb);
          uVar2 = uVar14;
        } while (!bVar7);
        FUN_019e07fc();
      }
    }
  }
  return;
}

