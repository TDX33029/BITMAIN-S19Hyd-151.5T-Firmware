// FUN_01404168 @ 01404168 size=300 calls_out=5 calls_in=0
// strings: 

void FUN_01404168(int *param_1)

{
  uint *puVar1;
  undefined *puVar2;
  char *pcVar3;
  uint uVar4;
  undefined1 *puVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  iVar7 = *param_1;
  pcVar3 = (char *)(iVar7 + 8);
  if (*pcVar3 == '\0') {
    bVar6 = (bool)hasExclusiveAccess(pcVar3);
    if (bVar6) {
      *pcVar3 = '\x01';
      DataMemoryBarrier(0xb);
      goto LAB_0140419c;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  FUN_0164fba8(pcVar3);
LAB_0140419c:
  FUN_0165098c(pcVar3);
  FUN_019ac130(&local_28,1);
  puVar5 = *(undefined1 **)(iVar7 + 0x18);
  *(undefined4 *)(iVar7 + 0x10) = local_28;
  *(undefined4 *)(iVar7 + 0x14) = uStack_24;
  *(undefined4 *)(iVar7 + 0x18) = uStack_20;
  FUN_01650a90(pcVar3);
  if (*pcVar3 == '\x01') {
    DataMemoryBarrier(0xb);
    do {
      bVar6 = (bool)hasExclusiveAccess(pcVar3);
      if (bVar6) {
        *pcVar3 = '\0';
        goto LAB_01404200;
      }
    } while (*pcVar3 == '\x01');
  }
  ClearExclusiveLocal();
  FUN_0164f86c(pcVar3);
LAB_01404200:
  puVar1 = (uint *)(param_1 + 1);
  DataMemoryBarrier(0xb);
  uVar8 = param_1[1];
  do {
    puVar2 = (undefined *)(uVar8 + 150000);
    uVar4 = *puVar1;
    if (0xfffdb60f < uVar8) {
      puVar2 = (undefined *)0xffffffff;
    }
    if (&UNK_004c4b3f < puVar2) {
      puVar2 = &DAT_004c4b40;
    }
    if (puVar5 == &DAT_3b9aca00) {
      puVar2 = (undefined *)0x249f0;
    }
    if (uVar4 == uVar8) {
      DataMemoryBarrier(0xb);
      bVar6 = (bool)hasExclusiveAccess(puVar1);
      if (bVar6) {
        *puVar1 = (uint)puVar2;
      }
    }
    else {
      bVar6 = false;
      ClearExclusiveLocal();
    }
    DataMemoryBarrier(0xb);
    uVar8 = uVar4;
  } while (!bVar6);
  return;
}

