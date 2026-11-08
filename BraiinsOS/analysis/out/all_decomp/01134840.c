// FUN_01134840 @ 01134840 size=1500 calls_out=7 calls_in=8
// strings: 

void FUN_01134840(undefined4 *param_1,int *param_2,undefined4 *param_3)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  uint *puVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  undefined4 uVar12;
  int *piVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  uint uVar17;
  int *local_2c;
  undefined1 local_28;
  
  uVar16 = *param_3;
  uVar15 = param_3[1];
  uVar9 = param_3[2];
  uVar14 = param_3[3];
  uVar12 = param_3[4];
  if (*(byte *)(param_2 + 2) == 2) {
    uVar9 = param_3[1];
    uVar12 = param_3[2];
    uVar14 = param_3[3];
    uVar15 = param_3[4];
    *param_1 = *param_3;
    param_1[1] = uVar9;
    param_1[2] = uVar12;
    param_1[3] = uVar14;
    param_1[4] = uVar15;
    *(undefined1 *)(param_1 + 5) = 1;
    return;
  }
  if ((*(byte *)(param_2 + 2) & 1) != 0) {
    iVar11 = param_2[1];
    piVar13 = (int *)(iVar11 + 8);
    do {
      if (*piVar13 != 0) {
        ClearExclusiveLocal();
        FUN_015bf680(piVar13);
        goto LAB_011348c4;
      }
      bVar3 = (bool)hasExclusiveAccess(piVar13);
    } while (!bVar3);
    *piVar13 = 1;
    DataMemoryBarrier(0xb);
LAB_011348c4:
    uVar17 = 0;
    if ((DAT_018dd988 & 0x7fffffff) == 0) {
      cVar2 = *(char *)(iVar11 + 0xc);
    }
    else {
      uVar17 = FUN_015bf3f8();
      uVar17 = uVar17 ^ 1;
      cVar2 = *(char *)(iVar11 + 0xc);
    }
    if (cVar2 != '\0') {
      local_28 = (undefined1)uVar17;
      local_2c = piVar13;
                    /* WARNING: Subroutine does not return */
      FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_2c,&DAT_01888664,&DAT_018a4b30);
    }
    if (*(char *)(iVar11 + 0x18) != '\0') {
      if (*(int *)(iVar11 + 0x10) != 0) {
        (**(code **)(*(int *)(iVar11 + 0x10) + 0xc))(*(undefined4 *)(iVar11 + 0x14));
      }
      *(undefined4 *)(iVar11 + 0x10) = 0;
      if (((uVar17 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
         (iVar6 = FUN_015bf3f8(), iVar6 == 0)) {
        *(undefined1 *)(iVar11 + 0xc) = 1;
      }
      DataMemoryBarrier(0xb);
      do {
        iVar11 = *piVar13;
        bVar3 = (bool)hasExclusiveAccess(piVar13);
      } while (!bVar3);
      *piVar13 = 0;
      if (iVar11 == 2) {
        FUN_016d6968(0xf0,piVar13,0x81,1);
      }
      *param_1 = uVar16;
      param_1[1] = uVar15;
      param_1[2] = uVar9;
      param_1[3] = uVar14;
      param_1[4] = uVar12;
      *(undefined1 *)(param_1 + 5) = 0;
      return;
    }
    *(undefined1 *)(param_2 + 2) = 0;
    if (((uVar17 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
       (iVar6 = FUN_015bf3f8(), iVar6 == 0)) {
      *(undefined1 *)(iVar11 + 0xc) = 1;
    }
    DataMemoryBarrier(0xb);
    do {
      iVar11 = *piVar13;
      bVar3 = (bool)hasExclusiveAccess(piVar13);
    } while (!bVar3);
    *piVar13 = 0;
    if (iVar11 == 2) {
      FUN_016d6968(0xf0,piVar13,0x81,1);
    }
  }
  puVar4 = (uint *)(*param_2 + 0x1c);
  DataMemoryBarrier(0xb);
  uVar17 = *(uint *)(*param_2 + 0x1c);
  do {
    if (uVar17 < 0x80000000) {
      *param_1 = uVar16;
      param_1[1] = uVar15;
      param_1[2] = uVar9;
      param_1[3] = uVar14;
      param_1[4] = uVar12;
      *(undefined1 *)(param_1 + 5) = 1;
      return;
    }
    if ((uVar17 & 0x7fffffff) == 0x7fffffff) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa464(&DAT_0040888b,0x46,&DAT_018a4b40);
    }
    uVar10 = *puVar4;
    if (uVar10 == uVar17) {
      DataMemoryBarrier(0xb);
      do {
        bVar3 = (bool)hasExclusiveAccess(puVar4);
        if (bVar3) {
          *puVar4 = uVar17 + 1 | 0x80000000;
          DataMemoryBarrier(0xb);
          iVar11 = *param_2;
          if ((uVar17 & 0x7fffffff) < *(uint *)(iVar11 + 0x18)) goto LAB_01134b84;
          iVar11 = param_2[1];
          piVar13 = (int *)(iVar11 + 8);
          goto LAB_01134a64;
        }
        uVar10 = *puVar4;
      } while (uVar10 == uVar17);
    }
    ClearExclusiveLocal();
    DataMemoryBarrier(0xb);
    uVar17 = uVar10;
  } while( true );
  while (bVar3 = (bool)hasExclusiveAccess(piVar13), !bVar3) {
LAB_01134a64:
    if (*piVar13 != 0) {
      ClearExclusiveLocal();
      FUN_015bf680(piVar13);
      goto LAB_01134a80;
    }
  }
  *piVar13 = 1;
  DataMemoryBarrier(0xb);
LAB_01134a80:
  uVar17 = 0;
  if ((DAT_018dd988 & 0x7fffffff) == 0) {
    cVar2 = *(char *)(iVar11 + 0xc);
  }
  else {
    uVar17 = FUN_015bf3f8();
    uVar17 = uVar17 ^ 1;
    cVar2 = *(char *)(iVar11 + 0xc);
  }
  if (cVar2 != '\0') {
    local_28 = (undefined1)uVar17;
    local_2c = piVar13;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_2c,&DAT_01888664,&DAT_018a4b50);
  }
  if (*(int *)(iVar11 + 0x10) != 0) {
    (**(code **)(*(int *)(iVar11 + 0x10) + 0xc))(*(undefined4 *)(iVar11 + 0x14));
  }
  *(undefined1 *)(iVar11 + 0x18) = 1;
  *(undefined4 *)(iVar11 + 0x10) = 0;
  if (((uVar17 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) && (iVar6 = FUN_015bf3f8(), iVar6 == 0))
  {
    *(undefined1 *)(iVar11 + 0xc) = 1;
  }
  DataMemoryBarrier(0xb);
  do {
    iVar11 = *piVar13;
    bVar3 = (bool)hasExclusiveAccess(piVar13);
  } while (!bVar3);
  *piVar13 = 0;
  if (iVar11 == 2) {
    FUN_016d6968(0xf0,piVar13,0x81,1);
  }
  piVar13 = (int *)param_2[1];
  do {
    iVar11 = *piVar13;
    bVar3 = (bool)hasExclusiveAccess(piVar13);
  } while (!bVar3);
  *piVar13 = iVar11 + 1;
  if (iVar11 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x1134ddc);
    (*pcVar1)();
  }
  iVar6 = *param_2;
  puVar5 = (undefined4 *)thunk_FUN_016d4a50(8);
  if (puVar5 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,8);
  }
  *puVar5 = 0;
  puVar5[1] = piVar13;
  puVar8 = (undefined4 *)(iVar6 + 0x10);
  DataMemoryBarrier(0xb);
  do {
    puVar7 = (undefined4 *)*puVar8;
    bVar3 = (bool)hasExclusiveAccess(puVar8);
  } while (!bVar3);
  *puVar8 = puVar5;
  DataMemoryBarrier(0xb);
  *puVar7 = puVar5;
  DataMemoryBarrier(0xb);
  iVar11 = *param_2;
  *(byte *)(param_2 + 2) = (byte)((uint)*(undefined4 *)(iVar6 + 0x1c) >> 0x1f);
LAB_01134b84:
  puVar5 = (undefined4 *)thunk_FUN_016d4a50(0x18);
  if (puVar5 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x18);
  }
  *puVar5 = uVar16;
  puVar5[1] = uVar15;
  puVar5[2] = uVar9;
  puVar5[3] = uVar14;
  puVar5[4] = uVar12;
  puVar5[5] = 0;
  piVar13 = (int *)(iVar11 + 8);
  DataMemoryBarrier(0xb);
  do {
    iVar6 = *piVar13;
    bVar3 = (bool)hasExclusiveAccess(piVar13);
  } while (!bVar3);
  *piVar13 = (int)puVar5;
  DataMemoryBarrier(0xb);
  *(undefined4 **)(iVar6 + 0x14) = puVar5;
  puVar4 = (uint *)(iVar11 + 0x2c);
  DataMemoryBarrier(0xb);
  do {
    uVar17 = *puVar4;
    bVar3 = (bool)hasExclusiveAccess(puVar4);
  } while (!bVar3);
  *puVar4 = uVar17 | 2;
  DataMemoryBarrier(0xb);
  if (uVar17 == 0) {
    iVar6 = *(int *)(iVar11 + 0x24);
    *(undefined4 *)(iVar11 + 0x24) = 0;
    DataMemoryBarrier(0xb);
    do {
      bVar3 = (bool)hasExclusiveAccess(puVar4);
    } while (!bVar3);
    *puVar4 = *puVar4 & 0xfffffffd;
    if (iVar6 != 0) {
      (**(code **)(iVar6 + 4))(*(undefined4 *)(iVar11 + 0x28));
      *param_1 = 0x80000000;
      return;
    }
  }
  *param_1 = 0x80000000;
  return;
}

