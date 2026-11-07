// FUN_01650258 @ 01650258 size=2076 calls_out=25 calls_in=2
// strings: called after complete | Cannot drop a runtime in a context where blocking is not allowed. This happens when a runtime is dropped from within an asynchronous context.The Tokio context thread-local variable has been destroyed.`time::pause()` requires the `current_thread` Tokio runtime. This is the default Runtime used by `#[tokio::test].

void FUN_01650258(int *param_1)

{
  bool bVar1;
  char cVar2;
  int *piVar3;
  undefined4 uVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  undefined4 *puVar8;
  code *pcVar9;
  char *pcVar10;
  int *piVar11;
  int extraout_r3;
  int extraout_r3_00;
  int extraout_r3_01;
  int extraout_r3_02;
  int extraout_r3_03;
  undefined4 uVar12;
  uint *puVar13;
  uint *puVar14;
  int iVar15;
  int *piVar16;
  uint *puVar17;
  char cVar18;
  char cVar19;
  char cVar20;
  uint uVar21;
  uint uVar22;
  undefined8 uVar23;
  uint local_9c;
  uint *local_88;
  int local_84;
  undefined4 uStack_80;
  int local_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  uint local_68;
  uint uStack_64;
  uint *puStack_60;
  uint *local_5c;
  uint local_58;
  uint *local_54;
  int local_50;
  int local_4c;
  undefined4 local_48;
  undefined4 local_44;
  int local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  int *local_30;
  int *piStack_2c;
  undefined4 uStack_28;
  
  iVar15 = *param_1;
  pcVar10 = (char *)(iVar15 + 0x28);
  if (*pcVar10 == '\0') {
    bVar1 = (bool)hasExclusiveAccess(pcVar10);
    if (!bVar1) goto LAB_0165094c;
    *pcVar10 = '\x01';
    DataMemoryBarrier(0xb);
  }
  else {
    ClearExclusiveLocal();
LAB_0165094c:
    FUN_01280da8(pcVar10);
  }
  FUN_0128236c(pcVar10);
  if (*(char *)(iVar15 + 0x78) != '\0') {
    FUN_01282570(pcVar10);
    if (*pcVar10 == '\x01') {
      DataMemoryBarrier(0xb);
      do {
        bVar1 = (bool)hasExclusiveAccess(pcVar10);
        if (bVar1) {
          *pcVar10 = '\0';
          return;
        }
      } while (*pcVar10 == '\x01');
    }
    ClearExclusiveLocal();
    FUN_01280a5c(pcVar10);
    return;
  }
  piVar3 = *(int **)(iVar15 + 100);
  *(undefined1 *)(iVar15 + 0x78) = 1;
  if (piVar3 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar7 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar7 + -1;
    if (iVar7 == 1) {
      DataMemoryBarrier(0xb);
      FUN_016584b4(*(undefined4 *)(iVar15 + 100));
    }
  }
  iVar7 = *param_1;
  *(undefined4 *)(iVar15 + 100) = 0;
  if (*(int *)(iVar7 + 0x90) != 0) {
    iVar7 = FUN_0127f168(iVar7 + 0x90);
  }
  uVar23 = thunk_FUN_016de0ee(iVar7,0x2c0);
  puVar17 = (uint *)((int)uVar23 + (int)((ulonglong)uVar23 >> 0x20));
  piVar3 = *(int **)(iVar15 + 0x68);
  piVar11 = *(int **)(iVar15 + 0x6c);
  uVar12 = *(undefined4 *)(iVar15 + 0x70);
  uVar21 = puVar17[4];
  *(undefined4 *)(iVar15 + 0x68) = 0;
  if ((char)uVar21 == '\0') {
    FUN_015f62e4(&local_68);
    *puVar17 = local_68;
    puVar17[1] = uStack_64;
    puVar17[2] = (uint)puStack_60;
    puVar17[3] = (uint)local_5c;
    *(undefined1 *)(puVar17 + 4) = 1;
  }
  uVar21 = *puVar17;
  uVar22 = puVar17[1];
  local_9c = puVar17[2];
  *puVar17 = uVar21 + 1;
  puVar17[1] = uVar22 + (0xfffffffe < uVar21);
  local_88 = *(uint **)(iVar15 + 0x40);
  local_84 = *(int *)(iVar15 + 0x44);
  uStack_80 = *(undefined4 *)(iVar15 + 0x48);
  local_7c = *(int *)(iVar15 + 0x4c);
  local_78 = *(undefined4 *)(iVar15 + 0x50);
  uStack_74 = *(undefined4 *)(iVar15 + 0x54);
  uStack_70 = *(undefined4 *)(iVar15 + 0x58);
  uStack_6c = *(undefined4 *)(iVar15 + 0x5c);
  *(uint *)(iVar15 + 0x5c) = puVar17[3];
  *(uint *)(iVar15 + 0x58) = local_9c;
  *(uint *)(iVar15 + 0x50) = uVar21;
  *(uint *)(iVar15 + 0x54) = uVar22;
  *(undefined4 **)(iVar15 + 0x40) = &DAT_005674cc;
  *(undefined4 *)(iVar15 + 0x44) = 0;
  *(undefined4 *)(iVar15 + 0x48) = 0;
  *(undefined4 *)(iVar15 + 0x4c) = 0;
  FUN_01282570(pcVar10);
  if (*pcVar10 == '\x01') {
    uVar4 = 0;
    DataMemoryBarrier(0xb);
    do {
      bVar1 = (bool)hasExclusiveAccess(pcVar10);
      if (bVar1) {
        *pcVar10 = '\0';
        goto LAB_01650424;
      }
    } while (*pcVar10 == '\x01');
  }
  ClearExclusiveLocal();
  uVar4 = FUN_01280a5c(pcVar10);
LAB_01650424:
  uVar23 = thunk_FUN_016de0ee(uVar4,0x40);
  puVar17 = (uint *)((int)uVar23 + (int)((ulonglong)uVar23 >> 0x20));
  cVar2 = (char)puVar17[0xe];
  if (cVar2 != '\x01') {
    if (cVar2 == '\x02') goto LAB_01650468;
    FUN_015e8e6c(puVar17,FUN_01655ec4);
    *(undefined1 *)(puVar17 + 0xe) = 1;
  }
  cVar2 = *(char *)((int)puVar17 + 0x32);
  if (cVar2 != '\x02') {
    if (((DAT_018dd988 & 0x7fffffff) == 0) || (iVar15 = FUN_015bf3f8(), iVar15 != 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa478("Cannot drop a runtime in a context where blocking is not allowed. This happens when a runtime is dropped from within an asynchronous context.The Tokio context thread-local variable has been destroyed.`time::pause()` requires the `current_thread` Tokio runtime. This is the default Runtime used by `#[tokio::test]."
                   ,0x11b,&DAT_018ad2ec);
    }
    FUN_01643300(&local_88);
    if (piVar3 != (int *)0x0) {
      FUN_016dea68(uVar12);
      DataMemoryBarrier(0xb);
      do {
        iVar15 = *piVar3;
        bVar1 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar1);
      *piVar3 = iVar15 + -1;
      if (iVar15 == 1) {
        DataMemoryBarrier(0xb);
        FUN_015e92c0(piVar3);
      }
      DataMemoryBarrier(0xb);
      do {
        iVar15 = *piVar11;
        bVar1 = (bool)hasExclusiveAccess(piVar11);
      } while (!bVar1);
      *piVar11 = iVar15 + -1;
      if (iVar15 == 1) {
        DataMemoryBarrier(0xb);
        FUN_01659070(piVar11);
      }
    }
    return;
  }
LAB_01650468:
  uVar23 = thunk_FUN_016de0ee(cVar2,0x278);
  piVar16 = (int *)((int)uVar23 + (int)((ulonglong)uVar23 >> 0x20));
  piVar5 = piVar16;
  if (((char)piVar16[1] == '\x01') ||
     (piVar5 = (int *)FUN_01655dc8(piVar16), uStack_64 = extraout_r3_03, piVar5 != (int *)0x0)) {
    piVar5 = (int *)*piVar5;
    do {
      iVar15 = *piVar5;
      bVar1 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar1);
    *piVar5 = iVar15 + 1;
    if (iVar15 < 0) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)software_udf(0xfdee,0x1650a78);
      (*pcVar9)();
    }
    piVar5 = piVar5 + 2;
    do {
      cVar2 = (char)puVar17[0xe];
      if (cVar2 == '\x01') {
LAB_016504dc:
        local_9c = (uint)*(byte *)((int)puVar17 + 0x31);
        cVar20 = (char)puVar17[0xc];
        *(undefined2 *)(puVar17 + 0xc) = 0x8001;
        cVar2 = '\x01';
      }
      else {
        cVar20 = cVar2;
        if (cVar2 != '\x02') {
          FUN_015e8e6c(puVar17,FUN_01655ec4);
          *(undefined1 *)(puVar17 + 0xe) = 1;
          goto LAB_016504dc;
        }
      }
      iVar15 = param_1[1];
      if (iVar15 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa478("called after complete",0x2b,&DAT_018ad0fc);
      }
      if (cVar2 == '\x01') {
LAB_01650544:
        cVar19 = *(char *)((int)puVar17 + 0x31);
        cVar18 = (char)puVar17[0xc];
        cVar2 = cVar19;
        if (cVar18 == '\x01') {
          if (cVar19 != '\0') {
            cVar2 = cVar19 + -1;
            goto LAB_01650564;
          }
          FUN_016455a4(&DAT_018ac55c,piVar5);
          goto LAB_01650678;
        }
LAB_01650564:
        *(char *)((int)puVar17 + 0x31) = cVar2;
        uVar21 = *(uint *)(iVar15 + 0x18);
        DataMemoryBarrier(0xb);
        if ((uVar21 & 2) == 0) goto LAB_01650578;
LAB_016506a0:
        *(undefined1 *)(iVar15 + 0x1c) = 0;
LAB_016506a8:
        piVar6 = (int *)param_1[1];
        if (piVar6 != (int *)0x0) {
          DataMemoryBarrier(0xb);
          do {
            iVar15 = *piVar6;
            bVar1 = (bool)hasExclusiveAccess(piVar6);
          } while (!bVar1);
          *piVar6 = iVar15 + -1;
          if (iVar15 == 1) {
            DataMemoryBarrier(0xb);
            FUN_0165863c(param_1[1]);
          }
        }
        bVar1 = false;
        param_1[1] = 0;
      }
      else {
        cVar18 = '\0';
        cVar19 = '\0';
        if (cVar2 != '\x02') {
          FUN_015e8e6c(puVar17,FUN_01655ec4);
          *(undefined1 *)(puVar17 + 0xe) = 1;
          goto LAB_01650544;
        }
        uVar21 = *(uint *)(iVar15 + 0x18);
        DataMemoryBarrier(0xb);
        if ((uVar21 & 2) != 0) goto LAB_016506a0;
LAB_01650578:
        if ((uVar21 & 4) != 0) goto LAB_016506a8;
        puVar13 = (uint *)(iVar15 + 0x18);
        if ((uVar21 & 1) == 0) {
LAB_016505e4:
          uVar23 = FUN_01639fa4(piVar5);
          *(undefined8 *)(iVar15 + 0x10) = uVar23;
          DataMemoryBarrier(0xb);
          do {
            uVar21 = *puVar13;
            bVar1 = (bool)hasExclusiveAccess(puVar13);
          } while (!bVar1);
          *puVar13 = uVar21 | 1;
          DataMemoryBarrier(0xb);
          if ((uVar21 & 2) != 0) goto LAB_016506a0;
        }
        else if ((*(int **)(iVar15 + 0x14) != piVar5) ||
                (*(undefined **)(iVar15 + 0x10) != &DAT_018ac55c)) {
          DataMemoryBarrier(0xb);
          do {
            uVar21 = *puVar13;
            bVar1 = (bool)hasExclusiveAccess(puVar13);
          } while (!bVar1);
          *puVar13 = uVar21 & 0xfffffffe;
          DataMemoryBarrier(0xb);
          if ((uVar21 & 2) != 0) {
            DataMemoryBarrier(0xb);
            do {
              bVar1 = (bool)hasExclusiveAccess(puVar13);
            } while (!bVar1);
            *puVar13 = *puVar13 | 1;
            DataMemoryBarrier(0xb);
            goto LAB_016506a0;
          }
          (**(code **)(*(int *)(iVar15 + 0x10) + 0xc))(*(undefined4 *)(iVar15 + 0x14));
          goto LAB_016505e4;
        }
        if (cVar18 == '\0') {
LAB_01650678:
          bVar1 = true;
        }
        else {
          if ((char)puVar17[0xe] != '\x01') {
            if ((char)puVar17[0xe] == '\x02') goto LAB_01650678;
            FUN_015e8e6c(puVar17,FUN_01655ec4);
            *(undefined1 *)(puVar17 + 0xe) = 1;
          }
          bVar1 = true;
          *(char *)((int)puVar17 + 0x31) = cVar19;
          *(undefined1 *)(puVar17 + 0xc) = 1;
        }
      }
      if (cVar20 != '\x02') {
        if ((char)puVar17[0xe] != '\x01') {
          if ((char)puVar17[0xe] == '\x02') goto joined_r0x01650708;
          FUN_015e8e6c(puVar17,FUN_01655ec4);
          *(undefined1 *)(puVar17 + 0xe) = 1;
        }
        *(char *)((int)puVar17 + 0x31) = (char)local_9c;
        *(char *)(puVar17 + 0xc) = cVar20;
      }
joined_r0x01650708:
      if (!bVar1) {
        FUN_0163a054(piVar5);
        uStack_64 = extraout_r3;
        break;
      }
      piVar6 = piVar16;
      if (((char)piVar16[1] != '\x01') &&
         (piVar6 = (int *)FUN_01655dc8(piVar16), piVar6 == (int *)0x0)) {
                    /* WARNING: Subroutine does not return */
        FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_68,&DAT_018ac53c,&DAT_018ac54c);
      }
      FUN_01639cac(*piVar6 + 8);
    } while( true );
  }
  puStack_60 = puVar17;
  if (piVar3 != (int *)0x0) {
    local_30 = piVar3;
    piStack_2c = piVar11;
    uStack_28 = uVar12;
    uVar23 = FUN_01646f04(&local_30);
    puVar17 = (uint *)((ulonglong)uVar23 >> 0x20);
    iVar15 = (int)uVar23;
    uStack_64 = extraout_r3_00;
    if (iVar15 != 0) {
      if ((code *)*puVar17 != (code *)0x0) {
        (*(code *)*puVar17)(iVar15);
        uStack_64 = extraout_r3_01;
      }
      puStack_60 = puVar17;
      if (puVar17[1] != 0) {
        thunk_FUN_016d3fb4(iVar15);
        uStack_64 = extraout_r3_02;
      }
    }
  }
  if (local_84 == 0) {
    local_68 = 0;
  }
  else {
    puStack_60 = local_88 + local_84 * -4 + -4;
    uStack_64 = local_84 * 0x11 + 0x15;
    local_68 = 4;
  }
  local_50 = (int)local_88 + local_84 + 1;
  puVar13 = local_88 + 1;
  uVar21 = ~*local_88 & 0x80808080;
  local_4c = local_7c;
  local_5c = local_88;
  puVar17 = local_88;
  iVar15 = local_7c;
  local_58 = uVar21;
  local_54 = puVar13;
  while (iVar15 != 0) {
    puVar14 = puVar13;
    if (uVar21 == 0) {
      do {
        puVar13 = puVar14 + 1;
        uVar21 = *puVar14;
        puVar17 = puVar17 + -0x10;
        puVar14 = puVar13;
      } while ((uVar21 & 0x80808080) == 0x80808080);
      uVar21 = uVar21 & 0x80808080 ^ 0x80808080;
    }
    iVar15 = iVar15 + -1;
    uVar22 = LZCOUNT(uVar21 << 0x18 | (uVar21 >> 8 & 0xff) << 0x10 | (uVar21 >> 0x10 & 0xff) << 8 |
                     uVar21 >> 0x18) & 0x38;
    iVar7 = *(int *)((int)puVar17 + uVar22 * -2 + -0xc);
    local_48 = *(undefined4 *)((int)puVar17 + uVar22 * -2 + -8);
    local_44 = *(undefined4 *)((int)puVar17 + uVar22 * -2 + -4);
    uVar21 = uVar21 - 1 & uVar21;
    if (iVar7 == 0) goto LAB_01650928;
    local_3c = iVar7;
    local_38 = local_48;
    uStack_34 = local_44;
    uVar23 = FUN_01646f04(&local_3c);
    puVar8 = (undefined4 *)((ulonglong)uVar23 >> 0x20);
    iVar7 = (int)uVar23;
    if (iVar7 != 0) {
      pcVar9 = (code *)*puVar8;
      if (pcVar9 != (code *)0x0) {
        (*pcVar9)(iVar7);
      }
      if (puVar8[1] != 0) {
        thunk_FUN_016d3fb4(iVar7);
      }
    }
  }
  iVar15 = 0;
LAB_01650928:
  local_5c = puVar17;
  local_58 = uVar21;
  local_54 = puVar13;
  local_4c = iVar15;
  FUN_0164352c(&local_68);
  return;
}

