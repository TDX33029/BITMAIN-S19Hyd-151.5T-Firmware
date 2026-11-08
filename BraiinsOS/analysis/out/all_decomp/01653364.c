// FUN_01653364 @ 01653364 size=1692 calls_out=12 calls_in=10
// strings: failed to wake I/O driver | A Tokio 1.x context was found; but timers are disabled. Call `enable_time` on the runtime builder to enable timers. | Timer already fired

void FUN_01653364(uint *param_1,undefined4 param_2,uint param_3,uint param_4,uint param_5,
                 int param_6)

{
  code *pcVar1;
  longlong lVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint *puVar6;
  byte bVar7;
  uint uVar8;
  uint uVar9;
  char *pcVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  uint *puVar15;
  uint *puVar16;
  int iVar17;
  bool bVar18;
  byte in_Q;
  uint local_60;
  uint local_5c;
  int local_58;
  uint *local_50;
  undefined4 local_4c;
  undefined1 *local_48;
  uint *local_40;
  undefined4 local_3c;
  uint local_38;
  uint uStack_34;
  uint uStack_30;
  
  iVar12 = 0x180;
  if (param_1[0xc] != 0) {
    iVar12 = 0xb8;
  }
  iVar12 = param_1[0xd] + iVar12;
  *(char *)(param_1 + 0x12) = (char)param_6;
  param_1[0xe] = param_3;
  param_1[0xf] = param_4;
  param_1[0x10] = param_5;
  if (*(undefined1 **)(iVar12 + 0x90) == &DAT_3b9aca00) {
LAB_016539b4:
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8("A Tokio 1.x context was found, but timers are disabled. Call `enable_time` on the runtime builder to enable timers."
                 ,0x73,&DAT_018aceec);
  }
  local_50 = *(uint **)(iVar12 + 0x88);
  local_4c = *(undefined4 *)(iVar12 + 0x8c);
  if (param_5 < 0x3b8b87c1) {
    local_58 = param_5 + 999999;
  }
  else {
    bVar18 = 0xfffffffe < param_3;
    param_3 = param_3 + 1;
    uVar13 = param_4 + bVar18;
    if ((int)((param_4 ^ uVar13) & ~param_4) < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb74b8(&DAT_00410edf,0x28,&DAT_018ab600);
    }
    local_58 = param_5 + 0xc474783f;
    param_4 = uVar13;
  }
  puVar15 = param_1 + 6;
  local_60 = param_3;
  local_5c = param_4;
  local_48 = *(undefined1 **)(iVar12 + 0x90);
  FUN_015f3c24(&local_40,&local_60,&local_50);
  uVar9 = (uint)((ulonglong)local_38 * 1000);
  lVar2 = (ulonglong)uStack_34 * 1000 + ((ulonglong)local_38 * 1000 >> 0x20);
  uVar11 = (uint)lVar2;
  uVar3 = (uint)((ulonglong)lVar2 >> 0x20);
  uStack_30 = uStack_30 / 1000000;
  uVar8 = uVar9 + uStack_30;
  uVar13 = uVar11 + CARRY4(uVar9,uStack_30);
  if (((uint)local_40 & 1) != 0) {
    uVar13 = 0;
    uVar8 = 0;
  }
  bVar18 = (((byte)(CARRY4(uVar11,(uint)CARRY4(uVar9,uStack_30)) << 2 | in_Q) & 0x1f) >> 2 & 1) != 0
  ;
  iVar12 = uVar3 + bVar18;
  uVar3 = (uint)CARRY4(uVar3,(uint)bVar18);
  if (((uint)local_40 & 1) != 0) {
    uVar3 = 0;
    iVar12 = 0;
  }
  uVar9 = 0xfffffffd;
  if (uVar8 < 0xfffffffd) {
    uVar9 = uVar8;
  }
  if (uVar13 == 0xffffffff) {
    uVar8 = uVar9;
  }
  uVar11 = 0xffffffff;
  uVar9 = 0xfffffffd;
  if (-uVar3 < (uint)(iVar12 == 0)) {
    uVar11 = uVar13;
    uVar9 = uVar8;
  }
  if ((*param_1 & 1) == 0) {
    *puVar15 = 0xffffffff;
    *param_1 = 1;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    *(undefined1 *)(param_1 + 0xb) = 0;
    param_1[10] = 0;
    param_1[8] = 0;
    param_1[7] = 0xffffffff;
  }
  puVar16 = param_1 + 2;
  ClearExclusiveLocal();
  uVar13 = *puVar15;
  uVar8 = param_1[7];
  while (uVar8 < uVar11 || uVar11 - uVar8 < (uint)(uVar13 <= uVar9)) {
    uVar3 = *puVar15;
    uVar5 = param_1[7];
    if (uVar3 == uVar13 && uVar5 == uVar8) {
      DataMemoryBarrier(0xb);
      bVar18 = (bool)hasExclusiveAccess(puVar15);
      if (bVar18) {
        *puVar15 = uVar9;
        param_1[7] = uVar11;
      }
      bVar7 = 0;
      if (bVar18) {
        bVar7 = 0xff;
      }
    }
    else {
      bVar7 = 0;
      ClearExclusiveLocal();
    }
    DataMemoryBarrier(0xb);
    uVar13 = uVar3;
    uVar8 = uVar5;
    if ((bool)(bVar7 & 1)) {
      return;
    }
  }
  if (param_6 == 0) {
    return;
  }
  iVar12 = 0x180;
  if (param_1[0xc] != 0) {
    iVar12 = 0xb8;
  }
  iVar12 = param_1[0xd] + iVar12;
  if (*(undefined1 **)(iVar12 + 0x90) == &DAT_3b9aca00) goto LAB_016539b4;
  pcVar10 = (char *)(iVar12 + 0x58);
  if (*pcVar10 == '\0') {
    bVar18 = (bool)hasExclusiveAccess(pcVar10);
    if (!bVar18) goto LAB_0165394c;
    *pcVar10 = '\x01';
    DataMemoryBarrier(0xb);
  }
  else {
    ClearExclusiveLocal();
LAB_0165394c:
    FUN_01280da8(pcVar10);
  }
  FUN_0128236c(pcVar10);
  ClearExclusiveLocal();
  if (*puVar15 != 0xffffffff || param_1[7] != 0xffffffff) {
    FUN_0163eb8c(iVar12 + 0x68,puVar16);
  }
  DataMemoryBarrier(0xb);
  if (*(char *)(iVar12 + 0x80) == '\0') {
    do {
      bVar18 = (bool)hasExclusiveAccess(puVar15);
    } while (!bVar18);
    *puVar15 = uVar9;
    param_1[7] = uVar11;
    puVar6 = param_1 + 4;
    do {
      bVar18 = (bool)hasExclusiveAccess(puVar6);
    } while (!bVar18);
    *puVar6 = uVar9;
    param_1[5] = uVar11;
    uVar9 = *(uint *)(iVar12 + 0x68);
    uVar13 = *(uint *)(iVar12 + 0x6c);
    iVar17 = *(int *)(iVar12 + 0x78);
    uVar8 = *puVar15;
    uVar3 = param_1[7];
    ClearExclusiveLocal();
    if (uVar8 == 0xffffffff && uVar3 == 0xffffffff) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb74b8("Timer already fired",0x13,&DAT_018acefc);
    }
    do {
      bVar18 = (bool)hasExclusiveAccess(puVar6);
    } while (!bVar18);
    *puVar6 = uVar8;
    param_1[5] = uVar3;
    if (uVar13 <= uVar3 && (uint)(uVar8 <= uVar9) <= uVar13 - uVar3) {
      uVar13 = uVar13 ^ uVar3;
      uVar11 = uVar9 ^ uVar8 | 0x3f;
      bVar18 = (uint)(0xfffffffd < uVar11) <= uVar13 - 0xf;
      uVar9 = 0xfffffffe;
      if (uVar13 < 0x10 && bVar18) {
        uVar9 = uVar11;
      }
      if (uVar13 >= 0x10 || !bVar18) {
        uVar13 = 0xf;
      }
      uVar9 = LZCOUNT(uVar9) | 0x20;
      if (uVar13 != 0) {
        uVar9 = LZCOUNT(uVar13);
      }
      uVar13 = (uint)((short)(uVar9 ^ 0x3e) * 0x2b) >> 8;
      if (0x23 < (uVar9 ^ 0x3e)) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(uVar13,6,&DAT_018ac83c);
      }
      ClearExclusiveLocal();
      iVar17 = iVar17 + (uVar13 | uVar13 << 5) * 0x10;
      uVar9 = *(int *)(iVar17 + 0x208) * 6 & 0x3e;
      uVar13 = *puVar6 >> uVar9 | param_1[5] << (0x20 - uVar9 & 0xff);
      if (-1 < (int)(uVar9 - 0x20)) {
        uVar13 = param_1[5] >> (uVar9 - 0x20 & 0xff);
      }
      uVar13 = uVar13 & 0x3f;
      puVar4 = (undefined4 *)(iVar17 + uVar13 * 8);
      puVar15 = (uint *)*puVar4;
      local_40 = puVar16;
      if (puVar15 == puVar16) {
        FUN_01658470(puVar4,&local_40);
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xfdee,0x1653a04);
        (*pcVar1)();
      }
      param_1[2] = 0;
      param_1[3] = (uint)puVar15;
      if (puVar15 != (uint *)0x0) {
        *puVar15 = (uint)puVar16;
      }
      *puVar4 = puVar16;
      uVar9 = *(uint *)(iVar17 + 0x200);
      if (puVar4[1] == 0) {
        puVar4[1] = puVar16;
      }
      uVar11 = 1 << uVar13;
      uVar5 = uVar13 - 0x20;
      if (-1 < (int)uVar5) {
        uVar11 = 0;
      }
      *(uint *)(iVar17 + 0x200) = uVar11 | uVar9;
      uVar13 = 1 >> (0x20 - uVar13 & 0xff);
      if (-1 < (int)uVar5) {
        uVar13 = 1 << (uVar5 & 0xff);
      }
      iVar14 = *(int *)(iVar12 + 0x60);
      *(uint *)(iVar17 + 0x204) = uVar13 | *(uint *)(iVar17 + 0x204);
      uVar9 = iVar14 - 1;
      uVar13 = *(int *)(iVar12 + 100) - (uint)(iVar14 == 0);
      if (uVar3 < uVar13 || uVar13 - uVar3 < (uint)(uVar8 <= uVar9)) {
        if (*(int *)(iVar12 + 0x30) == -1) {
          FUN_01639ea4(*(int *)(iVar12 + 0x34) + 8,uVar9 - uVar8);
        }
        else {
          FUN_0126df90(&local_50,*(undefined4 *)(iVar12 + 0x34));
          if ((char)local_50 != '\x04') {
            local_3c = local_4c;
            local_40 = local_50;
                    /* WARNING: Subroutine does not return */
            FUN_00fb74f8("failed to wake I/O driver",0x19,&local_40,&DAT_018ad2fc,&DAT_018ad384);
          }
        }
      }
      FUN_01282570(pcVar10);
      if (*pcVar10 == '\x01') {
        DataMemoryBarrier(0xb);
        do {
          bVar18 = (bool)hasExclusiveAccess(pcVar10);
          if (bVar18) {
            *pcVar10 = '\0';
            return;
          }
        } while (*pcVar10 == '\x01');
      }
      ClearExclusiveLocal();
      FUN_01280a5c(pcVar10);
      return;
    }
    ClearExclusiveLocal();
    if (*puVar15 != 0xffffffff || param_1[7] != 0xffffffff) {
      *(undefined1 *)(param_1 + 0xb) = 0;
      DataMemoryBarrier(0xb);
      do {
        bVar18 = (bool)hasExclusiveAccess(puVar15);
      } while (!bVar18);
      *puVar15 = 0xffffffff;
      param_1[7] = 0xffffffff;
      puVar16 = param_1 + 10;
      DataMemoryBarrier(0xb);
      do {
        uVar13 = *puVar16;
        bVar18 = (bool)hasExclusiveAccess(puVar16);
      } while (!bVar18);
      *puVar16 = uVar13 | 2;
      DataMemoryBarrier(0xb);
      if (uVar13 == 0) goto LAB_016538cc;
    }
  }
  else {
    uVar13 = 0;
    ClearExclusiveLocal();
    if (*puVar15 != 0xffffffff || param_1[7] != 0xffffffff) {
      *(undefined1 *)(param_1 + 0xb) = 1;
      DataMemoryBarrier(0xb);
      do {
        bVar18 = (bool)hasExclusiveAccess(puVar15);
      } while (!bVar18);
      *puVar15 = 0xffffffff;
      param_1[7] = 0xffffffff;
      puVar16 = param_1 + 10;
      DataMemoryBarrier(0xb);
      do {
        uVar8 = *puVar16;
        bVar18 = (bool)hasExclusiveAccess(puVar16);
      } while (!bVar18);
      *puVar16 = uVar8 | 2;
      DataMemoryBarrier(0xb);
      if (uVar8 != 0) goto LAB_016538ec;
LAB_016538cc:
      uVar13 = param_1[8];
      puVar15 = (uint *)param_1[9];
      param_1[8] = 0;
      DataMemoryBarrier(0xb);
      do {
        bVar18 = (bool)hasExclusiveAccess(param_1 + 10);
      } while (!bVar18);
      param_1[10] = 0;
      goto LAB_016538ec;
    }
  }
  uVar13 = 0;
LAB_016538ec:
  FUN_01282570(pcVar10);
  if (*pcVar10 == '\x01') {
    DataMemoryBarrier(0xb);
    do {
      bVar18 = (bool)hasExclusiveAccess(pcVar10);
      if (bVar18) {
        *pcVar10 = '\0';
        goto LAB_0165392c;
      }
    } while (*pcVar10 == '\x01');
  }
  ClearExclusiveLocal();
  FUN_01280a5c(pcVar10);
LAB_0165392c:
  if (uVar13 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x01653944. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(uVar13 + 4))(puVar15);
  return;
}

