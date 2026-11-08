// FUN_0107d188 @ 0107d188 size=384 calls_out=5 calls_in=1
// strings: 

void FUN_0107d188(int *param_1)

{
  bool bVar1;
  uint *puVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  char *pcVar6;
  int iVar7;
  undefined *puVar8;
  undefined1 *puVar9;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  iVar7 = *param_1;
  pcVar6 = (char *)(iVar7 + 8);
  if (*pcVar6 == '\0') {
    bVar1 = (bool)hasExclusiveAccess(pcVar6);
    if (bVar1) {
      *pcVar6 = '\x01';
      DataMemoryBarrier(0xb);
      goto LAB_0107d1bc;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  FUN_01280da8(pcVar6);
LAB_0107d1bc:
  FUN_0128236c(pcVar6);
  FUN_015f3b0c(&local_28,1);
  puVar9 = *(undefined1 **)(iVar7 + 0x18);
  *(undefined4 *)(iVar7 + 0x10) = local_28;
  *(undefined4 *)(iVar7 + 0x14) = uStack_24;
  *(undefined4 *)(iVar7 + 0x18) = uStack_20;
  FUN_01282570(pcVar6);
  if (*pcVar6 == '\x01') {
    DataMemoryBarrier(0xb);
    do {
      bVar1 = (bool)hasExclusiveAccess(pcVar6);
      if (bVar1) {
        *pcVar6 = '\0';
        goto LAB_0107d220;
      }
    } while (*pcVar6 == '\x01');
  }
  ClearExclusiveLocal();
  FUN_01280a5c(pcVar6);
LAB_0107d220:
  uVar5 = param_1[1];
  puVar2 = (uint *)(param_1 + 1);
  DataMemoryBarrier(0xb);
  if (puVar9 == &DAT_3b9aca00) {
    do {
      uVar3 = *puVar2;
      if (uVar3 == uVar5) {
        DataMemoryBarrier(0xb);
        bVar1 = (bool)hasExclusiveAccess(puVar2);
        if (bVar1) {
          *puVar2 = 150000;
        }
        bVar4 = 0;
        if (bVar1) {
          bVar4 = 0xff;
        }
      }
      else {
        bVar4 = 0;
        ClearExclusiveLocal();
      }
      DataMemoryBarrier(0xb);
      uVar5 = uVar3;
    } while (!(bool)(bVar4 & 1));
  }
  else {
    do {
      while( true ) {
        puVar8 = (undefined *)(uVar5 + 150000);
        uVar3 = *puVar2;
        if (0xfffdb60f < uVar5) {
          puVar8 = (undefined *)0xffffffff;
        }
        if (&UNK_004c4b3f < puVar8) {
          puVar8 = &DAT_004c4b40;
        }
        if (uVar3 == uVar5) break;
        ClearExclusiveLocal();
        DataMemoryBarrier(0xb);
        uVar5 = uVar3;
      }
      DataMemoryBarrier(0xb);
      bVar1 = (bool)hasExclusiveAccess(puVar2);
      if (bVar1) {
        *puVar2 = (uint)puVar8;
      }
      DataMemoryBarrier(0xb);
      uVar5 = uVar3;
    } while (!bVar1);
  }
  return;
}

