// FUN_00ef4348 @ 00ef4348 size=2108 calls_out=11 calls_in=1
// strings: 

void FUN_00ef4348(int *param_1,int *param_2,int *param_3)

{
  code *pcVar1;
  char cVar2;
  char cVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int *piVar11;
  undefined1 *puVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int *piVar16;
  int *piVar17;
  int *piVar18;
  undefined4 *puVar19;
  undefined8 uVar20;
  undefined4 local_150 [22];
  int *local_f8;
  int iStack_f4;
  int iStack_f0;
  int iStack_ec;
  int iStack_e8;
  int local_e4;
  int iStack_e0;
  int iStack_dc;
  int iStack_d8;
  int iStack_d4;
  undefined4 local_d0 [10];
  int *local_a8;
  int local_a4;
  int local_a0;
  int local_9c;
  int iStack_98;
  int local_94;
  int iStack_90;
  int iStack_8c;
  int iStack_88;
  int iStack_84;
  undefined4 local_38;
  undefined8 local_34;
  undefined2 local_2c;
  
  piVar16 = (int *)param_2[2];
  if (piVar16 == (int *)0x0) {
    piVar16 = param_2 + 1;
    if (*param_2 != 0) {
      piVar16 = (int *)param_2[1];
    }
    iVar6 = *piVar16;
    piVar16 = (int *)(iVar6 + 8);
    do {
      if (*piVar16 != 0) {
        ClearExclusiveLocal();
        FUN_015bf680(piVar16);
        goto LAB_00ef4454;
      }
      bVar4 = (bool)hasExclusiveAccess(piVar16);
    } while (!bVar4);
    *piVar16 = 1;
    DataMemoryBarrier(0xb);
LAB_00ef4454:
    uVar15 = 0;
    if ((DAT_018dd988 & 0x7fffffff) == 0) {
      cVar2 = *(char *)(iVar6 + 0xc);
    }
    else {
      uVar15 = FUN_015bf3f8();
      uVar15 = uVar15 ^ 1;
      cVar2 = *(char *)(iVar6 + 0xc);
    }
    if (cVar2 != '\0') {
      local_a4._1_3_ = (undefined3)((uint)local_a4 >> 8);
      local_a4 = CONCAT31(local_a4._1_3_,(char)uVar15);
      local_a8 = piVar16;
                    /* WARNING: Subroutine does not return */
      FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_a8,&DAT_0187a7c0,&DAT_01886a4c);
    }
    FUN_00e477bc(iVar6 + 0x10,1);
    if (*(int *)(iVar6 + 0x1c) != 0) {
      piVar17 = (int *)(*(int *)(iVar6 + 0x14) + *(int *)(iVar6 + 0x18) * 0x58);
      iVar9 = *piVar17;
      *(int *)(iVar6 + 0x1c) = *(int *)(iVar6 + 0x1c) + -1;
      uVar10 = *(int *)(iVar6 + 0x18) + 1;
      puVar12 = (undefined1 *)piVar17[10];
      piVar18 = (int *)piVar17[0xb];
      uVar14 = uVar10 - *(uint *)(iVar6 + 0x10);
      if (uVar10 < *(uint *)(iVar6 + 0x10)) {
        uVar14 = uVar10;
      }
      uVar5 = (undefined1)piVar17[1];
      *(uint *)(iVar6 + 0x18) = uVar14;
      if (iVar9 != 4) {
        FUN_016dd1aa(local_d0,(int)piVar17 + 5,0x23);
        local_f8 = (int *)piVar17[0xc];
        iStack_f4 = piVar17[0xd];
        iStack_f0 = piVar17[0xe];
        iStack_ec = piVar17[0xf];
        iStack_e8 = piVar17[0x10];
        local_e4 = piVar17[0x11];
        iStack_e0 = piVar17[0x12];
        iStack_dc = piVar17[0x13];
        iStack_d8 = piVar17[0x14];
        iStack_d4 = piVar17[0x15];
        if (((uVar15 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
           (iVar8 = FUN_015bf3f8(), iVar8 == 0)) {
          *(undefined1 *)(iVar6 + 0xc) = 1;
        }
        DataMemoryBarrier(0xb);
        do {
          iVar6 = *piVar16;
          bVar4 = (bool)hasExclusiveAccess(piVar16);
        } while (!bVar4);
        *piVar16 = 0;
        if (iVar6 == 2) {
          FUN_016d6968(0xf0,piVar16,0x81,1);
        }
        if (iVar9 != 5) {
          local_a8 = local_f8;
          local_a4 = iStack_f4;
          local_a0 = iStack_f0;
          local_9c = iStack_ec;
          iStack_98 = iStack_e8;
          local_94 = local_e4;
          iStack_90 = iStack_e0;
          iStack_8c = iStack_dc;
          iStack_88 = iStack_d8;
          iStack_84 = iStack_d4;
          goto LAB_00ef4694;
        }
        goto LAB_00ef481c;
      }
    }
    DataMemoryBarrier(0xb);
    if (*(char *)(iVar6 + 0x4c) != '\0') {
      if (((uVar15 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
         (iVar9 = FUN_015bf3f8(), iVar9 == 0)) {
        *(undefined1 *)(iVar6 + 0xc) = 1;
      }
      uVar5 = 0;
      DataMemoryBarrier(0xb);
      do {
        iVar6 = *piVar16;
        bVar4 = (bool)hasExclusiveAccess(piVar16);
      } while (!bVar4);
      *piVar16 = 0;
      if (iVar6 == 2) {
        uVar5 = FUN_016d6968(0xf0,piVar16,0x81,1);
      }
      iVar9 = 4;
      puVar12 = &DAT_018dd940;
      piVar18 = piVar16;
LAB_00ef4694:
      *(undefined1 *)(param_1 + 1) = uVar5;
      *param_1 = iVar9;
      FUN_016dd1aa((int)param_1 + 5,local_150,0x23);
      param_1[10] = (int)puVar12;
      param_1[0xb] = (int)piVar18;
      param_1[0xc] = (int)local_a8;
      param_1[0xd] = local_a4;
      param_1[0xe] = local_a0;
      param_1[0xf] = local_9c;
      param_1[0x10] = iStack_98;
      param_1[0x11] = local_94;
      param_1[0x12] = iStack_90;
      param_1[0x13] = iStack_8c;
      param_1[0x14] = iStack_88;
      param_1[0x15] = iStack_84;
      return;
    }
    local_34 = (*(code *)**(undefined4 **)*param_3)(((undefined4 *)*param_3)[1]);
    local_a4 = 1;
    local_a8 = (int *)0x1;
    local_9c = 0;
    local_a0 = 0;
    local_2c = 0;
    local_38 = 0;
    piVar18 = (int *)thunk_FUN_016d4a50(0x80);
    if (piVar18 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(8,0x80);
    }
    FUN_016dd1aa(piVar18,&local_a8,0x80);
    do {
      iVar9 = *piVar18;
      bVar4 = (bool)hasExclusiveAccess(piVar18);
    } while (!bVar4);
    *piVar18 = iVar9 + 1;
    if (-1 < iVar9) {
      uVar14 = *(uint *)(iVar6 + 0x20);
      uVar10 = *(uint *)(iVar6 + 0x2c);
      if (uVar10 == uVar14) {
        FUN_00aa2a4c();
        uVar14 = *(uint *)(iVar6 + 0x20);
        uVar10 = *(uint *)(iVar6 + 0x2c);
      }
      uVar13 = *(int *)(iVar6 + 0x28) + uVar10;
      *(uint *)(iVar6 + 0x2c) = uVar10 + 1;
      uVar10 = uVar13 - uVar14;
      if (uVar13 < uVar14) {
        uVar10 = uVar13;
      }
      piVar17 = (int *)(*(int *)(iVar6 + 0x24) + uVar10 * 8);
      *piVar17 = (int)piVar18;
      piVar17[1] = (int)&DAT_0187a7e8;
      if ((uVar15 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) {
        iVar9 = FUN_015bf3f8();
        if (iVar9 == 0) {
          *(undefined1 *)(iVar6 + 0xc) = 1;
        }
      }
      DataMemoryBarrier(0xb);
      do {
        iVar6 = *piVar16;
        bVar4 = (bool)hasExclusiveAccess(piVar16);
      } while (!bVar4);
      *piVar16 = 0;
      if (iVar6 == 2) {
        FUN_016d6968(0xf0,piVar16,0x81,1);
        piVar16 = (int *)param_2[2];
      }
      else {
        piVar16 = (int *)param_2[2];
      }
      if (piVar16 != (int *)0x0) {
        DataMemoryBarrier(0xb);
        do {
          iVar6 = *piVar16;
          bVar4 = (bool)hasExclusiveAccess(piVar16);
        } while (!bVar4);
        *piVar16 = iVar6 + -1;
        if (iVar6 == 1) {
          DataMemoryBarrier(0xb);
          FUN_00e453f4(param_2[2]);
        }
      }
      param_2[2] = (int)piVar18;
LAB_00ef481c:
      *param_1 = 5;
      return;
    }
  }
  else {
    piVar17 = param_2 + 1;
    piVar18 = (int *)*piVar17;
    if (*param_2 == 0) {
      piVar18 = piVar17;
    }
    FUN_00e4ad50(&local_a8,*piVar18 + 8);
    if (local_a8 != (int *)0x4) {
      FUN_016dd1aa(param_1,&local_a8,0x58);
      return;
    }
    if ((char)local_a4 == '\x02') {
      *param_1 = 4;
      return;
    }
    do {
      iVar6 = *piVar16;
      bVar4 = (bool)hasExclusiveAccess(piVar16);
    } while (!bVar4);
    *piVar16 = iVar6 + 1;
    if (-1 < iVar6) {
      puVar7 = (undefined4 *)*param_3;
      piVar11 = piVar16 + 0x1c;
      do {
        if ((char)*piVar11 == '\0') {
          bVar4 = (bool)hasExclusiveAccess(piVar11);
          if (bVar4) goto code_r0x00ef43f0;
        }
        else {
          ClearExclusiveLocal();
        }
        while ((char)*piVar11 != '\0') {
          HintYield();
        }
      } while( true );
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0xef4b14);
  (*pcVar1)();
code_r0x00ef43f0:
  *(char *)piVar11 = '\x01';
  DataMemoryBarrier(0xb);
  cVar2 = (char)piVar16[0x1f];
  DataMemoryBarrier(0xb);
  iVar6 = puVar7[1];
  puVar19 = (undefined4 *)*puVar7;
  if (piVar16[0x1e] == iVar6) {
    puVar7 = (undefined4 *)piVar16[0x1d];
  }
  if (piVar16[0x1e] == iVar6 && puVar7 == puVar19) {
    DataMemoryBarrier(0xb);
    *(char *)piVar11 = '\0';
    if (cVar2 == '\0') goto LAB_00ef4948;
  }
  else {
    uVar20 = (*(code *)*puVar19)(iVar6);
    (**(code **)(piVar16[0x1d] + 0xc))(piVar16[0x1e]);
    *(undefined8 *)(piVar16 + 0x1d) = uVar20;
    if (cVar2 == '\0') {
      DataMemoryBarrier(0xb);
      *(char *)piVar11 = '\0';
      goto LAB_00ef4948;
    }
    (*(code *)puVar19[2])(iVar6);
    DataMemoryBarrier(0xb);
    *(char *)piVar11 = '\0';
  }
  iVar6 = *piVar18;
  piVar18 = (int *)(iVar6 + 8);
  do {
    if (*piVar18 != 0) {
      ClearExclusiveLocal();
      FUN_015bf680(piVar18);
      goto LAB_00ef4870;
    }
    bVar4 = (bool)hasExclusiveAccess(piVar18);
  } while (!bVar4);
  *piVar18 = 1;
  DataMemoryBarrier(0xb);
LAB_00ef4870:
  uVar15 = 0;
  if ((DAT_018dd988 & 0x7fffffff) == 0) {
    cVar3 = *(char *)(iVar6 + 0xc);
  }
  else {
    uVar15 = FUN_015bf3f8();
    uVar15 = uVar15 ^ 1;
    cVar3 = *(char *)(iVar6 + 0xc);
  }
  if (cVar3 != '\0') {
    local_a4._1_3_ = (undefined3)((uint)local_a4 >> 8);
    local_a4 = CONCAT31(local_a4._1_3_,(char)uVar15);
    local_a8 = piVar18;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_a8,&DAT_0187c31c,&DAT_01886a4c);
  }
  uVar10 = *(uint *)(iVar6 + 0x20);
  uVar14 = *(uint *)(iVar6 + 0x2c);
  if (uVar14 == uVar10) {
    FUN_00aa2a4c();
    uVar10 = *(uint *)(iVar6 + 0x20);
    uVar14 = *(uint *)(iVar6 + 0x2c);
  }
  *(uint *)(iVar6 + 0x2c) = uVar14 + 1;
  uVar14 = *(int *)(iVar6 + 0x28) + uVar14;
  uVar13 = uVar14 - uVar10;
  if (uVar14 < uVar10) {
    uVar13 = uVar14;
  }
  puVar7 = (undefined4 *)(*(int *)(iVar6 + 0x24) + uVar13 * 8);
  *puVar7 = piVar16;
  puVar7[1] = &DAT_0187c32c;
  if (((uVar15 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) && (iVar9 = FUN_015bf3f8(), iVar9 == 0))
  {
    *(undefined1 *)(iVar6 + 0xc) = 1;
  }
  DataMemoryBarrier(0xb);
  do {
    iVar6 = *piVar18;
    bVar4 = (bool)hasExclusiveAccess(piVar18);
  } while (!bVar4);
  *piVar18 = 0;
  if (iVar6 == 2) {
    FUN_016d6968(0xf0,piVar18,0x81,1);
  }
LAB_00ef4948:
  piVar11 = (int *)param_2[1];
  if (*param_2 == 0) {
    piVar11 = piVar17;
  }
  DataMemoryBarrier(0xb);
  if (*(char *)(*piVar11 + 0x4c) == '\0') {
    *param_1 = 5;
  }
  else {
    if (*param_2 != 0) {
      piVar17 = (int *)param_2[1];
    }
    FUN_00e4ad50(&local_a8,*piVar17 + 8);
    uVar5 = (char)piVar18;
    if (local_a8 != (int *)0x4) {
      FUN_016dd1aa(local_150,(uint)&local_a8 | 5,0x53);
      uVar5 = (char)local_a4;
    }
    *(undefined1 *)(param_1 + 1) = uVar5;
    *param_1 = (int)local_a8;
    FUN_016dd1aa((int)param_1 + 5,local_150,0x53);
  }
  if (cVar2 == '\0') {
    DataMemoryBarrier(0xb);
    do {
      iVar6 = *piVar16;
      bVar4 = (bool)hasExclusiveAccess(piVar16);
    } while (!bVar4);
    *piVar16 = iVar6 + -1;
    if (iVar6 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00e453f4(piVar16);
      return;
    }
  }
  return;
}

