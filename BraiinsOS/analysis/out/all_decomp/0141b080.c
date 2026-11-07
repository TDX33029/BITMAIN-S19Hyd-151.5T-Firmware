// FUN_0141b080 @ 0141b080 size=1624 calls_out=11 calls_in=0
// strings: 

void FUN_0141b080(undefined2 *param_1,int param_2,int *param_3,int param_4,int param_5)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  char *pcVar5;
  uint *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  uint uVar10;
  undefined4 *puVar11;
  int iVar12;
  int *piVar13;
  int iVar14;
  int *piVar15;
  undefined8 uVar16;
  int *local_2c;
  undefined1 local_28;
  
  iVar12 = param_5 << 3;
  piVar15 = (int *)(param_4 + 4);
  do {
    piVar13 = piVar15;
    if (iVar12 == 0) {
      iVar12 = 1;
      param_5 = 0;
      goto LAB_010bfdc0;
    }
    param_5 = *piVar13;
    iVar12 = iVar12 + -8;
    piVar15 = piVar13 + 2;
  } while (param_5 == 0);
  iVar12 = piVar13[-1];
LAB_010bfdc0:
  if (param_5 == 0) {
    *(undefined4 *)(param_1 + 2) = 0;
    *(undefined1 *)param_1 = 4;
    return;
  }
  if (*(char *)(param_2 + 0x2c) != '\x02') {
    piVar15 = (int *)(param_2 + 0x24);
    DataMemoryBarrier(0xb);
    if (*(int *)(*piVar15 + 0x1c) < 0) {
      iVar9 = FUN_010b7c7c(piVar15,param_3);
      if (iVar9 != 0) {
LAB_010bfea4:
        *(undefined1 *)param_1 = 5;
        return;
      }
      iVar9 = thunk_FUN_016d4a50(param_5);
      if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(1,param_5);
      }
      FUN_016dd1aa(iVar9,iVar12,param_5);
      if ((*(char *)(param_2 + 0x2c) != '\x02') && (iVar12 = FUN_010b7c7c(piVar15,0), iVar12 == 0))
      {
        uVar10 = *(uint *)(*piVar15 + 0x1c);
        puVar6 = (uint *)(*piVar15 + 0x1c);
        DataMemoryBarrier(0xb);
        while (0x7fffffff < uVar10) {
          if ((uVar10 & 0x7fffffff) == 0x7fffffff) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa464(&DAT_0040888b,0x46,&DAT_018a4b40);
          }
          uVar4 = *puVar6;
          if (*puVar6 == uVar10) {
            DataMemoryBarrier(0xb);
            do {
              bVar3 = (bool)hasExclusiveAccess(puVar6);
              if (bVar3) {
                *puVar6 = uVar10 + 1 | 0x80000000;
                DataMemoryBarrier(0xb);
                iVar12 = *piVar15;
                if ((uVar10 & 0x7fffffff) < *(uint *)(iVar12 + 0x18)) goto LAB_010c01b0;
                iVar12 = *(int *)(param_2 + 0x28);
                piVar13 = (int *)(iVar12 + 8);
                goto LAB_010c0090;
              }
              uVar4 = *puVar6;
            } while (*puVar6 == uVar10);
          }
          uVar10 = uVar4;
          ClearExclusiveLocal();
          DataMemoryBarrier(0xb);
        }
      }
      thunk_FUN_016d3fb4(iVar9);
      iVar12 = *(int *)(param_2 + 0x20);
      DataMemoryBarrier(0xb);
      if (*(char *)(iVar12 + 0x28) == '\0') {
        uVar16 = (*(code *)**(undefined4 **)*param_3)(((undefined4 *)*param_3)[1]);
        pcVar5 = (char *)(iVar12 + 0x18);
        DataMemoryBarrier(0xb);
        do {
          cVar2 = *pcVar5;
          bVar3 = (bool)hasExclusiveAccess(pcVar5);
        } while (!bVar3);
        *pcVar5 = '\x01';
        DataMemoryBarrier(0xb);
        if (cVar2 == '\0') {
          if (*(int *)(iVar12 + 0x10) != 0) {
            (**(code **)(*(int *)(iVar12 + 0x10) + 0xc))(*(undefined4 *)(iVar12 + 0x14));
          }
          *(undefined8 *)(iVar12 + 0x10) = uVar16;
          DataMemoryBarrier(0xb);
          *(undefined1 *)(iVar12 + 0x18) = 0;
          DataMemoryBarrier(0xb);
          DataMemoryBarrier(0xb);
          if (*(char *)(iVar12 + 0x28) == '\0') goto LAB_010bfea4;
        }
        else {
          (**(code **)((int)uVar16 + 0xc))((int)((ulonglong)uVar16 >> 0x20));
        }
      }
      pcVar5 = (char *)(iVar12 + 0xc);
      DataMemoryBarrier(0xb);
      do {
        cVar2 = *pcVar5;
        bVar3 = (bool)hasExclusiveAccess(pcVar5);
      } while (!bVar3);
      *pcVar5 = '\x01';
      DataMemoryBarrier(0xb);
      goto joined_r0x010bff18;
    }
  }
  iVar12 = *(int *)(param_2 + 0x20);
  DataMemoryBarrier(0xb);
  if (*(char *)(iVar12 + 0x28) == '\0') {
    uVar16 = (*(code *)**(undefined4 **)*param_3)(((undefined4 *)*param_3)[1]);
    pcVar5 = (char *)(iVar12 + 0x18);
    DataMemoryBarrier(0xb);
    do {
      cVar2 = *pcVar5;
      bVar3 = (bool)hasExclusiveAccess(pcVar5);
    } while (!bVar3);
    *pcVar5 = '\x01';
    DataMemoryBarrier(0xb);
    if (cVar2 == '\0') {
      if (*(int *)(iVar12 + 0x10) != 0) {
        (**(code **)(*(int *)(iVar12 + 0x10) + 0xc))(*(undefined4 *)(iVar12 + 0x14));
      }
      *(undefined8 *)(iVar12 + 0x10) = uVar16;
      DataMemoryBarrier(0xb);
      *(undefined1 *)(iVar12 + 0x18) = 0;
      DataMemoryBarrier(0xb);
      DataMemoryBarrier(0xb);
      if (*(char *)(iVar12 + 0x28) == '\0') {
        *(undefined1 *)param_1 = 5;
        return;
      }
    }
    else {
      (**(code **)((int)uVar16 + 0xc))((int)((ulonglong)uVar16 >> 0x20));
    }
  }
  pcVar5 = (char *)(iVar12 + 0xc);
  DataMemoryBarrier(0xb);
  do {
    cVar2 = *pcVar5;
    bVar3 = (bool)hasExclusiveAccess(pcVar5);
  } while (!bVar3);
  *pcVar5 = '\x01';
  DataMemoryBarrier(0xb);
joined_r0x010bff18:
  if (cVar2 == '\0') {
    iVar9 = *(int *)(iVar12 + 8);
    *(undefined4 *)(iVar12 + 8) = 0;
    DataMemoryBarrier(0xb);
    *(undefined1 *)(iVar12 + 0xc) = 0;
    DataMemoryBarrier(0xb);
    if (iVar9 != 0) {
      FUN_010bdcc4();
      return;
    }
  }
  *param_1 = 0xb01;
  return;
  while (bVar3 = (bool)hasExclusiveAccess(piVar13), !bVar3) {
LAB_010c0090:
    if (*piVar13 != 0) {
      ClearExclusiveLocal();
      FUN_015bf680(piVar13);
      goto LAB_010c00ac;
    }
  }
  *piVar13 = 1;
  DataMemoryBarrier(0xb);
LAB_010c00ac:
  uVar10 = 0;
  if ((DAT_018dd988 & 0x7fffffff) == 0) {
    cVar2 = *(char *)(iVar12 + 0xc);
  }
  else {
    uVar10 = FUN_015bf3f8();
    uVar10 = uVar10 ^ 1;
    cVar2 = *(char *)(iVar12 + 0xc);
  }
  if (cVar2 != '\0') {
    local_28 = (undefined1)uVar10;
    local_2c = piVar13;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_2c,&DAT_01884858,&DAT_018a4b50);
  }
  if (*(int *)(iVar12 + 0x10) != 0) {
    (**(code **)(*(int *)(iVar12 + 0x10) + 0xc))(*(undefined4 *)(iVar12 + 0x14));
  }
  *(undefined1 *)(iVar12 + 0x18) = 1;
  *(undefined4 *)(iVar12 + 0x10) = 0;
  if (((uVar10 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
     (iVar14 = FUN_015bf3f8(), iVar14 == 0)) {
    *(undefined1 *)(iVar12 + 0xc) = 1;
  }
  DataMemoryBarrier(0xb);
  do {
    iVar12 = *piVar13;
    bVar3 = (bool)hasExclusiveAccess(piVar13);
  } while (!bVar3);
  *piVar13 = 0;
  if (iVar12 == 2) {
    FUN_016d6968(0xf0,piVar13,0x81,1);
  }
  piVar13 = *(int **)(param_2 + 0x28);
  do {
    iVar12 = *piVar13;
    bVar3 = (bool)hasExclusiveAccess(piVar13);
  } while (!bVar3);
  *piVar13 = iVar12 + 1;
  if (iVar12 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x10c03b4);
    (*pcVar1)();
  }
  iVar14 = *piVar15;
  puVar7 = (undefined4 *)thunk_FUN_016d4a50(8);
  if (puVar7 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,8);
  }
  *puVar7 = 0;
  puVar7[1] = piVar13;
  puVar11 = (undefined4 *)(iVar14 + 0x10);
  DataMemoryBarrier(0xb);
  do {
    puVar8 = (undefined4 *)*puVar11;
    bVar3 = (bool)hasExclusiveAccess(puVar11);
  } while (!bVar3);
  *puVar11 = puVar7;
  DataMemoryBarrier(0xb);
  *puVar8 = puVar7;
  DataMemoryBarrier(0xb);
  iVar12 = *(int *)(param_2 + 0x24);
  *(byte *)(param_2 + 0x2c) = (byte)((uint)*(undefined4 *)(iVar14 + 0x1c) >> 0x1f);
LAB_010c01b0:
  piVar15 = (int *)thunk_FUN_016d4a50(0x18);
  if (piVar15 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0x18);
  }
  piVar13 = (int *)(iVar12 + 8);
  *piVar15 = iVar9;
  piVar15[1] = param_5;
  piVar15[2] = 0;
  piVar15[3] = 0;
  piVar15[4] = 0;
  DataMemoryBarrier(0xb);
  do {
    iVar9 = *piVar13;
    bVar3 = (bool)hasExclusiveAccess(piVar13);
  } while (!bVar3);
  *piVar13 = (int)piVar15;
  DataMemoryBarrier(0xb);
  *(int **)(iVar9 + 0x10) = piVar15;
  puVar6 = (uint *)(iVar12 + 0x2c);
  DataMemoryBarrier(0xb);
  do {
    uVar10 = *puVar6;
    bVar3 = (bool)hasExclusiveAccess(puVar6);
  } while (!bVar3);
  *puVar6 = uVar10 | 2;
  DataMemoryBarrier(0xb);
  if (uVar10 == 0) {
    iVar9 = *(int *)(iVar12 + 0x24);
    *(undefined4 *)(iVar12 + 0x24) = 0;
    DataMemoryBarrier(0xb);
    do {
      bVar3 = (bool)hasExclusiveAccess(puVar6);
    } while (!bVar3);
    *puVar6 = *puVar6 & 0xfffffffd;
    if (iVar9 != 0) {
      (**(code **)(iVar9 + 4))(*(undefined4 *)(iVar12 + 0x28));
    }
  }
  *(int *)(param_1 + 2) = param_5;
  *(undefined1 *)param_1 = 4;
  return;
}

