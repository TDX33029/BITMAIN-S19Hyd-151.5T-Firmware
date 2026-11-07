// FUN_01281b08 @ 01281b08 size=1768 calls_out=14 calls_in=2
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01281b08(int *param_1,int *param_2)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  uint *puVar9;
  int *piVar10;
  undefined4 uVar11;
  int iVar12;
  undefined4 uVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  int *piVar16;
  int *piVar17;
  int *piVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  int *piVar22;
  int *local_60;
  uint local_5c;
  undefined1 *local_58;
  int *local_50;
  uint local_4c;
  undefined1 *local_48;
  int *local_40;
  uint local_3c;
  undefined1 *local_38;
  undefined4 local_34;
  undefined4 local_30;
  
  iVar5 = *param_1;
  piVar16 = (int *)param_1[1];
  piVar22 = piVar16 + 0x13;
  do {
    if (*piVar22 != 0) {
      ClearExclusiveLocal();
      FUN_015bf680(piVar22);
      goto LAB_01281b44;
    }
    bVar3 = (bool)hasExclusiveAccess(piVar22);
  } while (!bVar3);
  *piVar22 = 1;
  DataMemoryBarrier(0xb);
LAB_01281b44:
  uVar19 = 0;
  if ((DAT_018dd988 & 0x7fffffff) == 0) {
    cVar2 = (char)piVar16[0x14];
  }
  else {
    uVar19 = FUN_015bf3f8();
    uVar19 = uVar19 ^ 1;
    cVar2 = (char)piVar16[0x14];
  }
  if (cVar2 != '\0') {
    local_3c._1_3_ = (undefined3)(local_3c >> 8);
    local_3c = CONCAT31(local_3c._1_3_,(char)uVar19);
    local_40 = piVar22;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_40,&DAT_0188ba30,&DAT_0188ba20);
  }
  do {
    iVar6 = *param_2;
    bVar3 = (bool)hasExclusiveAccess(param_2);
  } while (!bVar3);
  *param_2 = iVar6 + 1;
  if (iVar6 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x12821a4);
    (*pcVar1)();
  }
  iVar6 = piVar16[0x17];
  if (iVar6 == piVar16[0x15]) {
    FUN_01287020();
  }
  puVar7 = (undefined4 *)(piVar16[0x16] + iVar6 * 0xc);
  *puVar7 = param_2;
  puVar7[1] = iVar5;
  puVar7[2] = 0;
  iVar8 = iVar6 + 1;
  piVar16[0x17] = iVar8;
  if (iVar6 == -1) {
    iVar8 = piVar16[0x1a];
  }
  DataMemoryBarrier(0xb);
  *(bool *)(piVar16 + 0x1b) = iVar6 == -1 && iVar8 == 0;
  DataMemoryBarrier(0xb);
  if (((uVar19 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) && (iVar6 = FUN_015bf3f8(), iVar6 == 0))
  {
    *(undefined1 *)(piVar16 + 0x14) = 1;
  }
  DataMemoryBarrier(0xb);
  do {
    iVar6 = *piVar22;
    bVar3 = (bool)hasExclusiveAccess(piVar22);
  } while (!bVar3);
  *piVar22 = 0;
  if (iVar6 == 2) {
    FUN_016d6968(0xf0,piVar22,0x81,1);
  }
  DataMemoryBarrier(0xb);
  DataMemoryBarrier(0xb);
  if ((piVar16[0x11] + *piVar16 != (piVar16[8] & ~piVar16[0x12])) ||
     (DataMemoryBarrier(0xb), (piVar16[0x12] & piVar16[8]) != 0)) {
    piVar18 = param_2 + 3;
    if (*piVar18 == 0) {
      DataMemoryBarrier(0xb);
      do {
        bVar3 = (bool)hasExclusiveAccess(piVar18);
        if (bVar3) {
          *piVar18 = 1;
          goto LAB_01281c80;
        }
      } while (*piVar18 == 0);
    }
    ClearExclusiveLocal();
LAB_01281c80:
    DataMemoryBarrier(0xb);
  }
  puVar9 = (uint *)param_1[2];
  piVar18 = param_2 + 3;
  puVar14 = (undefined1 *)puVar9[2];
  if (puVar14 == &DAT_3b9aca00) {
LAB_01281cb0:
    iVar6 = *piVar18;
    DataMemoryBarrier(0xb);
    if (iVar6 == 0) {
      piVar17 = (int *)(param_2[2] + 0x18);
      do {
        iVar6 = *piVar17;
        bVar3 = (bool)hasExclusiveAccess(piVar17);
      } while (!bVar3);
      *piVar17 = iVar6 + -1;
      DataMemoryBarrier(0xb);
      if (iVar6 != 1) {
LAB_01281cf4:
        local_40 = (int *)0x0;
        while (*piVar17 == -1) {
          puVar9 = (uint *)0x0;
          if (local_40 != (int *)0x0) {
            puVar9 = &local_3c;
          }
          uVar19 = FUN_016d6968(0xf0,piVar17,0x89,0xffffffff,puVar9,0,0xffffffff);
          if ((uVar19 < 0x80000000) || (piVar10 = (int *)FUN_016d2bc8(), *piVar10 != 4)) break;
        }
        do {
          if (*piVar17 != 1) goto LAB_01281cec;
          bVar3 = (bool)hasExclusiveAccess(piVar17);
          if (bVar3) {
            *piVar17 = 0;
            DataMemoryBarrier(0xb);
            break;
          }
        } while( true );
      }
      goto LAB_01281cb0;
    }
  }
  else {
    piVar17 = (int *)*puVar9;
    uVar19 = puVar9[1];
    while( true ) {
      iVar6 = *piVar18;
      DataMemoryBarrier(0xb);
      if (iVar6 != 0) break;
      FUN_015f3b0c(&local_40,1);
      bVar3 = (int)(local_3c - (uVar19 + (local_40 < piVar17))) < 0 ==
              (SBORROW4(local_3c,uVar19) != SBORROW4(local_3c - uVar19,(uint)(local_40 < piVar17)));
      if (local_40 == piVar17 && local_3c == uVar19) {
        bVar3 = puVar14 <= local_38;
      }
      if (bVar3) {
        iVar6 = *piVar18;
        if (iVar6 != 0) goto LAB_012820a8;
        DataMemoryBarrier(0xb);
        bVar3 = true;
        goto LAB_01282090;
      }
      local_4c = local_3c;
      local_48 = local_38;
      local_50 = local_40;
      local_60 = piVar17;
      local_5c = uVar19;
      local_58 = puVar14;
      FUN_015f3c24(&local_40,&local_60,&local_50);
      piVar10 = (int *)(param_2[2] + 0x18);
      do {
        iVar6 = *piVar10;
        bVar3 = (bool)hasExclusiveAccess(piVar10);
      } while (!bVar3);
      *piVar10 = iVar6 + -1;
      DataMemoryBarrier(0xb);
      if (iVar6 != 1) {
        puVar15 = local_38;
        uVar13 = local_34;
        uVar11 = local_30;
        if (((uint)local_40 & 1) != 0) {
          uVar11 = 0;
          uVar13 = 0;
          puVar15 = (undefined1 *)0x0;
        }
        FUN_015f61ac(piVar10,uVar13,puVar15,uVar13,uVar11);
        do {
          bVar3 = (bool)hasExclusiveAccess(piVar10);
        } while (!bVar3);
        *piVar10 = 0;
        DataMemoryBarrier(0xb);
      }
    }
  }
  if (1 < iVar6 - 1U) {
    return;
  }
  if (1 < iVar6 - 1U) {
    if (iVar6 == 3) {
      return;
    }
    goto LAB_012820d8;
  }
LAB_01281ed8:
  do {
    if (*piVar22 != 0) {
      ClearExclusiveLocal();
      FUN_015bf680(piVar22);
      goto LAB_01281ef4;
    }
    bVar3 = (bool)hasExclusiveAccess(piVar22);
  } while (!bVar3);
  *piVar22 = 1;
  DataMemoryBarrier(0xb);
LAB_01281ef4:
  uVar19 = 0;
  if ((DAT_018dd988 & 0x7fffffff) == 0) {
    cVar2 = (char)piVar16[0x14];
  }
  else {
    uVar19 = FUN_015bf3f8();
    uVar19 = uVar19 ^ 1;
    cVar2 = (char)piVar16[0x14];
  }
  if (cVar2 != '\0') {
    local_3c._1_3_ = (undefined3)(local_3c >> 8);
    local_3c = CONCAT31(local_3c._1_3_,(char)uVar19);
    local_40 = piVar22;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_40,&DAT_0188ba30,&DAT_0188ba00);
  }
  uVar21 = piVar16[0x17];
  uVar20 = 0xffffffff;
  iVar12 = piVar16[0x16];
  iVar6 = uVar21 * 0xc;
  iVar8 = iVar12;
  do {
    if (iVar6 == 0) {
      piVar18 = (int *)0x0;
      goto LAB_01281fa4;
    }
    piVar18 = (int *)(iVar8 + 4);
    iVar6 = iVar6 + -0xc;
    uVar20 = uVar20 + 1;
    iVar8 = iVar8 + 0xc;
  } while (*piVar18 != iVar5);
  if (uVar20 < uVar21) {
    puVar7 = (undefined4 *)(iVar12 + uVar20 * 0xc);
    piVar18 = (int *)*puVar7;
    iVar12 = FUN_016dd52c(puVar7,puVar7 + 3,(uVar21 + ~uVar20) * 0xc);
    uVar21 = uVar21 - 1;
    piVar16[0x17] = uVar21;
    if (piVar18 != (int *)0x0) {
LAB_01281fa4:
      if (uVar21 == 0) {
        iVar12 = piVar16[0x1a];
      }
      DataMemoryBarrier(0xb);
      *(bool *)(piVar16 + 0x1b) = uVar21 == 0 && iVar12 == 0;
      DataMemoryBarrier(0xb);
      if (((uVar19 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
         (iVar5 = FUN_015bf3f8(), iVar5 == 0)) {
        *(undefined1 *)(piVar16 + 0x14) = 1;
      }
      DataMemoryBarrier(0xb);
      do {
        iVar5 = *piVar22;
        bVar3 = (bool)hasExclusiveAccess(piVar22);
      } while (!bVar3);
      *piVar22 = 0;
      if (iVar5 == 2) {
        FUN_016d6968(0xf0,piVar22,0x81,1);
      }
      if (piVar18 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa444(&DAT_0188b9e0);
      }
      DataMemoryBarrier(0xb);
      do {
        iVar5 = *piVar18;
        bVar3 = (bool)hasExclusiveAccess(piVar18);
      } while (!bVar3);
      *piVar18 = iVar5 + -1;
      if (iVar5 == 1) {
        DataMemoryBarrier(0xb);
        FUN_01284dec(piVar18);
        return;
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00602938(uVar20,uVar21,&DAT_0188bb30);
  while (iVar6 = *piVar18, iVar6 == 0) {
LAB_01282090:
    bVar4 = (bool)hasExclusiveAccess(piVar18);
    if (bVar4) {
      *piVar18 = 1;
      goto LAB_012820b0;
    }
  }
LAB_012820a8:
  bVar3 = false;
  ClearExclusiveLocal();
LAB_012820b0:
  DataMemoryBarrier(0xb);
  if ((!bVar3) && (1 < iVar6 - 1U)) {
    if (iVar6 != 0) {
      return;
    }
LAB_012820d8:
                    /* WARNING: Subroutine does not return */
    FUN_00faa464(&DAT_00419463,0x28,&DAT_0188b9d0);
  }
  goto LAB_01281ed8;
LAB_01281cec:
  ClearExclusiveLocal();
  DataMemoryBarrier(0xb);
  goto LAB_01281cf4;
}

