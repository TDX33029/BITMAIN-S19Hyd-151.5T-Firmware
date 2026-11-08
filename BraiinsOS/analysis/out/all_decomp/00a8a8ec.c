// FUN_00a8a8ec @ 00a8a8ec size=3476 calls_out=17 calls_in=6
// strings: 

void FUN_00a8a8ec(int *param_1,int param_2,int *param_3)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int *piVar12;
  int *piVar13;
  int *piVar14;
  int *piVar15;
  undefined *puVar16;
  int unaff_r9;
  uint *puVar17;
  int unaff_r11;
  uint *puVar18;
  undefined8 uVar19;
  uint local_2dc;
  int *local_2c8;
  int local_2c4;
  undefined1 auStack_2c0 [200];
  int *local_1f8;
  int local_1f4;
  undefined1 auStack_1f0 [208];
  int *local_120;
  int local_11c;
  int local_118;
  int local_114;
  undefined4 local_110;
  undefined1 local_10c;
  undefined1 auStack_10b [211];
  int *local_38;
  int *local_2c;
  undefined1 local_28;
  
  piVar15 = (int *)(param_2 + 8);
  do {
    if (*piVar15 != 0) {
      ClearExclusiveLocal();
      FUN_015bf680(piVar15);
      goto LAB_00a8a924;
    }
    bVar3 = (bool)hasExclusiveAccess(piVar15);
  } while (!bVar3);
  *piVar15 = 1;
  DataMemoryBarrier(0xb);
LAB_00a8a924:
  local_2dc = 0;
  if ((DAT_018dd988 & 0x7fffffff) == 0) {
    cVar2 = *(char *)(param_2 + 0xc);
  }
  else {
    local_2dc = FUN_015bf3f8();
    local_2dc = local_2dc ^ 1;
    cVar2 = *(char *)(param_2 + 0xc);
  }
  if (cVar2 != '\0') {
    local_11c._1_3_ = (undefined3)((uint)local_11c >> 8);
    local_11c = CONCAT31(local_11c._1_3_,(char)local_2dc);
    local_120 = piVar15;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_120,&DAT_0186dc78,&DAT_01886a4c);
  }
  DataMemoryBarrier(0xb);
  if (*(char *)(param_2 + 0x4c) == '\0') {
    iVar7 = *(int *)(param_2 + 0x2c);
    if (iVar7 != 0) {
      FUN_016dd1aa(&local_1f8,param_3,0xd0);
      while (iVar6 = local_1f4, piVar14 = local_1f8, iVar7 != 0) {
        iVar9 = *(int *)(param_2 + 0x28);
        uVar11 = iVar9 + 1;
        uVar5 = uVar11 - *(uint *)(param_2 + 0x20);
        if (uVar11 < *(uint *)(param_2 + 0x20)) {
          uVar5 = uVar11;
        }
        *(uint *)(param_2 + 0x28) = uVar5;
        *(int *)(param_2 + 0x2c) = iVar7 + -1;
        puVar8 = (undefined4 *)(*(int *)(param_2 + 0x24) + iVar9 * 8);
        piVar12 = (int *)*puVar8;
        local_1f8 = (int *)0x8;
        iVar7 = puVar8[1];
        local_1f4 = 0;
        if (piVar14 == (int *)0x8 && iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa444(&DAT_01886a84);
        }
        local_120 = piVar14;
        uVar11 = *(uint *)(iVar7 + 8);
        local_11c = iVar6;
        FUN_016dd1aa(&local_118,auStack_1f0,200);
        uVar5 = 8;
        if (8 < uVar11) {
          uVar5 = uVar11;
        }
        uVar5 = uVar5 - 1 & 0xfffffff8;
        puVar18 = (uint *)((int)piVar12 + uVar5 + 8);
        if ((*puVar18 & 1) != 0) {
          piVar14 = (int *)((int)piVar12 + uVar5 + 0x10);
          goto LAB_00a8ad04;
        }
        if (piVar14 == (int *)0x9 && iVar6 == 0) {
          bVar3 = true;
          goto LAB_00a8aed0;
        }
        local_2c8 = piVar14;
        local_2c4 = iVar6;
        FUN_016dd1aa(auStack_2c0,auStack_1f0,200);
        iVar6 = (**(code **)(iVar7 + 0xc))((int)puVar18 + (uVar11 - 1 & 0xffffff20) + 0xe0);
        if (iVar6 == 0) {
          uVar11 = *(uint *)(param_2 + 0x10);
          uVar5 = *(uint *)(param_2 + 0x1c);
          if (uVar5 == uVar11) {
            FUN_00aa25c8();
            uVar11 = *(uint *)(param_2 + 0x10);
            uVar5 = *(uint *)(param_2 + 0x1c);
          }
          uVar10 = *(int *)(param_2 + 0x18) + uVar5;
          *(uint *)(param_2 + 0x1c) = uVar5 + 1;
          uVar5 = uVar10 - uVar11;
          if (uVar10 < uVar11) {
            uVar5 = uVar10;
          }
          FUN_016dd1aa(uVar5 * 0xd0 + *(int *)(param_2 + 0x14),&local_2c8,0xd0);
          if (((local_2dc == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
             (iVar6 = FUN_015bf3f8(), iVar6 == 0)) {
            *(undefined1 *)(param_2 + 0xc) = 1;
          }
          DataMemoryBarrier(0xb);
          do {
            iVar6 = *piVar15;
            bVar3 = (bool)hasExclusiveAccess(piVar15);
          } while (!bVar3);
          *piVar15 = 0;
          bVar3 = false;
          if (iVar6 == 2) {
            FUN_016d6968(0xf0,piVar15,0x81,1);
          }
          goto LAB_00a8aed0;
        }
        FUN_016dd1aa(&local_120,&local_1f8,0xd0);
        FUN_016dd1aa(&local_1f8,&local_2c8,0xd0);
        if (local_120 != (int *)0x8 || local_11c != 0) {
          FUN_00a8ba5c(&local_120);
        }
        DataMemoryBarrier(0xb);
        do {
          iVar6 = *piVar12;
          bVar3 = (bool)hasExclusiveAccess(piVar12);
        } while (!bVar3);
        *piVar12 = iVar6 + -1;
        if (iVar6 == 1) {
          DataMemoryBarrier(0xb);
          FUN_00aabde0(piVar12,iVar7);
        }
        iVar7 = *(int *)(param_2 + 0x2c);
      }
      if (local_1f8 != (int *)0x8 || local_1f4 != 0) {
        FUN_016dd1aa(&local_118,auStack_1f0,200);
        local_11c = iVar6;
        uVar11 = *(uint *)(param_2 + 0x10);
        local_120 = piVar14;
        uVar5 = *(uint *)(param_2 + 0x1c);
        if (uVar5 == uVar11) {
          FUN_00aa25c8();
          uVar11 = *(uint *)(param_2 + 0x10);
          uVar5 = *(uint *)(param_2 + 0x1c);
        }
        uVar10 = *(int *)(param_2 + 0x18) + uVar5;
        *(uint *)(param_2 + 0x1c) = uVar5 + 1;
        uVar5 = uVar10 - uVar11;
        if (uVar10 < uVar11) {
          uVar5 = uVar10;
        }
        FUN_016dd1aa(uVar5 * 0xd0 + *(int *)(param_2 + 0x14),&local_120,0xd0);
      }
      goto LAB_00a8af24;
    }
    puVar18 = (uint *)(param_2 + 0x34);
    if (*puVar18 == 0x80000000) {
      uVar5 = *(uint *)(param_2 + 0x1c);
LAB_00a8ac08:
      uVar11 = *(uint *)(param_2 + 0x10);
      if (uVar5 == uVar11) {
        FUN_00aa25c8();
        uVar11 = *(uint *)(param_2 + 0x10);
        uVar5 = *(uint *)(param_2 + 0x1c);
      }
      uVar10 = *(int *)(param_2 + 0x18) + uVar5;
      *(uint *)(param_2 + 0x1c) = uVar5 + 1;
      uVar5 = uVar10 - uVar11;
      if (uVar10 < uVar11) {
        uVar5 = uVar10;
      }
      FUN_016dd1aa(uVar5 * 0xd0 + *(int *)(param_2 + 0x14),param_3,0xd0);
      piVar14 = (int *)0x3;
      goto joined_r0x00a8a990;
    }
    uVar5 = *(uint *)(param_2 + 0x1c);
    if (uVar5 < *(uint *)(param_2 + 0x30)) goto LAB_00a8ac08;
    uVar19 = thunk_FUN_016de0ee(*(uint *)(param_2 + 0x30),0x248);
    uVar5 = *(uint *)((int)uVar19 + (int)((ulonglong)uVar19 >> 0x20));
    if (uVar5 < 3) {
      piVar14 = (int *)FUN_015f7ed0();
    }
    else {
      piVar14 = (int *)(uVar5 - 8);
      do {
        iVar7 = *piVar14;
        bVar3 = (bool)hasExclusiveAccess(piVar14);
      } while (!bVar3);
      *piVar14 = iVar7 + 1;
      if (iVar7 < 0) goto LAB_00a8b688;
    }
    FUN_016dd1aa((uint)&local_1f8 | 3,param_3,0xd0);
    local_114 = 0;
    local_10c = 0;
    local_110 = 0;
    local_118 = 1;
    local_11c = 1;
    local_120 = (int *)0x1;
    FUN_016dd1aa(auStack_10b,&local_1f8,0xd3);
    local_38 = piVar14;
    piVar12 = (int *)thunk_FUN_016d4a50(0xf0);
    if (piVar12 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(8,0xf0);
    }
    FUN_016dd1aa(piVar12,&local_120,0xf0);
    uVar5 = *puVar18;
    if (uVar5 == 0x80000000) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa444(&DAT_01886a74);
    }
    puVar17 = (uint *)(piVar12 + 2);
    do {
      iVar7 = *piVar12;
      bVar3 = (bool)hasExclusiveAccess(piVar12);
    } while (!bVar3);
    *piVar12 = iVar7 + 1;
    if (iVar7 < 0) {
LAB_00a8b688:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0xa8b688);
      (*pcVar1)();
    }
    uVar11 = *(uint *)(param_2 + 0x40);
    if (uVar11 == uVar5) {
      FUN_00aa2a4c(puVar18);
      uVar5 = *(uint *)(param_2 + 0x34);
      uVar11 = *(uint *)(param_2 + 0x40);
    }
    uVar10 = *(int *)(param_2 + 0x3c) + uVar11;
    *(uint *)(param_2 + 0x40) = uVar11 + 1;
    uVar11 = uVar10 - uVar5;
    if (uVar10 < uVar5) {
      uVar11 = uVar10;
    }
    piVar14 = (int *)(*(int *)(param_2 + 0x38) + uVar11 * 8);
    *piVar14 = (int)piVar12;
    piVar14[1] = (int)&DAT_0186dca8;
    if (((local_2dc == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
       (iVar7 = FUN_015bf3f8(), iVar7 == 0)) {
      *(undefined1 *)(param_2 + 0xc) = 1;
    }
    DataMemoryBarrier(0xb);
    do {
      iVar7 = *piVar15;
      bVar3 = (bool)hasExclusiveAccess(piVar15);
    } while (!bVar3);
    *piVar15 = 0;
    if (iVar7 == 2) {
      FUN_016d6968(0xf0,piVar15,0x81,1);
    }
    piVar15 = piVar12 + 4;
    DataMemoryBarrier(0xb);
    if (*(char *)(param_2 + 0x4c) == '\0') {
      puVar16 = &DAT_01886af4;
LAB_00a8b104:
      if ((*puVar17 & 1) != 0) {
        do {
          if (*piVar15 != 0) {
            ClearExclusiveLocal();
            FUN_015bf680(piVar15);
            goto LAB_00a8b12c;
          }
          bVar3 = (bool)hasExclusiveAccess(piVar15);
        } while (!bVar3);
        *piVar15 = 1;
        DataMemoryBarrier(0xb);
LAB_00a8b12c:
        uVar5 = 0;
        if ((DAT_018dd988 & 0x7fffffff) == 0) {
          cVar2 = (char)piVar12[5];
        }
        else {
          uVar5 = FUN_015bf3f8();
          uVar5 = uVar5 ^ 1;
          cVar2 = (char)piVar12[5];
        }
        if (cVar2 != '\0') {
          local_11c._1_3_ = (undefined3)((uint)local_11c >> 8);
          local_11c = CONCAT31(local_11c._1_3_,(char)uVar5);
          local_120 = piVar15;
                    /* WARNING: Subroutine does not return */
          FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_120,&DAT_0186dc28,&DAT_01886a94);
        }
        if (piVar12[6] != 8 || piVar12[7] != 0) goto code_r0x00a8b160;
        if (((uVar5 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
           (iVar7 = FUN_015bf3f8(), iVar7 == 0)) {
          *(undefined1 *)(piVar12 + 5) = 1;
        }
        DataMemoryBarrier(0xb);
        do {
          iVar7 = *piVar15;
          bVar3 = (bool)hasExclusiveAccess(piVar15);
        } while (!bVar3);
        *piVar15 = 0;
        if (iVar7 != 2) goto LAB_00a8b244;
        FUN_016d6968(0xf0,piVar15,0x81,1);
        uVar5 = *puVar17;
        goto joined_r0x00a8b674;
      }
      goto LAB_00a8b680;
    }
LAB_00a8b244:
    uVar5 = *puVar17;
joined_r0x00a8b674:
    if ((uVar5 & 1) == 0) {
      puVar16 = &DAT_01886aa4;
LAB_00a8b680:
                    /* WARNING: Subroutine does not return */
      FUN_00faa444(puVar16);
    }
    do {
      if (*piVar15 != 0) {
        ClearExclusiveLocal();
        FUN_015bf680(piVar15);
        goto LAB_00a8b270;
      }
      bVar3 = (bool)hasExclusiveAccess(piVar15);
    } while (!bVar3);
    *piVar15 = 1;
    DataMemoryBarrier(0xb);
LAB_00a8b270:
    if ((DAT_018dd988 & 0x7fffffff) == 0) {
      if ((char)piVar12[5] != '\0') {
        uVar5 = 0;
LAB_00a8b5a4:
        local_11c = CONCAT31(local_11c._1_3_,(char)uVar5);
        local_120 = piVar15;
                    /* WARNING: Subroutine does not return */
        FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_120,&DAT_0186dc28,&DAT_01886a94);
      }
      unaff_r11 = piVar12[6];
      unaff_r9 = piVar12[7];
      FUN_016dd1aa(&local_120,piVar12 + 8,200);
      piVar12[6] = 8;
      piVar12[7] = 0;
LAB_00a8b2b8:
      if (((DAT_018dd988 & 0x7fffffff) != 0) && (iVar7 = FUN_015bf3f8(), iVar7 == 0)) {
        *(undefined1 *)(piVar12 + 5) = 1;
      }
    }
    else {
      uVar5 = FUN_015bf3f8();
      uVar5 = uVar5 ^ 1;
      if ((char)piVar12[5] != '\0') goto LAB_00a8b5a4;
      unaff_r11 = piVar12[6];
      unaff_r9 = piVar12[7];
      FUN_016dd1aa(&local_120,piVar12 + 8,200);
      piVar12[6] = 8;
      piVar12[7] = 0;
      if (uVar5 == 0) goto LAB_00a8b2b8;
    }
    DataMemoryBarrier(0xb);
    do {
      iVar7 = *piVar15;
      bVar3 = (bool)hasExclusiveAccess(piVar15);
    } while (!bVar3);
    *piVar15 = 0;
    if (iVar7 == 2) {
      FUN_016d6968(0xf0,piVar15,0x81,1);
    }
    piVar14 = (int *)0x3;
    if (unaff_r11 != 8 || unaff_r9 != 0) {
      FUN_016dd1aa(&local_1f8,&local_120,200);
      piVar14 = (int *)0x1;
    }
    DataMemoryBarrier(0xb);
    do {
      iVar7 = *piVar12;
      bVar3 = (bool)hasExclusiveAccess(piVar12);
    } while (!bVar3);
    *piVar12 = iVar7 + -1;
    if (iVar7 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00aac784(piVar12);
    }
  }
  else {
    unaff_r11 = *param_3;
    unaff_r9 = param_3[1];
    FUN_016dd1aa(&local_1f8,param_3 + 2,200);
    piVar14 = (int *)0x1;
joined_r0x00a8a990:
    if (((local_2dc == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
       (iVar7 = FUN_015bf3f8(), iVar7 == 0)) {
      *(undefined1 *)(param_2 + 0xc) = 1;
    }
    DataMemoryBarrier(0xb);
    do {
      iVar7 = *piVar15;
      bVar3 = (bool)hasExclusiveAccess(piVar15);
    } while (!bVar3);
    *piVar15 = 0;
    if (iVar7 == 2) {
      FUN_016d6968(0xf0,piVar15,0x81,1);
    }
  }
  if (piVar14 != (int *)0x3) {
    local_118 = unaff_r11;
    local_114 = unaff_r9;
    FUN_016dd1aa(&local_110,&local_1f8,200);
    local_11c = 0;
    local_120 = piVar14;
    if (piVar14 != (int *)0x1) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa464(&DAT_00419463,0x28,&DAT_01886a3c);
    }
    *param_1 = unaff_r11;
    param_1[1] = unaff_r9;
    FUN_016dd1aa(param_1 + 2,&local_1f8,200);
    return;
  }
LAB_00a8af68:
  *param_1 = 8;
  param_1[1] = 0;
  return;
  while (bVar3 = (bool)hasExclusiveAccess(piVar14), !bVar3) {
LAB_00a8ad04:
    if (*piVar14 != 0) {
      ClearExclusiveLocal();
      FUN_015bf680(piVar14);
      goto LAB_00a8ad20;
    }
  }
  *piVar14 = 1;
  DataMemoryBarrier(0xb);
LAB_00a8ad20:
  uVar10 = 0;
  if ((DAT_018dd988 & 0x7fffffff) == 0) {
    cVar2 = *(char *)((int)piVar12 + uVar5 + 0x14);
  }
  else {
    uVar10 = FUN_015bf3f8();
    uVar10 = uVar10 ^ 1;
    cVar2 = *(char *)((int)piVar12 + uVar5 + 0x14);
  }
  if (cVar2 != '\0') {
    local_28 = (undefined1)uVar10;
    local_2c = piVar14;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_2c,&DAT_0186dc28,&DAT_01886a94);
  }
  piVar13 = (int *)((int)piVar12 + uVar5 + 0x18);
  if (*piVar13 != 8 || *(int *)((int)piVar12 + uVar5 + 0x1c) != 0) {
    FUN_00a8ba5c(piVar13);
  }
  FUN_016dd1aa(piVar13,&local_120,0xd0);
  if (((uVar10 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) && (iVar6 = FUN_015bf3f8(), iVar6 == 0))
  {
    *(undefined1 *)((int)piVar12 + uVar5 + 0x14) = 1;
  }
  DataMemoryBarrier(0xb);
  do {
    iVar6 = *piVar14;
    bVar3 = (bool)hasExclusiveAccess(piVar14);
  } while (!bVar3);
  *piVar14 = 0;
  if (iVar6 == 2) {
    FUN_016d6968(0xf0,piVar14,0x81,1);
  }
  if (((local_2dc == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
     (iVar6 = FUN_015bf3f8(), iVar6 == 0)) {
    *(undefined1 *)(param_2 + 0xc) = 1;
  }
  DataMemoryBarrier(0xb);
  do {
    iVar6 = *piVar15;
    bVar3 = (bool)hasExclusiveAccess(piVar15);
  } while (!bVar3);
  *piVar15 = 0;
  if (iVar6 == 2) {
    FUN_016d6968(0xf0,piVar15,0x81,1);
  }
  bVar3 = false;
  (**(code **)(iVar7 + 0xc))((int)puVar18 + (uVar11 - 1 & 0xffffff20) + 0xe0);
LAB_00a8aed0:
  DataMemoryBarrier(0xb);
  do {
    iVar6 = *piVar12;
    bVar4 = (bool)hasExclusiveAccess(piVar12);
  } while (!bVar4);
  *piVar12 = iVar6 + -1;
  if (iVar6 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00aabde0(piVar12,iVar7);
  }
  if (local_1f8 != (int *)0x8 || local_1f4 != 0) {
    FUN_00a8ba5c(&local_1f8);
  }
  if (!bVar3) goto LAB_00a8af68;
LAB_00a8af24:
  if (((local_2dc == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
     (iVar7 = FUN_015bf3f8(), iVar7 == 0)) {
    *(undefined1 *)(param_2 + 0xc) = 1;
  }
  DataMemoryBarrier(0xb);
  do {
    iVar7 = *piVar15;
    bVar3 = (bool)hasExclusiveAccess(piVar15);
  } while (!bVar3);
  *piVar15 = 0;
  if (iVar7 == 2) {
    FUN_016d6968(0xf0,piVar15,0x81,1);
  }
  goto LAB_00a8af68;
code_r0x00a8b160:
  if (((uVar5 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) && (iVar7 = FUN_015bf3f8(), iVar7 == 0))
  {
    *(undefined1 *)(piVar12 + 5) = 1;
  }
  DataMemoryBarrier(0xb);
  do {
    iVar7 = *piVar15;
    bVar3 = (bool)hasExclusiveAccess(piVar15);
  } while (!bVar3);
  *piVar15 = 0;
  if (iVar7 == 2) {
    FUN_016d6968(0xf0,piVar15,0x81,1);
  }
  FUN_015fbbf8();
  DataMemoryBarrier(0xb);
  if (*(char *)(param_2 + 0x4c) != '\0') goto LAB_00a8b244;
  goto LAB_00a8b104;
}

