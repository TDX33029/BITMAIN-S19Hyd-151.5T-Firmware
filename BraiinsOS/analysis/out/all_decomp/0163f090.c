// FUN_0163f090 @ 0163f090 size=596 calls_out=9 calls_in=2
// strings: A Tokio 1.x context was found; but IO is disabled. Call `enable_io` on the runtime builder to enable IO.

void FUN_0163f090(int param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined4 *puVar11;
  int iVar12;
  char *pcVar13;
  undefined4 *local_38;
  undefined4 *local_30;
  undefined4 *local_2c;
  undefined4 *local_28;
  undefined4 *local_24;
  
  if (*(int *)(param_1 + 0x30) == -1) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8("A Tokio 1.x context was found, but IO is disabled. Call `enable_io` on the runtime builder to enable IO."
                 ,0x68,&DAT_018ad374);
  }
  pcVar13 = (char *)(param_1 + 0x3c);
  if (*pcVar13 == '\0') {
    bVar1 = (bool)hasExclusiveAccess(pcVar13);
    if (bVar1) {
      *pcVar13 = '\x01';
      DataMemoryBarrier(0xb);
      goto LAB_0163f0cc;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  FUN_01280da8(pcVar13);
LAB_0163f0cc:
  FUN_0128236c(pcVar13);
  if (*(char *)(param_1 + 0x54) == '\0') {
    iVar10 = *(int *)(param_1 + 0x44);
    iVar12 = *(int *)(param_1 + 0x48);
    *(undefined1 *)(param_1 + 0x54) = 1;
    *(undefined4 *)(param_1 + 0x48) = 0;
    iVar3 = 0;
    if (iVar12 != 0) {
      do {
        piVar8 = *(int **)(iVar10 + iVar3 * 4);
        iVar7 = iVar3 + 1;
        DataMemoryBarrier(0xb);
        do {
          iVar6 = *piVar8;
          bVar1 = (bool)hasExclusiveAccess(piVar8);
        } while (!bVar1);
        *piVar8 = iVar6 + -1;
        if (iVar6 == 1) {
          DataMemoryBarrier(0xb);
          FUN_01659660(*(undefined4 *)(iVar10 + iVar3 * 4));
        }
        iVar3 = iVar7;
      } while (iVar7 != iVar12);
    }
    puVar2 = (undefined4 *)&DAT_00000004;
    local_28 = (undefined4 *)0x0;
    local_2c = (undefined4 *)&DAT_00000004;
    local_30 = (undefined4 *)0x0;
    puVar4 = *(undefined4 **)(param_1 + 0x50);
    while (puVar11 = local_28, puVar4 != (undefined4 *)0x0) {
      puVar9 = (undefined4 *)*puVar4;
      *(undefined4 **)(param_1 + 0x50) = puVar9;
      if (puVar9 == (undefined4 *)0x0) {
        *(undefined4 *)(param_1 + 0x4c) = 0;
      }
      else {
        puVar9[1] = 0;
      }
      *puVar4 = 0;
      puVar4[1] = 0;
      if (local_28 == local_30) {
        FUN_016431c4(&local_30);
        puVar2 = local_2c;
      }
      puVar2[(int)puVar11] = puVar4 + -8;
      local_28 = (undefined4 *)((int)puVar11 + 1);
      puVar4 = puVar9;
    }
    local_38 = local_28;
    puVar2 = local_30;
    puVar4 = local_2c;
  }
  else {
    local_38 = (undefined4 *)0x0;
    puVar2 = (undefined4 *)0x0;
    puVar4 = (undefined4 *)&DAT_00000004;
  }
  FUN_01282570(pcVar13);
  if (*pcVar13 == '\x01') {
    DataMemoryBarrier(0xb);
    do {
      bVar1 = (bool)hasExclusiveAccess(pcVar13);
      if (bVar1) {
        *pcVar13 = '\0';
        goto LAB_0163f21c;
      }
    } while (*pcVar13 == '\x01');
  }
  ClearExclusiveLocal();
  FUN_01280a5c(pcVar13);
LAB_0163f21c:
  puVar11 = puVar4 + (int)local_38;
  local_30 = puVar4;
  local_2c = puVar4;
  local_28 = puVar2;
  local_24 = puVar11;
  if (local_38 != (undefined4 *)0x0) {
    do {
      puVar2 = puVar4 + 1;
      piVar8 = (int *)*puVar4;
      puVar5 = (uint *)(piVar8 + 10);
      DataMemoryBarrier(0xb);
      do {
        bVar1 = (bool)hasExclusiveAccess(puVar5);
      } while (!bVar1);
      *puVar5 = *puVar5 | 0x80000000;
      DataMemoryBarrier(0xb);
      local_2c = puVar2;
      FUN_01639598(piVar8 + 8,0x3f);
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *piVar8;
        bVar1 = (bool)hasExclusiveAccess(piVar8);
      } while (!bVar1);
      *piVar8 = iVar3 + -1;
      if (iVar3 == 1) {
        DataMemoryBarrier(0xb);
        FUN_01659660(piVar8);
      }
      puVar4 = puVar2;
    } while (puVar2 != puVar11);
  }
  FUN_01647280(&local_30);
  return;
}

