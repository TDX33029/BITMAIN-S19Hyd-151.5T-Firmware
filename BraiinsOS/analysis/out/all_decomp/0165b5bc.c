// FUN_0165b5bc @ 0165b5bc size=1324 calls_out=16 calls_in=3
// strings: A Tokio 1.x context was found; but timers are disabled. Call `enable_time` on the runtime builder to enable timers. | assertion failed: !handle.is_shutdown()channel closed | A Tokio 1.x context was found; but IO is disabled. Call `enable_io` on the runtime builder to enable IO. | A Tokio 1.x context was found; but IO is disabled. Call `enable_io` on the runtime builder to enable IO.

void FUN_0165b5bc(int *param_1,int param_2,undefined1 *param_3)

{
  byte bVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  undefined1 *puVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  char *pcVar10;
  uint uVar11;
  undefined4 uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  bool bVar19;
  byte in_Q;
  undefined8 uVar20;
  uint local_60;
  undefined4 uStack_5c;
  uint uStack_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  uint local_40;
  undefined4 uStack_3c;
  uint local_38;
  uint local_34;
  uint uStack_30;
  
  if (*(undefined1 **)(param_2 + 0x90) == &DAT_3b9aca00) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8("A Tokio 1.x context was found, but timers are disabled. Call `enable_time` on the runtime builder to enable timers."
                 ,0x73,&DAT_018ad3a4);
  }
  pcVar10 = (char *)(param_2 + 0x58);
  if (*pcVar10 == '\0') {
    bVar19 = (bool)hasExclusiveAccess(pcVar10);
    if (!bVar19) goto LAB_0165ba7c;
    *pcVar10 = '\x01';
    DataMemoryBarrier(0xb);
  }
  else {
    ClearExclusiveLocal();
LAB_0165ba7c:
    FUN_01280da8(pcVar10);
  }
  FUN_0128236c(pcVar10);
  DataMemoryBarrier(0xb);
  if (*(char *)(param_2 + 0x80) != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464("assertion failed: !handle.is_shutdown()channel closed",0x27,&DAT_018ad3b4);
  }
  FUN_0163e4a8(&local_40,param_2 + 0x68);
  uVar15 = local_34;
  uVar11 = local_38;
  uVar4 = local_40;
  uVar14 = 1;
  if (1 < local_38) {
    uVar14 = local_38;
  }
  if (local_34 != 0) {
    uVar14 = local_38;
  }
  if ((local_40 & 1) == 0) {
    uVar14 = 0;
    uVar3 = 0;
  }
  else {
    uVar3 = local_34;
  }
  *(uint *)(param_2 + 0x60) = uVar14;
  *(uint *)(param_2 + 100) = uVar3;
  FUN_01282570(pcVar10);
  if (*pcVar10 == '\x01') {
    DataMemoryBarrier(0xb);
    do {
      bVar19 = (bool)hasExclusiveAccess(pcVar10);
      if (bVar19) {
        *pcVar10 = '\0';
        goto LAB_0165b6b4;
      }
    } while (*pcVar10 == '\x01');
  }
  ClearExclusiveLocal();
  FUN_01280a5c(pcVar10);
LAB_0165b6b4:
  if ((uVar4 & 1) == 0) {
    puVar5 = &DAT_3b9aca00;
    if (param_3 != &DAT_3b9aca00) {
      FUN_0165bb24(param_1,param_2,0,0,param_3);
      goto LAB_0165b998;
    }
    if (*param_1 == -0x80000000) {
      FUN_01639cac(param_1[1] + 8);
      goto LAB_0165b998;
    }
    if (*(int *)(param_2 + 0x30) == -1) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb74b8("A Tokio 1.x context was found, but IO is disabled. Call `enable_io` on the runtime builder to enable IO."
                   ,0x68,&DAT_018ad354);
    }
  }
  else {
    uVar17 = *(undefined4 *)(param_2 + 0x88);
    uVar12 = *(undefined4 *)(param_2 + 0x8c);
    uVar18 = *(undefined4 *)(param_2 + 0x90);
    FUN_0165a9a4(&local_40,param_2);
    local_60 = local_40;
    uStack_5c = uStack_3c;
    uStack_58 = local_38;
    local_50 = uVar17;
    local_4c = uVar12;
    local_48 = uVar18;
    FUN_015f3c24(&local_40,&local_60,&local_50);
    uVar3 = (uint)((ulonglong)local_38 * 1000);
    lVar2 = (ulonglong)local_34 * 1000 + ((ulonglong)local_38 * 1000 >> 0x20);
    uVar13 = (uint)lVar2;
    uVar8 = (uint)((ulonglong)lVar2 >> 0x20);
    uVar14 = uStack_30 / 1000000;
    uVar7 = uVar3 + uVar14;
    uVar4 = uVar13 + CARRY4(uVar3,uVar14);
    bVar1 = CARRY4(uVar13,(uint)CARRY4(uVar3,uVar14)) << 2 | in_Q;
    if ((local_40 & 1) != 0) {
      uVar4 = 0;
      uVar7 = 0;
    }
    in_Q = 0;
    bVar19 = ((bVar1 & 0x1f) >> 2 & 1) != 0;
    iVar9 = uVar8 + bVar19;
    uVar14 = (uint)CARRY4(uVar8,(uint)bVar19);
    if ((local_40 & 1) != 0) {
      uVar14 = 0;
      iVar9 = 0;
    }
    uVar3 = 0xfffffffd;
    if (uVar7 < 0xfffffffd) {
      uVar3 = uVar7;
    }
    if (uVar4 != 0xffffffff) {
      uVar3 = uVar7;
    }
    if ((uint)(iVar9 == 0) <= -uVar14) {
      uVar4 = 0xffffffff;
      uVar3 = 0xfffffffd;
    }
    uVar14 = uVar11 - uVar3;
    uVar7 = uVar15 - (uVar4 + (uVar3 > uVar11));
    if (uVar15 <= uVar4 && (uint)(uVar3 <= uVar11) <= uVar15 - uVar4) {
      uVar14 = 0;
      uVar7 = 0;
    }
    uVar20 = FUN_01846088(uVar14,uVar7,1000,0);
    iVar9 = uVar14 + (int)uVar20 * -1000;
    bVar19 = (uint)((uVar14 >> 3 | uVar7 << 0x1d) < 0x7d) <= -(uVar7 >> 3);
    if (uVar7 == 0 && (999 < uVar14) <= uVar7) {
      bVar19 = iVar9 != 0;
    }
    if (bVar19) {
      puVar5 = (undefined1 *)(iVar9 * 1000000);
      if (param_3 != &DAT_3b9aca00 && ((uVar7 != 0 || uVar7 < (999 < uVar14)) || param_3 <= puVar5))
      {
        uVar20 = 0;
        puVar5 = param_3;
      }
      FUN_0165bb24(param_1,param_2,(int)uVar20,(int)((ulonglong)uVar20 >> 0x20),puVar5);
      goto LAB_0165b998;
    }
    if (*param_1 == -0x80000000) {
      piVar6 = (int *)(param_1[1] + 8);
      if (*piVar6 == 2) {
        DataMemoryBarrier(0xb);
        do {
          bVar19 = (bool)hasExclusiveAccess(piVar6);
          if (bVar19) {
            *piVar6 = 0;
            goto LAB_0165b918;
          }
        } while (*piVar6 == 2);
      }
      ClearExclusiveLocal();
LAB_0165b918:
      DataMemoryBarrier(0xb);
      goto LAB_0165b998;
    }
    if (*(int *)(param_2 + 0x30) == -1) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb74b8("A Tokio 1.x context was found, but IO is disabled. Call `enable_io` on the runtime builder to enable IO."
                   ,0x68,&DAT_018ad344,uVar7 - (999 >= uVar14));
    }
    puVar5 = (undefined1 *)0x0;
  }
  FUN_0165af70(param_1,param_2 + 0x30,puVar5);
  FUN_0163edcc(param_1);
  FUN_01644d00(param_1 + 7);
LAB_0165b998:
  uVar17 = *(undefined4 *)(param_2 + 0x88);
  uVar18 = *(undefined4 *)(param_2 + 0x8c);
  uVar12 = *(undefined4 *)(param_2 + 0x90);
  FUN_0165a9a4(&local_40,param_2);
  local_60 = local_40;
  uStack_5c = uStack_3c;
  uStack_58 = local_38;
  local_50 = uVar17;
  local_4c = uVar18;
  local_48 = uVar12;
  FUN_015f3c24(&local_40,&local_60,&local_50);
  uVar14 = (uint)((ulonglong)local_38 * 1000);
  lVar2 = (ulonglong)local_34 * 1000 + ((ulonglong)local_38 * 1000 >> 0x20);
  uVar11 = (uint)lVar2;
  uVar15 = (uint)((ulonglong)lVar2 >> 0x20);
  uStack_30 = uStack_30 / 1000000;
  uVar4 = uVar14 + uStack_30;
  iVar9 = uVar11 + CARRY4(uVar14,uStack_30);
  if ((local_40 & 1) != 0) {
    iVar9 = 0;
    uVar4 = 0;
  }
  bVar19 = (((byte)(CARRY4(uVar11,(uint)CARRY4(uVar14,uStack_30)) << 2 | in_Q) & 0x1f) >> 2 & 1) !=
           0;
  iVar16 = uVar15 + bVar19;
  uVar14 = (uint)CARRY4(uVar15,(uint)bVar19);
  if ((local_40 & 1) != 0) {
    uVar14 = 0;
    iVar16 = 0;
  }
  uVar11 = 0xfffffffd;
  if (uVar4 < 0xfffffffd) {
    uVar11 = uVar4;
  }
  if (iVar9 != -1) {
    uVar11 = uVar4;
  }
  if ((uint)(iVar16 == 0) <= -uVar14) {
    uVar11 = 0xfffffffd;
    iVar9 = -1;
  }
  FUN_0165bf54(pcVar10,uVar4,uVar11,iVar9);
  return;
}

