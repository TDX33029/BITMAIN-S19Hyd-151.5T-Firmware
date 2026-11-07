// FUN_0164e5d4 @ 0164e5d4 size=552 calls_out=6 calls_in=6
// strings: task was cancelled | task panicked

void FUN_0164e5d4(undefined4 *param_1,short *param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  undefined4 *extraout_r2;
  undefined2 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char cVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined8 uVar11;
  uint local_38;
  uint uStack_34;
  uint uStack_30;
  uint local_2c;
  int iStack_28;
  undefined4 *puStack_24;
  
  if (*param_2 != 3) {
    uVar6 = *(undefined4 *)(param_2 + 2);
    uVar7 = *(undefined4 *)(param_2 + 4);
    uVar9 = *(undefined4 *)(param_2 + 6);
    *param_1 = *(undefined4 *)param_2;
    param_1[1] = uVar6;
    param_1[2] = uVar7;
    param_1[3] = uVar9;
    uVar6 = *(undefined4 *)(param_2 + 10);
    uVar7 = *(undefined4 *)(param_2 + 0xc);
    uVar9 = *(undefined4 *)(param_2 + 0xe);
    param_1[4] = *(undefined4 *)(param_2 + 8);
    param_1[5] = uVar6;
    param_1[6] = uVar7;
    param_1[7] = uVar9;
    *param_2 = 2;
    return;
  }
  uVar11 = thunk_FUN_016de0ee();
  iVar1 = (int)uVar11;
  iVar2 = *(int *)((int)((ulonglong)uVar11 >> 0x20) + 4);
  local_38 = 2;
  if (*(char *)(iVar1 + 0x78) == '\x01') {
LAB_0164e648:
    cVar8 = *(char *)(iVar1 + 0x71);
    if (*(char *)(iVar1 + 0x70) == '\x01') {
      if (cVar8 == '\0') {
        FUN_016455a4(*extraout_r2,extraout_r2[1]);
        if (local_38 != 2) {
          FUN_010cd5a8(&local_38);
        }
        goto LAB_0164e7cc;
      }
      cVar8 = cVar8 + -1;
    }
    *(char *)(iVar1 + 0x71) = cVar8;
    uVar4 = (uint)*(ushort *)(iVar1 + 0x70) << 8;
  }
  else {
    uVar4 = 0;
    if (*(char *)(iVar1 + 0x78) != '\x02') {
      FUN_015e8e6c(iVar1 + 0x40,FUN_01655ec4);
      *(undefined1 *)(iVar1 + 0x78) = 1;
      goto LAB_0164e648;
    }
  }
  uVar10 = uVar4 >> 8;
  (**(code **)(*(int *)(iVar2 + 8) + 0xc))(iVar2,&local_38);
  if ((local_38 == 2) && ((uVar10 & 1) != 0)) {
    if (*(char *)(iVar1 + 0x78) != '\x01') {
      if (*(char *)(iVar1 + 0x78) == '\x02') goto LAB_0164e7cc;
      FUN_015e8e6c(iVar1 + 0x40,FUN_01655ec4);
      *(undefined1 *)(iVar1 + 0x78) = 1;
    }
    *(char *)(iVar1 + 0x71) = (char)(uVar4 >> 0x10);
    *(undefined1 *)(iVar1 + 0x70) = 1;
    *(undefined2 *)param_1 = 5;
    return;
  }
  if (local_38 != 2) {
    if ((local_38 & 1) == 0) {
      uVar5 = 3;
      if (uStack_34 == 0) {
        uVar5 = 4;
        uVar4 = local_2c;
        uStack_34 = uStack_30;
      }
      else {
        uVar4 = uStack_30;
        uVar10 = local_2c;
      }
      param_1[1] = uStack_34;
      param_1[2] = uVar4;
      param_1[3] = uVar10;
      param_1[4] = iStack_28;
      *(undefined2 *)param_1 = uVar5;
      return;
    }
    uVar6 = 0xd;
    pcVar3 = "task panicked";
    if (iStack_28 == 0) {
      uVar6 = 0x12;
      pcVar3 = "task was cancelled";
    }
    FUN_015e79d4(&local_38,0x28,pcVar3,uVar6);
    if (iStack_28 != 0) {
      if ((code *)*puStack_24 != (code *)0x0) {
        (*(code *)*puStack_24)(iStack_28);
      }
      if (puStack_24[1] != 0) {
        thunk_FUN_016d3fb4(iStack_28);
      }
    }
    param_1[1] = local_38;
    param_1[2] = uStack_34;
    *(undefined2 *)param_1 = 4;
    return;
  }
LAB_0164e7cc:
  *(undefined2 *)param_1 = 5;
  return;
}

