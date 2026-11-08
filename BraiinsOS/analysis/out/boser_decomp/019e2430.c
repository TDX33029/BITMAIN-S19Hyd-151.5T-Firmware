// FUN_019e2430 @ 019e2430 size=752 calls_out=11 calls_in=2
// strings: A Tokio 1.x context was found; but timers are disabled. Call `enable_time` on the runtime builder to enable timers. | A Tokio 1.x context was found; but IO is disabled. Call `enable_io` on the runtime builder to enable IO.

void FUN_019e2430(int *param_1,int *param_2)

{
  bool bVar1;
  undefined4 *puVar2;
  int *piVar3;
  uint *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  undefined4 *puVar9;
  int iVar10;
  int iVar11;
  undefined4 *puStack_40;
  undefined4 *puStack_3c;
  undefined4 *puStack_38;
  undefined4 *local_30;
  undefined4 *puStack_2c;
  undefined4 *local_28;
  undefined4 *puStack_24;
  
  if (*param_1 == 0) {
    if ((undefined1 *)param_2[0x18] == &DAT_3b9aca00) {
                    /* WARNING: Subroutine does not return */
      FUN_0130739c("A Tokio 1.x context was found, but timers are disabled. Call `enable_time` on the runtime builder to enable timers."
                   ,0x73,&DAT_01d294b4);
    }
    DataMemoryBarrier(0xb);
    if ((char)param_2[0x14] != '\0') {
      return;
    }
    DataMemoryBarrier(0xb);
    *(undefined1 *)(param_2 + 0x14) = 1;
    DataMemoryBarrier(0xb);
    FUN_019ed154(param_2 + 10,&DAT_3b9aca00,0xffffffff,0xffffffff);
  }
  if (param_1[1] == -0x80000000) {
    iVar5 = *(int *)(param_1[2] + 0xc);
    if (iVar5 == 0) {
      return;
    }
    FUN_0164e740(param_1[2] + 0xc,iVar5);
    return;
  }
  if (*param_2 == -1) {
                    /* WARNING: Subroutine does not return */
    FUN_0130739c("A Tokio 1.x context was found, but IO is disabled. Call `enable_io` on the runtime builder to enable IO."
                 ,0x68,&DAT_01d29a10);
  }
  piVar8 = param_2 + 3;
  if ((char)*piVar8 == '\0') {
    bVar1 = (bool)hasExclusiveAccess(piVar8);
    if (bVar1) {
      *(char *)piVar8 = '\x01';
      DataMemoryBarrier(0xb);
      goto LAB_019e2520;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  FUN_0164fba8(piVar8);
LAB_019e2520:
  FUN_0165098c(piVar8);
  if ((char)param_2[9] == '\0') {
    iVar11 = param_2[6];
    iVar10 = param_2[5];
    *(undefined1 *)(param_2 + 9) = 1;
    param_2[6] = 0;
    iVar5 = 0;
    if (iVar11 != 0) {
      do {
        piVar3 = *(int **)(iVar10 + iVar5 * 4);
        iVar7 = iVar5 + 1;
        DataMemoryBarrier(0xb);
        do {
          iVar6 = *piVar3;
          bVar1 = (bool)hasExclusiveAccess(piVar3);
        } while (!bVar1);
        *piVar3 = iVar6 + -1;
        if (iVar6 == 1) {
          DataMemoryBarrier(0xb);
          FUN_019db52c(*(undefined4 *)(iVar10 + iVar5 * 4));
        }
        iVar5 = iVar7;
      } while (iVar7 != iVar11);
    }
    puVar2 = (undefined4 *)&SUB_00000004;
    local_28 = (undefined4 *)0x0;
    puStack_2c = (undefined4 *)&SUB_00000004;
    local_30 = (undefined4 *)0x0;
    while (puVar9 = local_28, piVar3 = (int *)param_2[8], piVar3 != (int *)0x0) {
      iVar5 = *piVar3;
      param_2[8] = iVar5;
      if (iVar5 == 0) {
        param_2[7] = 0;
      }
      else {
        *(undefined4 *)(iVar5 + 4) = 0;
      }
      *piVar3 = 0;
      piVar3[1] = 0;
      if (local_28 == local_30) {
        FUN_019ee1a8(&local_30);
        puVar2 = puStack_2c;
      }
      puVar2[(int)puVar9] = piVar3 + -8;
      local_28 = (undefined4 *)((int)puVar9 + 1);
    }
    puStack_40 = local_30;
    puStack_3c = puStack_2c;
    puStack_38 = local_28;
  }
  else {
    puStack_38 = (undefined4 *)0x0;
    puStack_40 = (undefined4 *)0x0;
    puStack_3c = (undefined4 *)&SUB_00000004;
  }
  FUN_01650a90(piVar8);
  if ((char)*piVar8 == '\x01') {
    DataMemoryBarrier(0xb);
    do {
      bVar1 = (bool)hasExclusiveAccess(piVar8);
      if (bVar1) {
        *(char *)piVar8 = '\0';
        goto LAB_019e2664;
      }
    } while ((char)*piVar8 == '\x01');
  }
  ClearExclusiveLocal();
  FUN_0164f86c(piVar8);
LAB_019e2664:
  puVar2 = puStack_3c + (int)puStack_38;
  local_28 = puStack_40;
  puStack_2c = puStack_3c;
  local_30 = puStack_3c;
  puStack_24 = puVar2;
  if (puStack_38 != (undefined4 *)0x0) {
    do {
      puVar9 = puStack_3c + 1;
      piVar8 = (int *)*puStack_3c;
      puVar4 = (uint *)(piVar8 + 10);
      DataMemoryBarrier(0xb);
      do {
        bVar1 = (bool)hasExclusiveAccess(puVar4);
      } while (!bVar1);
      *puVar4 = *puVar4 | 0x80000000;
      DataMemoryBarrier(0xb);
      puStack_2c = puVar9;
      FUN_019e07fc(piVar8 + 8,0x3f);
      DataMemoryBarrier(0xb);
      do {
        iVar5 = *piVar8;
        bVar1 = (bool)hasExclusiveAccess(piVar8);
      } while (!bVar1);
      *piVar8 = iVar5 + -1;
      if (iVar5 == 1) {
        DataMemoryBarrier(0xb);
        FUN_019db52c(piVar8);
      }
      puStack_3c = puVar9;
    } while (puVar9 != puVar2);
  }
  FUN_019dcc1c(&local_30);
  return;
}

