// FUN_00a1df24 @ 00a1df24 size=2572 calls_out=15 calls_in=2
// strings: 

undefined4 FUN_00a1df24(int *param_1,undefined4 param_2)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  uint *puVar8;
  undefined4 *puVar9;
  char *pcVar10;
  undefined4 *puVar11;
  int iVar12;
  undefined4 *puVar13;
  code *pcVar14;
  undefined4 uVar15;
  byte *pbVar16;
  uint uVar17;
  int *local_44;
  int *local_40;
  int *local_3c;
  int *local_38;
  int *local_34;
  undefined1 local_2d;
  int *local_2c;
  undefined1 *local_28;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_1[2]) {
  case '\0':
    param_1[3] = *param_1 + 0x18;
    param_1[4] = -1;
  case '\x03':
    iVar4 = FUN_00aa0cf8(param_1 + 3,param_2);
    if (iVar4 == 0) {
      *(undefined1 *)(param_1 + 2) = 3;
      return 2;
    }
    param_1[1] = iVar4;
    if (param_1[3] != 0) {
      FUN_00aa0a58(param_1[3],param_1[4],1);
      iVar4 = param_1[1];
    }
    *(undefined1 *)(param_1 + 0x14) = 0;
    piVar5 = (int *)(iVar4 + 0x20);
    param_1[3] = (int)piVar5;
LAB_00a1dfe4:
    pcVar10 = (char *)(*piVar5 + 8);
    do {
      cVar1 = *pcVar10;
      bVar2 = (bool)hasExclusiveAccess(pcVar10);
    } while (!bVar2);
    *pcVar10 = '\0';
    if (cVar1 == '\0') {
      uVar15 = 1;
      goto LAB_00a1e758;
    }
    *(undefined1 *)(param_1 + 0x13) = 0;
    piVar5 = piVar5 + 1;
    param_1[4] = (int)piVar5;
LAB_00a1e020:
    piVar6 = (int *)*piVar5;
    iVar4 = piVar5[1];
    do {
      iVar12 = *piVar6;
      bVar2 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar2);
    *piVar6 = iVar12 + 1;
    if (iVar12 < 0) {
LAB_00a1e9cc:
                    /* WARNING: Does not return */
      pcVar14 = (code *)software_udf(0xfdee,0xa1e9cc);
      (*pcVar14)();
    }
    param_1[5] = (int)piVar6;
    param_1[6] = iVar4;
    *(undefined1 *)(param_1 + 0x12) = 0;
LAB_00a1e05c:
    iVar12 = *(int *)(iVar4 + 8);
    pcVar14 = *(code **)(iVar4 + 0x28);
    piVar5 = param_1 + 7;
    *piVar5 = (int)piVar6;
    param_1[8] = iVar4;
    iVar4 = (*pcVar14)((int)piVar6 + (iVar12 - 1U & 0xfffffff8) + 8);
    param_1[9] = iVar4;
    param_1[10] = (int)piVar5;
    *(undefined1 *)(param_1 + 0x11) = 0;
LAB_00a1e0a4:
    *(undefined1 *)((int)param_1 + 0x41) = 0;
    iVar4 = iVar4 + 4;
    param_1[0xe] = iVar4;
    param_1[0xf] = (int)piVar5;
LAB_00a1e0c0:
    *(undefined1 *)(param_1 + 0x10) = 1;
    param_1[0xb] = iVar4 + 4;
    param_1[0xc] = -1;
    param_1[0xd] = (int)piVar5;
    break;
  case '\x01':
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_0187b0d4);
  case '\x02':
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_0187b0d4);
  case '\x04':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_1[0x14]) {
    case '\0':
      piVar5 = (int *)param_1[3];
      goto LAB_00a1dfe4;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_0187af60);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_0187af60);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_1[0x13]) {
    case '\0':
      piVar5 = (int *)param_1[4];
      goto LAB_00a1e020;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_0187b114);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_0187b114);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_1[0x12]) {
    case '\0':
      piVar6 = (int *)param_1[5];
      iVar4 = param_1[6];
      goto LAB_00a1e05c;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_0187b134);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_0187b134);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_1[0x11]) {
    case '\0':
      iVar4 = param_1[9];
      piVar5 = (int *)param_1[10];
      goto LAB_00a1e0a4;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_0187aed0);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_0187aed0);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)((int)param_1 + 0x41)) {
    case 0:
      iVar4 = param_1[0xe];
      piVar5 = (int *)param_1[0xf];
      goto LAB_00a1e0c0;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_0187af00);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_0187af00);
    }
  }
  local_34 = param_1 + 0x12;
  local_38 = param_1 + 0x13;
  local_3c = param_1 + 5;
  local_40 = param_1 + 0x11;
  local_44 = param_1 + 0x14;
  iVar4 = FUN_00aa0cf8(param_1 + 0xb,param_2);
  if (iVar4 == 0) {
    *(undefined1 *)((int)param_1 + 0x41) = 3;
    *(undefined1 *)local_40 = 3;
    *(undefined1 *)local_34 = 3;
    *(undefined1 *)local_38 = 3;
    *(undefined1 *)local_44 = 3;
    *(undefined1 *)(param_1 + 2) = 4;
    return 2;
  }
  iVar12 = param_1[0xb];
  if (iVar12 != 0) {
    FUN_00aa0a58(iVar12,param_1[0xc],1);
  }
  uVar17 = (uint)*(byte *)(*(int *)(iVar4 + 0x20) + 8);
  while( true ) {
    while ((1 << uVar17 & 0x8aU) != 0) {
      pbVar16 = (byte *)(*(int *)(iVar4 + 0x20) + 8);
      while (*pbVar16 == uVar17) {
        bVar2 = (bool)hasExclusiveAccess(pbVar16);
        if (bVar2) {
          *pbVar16 = 4;
          if (uVar17 != 7) goto LAB_00a1e260;
          goto LAB_00a1e6f0;
        }
      }
      ClearExclusiveLocal();
      uVar17 = (uint)*pbVar16;
    }
    if ((1 << uVar17 & 0x104U) == 0) break;
    pbVar16 = (byte *)(*(int *)(iVar4 + 0x20) + 8);
    while (*pbVar16 == uVar17) {
      bVar2 = (bool)hasExclusiveAccess(pbVar16);
      if (bVar2) {
        *pbVar16 = 6;
        if (uVar17 != 8) goto LAB_00a1e260;
        goto LAB_00a1e6f0;
      }
    }
    ClearExclusiveLocal();
    uVar17 = (uint)*pbVar16;
  }
  goto LAB_00a1e6f0;
LAB_00a1e260:
  *(undefined1 *)(param_1 + 0x10) = 0;
  piVar5 = *(int **)param_1[0xd];
  iVar12 = ((undefined4 *)param_1[0xd])[1];
  do {
    iVar7 = *piVar5;
    bVar2 = (bool)hasExclusiveAccess(piVar5);
  } while (!bVar2);
  *piVar5 = iVar7 + 1;
  if (iVar7 < 0) goto LAB_00a1e9cc;
  (**(code **)(iVar12 + 0x38))((int)piVar5 + (*(int *)(iVar12 + 8) - 1U & 0xfffffff8) + 8);
  DataMemoryBarrier(0xb);
  do {
    iVar7 = *piVar5;
    bVar2 = (bool)hasExclusiveAccess(piVar5);
  } while (!bVar2);
  *piVar5 = iVar7 + -1;
  if (iVar7 == 1) {
    DataMemoryBarrier(0xb);
    FUN_007846b4(piVar5,iVar12);
  }
  if (*(byte *)(iVar4 + 0x2c) == 2) goto LAB_00a1e8d0;
  if ((*(byte *)(iVar4 + 0x2c) & 1) != 0) {
    iVar12 = *(int *)(iVar4 + 0x28);
    piVar5 = (int *)(iVar12 + 8);
    do {
      if (*piVar5 != 0) {
        ClearExclusiveLocal();
        FUN_015bf680(piVar5);
        goto LAB_00a1e314;
      }
      bVar2 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar2);
    *piVar5 = 1;
    DataMemoryBarrier(0xb);
LAB_00a1e314:
    uVar17 = 0;
    if ((DAT_018dd988 & 0x7fffffff) == 0) {
      cVar1 = *(char *)(iVar12 + 0xc);
    }
    else {
      uVar17 = FUN_015bf3f8();
      uVar17 = uVar17 ^ 1;
      cVar1 = *(char *)(iVar12 + 0xc);
    }
    if (cVar1 != '\0') {
      local_28._1_3_ = (undefined3)((uint)local_28 >> 8);
      local_28 = (undefined1 *)CONCAT31(local_28._1_3_,(char)uVar17);
      local_2c = piVar5;
                    /* WARNING: Subroutine does not return */
      FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_2c,&DAT_0186df54,&DAT_018a4b30);
    }
    if (*(char *)(iVar12 + 0x18) != '\0') {
      if (*(int *)(iVar12 + 0x10) != 0) {
        (**(code **)(*(int *)(iVar12 + 0x10) + 0xc))(*(undefined4 *)(iVar12 + 0x14));
      }
      *(undefined4 *)(iVar12 + 0x10) = 0;
      if (((uVar17 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
         (iVar7 = FUN_015bf3f8(), iVar7 == 0)) {
        *(undefined1 *)(iVar12 + 0xc) = 1;
      }
      DataMemoryBarrier(0xb);
      do {
        iVar12 = *piVar5;
        bVar2 = (bool)hasExclusiveAccess(piVar5);
      } while (!bVar2);
      *piVar5 = 0;
      if (iVar12 == 2) {
        FUN_016d6968(0xf0,piVar5,0x81,1);
      }
      goto LAB_00a1e6f0;
    }
    *(undefined1 *)(iVar4 + 0x2c) = 0;
    if (((uVar17 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
       (iVar7 = FUN_015bf3f8(), iVar7 == 0)) {
      *(undefined1 *)(iVar12 + 0xc) = 1;
    }
    DataMemoryBarrier(0xb);
    do {
      iVar12 = *piVar5;
      bVar2 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar2);
    *piVar5 = 0;
    if (iVar12 == 2) {
      FUN_016d6968(0xf0,piVar5,0x81,1);
    }
  }
  uVar17 = *(uint *)(*(int *)(iVar4 + 0x24) + 0x1c);
  puVar8 = (uint *)(*(int *)(iVar4 + 0x24) + 0x1c);
  DataMemoryBarrier(0xb);
  while (0x7fffffff < uVar17) {
    if ((uVar17 & 0x7fffffff) == 0x7fffffff) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa464(&DAT_0040888b,0x46,&DAT_018a4b40);
    }
    uVar3 = *puVar8;
    if (*puVar8 == uVar17) {
      DataMemoryBarrier(0xb);
      do {
        bVar2 = (bool)hasExclusiveAccess(puVar8);
        if (bVar2) {
          *puVar8 = uVar17 + 1 | 0x80000000;
          DataMemoryBarrier(0xb);
          iVar12 = *(int *)(iVar4 + 0x24);
          if ((uVar17 & 0x7fffffff) < *(uint *)(iVar12 + 0x18)) goto LAB_00a1e64c;
          iVar12 = *(int *)(iVar4 + 0x28);
          piVar5 = (int *)(iVar12 + 8);
          goto LAB_00a1e53c;
        }
        uVar3 = *puVar8;
      } while (*puVar8 == uVar17);
    }
    uVar17 = uVar3;
    ClearExclusiveLocal();
    DataMemoryBarrier(0xb);
  }
LAB_00a1e8d0:
  local_2d = 1;
  local_28 = &LAB_0100eb80;
  local_2c = (int *)&local_2d;
                    /* WARNING: Subroutine does not return */
  FUN_00faa478(&DAT_0058c10f,&local_2c,&DAT_0187af10);
  while (bVar2 = (bool)hasExclusiveAccess(piVar5), !bVar2) {
LAB_00a1e53c:
    if (*piVar5 != 0) {
      ClearExclusiveLocal();
      FUN_015bf680(piVar5);
      goto LAB_00a1e558;
    }
  }
  *piVar5 = 1;
  DataMemoryBarrier(0xb);
LAB_00a1e558:
  uVar17 = 0;
  if ((DAT_018dd988 & 0x7fffffff) == 0) {
    cVar1 = *(char *)(iVar12 + 0xc);
  }
  else {
    uVar17 = FUN_015bf3f8();
    uVar17 = uVar17 ^ 1;
    cVar1 = *(char *)(iVar12 + 0xc);
  }
  if (cVar1 != '\0') {
    local_28._1_3_ = (undefined3)((uint)local_28 >> 8);
    local_28 = (undefined1 *)CONCAT31(local_28._1_3_,(char)uVar17);
    local_2c = piVar5;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_2c,&DAT_0186df54,&DAT_018a4b50);
  }
  if (*(int *)(iVar12 + 0x10) != 0) {
    (**(code **)(*(int *)(iVar12 + 0x10) + 0xc))(*(undefined4 *)(iVar12 + 0x14));
  }
  *(undefined1 *)(iVar12 + 0x18) = 1;
  *(undefined4 *)(iVar12 + 0x10) = 0;
  if (((uVar17 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) && (iVar7 = FUN_015bf3f8(), iVar7 == 0))
  {
    *(undefined1 *)(iVar12 + 0xc) = 1;
  }
  DataMemoryBarrier(0xb);
  do {
    iVar12 = *piVar5;
    bVar2 = (bool)hasExclusiveAccess(piVar5);
  } while (!bVar2);
  *piVar5 = 0;
  if (iVar12 == 2) {
    FUN_016d6968(0xf0,piVar5,0x81,1);
  }
  piVar5 = *(int **)(iVar4 + 0x28);
  do {
    iVar12 = *piVar5;
    bVar2 = (bool)hasExclusiveAccess(piVar5);
  } while (!bVar2);
  *piVar5 = iVar12 + 1;
  if (iVar12 < 0) goto LAB_00a1e9cc;
  iVar7 = *(int *)(iVar4 + 0x24);
  puVar9 = (undefined4 *)thunk_FUN_016d4a50(8);
  if (puVar9 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,8);
  }
  *puVar9 = 0;
  puVar9[1] = piVar5;
  puVar13 = (undefined4 *)(iVar7 + 0x10);
  DataMemoryBarrier(0xb);
  do {
    puVar11 = (undefined4 *)*puVar13;
    bVar2 = (bool)hasExclusiveAccess(puVar13);
  } while (!bVar2);
  *puVar13 = puVar9;
  DataMemoryBarrier(0xb);
  *puVar11 = puVar9;
  DataMemoryBarrier(0xb);
  iVar12 = *(int *)(iVar4 + 0x24);
  *(byte *)(iVar4 + 0x2c) = (byte)((uint)*(undefined4 *)(iVar7 + 0x1c) >> 0x1f);
LAB_00a1e64c:
  puVar9 = (undefined4 *)thunk_FUN_016d4a50(8);
  if (puVar9 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,8);
  }
  puVar13 = (undefined4 *)(iVar12 + 8);
  *(undefined1 *)(puVar9 + 1) = 1;
  *puVar9 = 0;
  DataMemoryBarrier(0xb);
  do {
    puVar11 = (undefined4 *)*puVar13;
    bVar2 = (bool)hasExclusiveAccess(puVar13);
  } while (!bVar2);
  *puVar13 = puVar9;
  DataMemoryBarrier(0xb);
  *puVar11 = puVar9;
  puVar8 = (uint *)(iVar12 + 0x2c);
  DataMemoryBarrier(0xb);
  do {
    uVar17 = *puVar8;
    bVar2 = (bool)hasExclusiveAccess(puVar8);
  } while (!bVar2);
  *puVar8 = uVar17 | 2;
  DataMemoryBarrier(0xb);
  if (uVar17 == 0) {
    iVar7 = *(int *)(iVar12 + 0x24);
    *(undefined4 *)(iVar12 + 0x24) = 0;
    DataMemoryBarrier(0xb);
    do {
      bVar2 = (bool)hasExclusiveAccess(puVar8);
    } while (!bVar2);
    *puVar8 = *puVar8 & 0xfffffffd;
    if (iVar7 != 0) {
      (**(code **)(iVar7 + 4))(*(undefined4 *)(iVar12 + 0x28));
    }
  }
LAB_00a1e6f0:
  FUN_00aa13c0(iVar4);
  *(undefined1 *)(param_1 + 0x11) = 1;
  piVar5 = (int *)param_1[7];
  *(undefined2 *)(param_1 + 0x10) = 0x100;
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar5;
    bVar2 = (bool)hasExclusiveAccess(piVar5);
  } while (!bVar2);
  *piVar5 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_007846b4(param_1[7],param_1[8]);
  }
  *(undefined1 *)local_34 = 1;
  FUN_00a09b58(local_3c);
  uVar15 = 0;
  *(undefined1 *)local_38 = 1;
LAB_00a1e758:
  *(undefined1 *)(param_1 + 0x14) = 1;
  FUN_00aa13c0(param_1[1]);
  *(undefined1 *)(param_1 + 2) = 1;
  return uVar15;
}

