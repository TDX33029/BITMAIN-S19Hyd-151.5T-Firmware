// FUN_00aa6484 @ 00aa6484 size=2356 calls_out=27 calls_in=4
// strings: polled MutexLockFuture after completion | A Tokio 1.x context was found; but timers are disabled. Call `enable_time` on the runtime builder to enable timers.

longlong FUN_00aa6484(undefined4 *param_1,int *param_2)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  undefined4 *puVar6;
  int *piVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int extraout_r2;
  int extraout_r2_00;
  undefined1 **ppuVar11;
  undefined1 **ppuVar12;
  undefined1 *puVar13;
  byte bVar14;
  uint uVar15;
  undefined1 *puVar16;
  uint *puVar17;
  uint uVar18;
  undefined4 *puVar19;
  bool bVar20;
  undefined8 uVar21;
  undefined4 *local_12c;
  undefined1 auStack_118 [80];
  undefined1 *local_c8;
  undefined1 *puStack_c4;
  undefined1 *puStack_c0;
  undefined1 *local_b8;
  undefined1 *puStack_b4;
  undefined1 *puStack_b0;
  uint *local_a8;
  int *local_a4;
  undefined1 *local_a0;
  undefined1 *puStack_9c;
  undefined1 *puStack_98;
  undefined8 local_78;
  undefined1 *local_70;
  uint local_6c;
  undefined1 *local_68;
  undefined1 local_60;
  undefined1 *local_58;
  undefined1 *puStack_54;
  undefined1 *puStack_50;
  undefined8 local_48;
  undefined1 *puStack_40;
  uint *local_38;
  int *local_34;
  undefined1 *apuStack_30 [3];
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_1 + 8)) {
  case 0:
    *(undefined1 *)((int)param_1 + 0x21) = 1;
    param_1[6] = param_1[5];
    param_1[9] = *param_1;
    param_1[10] = param_1[1];
    param_1[0xb] = param_1[2];
    param_1[0xc] = param_1[3];
    param_1[0xd] = param_1[4];
    param_1[0xe] = param_1[5] + 8;
    param_1[0xf] = 0xffffffff;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_0186e024);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_0186e024);
  case 4:
    puVar4 = (uint *)(&switchD_00aa6580::switchdataD_00aa6584)[*(byte *)(param_1 + 0x12)];
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(byte *)(param_1 + 0x12)) {
    case 0:
      iVar3 = param_1[0xf];
      goto LAB_00aa659c;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_0186e0c4);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_0186e0c4);
    case 3:
      puVar17 = (uint *)param_1[0x18];
      if (puVar17 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00fb74b8("polled MutexLockFuture after completion",0x27,&DAT_0187a760);
      }
      goto LAB_00aa6654;
    }
    goto switchD_00aa6580_caseD_4;
  }
  puVar4 = param_1 + 0xe;
  iVar3 = FUN_00aa1058(puVar4,param_2);
  if (iVar3 == 0) {
    uVar2 = 3;
    goto LAB_00aa6d64;
  }
  param_1[7] = iVar3;
  if (param_1[0xe] != 0) {
    FUN_00aa0a58(param_1[0xe],param_1[0xf],1);
    iVar3 = param_1[7];
  }
  if (*(char *)(iVar3 + 0x24) != '\x03') {
    uVar5 = FUN_00ac0588(&DAT_0034e270,0x16);
    FUN_00aa13c0(param_1[7]);
    if (param_1[9] != 0) {
      thunk_FUN_016d3fb4(param_1[10]);
    }
    piVar7 = (int *)param_1[6];
    *(undefined1 *)((int)param_1 + 0x21) = 0;
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar7;
      bVar20 = (bool)hasExclusiveAccess(piVar7);
    } while (!bVar20);
    *piVar7 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00aa6194(param_1[6]);
    }
    goto LAB_00aa6c84;
  }
  iVar3 = *(int *)(*(int *)(iVar3 + 0x20) + 8);
  *(undefined1 *)((int)param_1 + 0x21) = 0;
  FUN_016dd52c(param_1 + 10,param_1 + 9,0x14);
  iVar3 = iVar3 + 0x10;
  *(undefined1 *)(param_1 + 0x12) = 0;
  param_1[0xf] = iVar3;
LAB_00aa659c:
  param_1[0x10] = iVar3;
  *(undefined1 *)((int)param_1 + 0x49) = 1;
  param_1[0x13] = param_1[10];
  param_1[0x14] = param_1[0xb];
  param_1[0x15] = param_1[0xc];
  param_1[0x16] = param_1[0xd];
  param_1[0x17] = param_1[0xe];
  puVar17 = (uint *)(iVar3 + 0x510);
  param_1[0x18] = puVar17;
  param_1[0x19] = 0xffffffff;
LAB_00aa6654:
  do {
    uVar5 = *puVar17;
    bVar20 = (bool)hasExclusiveAccess(puVar17);
  } while (!bVar20);
  *puVar17 = uVar5 | 1;
  DataMemoryBarrier(0xb);
  if ((uVar5 & 1) != 0) {
    puVar4 = puVar17 + 1;
    do {
      if (*puVar4 != 0) {
        ClearExclusiveLocal();
        FUN_015bf680(puVar4);
        iVar3 = extraout_r2;
        goto LAB_00aa66ac;
      }
      bVar20 = (bool)hasExclusiveAccess(puVar4);
    } while (!bVar20);
    *puVar4 = 1;
    DataMemoryBarrier(0xb);
    iVar3 = 0;
LAB_00aa66ac:
    uVar5 = 0;
    if ((DAT_018dd988 & 0x7fffffff) == 0) {
      cVar1 = (char)puVar17[2];
    }
    else {
      uVar5 = FUN_015bf3f8();
      uVar5 = uVar5 ^ 1;
      cVar1 = (char)puVar17[2];
      iVar3 = extraout_r2_00;
    }
    if (cVar1 != '\0') {
      uVar18 = (uint)local_a4 >> 8;
      local_a4 = (int *)CONCAT31((int3)uVar18,(char)uVar5);
      local_a8 = puVar4;
                    /* WARNING: Subroutine does not return */
      FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_a8,&DAT_0186df64,&DAT_0187a770);
    }
    uVar18 = param_1[0x19];
    if (uVar18 == 0xffffffff) {
      uVar21 = (*(code *)**(undefined4 **)*param_2)(((undefined4 *)*param_2)[1]);
      uVar15 = puVar17[7];
      FUN_0098a8a4(puVar17 + 3,uVar15,(int)uVar21,(int)((ulonglong)uVar21 >> 0x20));
      uVar18 = puVar17[6];
      param_1[0x19] = uVar15;
      if (uVar18 == 1) {
        do {
          bVar20 = (bool)hasExclusiveAccess(puVar17);
        } while (!bVar20);
        *puVar17 = *puVar17 | 2;
      }
    }
    else {
      if ((puVar17[5] <= uVar18) || (piVar7 = (int *)(puVar17[4] + uVar18 * 0xc), *piVar7 == 0)) {
                    /* WARNING: Subroutine does not return */
        FUN_015be724(&DAT_00412edc,0xb,&DAT_0187a780);
      }
      puVar19 = (undefined4 *)piVar7[1];
      puVar6 = *(undefined4 **)*param_2;
      iVar8 = ((int *)*param_2)[1];
      if (puVar19 == (undefined4 *)0x0) {
        uVar21 = (*(code *)*puVar6)(iVar8);
      }
      else {
        if (puVar6 == puVar19) {
          iVar3 = piVar7[2];
        }
        if (puVar6 == puVar19 && iVar8 == iVar3) goto LAB_00aa67d4;
        uVar21 = (*(code *)*puVar6)(iVar8);
        (*(code *)puVar19[3])(piVar7[2]);
      }
      *(undefined8 *)(piVar7 + 1) = uVar21;
    }
LAB_00aa67d4:
    if (((uVar5 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) && (iVar3 = FUN_015bf3f8(), iVar3 == 0)
       ) {
      *(undefined1 *)(puVar17 + 2) = 1;
    }
    DataMemoryBarrier(0xb);
    do {
      uVar5 = *puVar4;
      bVar20 = (bool)hasExclusiveAccess(puVar4);
    } while (!bVar20);
    *puVar4 = 0;
    if (uVar5 == 2) {
      FUN_016d6968(0xf0,puVar4,0x81,1);
    }
    do {
      uVar5 = *puVar17;
      bVar20 = (bool)hasExclusiveAccess(puVar17);
    } while (!bVar20);
    *puVar17 = uVar5 | 1;
    DataMemoryBarrier(0xb);
    if ((uVar5 & 1) == 0) {
      FUN_00aa0a58(puVar17,param_1[0x19],0);
      goto LAB_00aa684c;
    }
    uVar2 = 3;
LAB_00aa6c28:
    local_12c = param_1 + 0x12;
    *(undefined1 *)local_12c = uVar2;
    uVar2 = 4;
LAB_00aa6d64:
    *(undefined1 *)(param_1 + 8) = uVar2;
    return CONCAT44(puVar4,1);
  }
  FUN_00aa0a58(puVar17,param_1[0x19],0);
LAB_00aa684c:
  param_1[0x11] = puVar17;
  param_1[0x18] = 0;
  if (puVar17[8] == 0) {
    uVar5 = FUN_00ac0588(&DAT_0034e2ab,0x2e);
  }
  else {
    uVar9 = param_1[0x13];
    uVar10 = param_1[0x14];
    local_38 = (uint *)param_1[0x15];
    local_34 = (int *)param_1[0x16];
    apuStack_30[0] = (undefined1 *)param_1[0x17];
    *(undefined1 *)((int)param_1 + 0x49) = 0;
    FUN_0165a798(&local_a8);
    puVar16 = (undefined1 *)((int)local_a8 + 5);
    uVar5 = (int)local_a4 + (uint)((uint *)0xfffffffa < local_a8);
    if ((int)(((uint)local_a4 ^ uVar5) & ~(uint)local_a4) < 0) {
LAB_00aa68f0:
      FUN_01656dc8(&local_a8);
      local_78 = CONCAT44(local_78._4_4_,(undefined4)local_78);
    }
    else {
      if (&DAT_3b9aca00 <= local_a0) {
        bVar20 = (undefined1 *)0xfffffffe < puVar16;
        puVar16 = (undefined1 *)((int)local_a8 + 6);
        uVar18 = uVar5 + bVar20;
        if (-1 < (int)((uVar5 ^ uVar18) & ~uVar5)) {
          puVar13 = local_a0 + -1000000000;
          uVar5 = uVar18;
          if (local_a0 + -1000000000 != &DAT_3b9aca00) goto LAB_00aa691c;
        }
        goto LAB_00aa68f0;
      }
      puVar13 = local_a0;
LAB_00aa691c:
      local_48 = FUN_0164ec90(&DAT_0187b3dc);
      iVar3 = 0x180;
      if ((local_48 & 1) != 0) {
        iVar3 = 0xb8;
      }
      if (*(undefined1 **)((int)(local_48 >> 0x20) + iVar3 + 0x90) == &DAT_3b9aca00) {
                    /* WARNING: Subroutine does not return */
        FUN_00fb74b8("A Tokio 1.x context was found, but timers are disabled. Call `enable_time` on the runtime builder to enable timers."
                     ,0x73,&DAT_0187b3dc);
      }
      local_a4 = (int *)0x0;
      local_a8 = (uint *)0x0;
      local_60 = 0;
      local_70 = puVar16;
      local_6c = uVar5;
      local_68 = puVar13;
      local_78 = local_48;
    }
    puVar16 = apuStack_30[0];
    piVar7 = local_34;
    puVar4 = local_38;
    FUN_016dd1aa(auStack_118,&local_a8,0x50);
    FUN_016dd1aa(param_1 + 0x14,auStack_118,0x50);
    param_1[0x28] = uVar9;
    param_1[0x29] = uVar10;
    param_1[0x2a] = puVar4;
    param_1[0x2b] = piVar7;
    param_1[0x2c] = puVar16;
    param_1[0x2d] = puVar17 + 8;
switchD_00aa6580_caseD_4:
    uVar21 = thunk_FUN_016de0ee(puVar4,0x40);
    puVar4 = (uint *)((int)uVar21 + (int)((ulonglong)uVar21 >> 0x20));
    piVar7 = param_2;
    if ((char)puVar4[0xe] == '\x01') {
LAB_00aa6ac0:
      bVar14 = ~(byte)puVar4[0xc] & 1 | *(char *)((int)puVar4 + 0x31) != '\0';
      if (param_1[0x28] == -0x80000000) goto LAB_00aa6b74;
LAB_00aa6aec:
      puVar4 = (uint *)param_1[0x2d];
      (**(code **)(puVar4[1] + 0xc))(&local_a8,*puVar4,param_2);
      if (local_a8 == (uint *)&DAT_8000000d) {
        puVar17 = (uint *)param_1[0x28];
        param_1[0x28] = 0x80000000;
        if (puVar17 == (uint *)0x80000000) {
                    /* WARNING: Subroutine does not return */
          FUN_00fb74b8(&DAT_004090e8,0x1c,&DAT_018a5da0);
        }
        local_a4 = (int *)param_1[0x29];
        local_a0 = (undefined1 *)param_1[0x2a];
        puStack_9c = (undefined1 *)param_1[0x2b];
        puStack_98 = (undefined1 *)param_1[0x2c];
        uVar5 = *puVar4;
        puVar4 = (uint *)puVar4[1];
        local_a8 = puVar17;
        (*(code *)puVar4[4])(&local_38,uVar5,&local_a8);
        if (local_38 != (uint *)&DAT_8000000d) {
          ppuVar11 = apuStack_30;
          puVar17 = local_38;
          piVar7 = local_34;
          goto LAB_00aa6bd4;
        }
        goto LAB_00aa6b74;
      }
      if (local_a8 != (uint *)0x8000000e) {
        ppuVar11 = &local_a0;
        puVar17 = local_a8;
        piVar7 = local_a4;
LAB_00aa6bd4:
        local_48._0_4_ = *ppuVar11;
        local_48._4_4_ = ppuVar11[1];
        puStack_40 = ppuVar11[2];
        ppuVar12 = (undefined1 **)&local_48;
        local_48 = *(ulonglong *)ppuVar11;
        goto LAB_00aa6be4;
      }
      puVar17 = (uint *)0x8000000e;
LAB_00aa6bf0:
      if (puVar17 != (uint *)0x8000000e) goto LAB_00aa6c9c;
      iVar3 = FUN_016540e8(bVar14 == 2 | bVar14 & 1,param_1 + 0x14,*param_2);
      if (iVar3 != 0) {
        uVar2 = 4;
        goto LAB_00aa6c28;
      }
      puVar17 = (uint *)0x8000000e;
    }
    else {
      if ((char)puVar4[0xe] != '\x02') {
        FUN_015e8e6c(puVar4,FUN_00a303f4);
        *(undefined1 *)(puVar4 + 0xe) = 1;
        goto LAB_00aa6ac0;
      }
      bVar14 = 2;
      if (param_1[0x28] != -0x80000000) goto LAB_00aa6aec;
LAB_00aa6b74:
      (**(code **)(((undefined4 *)param_1[0x2d])[1] + 0x14))
                (&local_a8,*(undefined4 *)param_1[0x2d],param_2);
      if (local_a8 != (uint *)&DAT_8000000d) {
        puVar17 = local_a8;
        if (local_a8 != (uint *)0x8000000e) {
          ppuVar12 = &local_a0;
          piVar7 = local_a4;
LAB_00aa6be4:
          local_58 = *ppuVar12;
          puStack_54 = ppuVar12[1];
          puStack_50 = ppuVar12[2];
        }
        goto LAB_00aa6bf0;
      }
      puVar17 = (uint *)&DAT_8000000d;
LAB_00aa6c9c:
      local_c8 = local_58;
      puStack_c4 = puStack_54;
      puStack_c0 = puStack_50;
    }
    local_b8 = local_c8;
    puStack_b4 = puStack_c4;
    puStack_b0 = puStack_c0;
    if ((param_1[0x28] & 0x7fffffff) != 0) {
      thunk_FUN_016d3fb4(param_1[0x29]);
    }
    FUN_00a07b4c(param_1 + 0x14);
    if (puVar17 == (uint *)0x8000000e) {
      uVar5 = FUN_00aa7134(param_1[0x10]);
    }
    else {
      uVar5 = 0;
      if (puVar17 != (uint *)&DAT_8000000d) {
        local_a0 = local_b8;
        puStack_9c = puStack_b4;
        puStack_98 = puStack_b0;
        local_a8 = puVar17;
        local_a4 = piVar7;
        uVar5 = FUN_00ac16d0(&local_a8);
      }
    }
  }
  FUN_00aa13c0(param_1[0x11]);
  bVar20 = *(char *)((int)param_1 + 0x49) != '\0';
  iVar3 = 0;
  if (bVar20) {
    iVar3 = param_1[0x13];
  }
  if (bVar20 && iVar3 != 0) {
    thunk_FUN_016d3fb4(param_1[0x14]);
  }
  *(undefined2 *)(param_1 + 0x12) = 1;
  FUN_00aa702c(param_1 + 10);
  FUN_00aa13c0(param_1[7]);
  piVar7 = (int *)param_1[6];
  *(undefined1 *)((int)param_1 + 0x21) = 0;
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar7;
    bVar20 = (bool)hasExclusiveAccess(piVar7);
  } while (!bVar20);
  *piVar7 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00aa6194(param_1[6]);
  }
LAB_00aa6c84:
  *(undefined1 *)(param_1 + 8) = 1;
  return (ulonglong)uVar5 << 0x20;
}

