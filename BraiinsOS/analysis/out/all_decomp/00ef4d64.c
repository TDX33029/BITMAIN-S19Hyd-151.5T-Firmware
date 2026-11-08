// FUN_00ef4d64 @ 00ef4d64 size=2008 calls_out=11 calls_in=1
// strings: 

void FUN_00ef4d64(int *param_1,int *param_2,int *param_3)

{
  code *pcVar1;
  char cVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  undefined4 uVar11;
  int *piVar12;
  uint uVar13;
  int *piVar14;
  int *piVar15;
  int iVar16;
  int *piVar17;
  uint uVar18;
  undefined4 *puVar19;
  undefined8 uVar20;
  undefined1 auStack_2b0 [200];
  undefined1 auStack_1e8 [200];
  int *local_120;
  int local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_38;
  undefined8 local_34;
  undefined2 local_2c;
  
  piVar15 = (int *)param_2[2];
  if (piVar15 != (int *)0x0) {
    piVar14 = param_2 + 1;
    piVar17 = (int *)*piVar14;
    if (*param_2 == 0) {
      piVar17 = piVar14;
    }
    FUN_00e4b0f0(&local_120,*piVar17 + 8);
    if (local_120 == (int *)0x8 && local_11c == 0) {
      if ((char)local_118 == '\x02') {
        *param_1 = 8;
        param_1[1] = 0;
        return;
      }
      do {
        iVar5 = *piVar15;
        bVar4 = (bool)hasExclusiveAccess(piVar15);
      } while (!bVar4);
      *piVar15 = iVar5 + 1;
      if (-1 < iVar5) {
        puVar6 = (undefined4 *)*param_3;
        piVar12 = piVar15 + 0x3a;
        do {
          if ((char)*piVar12 == '\0') {
            bVar4 = (bool)hasExclusiveAccess(piVar12);
            if (bVar4) goto code_r0x00ef4e18;
          }
          else {
            ClearExclusiveLocal();
          }
          while ((char)*piVar12 != '\0') {
            HintYield();
          }
        } while( true );
      }
      goto LAB_00ef54cc;
    }
    uVar11 = 0xd0;
    piVar15 = param_1;
    goto LAB_00ef5074;
  }
  piVar15 = param_2 + 1;
  if (*param_2 != 0) {
    piVar15 = (int *)param_2[1];
  }
  iVar5 = *piVar15;
  piVar15 = (int *)(iVar5 + 8);
  do {
    if (*piVar15 != 0) {
      ClearExclusiveLocal();
      FUN_015bf680(piVar15);
      goto LAB_00ef4e78;
    }
    bVar4 = (bool)hasExclusiveAccess(piVar15);
  } while (!bVar4);
  *piVar15 = 1;
  DataMemoryBarrier(0xb);
LAB_00ef4e78:
  uVar18 = 0;
  if ((DAT_018dd988 & 0x7fffffff) == 0) {
    cVar2 = *(char *)(iVar5 + 0xc);
  }
  else {
    uVar18 = FUN_015bf3f8();
    uVar18 = uVar18 ^ 1;
    cVar2 = *(char *)(iVar5 + 0xc);
  }
  if (cVar2 != '\0') {
    local_11c._1_3_ = (undefined3)((uint)local_11c >> 8);
    local_11c = CONCAT31(local_11c._1_3_,(char)uVar18);
    local_120 = piVar15;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_120,&DAT_0187a7c0,&DAT_01886a4c);
  }
  FUN_00e48800(iVar5 + 0x10,1);
  if (*(int *)(iVar5 + 0x1c) == 0) {
LAB_00ef4ef8:
    DataMemoryBarrier(0xb);
    if (*(char *)(iVar5 + 0x4c) == '\0') {
      local_34 = (*(code *)**(undefined4 **)*param_3)(((undefined4 *)*param_3)[1]);
      local_11c = 1;
      local_120 = (int *)0x1;
      local_114 = 0;
      local_118 = 0;
      local_2c = 0;
      local_38 = 0;
      piVar14 = (int *)thunk_FUN_016d4a50(0xf8);
      if (piVar14 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(8,0xf8);
      }
      FUN_016dd1aa(piVar14,&local_120,0xf8);
      do {
        iVar8 = *piVar14;
        bVar4 = (bool)hasExclusiveAccess(piVar14);
      } while (!bVar4);
      *piVar14 = iVar8 + 1;
      if (-1 < iVar8) {
        uVar9 = *(uint *)(iVar5 + 0x20);
        uVar13 = *(uint *)(iVar5 + 0x2c);
        if (uVar13 == uVar9) {
          FUN_00aa2a4c();
          uVar9 = *(uint *)(iVar5 + 0x20);
          uVar13 = *(uint *)(iVar5 + 0x2c);
        }
        *(uint *)(iVar5 + 0x2c) = uVar13 + 1;
        uVar13 = *(int *)(iVar5 + 0x28) + uVar13;
        uVar10 = uVar13 - uVar9;
        if (uVar13 < uVar9) {
          uVar10 = uVar13;
        }
        piVar17 = (int *)(*(int *)(iVar5 + 0x24) + uVar10 * 8);
        *piVar17 = (int)piVar14;
        piVar17[1] = (int)&DAT_0187a7e8;
        if ((uVar18 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) {
          iVar8 = FUN_015bf3f8();
          if (iVar8 == 0) {
            *(undefined1 *)(iVar5 + 0xc) = 1;
          }
        }
        DataMemoryBarrier(0xb);
        do {
          iVar5 = *piVar15;
          bVar4 = (bool)hasExclusiveAccess(piVar15);
        } while (!bVar4);
        *piVar15 = 0;
        if (iVar5 == 2) {
          FUN_016d6968(0xf0,piVar15,0x81,1);
          piVar15 = (int *)param_2[2];
        }
        else {
          piVar15 = (int *)param_2[2];
        }
        if (piVar15 != (int *)0x0) {
          DataMemoryBarrier(0xb);
          do {
            iVar5 = *piVar15;
            bVar4 = (bool)hasExclusiveAccess(piVar15);
          } while (!bVar4);
          *piVar15 = iVar5 + -1;
          if (iVar5 == 1) {
            DataMemoryBarrier(0xb);
            FUN_00e48dc4(param_2[2]);
          }
        }
        param_2[2] = (int)piVar14;
LAB_00ef51c4:
        *param_1 = 9;
        param_1[1] = 0;
        return;
      }
LAB_00ef54cc:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0xef54cc);
      (*pcVar1)();
    }
    if (((uVar18 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
       (iVar8 = FUN_015bf3f8(), iVar8 == 0)) {
      *(undefined1 *)(iVar5 + 0xc) = 1;
    }
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar15;
      bVar4 = (bool)hasExclusiveAccess(piVar15);
    } while (!bVar4);
    *piVar15 = 0;
    if (iVar5 == 2) {
      FUN_016d6968(0xf0,piVar15,0x81,1);
    }
    iVar16 = 0;
    iVar8 = 8;
  }
  else {
    *(int *)(iVar5 + 0x1c) = *(int *)(iVar5 + 0x1c) + -1;
    uVar9 = *(int *)(iVar5 + 0x18) + 1;
    uVar13 = uVar9 - *(uint *)(iVar5 + 0x10);
    if (uVar9 < *(uint *)(iVar5 + 0x10)) {
      uVar13 = uVar9;
    }
    piVar14 = (int *)(*(int *)(iVar5 + 0x14) + *(int *)(iVar5 + 0x18) * 0xd0);
    iVar8 = *piVar14;
    *(uint *)(iVar5 + 0x18) = uVar13;
    iVar16 = piVar14[1];
    if (iVar8 == 8 && iVar16 == 0) goto LAB_00ef4ef8;
    param_2 = (int *)(uint)*(byte *)(piVar14 + 2);
    FUN_016dd1aa(auStack_1e8,(int)piVar14 + 9,199);
    if (((uVar18 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
       (iVar7 = FUN_015bf3f8(), iVar7 == 0)) {
      *(undefined1 *)(iVar5 + 0xc) = 1;
    }
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar15;
      bVar4 = (bool)hasExclusiveAccess(piVar15);
    } while (!bVar4);
    *piVar15 = 0;
    if (iVar5 == 2) {
      FUN_016d6968(0xf0,piVar15,0x81,1);
      if (iVar8 == 9 && iVar16 == 0) goto LAB_00ef51c4;
    }
    else if (iVar8 == 9 && iVar16 == 0) goto LAB_00ef51c4;
    FUN_016dd1aa(&local_120,auStack_1e8,199);
  }
  *(char *)(param_1 + 2) = (char)param_2;
  piVar15 = (int *)((int)param_1 + 9);
  *param_1 = iVar8;
  param_1[1] = iVar16;
  uVar11 = 199;
LAB_00ef5074:
  FUN_016dd1aa(piVar15,&local_120,uVar11);
  return;
code_r0x00ef4e18:
  *(char *)piVar12 = '\x01';
  DataMemoryBarrier(0xb);
  cVar2 = (char)piVar15[0x3d];
  DataMemoryBarrier(0xb);
  iVar5 = puVar6[1];
  puVar19 = (undefined4 *)*puVar6;
  if (piVar15[0x3c] == iVar5) {
    puVar6 = (undefined4 *)piVar15[0x3b];
  }
  if (piVar15[0x3c] == iVar5 && puVar6 == puVar19) {
    DataMemoryBarrier(0xb);
    *(char *)piVar12 = '\0';
    if (cVar2 == '\0') goto LAB_00ef52f8;
  }
  else {
    uVar20 = (*(code *)*puVar19)(iVar5);
    (**(code **)(piVar15[0x3b] + 0xc))(piVar15[0x3c]);
    *(undefined8 *)(piVar15 + 0x3b) = uVar20;
    if (cVar2 == '\0') {
      DataMemoryBarrier(0xb);
      *(char *)piVar12 = '\0';
      goto LAB_00ef52f8;
    }
    (*(code *)puVar19[2])(iVar5);
    DataMemoryBarrier(0xb);
    *(char *)piVar12 = '\0';
  }
  iVar5 = *piVar17;
  piVar17 = (int *)(iVar5 + 8);
  do {
    if (*piVar17 != 0) {
      ClearExclusiveLocal();
      FUN_015bf680(piVar17);
      goto LAB_00ef521c;
    }
    bVar4 = (bool)hasExclusiveAccess(piVar17);
  } while (!bVar4);
  *piVar17 = 1;
  DataMemoryBarrier(0xb);
LAB_00ef521c:
  uVar18 = 0;
  if ((DAT_018dd988 & 0x7fffffff) == 0) {
    cVar3 = *(char *)(iVar5 + 0xc);
  }
  else {
    uVar18 = FUN_015bf3f8();
    uVar18 = uVar18 ^ 1;
    cVar3 = *(char *)(iVar5 + 0xc);
  }
  if (cVar3 != '\0') {
    local_11c._1_3_ = (undefined3)((uint)local_11c >> 8);
    local_11c = CONCAT31(local_11c._1_3_,(char)uVar18);
    local_120 = piVar17;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_120,&DAT_0187c31c,&DAT_01886a4c);
  }
  uVar9 = *(uint *)(iVar5 + 0x20);
  uVar13 = *(uint *)(iVar5 + 0x2c);
  if (uVar13 == uVar9) {
    FUN_00aa2a4c();
    uVar9 = *(uint *)(iVar5 + 0x20);
    uVar13 = *(uint *)(iVar5 + 0x2c);
  }
  *(uint *)(iVar5 + 0x2c) = uVar13 + 1;
  uVar13 = *(int *)(iVar5 + 0x28) + uVar13;
  uVar10 = uVar13 - uVar9;
  if (uVar13 < uVar9) {
    uVar10 = uVar13;
  }
  puVar6 = (undefined4 *)(*(int *)(iVar5 + 0x24) + uVar10 * 8);
  *puVar6 = piVar15;
  puVar6[1] = &DAT_0187c32c;
  if (((uVar18 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) && (iVar8 = FUN_015bf3f8(), iVar8 == 0))
  {
    *(undefined1 *)(iVar5 + 0xc) = 1;
  }
  DataMemoryBarrier(0xb);
  do {
    iVar5 = *piVar17;
    bVar4 = (bool)hasExclusiveAccess(piVar17);
  } while (!bVar4);
  *piVar17 = 0;
  if (iVar5 == 2) {
    FUN_016d6968(0xf0,piVar17,0x81,1);
  }
LAB_00ef52f8:
  piVar17 = (int *)param_2[1];
  if (*param_2 == 0) {
    piVar17 = piVar14;
  }
  DataMemoryBarrier(0xb);
  if (*(char *)(*piVar17 + 0x4c) == '\0') {
    *param_1 = 9;
    param_1[1] = 0;
  }
  else {
    if (*param_2 != 0) {
      piVar14 = (int *)param_2[1];
    }
    FUN_00e4b0f0(&local_120,*piVar14 + 8);
    if (local_120 != (int *)0x8 || local_11c != 0) {
      piVar14 = (int *)(local_118 & 0xff);
      FUN_016dd1aa(auStack_2b0,(int)&local_118 + 1,199);
    }
    *(char *)(param_1 + 2) = (char)piVar14;
    *param_1 = (int)local_120;
    param_1[1] = local_11c;
    FUN_016dd1aa((int)param_1 + 9,auStack_2b0,199);
  }
  if (cVar2 != '\0') {
    return;
  }
  DataMemoryBarrier(0xb);
  do {
    iVar5 = *piVar15;
    bVar4 = (bool)hasExclusiveAccess(piVar15);
  } while (!bVar4);
  *piVar15 = iVar5 + -1;
  if (iVar5 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00e48dc4(piVar15);
    return;
  }
  return;
}

