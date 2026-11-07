// FUN_006679cc @ 006679cc size=4788 calls_out=36 calls_in=0
// strings: polled MutexLockFuture after completion | polled MutexLockFuture after completion | A Tokio 1.x context was found; but timers are disabled. Call `enable_time` on the runtime builder to enable timers.

longlong FUN_006679cc(undefined4 *param_1,int *param_2)

{
  char cVar1;
  undefined1 uVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined *puVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  int *piVar12;
  undefined4 *puVar13;
  code *pcVar14;
  int iVar15;
  int extraout_r2;
  int extraout_r2_00;
  undefined4 *puVar16;
  int extraout_r2_01;
  int extraout_r2_02;
  uint uVar17;
  undefined4 uVar18;
  undefined4 *unaff_r4;
  uint *puVar19;
  undefined4 uVar20;
  int *piVar21;
  uint *puVar22;
  undefined1 *puVar23;
  int *piVar24;
  uint uVar25;
  bool bVar26;
  ulonglong uVar27;
  undefined8 uVar28;
  undefined4 *local_ec;
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
    uVar10 = *param_1;
    param_1[2] = uVar10;
    iVar15 = param_1[0x30];
    uVar2 = *(undefined1 *)(param_1 + 1);
    param_1[4] = iVar15;
    *(undefined1 *)(param_1 + 3) = uVar2;
    *(undefined1 *)(param_1 + 10) = 0;
LAB_00667a34:
    puVar22 = (uint *)(iVar15 + 0x20);
    param_1[0xb] = puVar22;
    param_1[5] = iVar15;
    param_1[0xc] = 0xffffffff;
    *(undefined1 *)(param_1 + 7) = uVar2;
    param_1[6] = uVar10;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_01876d1c);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_01876d1c);
  case 3:
    uVar6 = (&switchD_00667aa4::switchdataD_00667aa8)[*(byte *)(param_1 + 10)];
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(byte *)(param_1 + 10)) {
    case 0:
      uVar2 = *(undefined1 *)(param_1 + 3);
      uVar10 = param_1[2];
      iVar15 = param_1[4];
      goto LAB_00667a34;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_01876cdc);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_01876cdc);
    case 3:
      puVar22 = (uint *)param_1[0xb];
      if (puVar22 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00fb74b8("polled MutexLockFuture after completion",0x27,&DAT_0187a760);
      }
      break;
    case 4:
      goto switchD_00667aa4_caseD_4;
    case 5:
      puVar22 = (uint *)param_1[0xb];
      if (puVar22 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00fb74b8("polled MutexLockFuture after completion",0x27,&DAT_0187a760);
      }
LAB_00667f50:
      do {
        uVar6 = *puVar22;
        bVar26 = (bool)hasExclusiveAccess(puVar22);
      } while (!bVar26);
      *puVar22 = uVar6 | 1;
      DataMemoryBarrier(0xb);
      if ((uVar6 & 1) == 0) {
        FUN_006f5fbc(puVar22,param_1[0xc],0);
      }
      else {
        puVar19 = puVar22 + 1;
        do {
          if (*puVar19 != 0) {
            ClearExclusiveLocal();
            FUN_015bf680(puVar19);
            iVar15 = extraout_r2_01;
            goto LAB_00667fa8;
          }
          bVar26 = (bool)hasExclusiveAccess(puVar19);
        } while (!bVar26);
        *puVar19 = 1;
        DataMemoryBarrier(0xb);
        iVar15 = 0;
LAB_00667fa8:
        unaff_r4 = (undefined4 *)0x0;
        if ((DAT_018dd988 & 0x7fffffff) == 0) {
          cVar1 = (char)puVar22[2];
        }
        else {
          uVar6 = FUN_015bf3f8();
          unaff_r4 = (undefined4 *)(uVar6 ^ 1);
          cVar1 = (char)puVar22[2];
          iVar15 = extraout_r2_02;
        }
        if (cVar1 != '\0') {
          local_74._1_3_ = (undefined3)(local_74 >> 8);
          local_74 = CONCAT31(local_74._1_3_,(char)unaff_r4);
          local_78 = puVar19;
                    /* WARNING: Subroutine does not return */
          FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_78,&DAT_01859134,&DAT_0187a770);
        }
        uVar6 = param_1[0xc];
        if (uVar6 == 0xffffffff) {
          uVar28 = (*(code *)**(undefined4 **)*param_2)(((undefined4 *)*param_2)[1]);
          uVar17 = puVar22[7];
          FUN_0075c478(puVar22 + 3,uVar17,(int)uVar28,(int)((ulonglong)uVar28 >> 0x20));
          uVar6 = puVar22[6];
          param_1[0xc] = uVar17;
          if (uVar6 == 1) {
            do {
              bVar26 = (bool)hasExclusiveAccess(puVar22);
            } while (!bVar26);
            *puVar22 = *puVar22 | 2;
          }
        }
        else {
          if ((puVar22[5] <= uVar6) || (piVar12 = (int *)(puVar22[4] + uVar6 * 0xc), *piVar12 == 0))
          {
                    /* WARNING: Subroutine does not return */
            FUN_015be724(&DAT_00412edc,0xb,&DAT_0187a780);
          }
          puVar16 = (undefined4 *)piVar12[1];
          puVar11 = *(undefined4 **)*param_2;
          iVar7 = ((int *)*param_2)[1];
          if (puVar16 == (undefined4 *)0x0) {
            uVar28 = (*(code *)*puVar11)(iVar7);
          }
          else {
            if (puVar11 == puVar16) {
              iVar15 = piVar12[2];
            }
            if (puVar11 == puVar16 && iVar7 == iVar15) goto LAB_0066834c;
            uVar28 = (*(code *)*puVar11)(iVar7);
            (*(code *)puVar16[3])(piVar12[2]);
          }
          *(undefined8 *)(piVar12 + 1) = uVar28;
        }
LAB_0066834c:
        if ((unaff_r4 == (undefined4 *)0x0) && ((DAT_018dd988 & 0x7fffffff) != 0)) {
          iVar15 = FUN_015bf3f8();
          if (iVar15 == 0) {
            *(undefined1 *)(puVar22 + 2) = 1;
          }
        }
        DataMemoryBarrier(0xb);
        do {
          uVar6 = *puVar19;
          bVar26 = (bool)hasExclusiveAccess(puVar19);
        } while (!bVar26);
        *puVar19 = 0;
        if (uVar6 == 2) {
          FUN_016d6968(0xf0,puVar19,0x81,1);
        }
        do {
          uVar6 = *puVar22;
          bVar26 = (bool)hasExclusiveAccess(puVar22);
        } while (!bVar26);
        *puVar22 = uVar6 | 1;
        DataMemoryBarrier(0xb);
        if ((uVar6 & 1) != 0) {
          uVar2 = 5;
          goto LAB_00668ff4;
        }
        FUN_006f5fbc(puVar22,param_1[0xc],0);
      }
      param_1[9] = puVar22;
      param_1[0xb] = 0;
      uVar6 = puVar22[10];
      puVar11 = (undefined4 *)puVar22[9];
      puVar22[10] = 0;
      param_1[0xf] = 0;
      param_1[0xd] = puVar22 + 8;
      param_1[0xe] = uVar6;
      param_1[0xb] = puVar11;
      param_1[0xc] = puVar11 + uVar6 * 2;
      if (puVar11 != puVar11 + uVar6 * 2) {
        do {
          uVar10 = *puVar11;
          iVar15 = puVar11[1];
          param_1[0xb] = puVar11 + 2;
          param_1[0x10] = uVar10;
          param_1[0x11] = iVar15;
          param_1[0x12] = uVar10;
          param_1[0x13] = iVar15;
LAB_00669034:
          iVar15 = (**(code **)(iVar15 + 0xc))(uVar10,param_2);
          if (iVar15 != 0) {
            uVar2 = 6;
            goto LAB_00668ff4;
          }
          uVar10 = param_1[0x12];
          puVar11 = (undefined4 *)param_1[0x13];
          pcVar14 = (code *)*puVar11;
          if (pcVar14 != (code *)0x0) {
            (*pcVar14)(uVar10);
          }
          if (puVar11[1] != 0) {
            thunk_FUN_016d3fb4(uVar10);
          }
          puVar11 = (undefined4 *)param_1[0xb];
        } while (puVar11 != (undefined4 *)param_1[0xc]);
      }
      param_1[0x10] = 0;
      FUN_007bbb38(param_1 + 0xb);
      FUN_006f625c(param_1[9]);
      FUN_006f625c(param_1[8]);
      piVar12 = (int *)param_1[6];
      DataMemoryBarrier(0xb);
      do {
        iVar15 = *piVar12;
        bVar26 = (bool)hasExclusiveAccess(piVar12);
      } while (!bVar26);
      *piVar12 = iVar15 + -1;
      if (iVar15 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0155edc8(param_1[6]);
      }
      piVar12 = (int *)param_1[5];
      DataMemoryBarrier(0xb);
      do {
        iVar15 = *piVar12;
        bVar26 = (bool)hasExclusiveAccess(piVar12);
      } while (!bVar26);
      *piVar12 = iVar15 + -1;
      uVar6 = 0;
      if (iVar15 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00790cd0(param_1[5]);
      }
      goto LAB_00668478;
    case 6:
      uVar10 = param_1[0x12];
      iVar15 = param_1[0x13];
      goto LAB_00669034;
    }
  }
  do {
    uVar6 = *puVar22;
    bVar26 = (bool)hasExclusiveAccess(puVar22);
  } while (!bVar26);
  *puVar22 = uVar6 | 1;
  DataMemoryBarrier(0xb);
  if ((uVar6 & 1) == 0) {
    FUN_006f5fbc(puVar22,param_1[0xc],0);
    goto LAB_00667cf8;
  }
  puVar19 = puVar22 + 1;
  do {
    if (*puVar19 != 0) {
      ClearExclusiveLocal();
      FUN_015bf680(puVar19);
      iVar15 = extraout_r2;
      goto LAB_00667afc;
    }
    bVar26 = (bool)hasExclusiveAccess(puVar19);
  } while (!bVar26);
  *puVar19 = 1;
  DataMemoryBarrier(0xb);
  iVar15 = 0;
LAB_00667afc:
  unaff_r4 = (undefined4 *)0x0;
  if ((DAT_018dd988 & 0x7fffffff) == 0) {
    cVar1 = (char)puVar22[2];
  }
  else {
    uVar6 = FUN_015bf3f8();
    unaff_r4 = (undefined4 *)(uVar6 ^ 1);
    cVar1 = (char)puVar22[2];
    iVar15 = extraout_r2_00;
  }
  if (cVar1 != '\0') {
    local_74._1_3_ = (undefined3)(local_74 >> 8);
    local_74 = CONCAT31(local_74._1_3_,(char)unaff_r4);
    local_78 = puVar19;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_78,&DAT_01859134,&DAT_0187a770);
  }
  uVar6 = param_1[0xc];
  if (uVar6 == 0xffffffff) {
    uVar28 = (*(code *)**(undefined4 **)*param_2)(((undefined4 *)*param_2)[1]);
    uVar17 = puVar22[7];
    FUN_0075c478(puVar22 + 3,uVar17,(int)uVar28,(int)((ulonglong)uVar28 >> 0x20));
    uVar6 = puVar22[6];
    param_1[0xc] = uVar17;
    if (uVar6 == 1) {
      do {
        bVar26 = (bool)hasExclusiveAccess(puVar22);
      } while (!bVar26);
      *puVar22 = *puVar22 | 2;
    }
  }
  else {
    if ((puVar22[5] <= uVar6) || (piVar12 = (int *)(puVar22[4] + uVar6 * 0xc), *piVar12 == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_015be724(&DAT_00412edc,0xb,&DAT_0187a780);
    }
    puVar16 = (undefined4 *)piVar12[1];
    puVar11 = *(undefined4 **)*param_2;
    iVar7 = ((int *)*param_2)[1];
    if (puVar16 == (undefined4 *)0x0) {
      uVar28 = (*(code *)*puVar11)(iVar7);
    }
    else {
      if (puVar11 == puVar16) {
        iVar15 = piVar12[2];
      }
      if (puVar11 == puVar16 && iVar7 == iVar15) goto LAB_00667c90;
      uVar28 = (*(code *)*puVar11)(iVar7);
      (*(code *)puVar16[3])(piVar12[2]);
    }
    *(undefined8 *)(piVar12 + 1) = uVar28;
  }
LAB_00667c90:
  if (((unaff_r4 == (undefined4 *)0x0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
     (iVar15 = FUN_015bf3f8(), iVar15 == 0)) {
    *(undefined1 *)(puVar22 + 2) = 1;
  }
  DataMemoryBarrier(0xb);
  do {
    uVar6 = *puVar19;
    bVar26 = (bool)hasExclusiveAccess(puVar19);
  } while (!bVar26);
  *puVar19 = 0;
  if (uVar6 == 2) {
    FUN_016d6968(0xf0,puVar19,0x81,1);
  }
  do {
    uVar6 = *puVar22;
    bVar26 = (bool)hasExclusiveAccess(puVar22);
  } while (!bVar26);
  *puVar22 = uVar6 | 1;
  DataMemoryBarrier(0xb);
  if ((uVar6 & 1) != 0) {
    uVar2 = 3;
LAB_00668ff4:
    local_e4 = param_1 + 10;
    *(undefined1 *)local_e4 = uVar2;
    *(undefined1 *)(param_1 + 0x32) = 3;
    return CONCAT44(unaff_r4,1);
  }
  FUN_006f5fbc(puVar22,param_1[0xc],0);
LAB_00667cf8:
  param_1[8] = puVar22;
  param_1[0xb] = 0;
  uVar6 = puVar22[9];
  uVar17 = puVar22[10];
  puVar22[10] = 0;
  param_1[0xe] = uVar17;
  param_1[0xd] = puVar22 + 8;
  param_1[0xf] = 0;
  param_1[0xb] = uVar6;
  param_1[0xc] = uVar6 + uVar17 * 0x10;
LAB_00667e9c:
  unaff_r4 = param_1 + 0xb;
  do {
    iVar15 = param_1[0xc];
    if (param_1[0xb] == iVar15) {
      param_1[0x28] = 0x80000000;
LAB_00667f30:
      FUN_007bbc38(unaff_r4);
      puVar22 = (uint *)(param_1[5] + 0x4c);
      param_1[0xb] = puVar22;
      param_1[0xc] = 0xffffffff;
      goto LAB_00667f50;
    }
    puVar11 = (undefined4 *)(iVar15 + -0x10);
    uVar10 = *(undefined4 *)(iVar15 + -0xc);
    uVar18 = *(undefined4 *)(iVar15 + -8);
    uVar20 = *(undefined4 *)(iVar15 + -4);
    param_1[0x28] = *puVar11;
    param_1[0x29] = uVar10;
    param_1[0x2a] = uVar18;
    param_1[0x2b] = uVar20;
    param_1[0xc] = puVar11;
    if (param_1[0x28] == -0x80000000) goto LAB_00667f30;
    uVar18 = *(undefined4 *)(iVar15 + -0xc);
    uVar20 = *(undefined4 *)(iVar15 + -8);
    uVar10 = *(undefined4 *)(iVar15 + -4);
    param_1[0x2c] = *puVar11;
    param_1[0x2d] = uVar18;
    param_1[0x2e] = uVar20;
    param_1[0x2f] = uVar10;
    bVar5 = *(byte *)(param_1 + 7);
    piVar12 = (int *)param_1[6];
    do {
      iVar15 = *piVar12;
      bVar26 = (bool)hasExclusiveAccess(piVar12);
    } while (!bVar26);
    *piVar12 = iVar15 + 1;
    if (iVar15 < 0) {
                    /* WARNING: Does not return */
      pcVar14 = (code *)software_udf(0xfdee,0x668ce0);
      (*pcVar14)();
    }
    uVar27 = FUN_0076b548(param_1[0x2f],piVar12,bVar5 & 1);
    if ((uVar27 & 1) != 0) break;
    FUN_00656f00(param_1 + 0x2c);
  } while( true );
  param_1[0x10] = (int)(uVar27 >> 0x20);
  iVar15 = param_1[5];
  uVar6 = *(uint *)(iVar15 + 0x10);
  uVar17 = *(uint *)(iVar15 + 0x14);
  iVar15 = *(int *)(iVar15 + 0x18);
  FUN_0165a798(&local_78);
  uVar25 = (int)local_78 + uVar6;
  uVar6 = local_74 + uVar17 + (uint)CARRY4((uint)local_78,uVar6);
  if ((int)uVar17 < 0 == (int)((local_74 ^ uVar6) & ~(local_74 ^ uVar17)) < 0) {
    puVar23 = (undefined1 *)(local_70 + iVar15);
    if (&DAT_3b9aca00 <= puVar23) {
      bVar26 = 0xfffffffe < uVar25;
      uVar25 = uVar25 + 1;
      uVar17 = uVar6 + bVar26;
      if (-1 < (int)((uVar6 ^ uVar17) & ~uVar6)) {
        puVar23 = puVar23 + -1000000000;
        uVar6 = uVar17;
        if (puVar23 != &DAT_3b9aca00) goto LAB_006680f0;
      }
      goto LAB_006680e0;
    }
LAB_006680f0:
    uVar27 = FUN_0164ec90(&DAT_0187b3dc);
    iVar15 = 0x180;
    if ((uVar27 & 1) != 0) {
      iVar15 = 0xb8;
    }
    if (*(undefined1 **)((int)(uVar27 >> 0x20) + iVar15 + 0x90) == &DAT_3b9aca00) {
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
LAB_006680e0:
    FUN_01656dc8(&local_78);
    uVar27 = local_90;
  }
  local_90 = uVar27;
  FUN_016dd1aa(auStack_e0,&local_78,0x50);
  uVar6 = FUN_016dd1aa(param_1 + 0x12,auStack_e0,0x50);
  param_1[0x26] = param_1 + 0x10;
switchD_00667aa4_caseD_4:
  uVar28 = thunk_FUN_016de0ee(uVar6,0x40);
  iVar15 = (int)uVar28 + (int)((ulonglong)uVar28 >> 0x20);
  unaff_r4 = param_1 + 0x12;
  piVar12 = (int *)*param_2;
  bVar5 = *(byte *)(iVar15 + 0x38);
  if (bVar5 == 1) {
LAB_006681b0:
    bVar5 = ~*(byte *)(iVar15 + 0x30) & 1 | *(char *)(iVar15 + 0x31) != '\0';
  }
  else if (bVar5 != 2) {
    FUN_015e8e6c(iVar15,FUN_009948a0);
    *(undefined1 *)(iVar15 + 0x38) = 1;
    goto LAB_006681b0;
  }
  piVar21 = (int *)param_1[0x26];
  bVar3 = FUN_00cefe20(piVar21);
  if (bVar3 != 2) {
    bVar4 = 1;
    if ((bVar3 & 1) == 0) {
      piVar12 = (int *)*piVar21;
      if (piVar12 != (int *)0x0) {
        DataMemoryBarrier(0xb);
        do {
          iVar15 = *piVar12;
          bVar26 = (bool)hasExclusiveAccess(piVar12);
        } while (!bVar26);
        *piVar12 = iVar15 + -1;
        if (iVar15 == 1) {
          DataMemoryBarrier(0xb);
          FUN_0078cf4c(*piVar21);
        }
      }
      bVar4 = 0;
      *piVar21 = 0;
    }
    goto LAB_006688bc;
  }
  iVar15 = *piVar21;
  if (iVar15 == 0) {
    puVar9 = &DAT_0187be18;
    goto LAB_00668bec;
  }
  piVar24 = (int *)(iVar15 + 0x20);
  do {
    iVar7 = *piVar24;
    if (iVar7 != 0) {
      ClearExclusiveLocal();
      DataMemoryBarrier(0xb);
      if (iVar7 != 2) goto LAB_00668220;
      iVar7 = piVar12[1];
      puVar11 = (undefined4 *)(*piVar12 + 8);
      goto LAB_0066886c;
    }
    bVar26 = (bool)hasExclusiveAccess(piVar24);
  } while (!bVar26);
  *piVar24 = 1;
  DataMemoryBarrier(0xb);
LAB_00668220:
  if (iVar7 == 0) {
    if (*(undefined4 **)(iVar15 + 0x18) == (undefined4 *)0x0) {
      iVar7 = piVar12[1];
LAB_006687d4:
      uVar28 = (**(code **)*piVar12)(iVar7);
      if (*(int *)(iVar15 + 0x18) != 0) {
        (**(code **)(*(int *)(iVar15 + 0x18) + 0xc))(*(undefined4 *)(iVar15 + 0x1c));
      }
      *(undefined8 *)(iVar15 + 0x18) = uVar28;
      iVar7 = *piVar24;
    }
    else {
      iVar7 = piVar12[1];
      if (*(int *)(iVar15 + 0x1c) != iVar7 ||
          *(undefined4 **)(iVar15 + 0x18) != (undefined4 *)*piVar12) goto LAB_006687d4;
      iVar7 = *piVar24;
    }
    if (iVar7 == 1) {
      DataMemoryBarrier(0xb);
      do {
        bVar26 = (bool)hasExclusiveAccess(piVar24);
        if (bVar26) {
          *piVar24 = 0;
          DataMemoryBarrier(0xb);
          goto LAB_00668878;
        }
      } while (*piVar24 == 1);
    }
    ClearExclusiveLocal();
    DataMemoryBarrier(0xb);
    iVar8 = *(int *)(iVar15 + 0x18);
    iVar7 = *(int *)(iVar15 + 0x1c);
    *(undefined4 *)(iVar15 + 0x18) = 0;
    if (iVar8 == 0) {
      puVar9 = &DAT_01882284;
LAB_00668bec:
                    /* WARNING: Subroutine does not return */
      FUN_00faa444(puVar9);
    }
    DataMemoryBarrier(0xb);
    do {
      bVar26 = (bool)hasExclusiveAccess(piVar24);
    } while (!bVar26);
    *piVar24 = 0;
    puVar11 = (undefined4 *)(iVar8 + 4);
    DataMemoryBarrier(0xb);
LAB_0066886c:
    (*(code *)*puVar11)(iVar7);
  }
LAB_00668878:
  bVar4 = FUN_00cefe20(piVar21);
  if (bVar4 == 2) {
    iVar15 = FUN_016540e8(bVar5 == 2 | bVar5 & 1,unaff_r4,piVar12);
    bVar4 = 2;
    if (iVar15 != 0) {
      uVar2 = 4;
      goto LAB_00668ff4;
    }
  }
LAB_006688bc:
  FUN_00a07b4c(unaff_r4);
  if (bVar4 == 2) {
    local_7c = &DAT_006043a8;
    local_80 = param_1 + 0x2c;
    FUN_00600d2c(&local_78,&DAT_005995b1,&local_80);
    local_90._0_4_ = local_78;
    local_90._4_4_ = local_74;
    iStack_88 = local_70;
    uVar6 = FUN_0072faa8(&local_90);
    goto LAB_00668a54;
  }
  if ((bVar4 & 1) == 0) goto LAB_00668a14;
  piVar12 = param_1 + 0x10;
  iVar15 = *piVar12;
  if (iVar15 != 0) {
    DataMemoryBarrier(0xb);
    if (*(int *)(iVar15 + 0x10) < 0) {
      puVar22 = (uint *)(iVar15 + 0x10);
      DataMemoryBarrier(0xb);
      do {
        bVar26 = (bool)hasExclusiveAccess(puVar22);
      } while (!bVar26);
      *puVar22 = *puVar22 & 0x7fffffff;
      DataMemoryBarrier(0xb);
      iVar15 = *piVar12;
    }
    else {
      iVar15 = *piVar12;
    }
    if (iVar15 != 0) {
      do {
        while( true ) {
          bVar5 = FUN_00cefe20(piVar12);
          if (bVar5 != 2) break;
          if (*piVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa444(&DAT_0187bde8);
          }
          DataMemoryBarrier(0xb);
          if (*(int *)(*piVar12 + 0x10) == 0) goto LAB_00668980;
          FUN_016da3a8();
        }
      } while ((bVar5 & 1) != 0);
LAB_00668980:
      piVar21 = (int *)*piVar12;
      if (piVar21 != (int *)0x0) {
        DataMemoryBarrier(0xb);
        do {
          iVar15 = *piVar21;
          bVar26 = (bool)hasExclusiveAccess(piVar21);
        } while (!bVar26);
        *piVar21 = iVar15 + -1;
        if (iVar15 == 1) {
          DataMemoryBarrier(0xb);
          FUN_0078cf4c(*piVar12);
        }
      }
    }
  }
  FUN_00656f00(param_1 + 0x2c);
  goto LAB_00667e9c;
code_r0x006685f4:
  uVar25 = *puVar22;
  if (*puVar22 != uVar17) goto LAB_006685a4;
  goto LAB_006685e8;
LAB_00668a14:
  local_7c = &DAT_006043a8;
  local_80 = param_1 + 0x2c;
  FUN_00600d2c(&local_78,&DAT_0057b459,&local_80);
  local_90._0_4_ = local_78;
  local_90._4_4_ = local_74;
  iStack_88 = local_70;
  uVar6 = FUN_0072faa8(&local_90);
LAB_00668a54:
  piVar12 = param_1 + 0x10;
  iVar15 = *piVar12;
  if (iVar15 != 0) {
    DataMemoryBarrier(0xb);
    if (0x7fffffff < *(uint *)(iVar15 + 0x10)) {
      puVar22 = (uint *)(iVar15 + 0x10);
      DataMemoryBarrier(0xb);
      do {
        bVar26 = (bool)hasExclusiveAccess(puVar22);
      } while (!bVar26);
      *puVar22 = *puVar22 & 0x7fffffff;
      DataMemoryBarrier(0xb);
    }
    if (*piVar12 != 0) {
      do {
        while( true ) {
          bVar5 = FUN_00cefe20(piVar12);
          if (bVar5 != 2) break;
          if (*piVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa444(&DAT_0187bde8);
          }
          DataMemoryBarrier(0xb);
          if (*(int *)(*piVar12 + 0x10) == 0) goto LAB_00668af8;
          FUN_016da3a8();
        }
      } while ((bVar5 & 1) != 0);
LAB_00668af8:
      piVar21 = (int *)*piVar12;
      if (piVar21 != (int *)0x0) {
        DataMemoryBarrier(0xb);
        do {
          iVar15 = *piVar21;
          bVar26 = (bool)hasExclusiveAccess(piVar21);
        } while (!bVar26);
        *piVar21 = iVar15 + -1;
        if (iVar15 == 1) {
          DataMemoryBarrier(0xb);
          FUN_0078cf4c(*piVar12);
        }
      }
    }
  }
  FUN_00656f00(param_1 + 0x2c);
  FUN_007bbc38(param_1 + 0xb);
  FUN_006f625c(param_1[8]);
  piVar12 = (int *)param_1[6];
  DataMemoryBarrier(0xb);
  do {
    iVar15 = *piVar12;
    bVar26 = (bool)hasExclusiveAccess(piVar12);
  } while (!bVar26);
  *piVar12 = iVar15 + -1;
  if (iVar15 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0155edc8(param_1[6]);
  }
  piVar12 = (int *)param_1[5];
  DataMemoryBarrier(0xb);
  do {
    iVar15 = *piVar12;
    bVar26 = (bool)hasExclusiveAccess(piVar12);
  } while (!bVar26);
  *piVar12 = iVar15 + -1;
  if (iVar15 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00790cd0(param_1[5]);
  }
LAB_00668478:
  local_e4 = param_1 + 10;
  local_ec = param_1 + 2;
  *(undefined1 *)local_e4 = 1;
  FUN_00656af8(local_ec);
  iVar15 = param_1[0x31];
  if (uVar6 == 0) {
    if (iVar15 == 0) goto LAB_006687b0;
    uVar17 = *(uint *)(iVar15 + 0x10);
    puVar22 = (uint *)(iVar15 + 0x10);
    DataMemoryBarrier(0xb);
    while (0x7fffffff < uVar17) {
      if ((~uVar17 & 0x7fffffff) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa464(&DAT_0040888b,0x46,&DAT_0187b670);
      }
      uVar25 = *puVar22;
      if (*puVar22 == uVar17) {
        DataMemoryBarrier(0xb);
LAB_006685e8:
        bVar26 = (bool)hasExclusiveAccess(puVar22);
        if (!bVar26) goto code_r0x006685f4;
        *puVar22 = uVar17 + 1 | 0x80000000;
        DataMemoryBarrier(0xb);
        puVar11 = (undefined4 *)thunk_FUN_016d4a50(8);
        if (puVar11 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(4,8);
        }
        puVar16 = (undefined4 *)(iVar15 + 8);
        *(undefined1 *)(puVar11 + 1) = 1;
        *puVar11 = 0;
        DataMemoryBarrier(0xb);
        do {
          puVar13 = (undefined4 *)*puVar16;
          bVar26 = (bool)hasExclusiveAccess(puVar16);
        } while (!bVar26);
        *puVar16 = puVar11;
        DataMemoryBarrier(0xb);
        *puVar13 = puVar11;
        puVar22 = (uint *)(iVar15 + 0x20);
        DataMemoryBarrier(0xb);
        do {
          uVar17 = *puVar22;
          bVar26 = (bool)hasExclusiveAccess(puVar22);
        } while (!bVar26);
        *puVar22 = uVar17 | 2;
        DataMemoryBarrier(0xb);
        if (uVar17 == 0) {
          iVar7 = *(int *)(iVar15 + 0x18);
          *(undefined4 *)(iVar15 + 0x18) = 0;
          DataMemoryBarrier(0xb);
          do {
            bVar26 = (bool)hasExclusiveAccess(puVar22);
          } while (!bVar26);
          *puVar22 = *puVar22 & 0xfffffffd;
          if (iVar7 != 0) {
            (**(code **)(iVar7 + 4))(*(undefined4 *)(iVar15 + 0x1c));
          }
        }
        break;
      }
LAB_006685a4:
      uVar17 = uVar25;
      ClearExclusiveLocal();
      DataMemoryBarrier(0xb);
    }
    iVar15 = param_1[0x31];
    if (iVar15 == 0) goto LAB_006687b0;
    piVar12 = (int *)(iVar15 + 0x14);
    DataMemoryBarrier(0xb);
    do {
      iVar7 = *piVar12;
      bVar26 = (bool)hasExclusiveAccess(piVar12);
    } while (!bVar26);
    *piVar12 = iVar7 + -1;
    DataMemoryBarrier(0xb);
    if (iVar7 == 1) {
      DataMemoryBarrier(0xb);
      if (0x7fffffff < *(uint *)(iVar15 + 0x10)) {
        puVar22 = (uint *)(iVar15 + 0x10);
        DataMemoryBarrier(0xb);
        do {
          bVar26 = (bool)hasExclusiveAccess(puVar22);
        } while (!bVar26);
        *puVar22 = *puVar22 & 0x7fffffff;
        DataMemoryBarrier(0xb);
      }
      puVar22 = (uint *)(iVar15 + 0x20);
      DataMemoryBarrier(0xb);
      do {
        uVar17 = *puVar22;
        bVar26 = (bool)hasExclusiveAccess(puVar22);
      } while (!bVar26);
      *puVar22 = uVar17 | 2;
      DataMemoryBarrier(0xb);
      if (uVar17 == 0) {
        iVar7 = *(int *)(iVar15 + 0x18);
        *(undefined4 *)(iVar15 + 0x18) = 0;
        DataMemoryBarrier(0xb);
        do {
          bVar26 = (bool)hasExclusiveAccess(puVar22);
        } while (!bVar26);
        *puVar22 = *puVar22 & 0xfffffffd;
        if (iVar7 != 0) {
          (**(code **)(iVar7 + 4))(*(undefined4 *)(iVar15 + 0x1c));
        }
      }
    }
    piVar12 = (int *)param_1[0x31];
    DataMemoryBarrier(0xb);
    do {
      iVar15 = *piVar12;
      bVar26 = (bool)hasExclusiveAccess(piVar12);
    } while (!bVar26);
    *piVar12 = iVar15 + -1;
  }
  else {
    if (iVar15 == 0) goto LAB_006687b0;
    piVar12 = (int *)(iVar15 + 0x14);
    DataMemoryBarrier(0xb);
    do {
      iVar7 = *piVar12;
      bVar26 = (bool)hasExclusiveAccess(piVar12);
    } while (!bVar26);
    *piVar12 = iVar7 + -1;
    DataMemoryBarrier(0xb);
    if (iVar7 == 1) {
      DataMemoryBarrier(0xb);
      if (0x7fffffff < *(uint *)(iVar15 + 0x10)) {
        puVar22 = (uint *)(iVar15 + 0x10);
        DataMemoryBarrier(0xb);
        do {
          bVar26 = (bool)hasExclusiveAccess(puVar22);
        } while (!bVar26);
        *puVar22 = *puVar22 & 0x7fffffff;
        DataMemoryBarrier(0xb);
      }
      puVar22 = (uint *)(iVar15 + 0x20);
      DataMemoryBarrier(0xb);
      do {
        uVar17 = *puVar22;
        bVar26 = (bool)hasExclusiveAccess(puVar22);
      } while (!bVar26);
      *puVar22 = uVar17 | 2;
      DataMemoryBarrier(0xb);
      if (uVar17 == 0) {
        iVar7 = *(int *)(iVar15 + 0x18);
        *(undefined4 *)(iVar15 + 0x18) = 0;
        DataMemoryBarrier(0xb);
        do {
          bVar26 = (bool)hasExclusiveAccess(puVar22);
        } while (!bVar26);
        *puVar22 = *puVar22 & 0xfffffffd;
        if (iVar7 != 0) {
          (**(code **)(iVar7 + 4))(*(undefined4 *)(iVar15 + 0x1c));
        }
      }
    }
    piVar12 = (int *)param_1[0x31];
    DataMemoryBarrier(0xb);
    do {
      iVar15 = *piVar12;
      bVar26 = (bool)hasExclusiveAccess(piVar12);
    } while (!bVar26);
    *piVar12 = iVar15 + -1;
  }
  if (iVar15 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0078cf4c(param_1[0x31]);
  }
LAB_006687b0:
  *(undefined1 *)(param_1 + 0x32) = 1;
  return (ulonglong)uVar6 << 0x20;
}

