// FUN_019e7220 @ 019e7220 size=604 calls_out=7 calls_in=29
// strings: A Tokio 1.x context was found; but it is being shutdown.

void FUN_019e7220(undefined4 *param_1,int param_2,int *param_3,int param_4)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  undefined1 uVar7;
  int *piVar8;
  char *pcVar9;
  undefined4 *puVar10;
  uint unaff_r9;
  uint uVar11;
  undefined8 uVar12;
  undefined4 local_30;
  undefined4 local_2c;
  
  uVar2 = FUN_019ec670(*param_3);
  if ((uVar2 & 0xff) == 2) {
    uVar2 = 0;
  }
  else {
    FUN_019edbc4(0);
    if ((uVar2 & 1) != 0) {
      *param_1 = 2;
      return;
    }
    unaff_r9 = (uVar2 & 0xffffff) >> 0x10;
    uVar2 = (uVar2 & 0xffffff) >> 8;
  }
  uVar3 = *(uint *)(param_2 + 0x28);
  uVar11 = 5;
  DataMemoryBarrier(0xb);
  if (param_4 != 0) {
    uVar11 = 10;
  }
  if ((uVar3 & (uVar11 | 0x80000000)) == 0) {
    pcVar9 = (char *)(param_2 + 0x2c);
    if (*pcVar9 == '\0') {
      bVar1 = (bool)hasExclusiveAccess(pcVar9);
      if (!bVar1) goto LAB_019e72dc;
      *pcVar9 = '\x01';
      DataMemoryBarrier(0xb);
    }
    else {
      ClearExclusiveLocal();
LAB_019e72dc:
      FUN_0164fba8(pcVar9);
    }
    FUN_0165098c(pcVar9);
    iVar4 = 0x38;
    if (param_4 != 0) {
      iVar4 = 0x40;
    }
    piVar8 = (int *)(param_2 + iVar4);
    puVar10 = (undefined4 *)*piVar8;
    piVar5 = (int *)*param_3;
    if (puVar10 == (undefined4 *)0x0) {
      uVar12 = (**(code **)*piVar5)(piVar5[1]);
      if (*piVar8 != 0) {
        (**(code **)(*piVar8 + 0xc))(piVar8[1]);
        param_3 = (int *)uVar12;
      }
LAB_019e7388:
      *(undefined8 *)piVar8 = uVar12;
    }
    else {
      param_3 = (int *)piVar8[1];
      if (param_3 != (int *)piVar5[1] || puVar10 != (undefined4 *)*piVar5) {
        uVar12 = (**(code **)*piVar5)((int *)piVar5[1]);
        (*(code *)puVar10[3])(param_3);
        goto LAB_019e7388;
      }
    }
    uVar7 = SUB41(param_3,0);
    uVar3 = *(uint *)(param_2 + 0x28);
    DataMemoryBarrier(0xb);
    if ((int)uVar3 < 0) {
      uVar6 = 1;
LAB_019e73c0:
      uVar7 = (undefined1)(uVar3 >> 0x10);
    }
    else {
      uVar11 = uVar3 & uVar11;
      uVar6 = 0;
      if (uVar11 != 0) goto LAB_019e73c0;
      uVar6 = 2;
    }
    FUN_01650a90(pcVar9);
    if (*pcVar9 == '\x01') {
      DataMemoryBarrier(0xb);
      do {
        bVar1 = (bool)hasExclusiveAccess(pcVar9);
        if (bVar1) {
          *pcVar9 = '\0';
          goto LAB_019e7404;
        }
      } while (*pcVar9 == '\x01');
    }
    ClearExclusiveLocal();
    FUN_0164f86c(pcVar9);
LAB_019e7404:
    if (uVar6 == 2) {
      *param_1 = 2;
      goto LAB_019e7464;
    }
  }
  else {
    uVar11 = uVar3 & uVar11;
    uVar6 = uVar3 >> 0x1f;
    uVar7 = (undefined1)(uVar3 >> 0x10);
  }
  if ((uVar6 & 1) == 0) {
    uVar2 = 0;
    *(undefined1 *)(param_1 + 2) = uVar7;
    *(undefined1 *)((int)param_1 + 9) = 0;
    *param_1 = 0;
    param_1[1] = uVar11;
  }
  else {
    FUN_019a18a8(&local_30,0x28,"A Tokio 1.x context was found, but it is being shutdown.",0x38);
    *param_1 = 1;
    param_1[1] = local_30;
    param_1[2] = local_2c;
  }
LAB_019e7464:
  FUN_019edbc4(uVar2,unaff_r9);
  return;
}

