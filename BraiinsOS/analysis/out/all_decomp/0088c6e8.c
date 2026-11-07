// FUN_0088c6e8 @ 0088c6e8 size=4216 calls_out=37 calls_in=0
// strings: polled MutexLockFuture after completion | A Tokio 1.x context was found; but timers are disabled. Call `enable_time` on the runtime builder to enable timers.

/* WARNING: Removing unreachable block (ram,0x0088d30c) */
/* WARNING: Removing unreachable block (ram,0x0088cf0c) */

longlong FUN_0088c6e8(undefined4 *param_1,int *param_2)

{
  char cVar1;
  undefined1 uVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  uint *puVar7;
  undefined *puVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  int *piVar11;
  undefined4 *puVar12;
  code *pcVar13;
  int iVar14;
  int iVar15;
  int extraout_r2;
  int extraout_r2_00;
  undefined4 *puVar16;
  int iVar17;
  undefined4 uVar18;
  undefined4 *unaff_r4;
  undefined4 uVar19;
  uint *puVar20;
  uint uVar21;
  int *piVar22;
  undefined1 *puVar23;
  int *piVar24;
  uint uVar25;
  bool bVar26;
  ulonglong uVar27;
  undefined8 uVar28;
  undefined4 *local_e8;
  undefined4 *local_e4;
  undefined1 auStack_e0 [80];
  undefined8 local_90;
  int iStack_88;
  undefined4 *local_80;
  undefined4 *local_7c;
  uint *local_78;
  uint local_74;
  int local_70;
  undefined8 local_48;
  uint local_40;
  uint local_3c;
  undefined1 *local_38;
  undefined1 local_30;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_1 + 0x32)) {
  case 0:
    uVar9 = *param_1;
    unaff_r4 = param_1 + 2;
    *unaff_r4 = uVar9;
    iVar14 = param_1[0x30];
    uVar2 = *(undefined1 *)(param_1 + 1);
    *(undefined1 *)(param_1 + 10) = 0;
    param_1[4] = iVar14;
    *(undefined1 *)(param_1 + 3) = uVar2;
LAB_0088c74c:
    param_1[0xb] = iVar14 + 0x20;
    param_1[5] = iVar14;
    param_1[0xc] = 0xffffffff;
    *(undefined1 *)(param_1 + 7) = uVar2;
    param_1[6] = uVar9;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_01876d1c);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_01876d1c);
  case 3:
    uVar6 = (&switchD_0088c7e8::switchdataD_0088c7ec)[*(byte *)(param_1 + 10)];
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(byte *)(param_1 + 10)) {
    case 0:
      uVar2 = *(undefined1 *)(param_1 + 3);
      uVar9 = param_1[2];
      iVar14 = param_1[4];
      goto LAB_0088c74c;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_01876cdc);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_01876cdc);
    case 4:
      goto LAB_0088cbb8;
    case 5:
      puVar7 = (uint *)param_1[0xb];
      if (puVar7 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00fb74b8("polled MutexLockFuture after completion",0x27,&DAT_0187a760);
      }
LAB_0088c994:
      do {
        uVar6 = *puVar7;
        bVar26 = (bool)hasExclusiveAccess(puVar7);
      } while (!bVar26);
      *puVar7 = uVar6 | 1;
      DataMemoryBarrier(0xb);
      if ((uVar6 & 1) == 0) {
        FUN_008b4d34(puVar7,param_1[0xc],0);
      }
      else {
        puVar20 = puVar7 + 1;
        do {
          if (*puVar20 != 0) {
            ClearExclusiveLocal();
            FUN_015bf680(puVar20);
            iVar14 = extraout_r2;
            goto LAB_0088c9ec;
          }
          bVar26 = (bool)hasExclusiveAccess(puVar20);
        } while (!bVar26);
        *puVar20 = 1;
        DataMemoryBarrier(0xb);
        iVar14 = 0;
LAB_0088c9ec:
        unaff_r4 = (undefined4 *)0x0;
        if ((DAT_018dd988 & 0x7fffffff) == 0) {
          cVar1 = (char)puVar7[2];
        }
        else {
          uVar6 = FUN_015bf3f8();
          unaff_r4 = (undefined4 *)(uVar6 ^ 1);
          cVar1 = (char)puVar7[2];
          iVar14 = extraout_r2_00;
        }
        if (cVar1 != '\0') {
          uVar6 = local_74 >> 8;
          local_74 = CONCAT31((int3)uVar6,(char)unaff_r4);
          local_78 = puVar20;
                    /* WARNING: Subroutine does not return */
          FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_78,&DAT_01863d7c,&DAT_0187a770);
        }
        uVar6 = param_1[0xc];
        if (uVar6 == 0xffffffff) {
          uVar28 = (*(code *)**(undefined4 **)*param_2)(((undefined4 *)*param_2)[1]);
          uVar21 = puVar7[7];
          FUN_0098a8a4(puVar7 + 3,uVar21,(int)uVar28,(int)((ulonglong)uVar28 >> 0x20));
          uVar6 = puVar7[6];
          param_1[0xc] = uVar21;
          if (uVar6 == 1) {
            do {
              bVar26 = (bool)hasExclusiveAccess(puVar7);
            } while (!bVar26);
            *puVar7 = *puVar7 | 2;
          }
        }
        else {
          if ((puVar7[5] <= uVar6) || (piVar11 = (int *)(puVar7[4] + uVar6 * 0xc), *piVar11 == 0)) {
                    /* WARNING: Subroutine does not return */
            FUN_015be724(&DAT_00412edc,0xb,&DAT_0187a780);
          }
          puVar16 = (undefined4 *)piVar11[1];
          puVar10 = *(undefined4 **)*param_2;
          iVar15 = ((int *)*param_2)[1];
          if (puVar16 == (undefined4 *)0x0) {
            uVar28 = (*(code *)*puVar10)(iVar15);
          }
          else {
            if (puVar10 == puVar16) {
              iVar14 = piVar11[2];
            }
            if (puVar10 == puVar16 && iVar15 == iVar14) goto LAB_0088cd98;
            uVar28 = (*(code *)*puVar10)(iVar15);
            (*(code *)puVar16[3])(piVar11[2]);
          }
          *(undefined8 *)(piVar11 + 1) = uVar28;
        }
LAB_0088cd98:
        if ((unaff_r4 == (undefined4 *)0x0) && ((DAT_018dd988 & 0x7fffffff) != 0)) {
          iVar14 = FUN_015bf3f8();
          if (iVar14 == 0) {
            *(undefined1 *)(puVar7 + 2) = 1;
          }
        }
        DataMemoryBarrier(0xb);
        do {
          uVar6 = *puVar20;
          bVar26 = (bool)hasExclusiveAccess(puVar20);
        } while (!bVar26);
        *puVar20 = 0;
        if (uVar6 == 2) {
          FUN_016d6968(0xf0,puVar20,0x81,1);
        }
        do {
          uVar6 = *puVar7;
          bVar26 = (bool)hasExclusiveAccess(puVar7);
        } while (!bVar26);
        *puVar7 = uVar6 | 1;
        DataMemoryBarrier(0xb);
        if ((uVar6 & 1) != 0) {
          *(undefined1 *)(param_1 + 10) = 5;
          goto LAB_0088cee0;
        }
        FUN_008b4d34(puVar7,param_1[0xc],0);
      }
      param_1[9] = puVar7;
      param_1[0xb] = 0;
      uVar6 = puVar7[10];
      puVar10 = (undefined4 *)puVar7[9];
      puVar7[10] = 0;
      param_1[0xf] = 0;
      param_1[0xd] = puVar7 + 8;
      param_1[0xe] = uVar6;
      param_1[0xb] = puVar10;
      param_1[0xc] = puVar10 + uVar6 * 2;
      if (puVar10 != puVar10 + uVar6 * 2) {
        do {
          uVar9 = *puVar10;
          iVar14 = puVar10[1];
          param_1[0xb] = puVar10 + 2;
          param_1[0x10] = uVar9;
          param_1[0x11] = iVar14;
          param_1[0x12] = uVar9;
          param_1[0x13] = iVar14;
LAB_0088dab4:
          iVar14 = (**(code **)(iVar14 + 0xc))(uVar9,param_2);
          if (iVar14 != 0) {
            *(undefined1 *)(param_1 + 10) = 6;
            goto LAB_0088cee0;
          }
          uVar9 = param_1[0x12];
          puVar10 = (undefined4 *)param_1[0x13];
          pcVar13 = (code *)*puVar10;
          if (pcVar13 != (code *)0x0) {
            (*pcVar13)(uVar9);
          }
          if (puVar10[1] != 0) {
            thunk_FUN_016d3fb4(uVar9);
          }
          puVar10 = (undefined4 *)param_1[0xb];
        } while (puVar10 != (undefined4 *)param_1[0xc]);
      }
      param_1[0x10] = 0;
      FUN_00badb28(param_1 + 0xb);
      FUN_008b4548(param_1[9]);
      FUN_008b4548(param_1[8]);
      piVar11 = (int *)param_1[6];
      DataMemoryBarrier(0xb);
      do {
        iVar14 = *piVar11;
        bVar26 = (bool)hasExclusiveAccess(piVar11);
      } while (!bVar26);
      *piVar11 = iVar14 + -1;
      if (iVar14 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0155edc8(param_1[6]);
      }
      piVar11 = (int *)param_1[5];
      DataMemoryBarrier(0xb);
      do {
        iVar14 = *piVar11;
        bVar26 = (bool)hasExclusiveAccess(piVar11);
      } while (!bVar26);
      *piVar11 = iVar14 + -1;
      uVar6 = 0;
      if (iVar14 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00790cd0(param_1[5]);
      }
      goto LAB_0088cecc;
    case 6:
      uVar9 = param_1[0x12];
      iVar14 = param_1[0x13];
      goto LAB_0088dab4;
    }
  }
  iVar14 = FUN_008b49cc(param_1 + 0xb,param_2);
  if (iVar14 != 0) {
    param_1[8] = iVar14;
    if (param_1[0xb] != 0) {
      FUN_008b4d34(param_1[0xb],param_1[0xc],1);
      iVar14 = param_1[8];
    }
    iVar15 = *(int *)(iVar14 + 0x24);
    iVar17 = *(int *)(iVar14 + 0x28);
    *(undefined4 *)(iVar14 + 0x28) = 0;
    param_1[0xb] = iVar15;
    param_1[0xc] = iVar15 + iVar17 * 0x10;
    param_1[0xd] = iVar14 + 0x20;
    param_1[0xe] = iVar17;
    param_1[0xf] = 0;
LAB_0088c8dc:
    unaff_r4 = param_1 + 0xb;
    do {
      iVar14 = param_1[0xc];
      if (param_1[0xb] == iVar14) {
        param_1[0x28] = 0x80000000;
LAB_0088c970:
        FUN_007f6344(unaff_r4);
        puVar7 = (uint *)(param_1[5] + 0x4c);
        param_1[0xb] = puVar7;
        param_1[0xc] = 0xffffffff;
        goto LAB_0088c994;
      }
      puVar10 = (undefined4 *)(iVar14 + -0x10);
      uVar9 = *(undefined4 *)(iVar14 + -0xc);
      uVar18 = *(undefined4 *)(iVar14 + -8);
      uVar19 = *(undefined4 *)(iVar14 + -4);
      param_1[0x28] = *puVar10;
      param_1[0x29] = uVar9;
      param_1[0x2a] = uVar18;
      param_1[0x2b] = uVar19;
      param_1[0xc] = puVar10;
      if (param_1[0x28] == -0x80000000) goto LAB_0088c970;
      uVar18 = *(undefined4 *)(iVar14 + -0xc);
      uVar19 = *(undefined4 *)(iVar14 + -8);
      uVar9 = *(undefined4 *)(iVar14 + -4);
      param_1[0x2c] = *puVar10;
      param_1[0x2d] = uVar18;
      param_1[0x2e] = uVar19;
      param_1[0x2f] = uVar9;
      bVar5 = *(byte *)(param_1 + 7);
      piVar11 = (int *)param_1[6];
      do {
        iVar14 = *piVar11;
        bVar26 = (bool)hasExclusiveAccess(piVar11);
      } while (!bVar26);
      *piVar11 = iVar14 + 1;
      if (iVar14 < 0) {
                    /* WARNING: Does not return */
        pcVar13 = (code *)software_udf(0xfdee,0x88d66c);
        (*pcVar13)();
      }
      uVar27 = FUN_0076b548(param_1[0x2f],piVar11,bVar5 & 1);
      if ((uVar27 & 1) != 0) goto LAB_0088ca8c;
      FUN_007bf390(param_1 + 0x2c);
    } while( true );
  }
  *(undefined1 *)(param_1 + 10) = 3;
LAB_0088cee0:
  *(undefined1 *)(param_1 + 0x32) = 3;
  return CONCAT44(unaff_r4,1);
LAB_0088ca8c:
  param_1[0x10] = (int)(uVar27 >> 0x20);
  iVar14 = param_1[5];
  uVar6 = *(uint *)(iVar14 + 0x10);
  uVar21 = *(uint *)(iVar14 + 0x14);
  iVar14 = *(int *)(iVar14 + 0x18);
  FUN_0165a798(&local_78);
  uVar25 = (int)local_78 + uVar6;
  uVar6 = local_74 + uVar21 + (uint)CARRY4((uint)local_78,uVar6);
  if ((int)uVar21 < 0 == (int)((local_74 ^ uVar6) & ~(local_74 ^ uVar21)) < 0) {
    puVar23 = (undefined1 *)(local_70 + iVar14);
    if (&DAT_3b9aca00 <= puVar23) {
      bVar26 = 0xfffffffe < uVar25;
      uVar25 = uVar25 + 1;
      uVar21 = uVar6 + bVar26;
      if (-1 < (int)((uVar6 ^ uVar21) & ~uVar6)) {
        puVar23 = puVar23 + -1000000000;
        uVar6 = uVar21;
        if (puVar23 != &DAT_3b9aca00) goto LAB_0088cb3c;
      }
      goto LAB_0088cb2c;
    }
LAB_0088cb3c:
    uVar27 = FUN_0164ec90(&DAT_0187b3dc);
    iVar14 = 0x180;
    if ((uVar27 & 1) != 0) {
      iVar14 = 0xb8;
    }
    if (*(undefined1 **)((int)(uVar27 >> 0x20) + iVar14 + 0x90) == &DAT_3b9aca00) {
      local_90 = uVar27;
                    /* WARNING: Subroutine does not return */
      FUN_00fb74b8("A Tokio 1.x context was found, but timers are disabled. Call `enable_time` on the runtime builder to enable timers."
                   ,0x73,&DAT_0187b3dc);
    }
    local_74 = 0;
    local_78 = (uint *)0x0;
    local_30 = 0;
    local_40 = uVar25;
    local_3c = uVar6;
    local_38 = puVar23;
    local_48 = uVar27;
  }
  else {
LAB_0088cb2c:
    FUN_01656dc8(&local_78);
    uVar27 = local_90;
  }
  local_90 = uVar27;
  FUN_016dd1aa(auStack_e0,&local_78,0x50);
  uVar6 = FUN_016dd1aa(param_1 + 0x12,auStack_e0,0x50);
  param_1[0x26] = param_1 + 0x10;
LAB_0088cbb8:
  local_e4 = param_1 + 10;
  uVar28 = thunk_FUN_016de0ee(uVar6,0x40);
  iVar14 = (int)uVar28 + (int)((ulonglong)uVar28 >> 0x20);
  unaff_r4 = param_1 + 0x12;
  piVar11 = (int *)*param_2;
  bVar5 = *(byte *)(iVar14 + 0x38);
  if (bVar5 == 1) {
LAB_0088cbfc:
    bVar5 = ~*(byte *)(iVar14 + 0x30) & 1 | *(char *)(iVar14 + 0x31) != '\0';
  }
  else if (bVar5 != 2) {
    FUN_015e8e6c(iVar14,FUN_007e604c);
    *(undefined1 *)(iVar14 + 0x38) = 1;
    goto LAB_0088cbfc;
  }
  piVar22 = (int *)param_1[0x26];
  bVar3 = FUN_00cefe20(piVar22);
  if (bVar3 != 2) {
    bVar4 = 1;
    if ((bVar3 & 1) == 0) {
      piVar11 = (int *)*piVar22;
      if (piVar11 != (int *)0x0) {
        DataMemoryBarrier(0xb);
        do {
          iVar14 = *piVar11;
          bVar26 = (bool)hasExclusiveAccess(piVar11);
        } while (!bVar26);
        *piVar11 = iVar14 + -1;
        if (iVar14 == 1) {
          DataMemoryBarrier(0xb);
          FUN_0078cf4c(*piVar22);
        }
      }
      bVar4 = 0;
      *piVar22 = 0;
    }
    goto LAB_0088cffc;
  }
  iVar14 = *piVar22;
  if (iVar14 == 0) {
    puVar8 = &DAT_0187be18;
    goto LAB_0088d348;
  }
  piVar24 = (int *)(iVar14 + 0x20);
  do {
    iVar15 = *piVar24;
    if (iVar15 != 0) {
      ClearExclusiveLocal();
      DataMemoryBarrier(0xb);
      if (iVar15 != 2) goto LAB_0088cc6c;
      iVar15 = piVar11[1];
      puVar10 = (undefined4 *)(*piVar11 + 8);
      goto LAB_0088cfac;
    }
    bVar26 = (bool)hasExclusiveAccess(piVar24);
  } while (!bVar26);
  *piVar24 = 1;
  DataMemoryBarrier(0xb);
LAB_0088cc6c:
  if (iVar15 == 0) {
    if (*(undefined4 **)(iVar14 + 0x18) == (undefined4 *)0x0) {
      iVar15 = piVar11[1];
LAB_0088cf14:
      uVar28 = (**(code **)*piVar11)(iVar15);
      if (*(int *)(iVar14 + 0x18) != 0) {
        (**(code **)(*(int *)(iVar14 + 0x18) + 0xc))(*(undefined4 *)(iVar14 + 0x1c));
      }
      *(undefined8 *)(iVar14 + 0x18) = uVar28;
      iVar15 = *piVar24;
    }
    else {
      iVar15 = piVar11[1];
      if (*(int *)(iVar14 + 0x1c) != iVar15 ||
          *(undefined4 **)(iVar14 + 0x18) != (undefined4 *)*piVar11) goto LAB_0088cf14;
      iVar15 = *piVar24;
    }
    if (iVar15 == 1) {
      DataMemoryBarrier(0xb);
      do {
        bVar26 = (bool)hasExclusiveAccess(piVar24);
        if (bVar26) {
          *piVar24 = 0;
          DataMemoryBarrier(0xb);
          goto LAB_0088cfb8;
        }
      } while (*piVar24 == 1);
    }
    ClearExclusiveLocal();
    DataMemoryBarrier(0xb);
    iVar17 = *(int *)(iVar14 + 0x18);
    iVar15 = *(int *)(iVar14 + 0x1c);
    *(undefined4 *)(iVar14 + 0x18) = 0;
    if (iVar17 == 0) {
      puVar8 = &DAT_01882284;
LAB_0088d348:
                    /* WARNING: Subroutine does not return */
      FUN_00faa444(puVar8);
    }
    DataMemoryBarrier(0xb);
    do {
      bVar26 = (bool)hasExclusiveAccess(piVar24);
    } while (!bVar26);
    *piVar24 = 0;
    puVar10 = (undefined4 *)(iVar17 + 4);
    DataMemoryBarrier(0xb);
LAB_0088cfac:
    (*(code *)*puVar10)(iVar15);
  }
LAB_0088cfb8:
  bVar4 = FUN_00cefe20(piVar22);
  if (bVar4 == 2) {
    iVar14 = FUN_016540e8(bVar5 == 2 | bVar5 & 1,unaff_r4,piVar11);
    bVar4 = 2;
    if (iVar14 != 0) {
      *(undefined1 *)local_e4 = 4;
      goto LAB_0088cee0;
    }
  }
LAB_0088cffc:
  FUN_00a07b4c(unaff_r4);
  if (bVar4 == 2) {
    local_7c = &DAT_006043a8;
    local_80 = param_1 + 0x2c;
    FUN_00600d2c(&local_78,&DAT_005995b1,&local_80);
    local_90._0_4_ = local_78;
    local_90._4_4_ = local_74;
    iStack_88 = local_70;
    uVar6 = FUN_00808de4(&local_90);
    goto LAB_0088d19c;
  }
  if ((bVar4 & 1) == 0) goto LAB_0088d158;
  piVar11 = param_1 + 0x10;
  iVar14 = *piVar11;
  if (iVar14 != 0) {
    DataMemoryBarrier(0xb);
    if (*(int *)(iVar14 + 0x10) < 0) {
      puVar7 = (uint *)(iVar14 + 0x10);
      DataMemoryBarrier(0xb);
      do {
        bVar26 = (bool)hasExclusiveAccess(puVar7);
      } while (!bVar26);
      *puVar7 = *puVar7 & 0x7fffffff;
      DataMemoryBarrier(0xb);
      iVar14 = *piVar11;
    }
    else {
      iVar14 = *piVar11;
    }
    if (iVar14 != 0) {
      do {
        while( true ) {
          bVar5 = FUN_00cefe20(piVar11);
          if (bVar5 != 2) break;
          if (*piVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa444(&DAT_0187bde8);
          }
          DataMemoryBarrier(0xb);
          if (*(int *)(*piVar11 + 0x10) == 0) goto LAB_0088d0c4;
          FUN_016da3a8();
        }
      } while ((bVar5 & 1) != 0);
LAB_0088d0c4:
      piVar22 = (int *)*piVar11;
      if (piVar22 != (int *)0x0) {
        DataMemoryBarrier(0xb);
        do {
          iVar14 = *piVar22;
          bVar26 = (bool)hasExclusiveAccess(piVar22);
        } while (!bVar26);
        *piVar22 = iVar14 + -1;
        if (iVar14 == 1) {
          DataMemoryBarrier(0xb);
          FUN_0078cf4c(*piVar11);
        }
      }
    }
  }
  FUN_007bf390(param_1 + 0x2c);
  goto LAB_0088c8dc;
code_r0x0088d7d8:
  uVar25 = *puVar7;
  if (*puVar7 != uVar21) goto LAB_0088d788;
  goto LAB_0088d7cc;
LAB_0088d158:
  local_7c = &DAT_006043a8;
  local_80 = param_1 + 0x2c;
  FUN_00600d2c(&local_78,&DAT_0057b459,&local_80);
  local_90._0_4_ = local_78;
  local_90._4_4_ = local_74;
  iStack_88 = local_70;
  uVar6 = FUN_00808de4(&local_90);
LAB_0088d19c:
  piVar11 = param_1 + 0x10;
  iVar14 = *piVar11;
  if (iVar14 != 0) {
    DataMemoryBarrier(0xb);
    if (0x7fffffff < *(uint *)(iVar14 + 0x10)) {
      puVar7 = (uint *)(iVar14 + 0x10);
      DataMemoryBarrier(0xb);
      do {
        bVar26 = (bool)hasExclusiveAccess(puVar7);
      } while (!bVar26);
      *puVar7 = *puVar7 & 0x7fffffff;
      DataMemoryBarrier(0xb);
    }
    if (*piVar11 != 0) {
      do {
        while( true ) {
          bVar5 = FUN_00cefe20(piVar11);
          if (bVar5 != 2) break;
          if (*piVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa444(&DAT_0187bde8);
          }
          DataMemoryBarrier(0xb);
          if (*(int *)(*piVar11 + 0x10) == 0) goto LAB_0088d240;
          FUN_016da3a8();
        }
      } while ((bVar5 & 1) != 0);
LAB_0088d240:
      piVar22 = (int *)*piVar11;
      if (piVar22 != (int *)0x0) {
        DataMemoryBarrier(0xb);
        do {
          iVar14 = *piVar22;
          bVar26 = (bool)hasExclusiveAccess(piVar22);
        } while (!bVar26);
        *piVar22 = iVar14 + -1;
        if (iVar14 == 1) {
          DataMemoryBarrier(0xb);
          FUN_0078cf4c(*piVar11);
        }
      }
    }
  }
  FUN_007bf390(param_1 + 0x2c);
  FUN_007f6344(param_1 + 0xb);
  FUN_008b4548(param_1[8]);
  piVar11 = (int *)param_1[6];
  DataMemoryBarrier(0xb);
  do {
    iVar14 = *piVar11;
    bVar26 = (bool)hasExclusiveAccess(piVar11);
  } while (!bVar26);
  *piVar11 = iVar14 + -1;
  if (iVar14 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0155edc8(param_1[6]);
  }
  piVar11 = (int *)param_1[5];
  DataMemoryBarrier(0xb);
  do {
    iVar14 = *piVar11;
    bVar26 = (bool)hasExclusiveAccess(piVar11);
  } while (!bVar26);
  *piVar11 = iVar14 + -1;
  if (iVar14 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00790cd0(param_1[5]);
  }
LAB_0088cecc:
  local_e8 = param_1 + 2;
  *(undefined1 *)(param_1 + 10) = 1;
  FUN_00888278(local_e8);
  iVar14 = param_1[0x31];
  if (uVar6 == 0) {
    if (iVar14 == 0) goto LAB_0088d9ac;
    uVar21 = *(uint *)(iVar14 + 0x10);
    puVar7 = (uint *)(iVar14 + 0x10);
    DataMemoryBarrier(0xb);
    while (0x7fffffff < uVar21) {
      if ((~uVar21 & 0x7fffffff) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa464(&DAT_0040888b,0x46,&DAT_0187b670);
      }
      uVar25 = *puVar7;
      if (*puVar7 == uVar21) {
        DataMemoryBarrier(0xb);
LAB_0088d7cc:
        bVar26 = (bool)hasExclusiveAccess(puVar7);
        if (!bVar26) goto code_r0x0088d7d8;
        *puVar7 = uVar21 + 1 | 0x80000000;
        DataMemoryBarrier(0xb);
        puVar10 = (undefined4 *)thunk_FUN_016d4a50(8);
        if (puVar10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(4,8);
        }
        puVar16 = (undefined4 *)(iVar14 + 8);
        *(undefined1 *)(puVar10 + 1) = 1;
        *puVar10 = 0;
        DataMemoryBarrier(0xb);
        do {
          puVar12 = (undefined4 *)*puVar16;
          bVar26 = (bool)hasExclusiveAccess(puVar16);
        } while (!bVar26);
        *puVar16 = puVar10;
        DataMemoryBarrier(0xb);
        *puVar12 = puVar10;
        puVar7 = (uint *)(iVar14 + 0x20);
        DataMemoryBarrier(0xb);
        do {
          uVar21 = *puVar7;
          bVar26 = (bool)hasExclusiveAccess(puVar7);
        } while (!bVar26);
        *puVar7 = uVar21 | 2;
        DataMemoryBarrier(0xb);
        if (uVar21 == 0) {
          iVar15 = *(int *)(iVar14 + 0x18);
          *(undefined4 *)(iVar14 + 0x18) = 0;
          DataMemoryBarrier(0xb);
          do {
            bVar26 = (bool)hasExclusiveAccess(puVar7);
          } while (!bVar26);
          *puVar7 = *puVar7 & 0xfffffffd;
          if (iVar15 != 0) {
            (**(code **)(iVar15 + 4))(*(undefined4 *)(iVar14 + 0x1c));
          }
        }
        break;
      }
LAB_0088d788:
      uVar21 = uVar25;
      ClearExclusiveLocal();
      DataMemoryBarrier(0xb);
    }
    iVar14 = param_1[0x31];
    if (iVar14 == 0) goto LAB_0088d9ac;
    piVar11 = (int *)(iVar14 + 0x14);
    DataMemoryBarrier(0xb);
    do {
      iVar15 = *piVar11;
      bVar26 = (bool)hasExclusiveAccess(piVar11);
    } while (!bVar26);
    *piVar11 = iVar15 + -1;
    DataMemoryBarrier(0xb);
    if (iVar15 == 1) {
      DataMemoryBarrier(0xb);
      if (0x7fffffff < *(uint *)(iVar14 + 0x10)) {
        puVar7 = (uint *)(iVar14 + 0x10);
        DataMemoryBarrier(0xb);
        do {
          bVar26 = (bool)hasExclusiveAccess(puVar7);
        } while (!bVar26);
        *puVar7 = *puVar7 & 0x7fffffff;
        DataMemoryBarrier(0xb);
      }
      puVar7 = (uint *)(iVar14 + 0x20);
      DataMemoryBarrier(0xb);
      do {
        uVar21 = *puVar7;
        bVar26 = (bool)hasExclusiveAccess(puVar7);
      } while (!bVar26);
      *puVar7 = uVar21 | 2;
      DataMemoryBarrier(0xb);
      if (uVar21 == 0) {
        iVar15 = *(int *)(iVar14 + 0x18);
        *(undefined4 *)(iVar14 + 0x18) = 0;
        DataMemoryBarrier(0xb);
        do {
          bVar26 = (bool)hasExclusiveAccess(puVar7);
        } while (!bVar26);
        *puVar7 = *puVar7 & 0xfffffffd;
        if (iVar15 != 0) {
          (**(code **)(iVar15 + 4))(*(undefined4 *)(iVar14 + 0x1c));
        }
      }
    }
    piVar11 = (int *)param_1[0x31];
    DataMemoryBarrier(0xb);
    do {
      iVar14 = *piVar11;
      bVar26 = (bool)hasExclusiveAccess(piVar11);
    } while (!bVar26);
    *piVar11 = iVar14 + -1;
  }
  else {
    if (iVar14 == 0) goto LAB_0088d9ac;
    piVar11 = (int *)(iVar14 + 0x14);
    DataMemoryBarrier(0xb);
    do {
      iVar15 = *piVar11;
      bVar26 = (bool)hasExclusiveAccess(piVar11);
    } while (!bVar26);
    *piVar11 = iVar15 + -1;
    DataMemoryBarrier(0xb);
    if (iVar15 == 1) {
      DataMemoryBarrier(0xb);
      if (0x7fffffff < *(uint *)(iVar14 + 0x10)) {
        puVar7 = (uint *)(iVar14 + 0x10);
        DataMemoryBarrier(0xb);
        do {
          bVar26 = (bool)hasExclusiveAccess(puVar7);
        } while (!bVar26);
        *puVar7 = *puVar7 & 0x7fffffff;
        DataMemoryBarrier(0xb);
      }
      puVar7 = (uint *)(iVar14 + 0x20);
      DataMemoryBarrier(0xb);
      do {
        uVar21 = *puVar7;
        bVar26 = (bool)hasExclusiveAccess(puVar7);
      } while (!bVar26);
      *puVar7 = uVar21 | 2;
      DataMemoryBarrier(0xb);
      if (uVar21 == 0) {
        iVar15 = *(int *)(iVar14 + 0x18);
        *(undefined4 *)(iVar14 + 0x18) = 0;
        DataMemoryBarrier(0xb);
        do {
          bVar26 = (bool)hasExclusiveAccess(puVar7);
        } while (!bVar26);
        *puVar7 = *puVar7 & 0xfffffffd;
        if (iVar15 != 0) {
          (**(code **)(iVar15 + 4))(*(undefined4 *)(iVar14 + 0x1c));
        }
      }
    }
    piVar11 = (int *)param_1[0x31];
    DataMemoryBarrier(0xb);
    do {
      iVar14 = *piVar11;
      bVar26 = (bool)hasExclusiveAccess(piVar11);
    } while (!bVar26);
    *piVar11 = iVar14 + -1;
  }
  if (iVar14 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0078cf4c(param_1[0x31]);
  }
LAB_0088d9ac:
  *(undefined1 *)(param_1 + 0x32) = 1;
  return (ulonglong)uVar6 << 0x20;
}

