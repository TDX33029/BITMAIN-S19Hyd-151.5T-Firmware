// FUN_01282a18 @ 01282a18 size=2576 calls_out=17 calls_in=2
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01282a18(undefined4 *param_1,int *param_2,int *param_3)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int **ppiVar7;
  uint uVar8;
  int *piVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  undefined *puVar13;
  bool bVar14;
  int *piVar15;
  int *piVar16;
  int iVar17;
  uint *puVar18;
  uint uVar19;
  int iVar20;
  int *piVar21;
  int *piVar22;
  int *piVar23;
  uint uVar24;
  int iVar25;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  undefined2 local_68;
  int *local_60;
  int *local_5c;
  int *local_58;
  int *local_50;
  int *local_4c;
  int *local_48;
  int *local_40;
  int *local_3c;
  int *local_38;
  int local_34;
  undefined4 local_30;
  
  piVar15 = (int *)param_2[4];
  iVar4 = param_2[6];
  local_78 = *param_2;
  local_74 = param_2[1];
  local_70 = param_2[2];
  local_6c = param_2[3];
  local_68 = 0x100;
  do {
    iVar5 = *param_3;
    bVar14 = (bool)hasExclusiveAccess(param_3);
  } while (!bVar14);
  *param_3 = iVar5 + 1;
  if (iVar5 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x1283450);
    (*pcVar1)();
  }
  iVar5 = piVar15[4];
  if (iVar5 == piVar15[2]) {
    FUN_01287020();
  }
  puVar6 = (undefined4 *)(piVar15[3] + iVar5 * 0xc);
  *puVar6 = param_3;
  puVar6[1] = iVar4;
  puVar6[2] = &local_78;
  piVar15[4] = iVar5 + 1;
  local_40 = (int *)piVar15[0xc];
  local_34 = piVar15[0xd];
  piVar15[0xd] = 0;
  local_30 = 0;
  local_38 = piVar15 + 0xb;
  local_3c = local_40 + local_34 * 3;
  if (local_34 != 0) {
    do {
      piVar22 = (int *)*local_40;
      piVar21 = local_40 + 1;
      local_40 = local_40 + 3;
      piVar9 = piVar22 + 3;
      if (*piVar9 == 0) {
        DataMemoryBarrier(0xb);
LAB_01282b20:
        bVar14 = (bool)hasExclusiveAccess(piVar9);
        if (!bVar14) goto code_r0x01282b2c;
        *piVar9 = *piVar21;
        DataMemoryBarrier(0xb);
        DataMemoryBarrier(0xb);
        piVar21 = (int *)(piVar22[2] + 0x18);
        do {
          iVar5 = *piVar21;
          bVar14 = (bool)hasExclusiveAccess(piVar21);
        } while (!bVar14);
        *piVar21 = 1;
        if (iVar5 == -1) {
          FUN_016d6968(0xf0,piVar21,0x81,1);
        }
        goto LAB_01282b40;
      }
LAB_01282b38:
      ClearExclusiveLocal();
      DataMemoryBarrier(0xb);
LAB_01282b40:
      DataMemoryBarrier(0xb);
      do {
        iVar5 = *piVar22;
        bVar14 = (bool)hasExclusiveAccess(piVar22);
      } while (!bVar14);
      *piVar22 = iVar5 + -1;
      if (iVar5 == 1) {
        DataMemoryBarrier(0xb);
        FUN_01284dec(piVar22);
      }
    } while (local_40 != local_3c);
  }
  FUN_01286b68(&local_40);
  if ((((char)param_2[5] == '\0') && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
     (iVar5 = FUN_015bf3f8(), iVar5 == 0)) {
    *(undefined1 *)(piVar15 + 1) = 1;
  }
  DataMemoryBarrier(0xb);
  do {
    iVar5 = *piVar15;
    bVar14 = (bool)hasExclusiveAccess(piVar15);
  } while (!bVar14);
  *piVar15 = 0;
  if (iVar5 == 2) {
    FUN_016d6968(0xf0,piVar15,0x81,1);
  }
  piVar21 = param_3 + 3;
  puVar6 = (undefined4 *)param_2[7];
  piVar15 = (int *)puVar6[2];
  if (piVar15 == (int *)&DAT_3b9aca00) {
LAB_01282c28:
    iVar5 = *piVar21;
    DataMemoryBarrier(0xb);
    if (iVar5 == 0) {
      piVar15 = (int *)(param_3[2] + 0x18);
      do {
        iVar5 = *piVar15;
        bVar14 = (bool)hasExclusiveAccess(piVar15);
      } while (!bVar14);
      *piVar15 = iVar5 + -1;
      DataMemoryBarrier(0xb);
      if (iVar5 != 1) {
LAB_01282c6c:
        local_40 = (int *)0x0;
        while (*piVar15 == -1) {
          ppiVar7 = (int **)0x0;
          if (local_40 != (int *)0x0) {
            ppiVar7 = &local_3c;
          }
          uVar8 = FUN_016d6968(0xf0,piVar15,0x89,0xffffffff,ppiVar7,0,0xffffffff);
          if ((uVar8 < 0x80000000) || (piVar9 = (int *)FUN_016d2bc8(), *piVar9 != 4)) break;
        }
        do {
          if (*piVar15 != 1) goto LAB_01282c64;
          bVar14 = (bool)hasExclusiveAccess(piVar15);
          if (bVar14) {
            *piVar15 = 0;
            DataMemoryBarrier(0xb);
            break;
          }
        } while( true );
      }
      goto LAB_01282c28;
    }
  }
  else {
    piVar22 = (int *)*puVar6;
    piVar9 = (int *)puVar6[1];
    while( true ) {
      iVar5 = *piVar21;
      DataMemoryBarrier(0xb);
      if (iVar5 != 0) break;
      FUN_015f3b0c(&local_40,1);
      bVar14 = (int)((int)local_3c - ((int)piVar9 + (uint)(local_40 < piVar22))) < 0 ==
               (SBORROW4((int)local_3c,(int)piVar9) !=
               SBORROW4((int)local_3c - (int)piVar9,(uint)(local_40 < piVar22)));
      if (local_40 == piVar22 && local_3c == piVar9) {
        bVar14 = piVar15 <= local_38;
      }
      if (bVar14) {
        iVar5 = *piVar21;
        if (iVar5 != 0) goto LAB_01282fc4;
        DataMemoryBarrier(0xb);
        bVar14 = true;
        goto LAB_01282fac;
      }
      local_4c = local_3c;
      local_50 = local_40;
      local_48 = local_38;
      local_60 = piVar22;
      local_5c = piVar9;
      local_58 = piVar15;
      FUN_015f3c24(&local_40,&local_60,&local_50);
      piVar16 = (int *)(param_3[2] + 0x18);
      do {
        iVar5 = *piVar16;
        bVar14 = (bool)hasExclusiveAccess(piVar16);
      } while (!bVar14);
      *piVar16 = iVar5 + -1;
      DataMemoryBarrier(0xb);
      if (iVar5 != 1) {
        iVar5 = local_34;
        piVar23 = local_38;
        uVar10 = local_30;
        if (((uint)local_40 & 1) != 0) {
          uVar10 = 0;
          piVar23 = (int *)0x0;
          iVar5 = 0;
        }
        FUN_015f61ac(piVar16,piVar9,piVar23,iVar5,uVar10);
        do {
          bVar14 = (bool)hasExclusiveAccess(piVar16);
        } while (!bVar14);
        *piVar16 = 0;
        DataMemoryBarrier(0xb);
      }
    }
  }
  switch(iVar5) {
  case 1:
    goto switchD_01282e34_caseD_1;
  case 2:
switchD_01282e34_caseD_2:
    piVar15 = (int *)param_2[8];
    do {
      if (*piVar15 != 0) {
        ClearExclusiveLocal();
        FUN_015bf680(piVar15);
        goto LAB_01282e70;
      }
      bVar14 = (bool)hasExclusiveAccess(piVar15);
    } while (!bVar14);
    *piVar15 = 1;
    DataMemoryBarrier(0xb);
LAB_01282e70:
    uVar8 = 0;
    if ((DAT_018dd988 & 0x7fffffff) == 0) {
      cVar2 = (char)piVar15[1];
    }
    else {
      uVar8 = FUN_015bf3f8();
      uVar8 = uVar8 ^ 1;
      cVar2 = (char)piVar15[1];
    }
    if (cVar2 != '\0') {
      local_3c._1_3_ = (undefined3)((uint)local_3c >> 8);
      local_3c = (int *)CONCAT31(local_3c._1_3_,(char)uVar8);
      local_40 = piVar15;
                    /* WARNING: Subroutine does not return */
      FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_40,&DAT_0188bb50,&DAT_0188baf0);
    }
    uVar24 = piVar15[4];
    uVar19 = 0xffffffff;
    iVar5 = uVar24 * 0xc;
    iVar12 = piVar15[3];
    do {
      if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa444(&DAT_0188bb00);
      }
      piVar21 = (int *)(iVar12 + 4);
      iVar5 = iVar5 + -0xc;
      uVar19 = uVar19 + 1;
      iVar12 = iVar12 + 0xc;
    } while (*piVar21 != iVar4);
    if (uVar24 <= uVar19) {
LAB_01283420:
                    /* WARNING: Subroutine does not return */
      FUN_00602938(uVar19,uVar24,&DAT_0188bb30);
    }
    puVar6 = (undefined4 *)(piVar15[3] + uVar19 * 0xc);
    piVar21 = (int *)*puVar6;
    FUN_016dd52c(puVar6,puVar6 + 3,(uVar24 + ~uVar19) * 0xc);
    uVar24 = uVar24 - 1;
    piVar15[4] = uVar24;
    if (piVar21 == (int *)0x0) goto LAB_01283420;
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar21;
      bVar14 = (bool)hasExclusiveAccess(piVar21);
    } while (!bVar14);
    *piVar21 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01284dec(piVar21);
    }
    if (((uVar8 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) && (iVar4 = FUN_015bf3f8(), iVar4 == 0)
       ) {
      *(undefined1 *)(piVar15 + 1) = 1;
    }
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar15;
      bVar14 = (bool)hasExclusiveAccess(piVar15);
    } while (!bVar14);
    *piVar15 = 0;
    if (iVar4 == 2) {
      FUN_016d6968(0xf0,piVar15,0x81,1);
    }
    if (local_78 == -0x80000000) {
      puVar13 = &DAT_0188bb10;
      goto LAB_012833b8;
    }
    uVar10 = 1;
    goto LAB_01283204;
  default:
switchD_01282e34_default:
    DataMemoryBarrier(0xb);
    if ((char)local_68 == '\0') {
      iVar4 = 1;
      iVar5 = 0;
      uVar8 = 0;
      do {
        if (uVar8 < 7) {
          if (uVar8 != 0) {
            iVar12 = iVar5;
            do {
              iVar12 = iVar12 + -1;
              HintYield();
            } while (iVar12 != 0);
          }
        }
        else {
          FUN_016da3a8();
        }
        iVar5 = iVar5 + iVar4;
        iVar4 = iVar4 + 2;
        uVar8 = uVar8 + 1;
        DataMemoryBarrier(0xb);
      } while ((char)local_68 == '\0');
    }
    iVar5 = local_70;
    iVar4 = local_74;
    *param_1 = 2;
    if (local_78 == -0x80000000) {
      return;
    }
    iVar12 = 0;
    do {
      do {
        if (iVar12 == iVar5) {
          if (local_78 == 0) {
            return;
          }
          thunk_FUN_016d3fb4(local_74);
          return;
        }
        iVar20 = iVar12 + 1;
        iVar17 = iVar4 + iVar12 * 0x1c;
        iVar11 = *(int *)(iVar17 + 0x10);
        iVar12 = iVar20;
      } while (iVar11 == -0x80000000);
      iVar25 = *(int *)(iVar17 + 0x18);
      iVar20 = *(int *)(iVar17 + 0x14);
      if (iVar25 != 0) {
        puVar18 = (uint *)(iVar20 + 0x18);
        do {
          while ((*puVar18 & 0x7fffffff) != 0) {
            thunk_FUN_016d3fb4(puVar18[1]);
            if ((puVar18[3] & 0x7fffffff) == 0) goto LAB_01283074;
LAB_01283098:
            thunk_FUN_016d3fb4(puVar18[4]);
            puVar18 = puVar18 + 0xc;
            iVar25 = iVar25 + -1;
            if (iVar25 == 0) goto LAB_012830ac;
          }
          if ((puVar18[3] & 0x7fffffff) != 0) goto LAB_01283098;
LAB_01283074:
          puVar18 = puVar18 + 0xc;
          iVar25 = iVar25 + -1;
        } while (iVar25 != 0);
LAB_012830ac:
        iVar11 = *(int *)(iVar17 + 0x10);
      }
      if (iVar11 != 0) {
        thunk_FUN_016d3fb4(iVar20);
      }
    } while( true );
  }
code_r0x01282b2c:
  if (*piVar9 != 0) goto LAB_01282b38;
  goto LAB_01282b20;
LAB_01282c64:
  ClearExclusiveLocal();
  DataMemoryBarrier(0xb);
  goto LAB_01282c6c;
  while (iVar5 = *piVar21, iVar5 == 0) {
LAB_01282fac:
    bVar3 = (bool)hasExclusiveAccess(piVar21);
    if (bVar3) {
      *piVar21 = 1;
      goto LAB_01282fcc;
    }
  }
LAB_01282fc4:
  bVar14 = false;
  ClearExclusiveLocal();
LAB_01282fcc:
  DataMemoryBarrier(0xb);
  if ((!bVar14) && (iVar5 != 1)) {
    if (iVar5 != 2) {
      if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa464(&DAT_00419463,0x28,&DAT_0188bab0);
      }
      goto switchD_01282e34_default;
    }
    goto switchD_01282e34_caseD_2;
  }
switchD_01282e34_caseD_1:
  piVar15 = (int *)param_2[8];
  do {
    if (*piVar15 != 0) {
      ClearExclusiveLocal();
      FUN_015bf680(piVar15);
      goto LAB_012830ec;
    }
    bVar14 = (bool)hasExclusiveAccess(piVar15);
  } while (!bVar14);
  *piVar15 = 1;
  DataMemoryBarrier(0xb);
LAB_012830ec:
  uVar8 = 0;
  if ((DAT_018dd988 & 0x7fffffff) == 0) {
    cVar2 = (char)piVar15[1];
  }
  else {
    uVar8 = FUN_015bf3f8();
    uVar8 = uVar8 ^ 1;
    cVar2 = (char)piVar15[1];
  }
  if (cVar2 != '\0') {
    local_3c._1_3_ = (undefined3)((uint)local_3c >> 8);
    local_3c = (int *)CONCAT31(local_3c._1_3_,(char)uVar8);
    local_40 = piVar15;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_40,&DAT_0188bb50,&DAT_0188bac0);
  }
  uVar24 = piVar15[4];
  uVar19 = 0xffffffff;
  iVar5 = uVar24 * 0xc;
  iVar12 = piVar15[3];
  do {
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa444(&DAT_0188bad0);
    }
    piVar21 = (int *)(iVar12 + 4);
    iVar5 = iVar5 + -0xc;
    uVar19 = uVar19 + 1;
    iVar12 = iVar12 + 0xc;
  } while (*piVar21 != iVar4);
  if (uVar19 < uVar24) {
    puVar6 = (undefined4 *)(piVar15[3] + uVar19 * 0xc);
    piVar21 = (int *)*puVar6;
    FUN_016dd52c(puVar6,puVar6 + 3,(uVar24 + ~uVar19) * 0xc);
    uVar24 = uVar24 - 1;
    piVar15[4] = uVar24;
    if (piVar21 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar21;
        bVar14 = (bool)hasExclusiveAccess(piVar21);
      } while (!bVar14);
      *piVar21 = iVar4 + -1;
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        FUN_01284dec(piVar21);
      }
      if (((uVar8 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
         (iVar4 = FUN_015bf3f8(), iVar4 == 0)) {
        *(undefined1 *)(piVar15 + 1) = 1;
      }
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar15;
        bVar14 = (bool)hasExclusiveAccess(piVar15);
      } while (!bVar14);
      *piVar15 = 0;
      if (iVar4 == 2) {
        FUN_016d6968(0xf0,piVar15,0x81,1);
      }
      if (local_78 == -0x80000000) {
        puVar13 = &DAT_0188bae0;
LAB_012833b8:
        local_78 = -0x80000000;
                    /* WARNING: Subroutine does not return */
        FUN_00faa444(puVar13);
      }
      uVar10 = 0;
LAB_01283204:
      param_1[2] = local_74;
      param_1[3] = local_70;
      *param_1 = uVar10;
      param_1[1] = local_78;
      param_1[4] = local_6c;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00602938(uVar19,uVar24,&DAT_0188bb30);
}

