// FUN_006b9970 @ 006b9970 size=972 calls_out=8 calls_in=3
// strings: 

void FUN_006b9970(undefined4 *param_1,int *param_2,undefined4 *param_3)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined4 *puVar11;
  undefined4 uVar12;
  int iVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  int *piVar16;
  undefined4 uVar17;
  int *local_2c;
  undefined1 local_28;
  
  iVar5 = FUN_006b9714(param_2,0);
  if (iVar5 != 0) {
    uVar9 = param_3[1];
    uVar12 = param_3[2];
    uVar14 = param_3[3];
    uVar15 = param_3[4];
    *param_1 = *param_3;
    param_1[1] = uVar9;
    param_1[2] = uVar12;
    param_1[3] = uVar14;
    param_1[4] = uVar15;
    *(undefined1 *)(param_1 + 5) = 0;
    return;
  }
  uVar17 = *param_3;
  uVar9 = param_3[2];
  uVar12 = param_3[3];
  uVar14 = param_3[4];
  uVar15 = param_3[1];
  puVar6 = (uint *)(*param_2 + 0x1c);
  uVar10 = *(uint *)(*param_2 + 0x1c);
  DataMemoryBarrier(0xb);
  do {
    if (uVar10 < 0x80000000) {
      *param_1 = uVar17;
      param_1[1] = uVar15;
      param_1[2] = uVar9;
      param_1[3] = uVar12;
      param_1[4] = uVar14;
      *(undefined1 *)(param_1 + 5) = 1;
      return;
    }
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
          iVar5 = *param_2;
          if ((uVar10 & 0x7fffffff) < *(uint *)(iVar5 + 0x18)) goto LAB_006b9b88;
          iVar5 = param_2[1];
          piVar16 = (int *)(iVar5 + 8);
          goto LAB_006b9a70;
        }
        uVar4 = *puVar6;
      } while (*puVar6 == uVar10);
    }
    uVar10 = uVar4;
    ClearExclusiveLocal();
    DataMemoryBarrier(0xb);
  } while( true );
  while (bVar3 = (bool)hasExclusiveAccess(piVar16), !bVar3) {
LAB_006b9a70:
    if (*piVar16 != 0) {
      ClearExclusiveLocal();
      FUN_015bf680(piVar16);
      goto LAB_006b9a8c;
    }
  }
  *piVar16 = 1;
  DataMemoryBarrier(0xb);
LAB_006b9a8c:
  uVar10 = 0;
  if ((DAT_018dd988 & 0x7fffffff) == 0) {
    cVar2 = *(char *)(iVar5 + 0xc);
  }
  else {
    uVar10 = FUN_015bf3f8();
    uVar10 = uVar10 ^ 1;
    cVar2 = *(char *)(iVar5 + 0xc);
  }
  if (cVar2 != '\0') {
    local_28 = (undefined1)uVar10;
    local_2c = piVar16;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_2c,&DAT_01858988,&DAT_018a4b50);
  }
  if (*(int *)(iVar5 + 0x10) != 0) {
    (**(code **)(*(int *)(iVar5 + 0x10) + 0xc))(*(undefined4 *)(iVar5 + 0x14));
  }
  *(undefined1 *)(iVar5 + 0x18) = 1;
  *(undefined4 *)(iVar5 + 0x10) = 0;
  if (((uVar10 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
     (iVar13 = FUN_015bf3f8(), iVar13 == 0)) {
    *(undefined1 *)(iVar5 + 0xc) = 1;
  }
  DataMemoryBarrier(0xb);
  do {
    iVar5 = *piVar16;
    bVar3 = (bool)hasExclusiveAccess(piVar16);
  } while (!bVar3);
  *piVar16 = 0;
  if (iVar5 == 2) {
    FUN_016d6968(0xf0,piVar16,0x81,1);
  }
  piVar16 = (int *)param_2[1];
  do {
    iVar5 = *piVar16;
    bVar3 = (bool)hasExclusiveAccess(piVar16);
  } while (!bVar3);
  *piVar16 = iVar5 + 1;
  if (iVar5 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x6b9d30);
    (*pcVar1)();
  }
  iVar13 = *param_2;
  puVar7 = (undefined4 *)thunk_FUN_016d4a50(8);
  if (puVar7 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,8);
  }
  *puVar7 = 0;
  puVar7[1] = piVar16;
  puVar11 = (undefined4 *)(iVar13 + 0x10);
  DataMemoryBarrier(0xb);
  do {
    puVar8 = (undefined4 *)*puVar11;
    bVar3 = (bool)hasExclusiveAccess(puVar11);
  } while (!bVar3);
  *puVar11 = puVar7;
  DataMemoryBarrier(0xb);
  *puVar8 = puVar7;
  DataMemoryBarrier(0xb);
  iVar5 = *param_2;
  *(byte *)(param_2 + 2) = (byte)((uint)*(undefined4 *)(iVar13 + 0x1c) >> 0x1f);
LAB_006b9b88:
  puVar7 = (undefined4 *)thunk_FUN_016d4a50(0x18);
  if (puVar7 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x18);
  }
  *puVar7 = uVar17;
  puVar7[1] = uVar15;
  puVar7[2] = uVar9;
  puVar7[3] = uVar12;
  puVar7[4] = uVar14;
  puVar7[5] = 0;
  piVar16 = (int *)(iVar5 + 8);
  DataMemoryBarrier(0xb);
  do {
    iVar13 = *piVar16;
    bVar3 = (bool)hasExclusiveAccess(piVar16);
  } while (!bVar3);
  *piVar16 = (int)puVar7;
  DataMemoryBarrier(0xb);
  *(undefined4 **)(iVar13 + 0x14) = puVar7;
  puVar6 = (uint *)(iVar5 + 0x2c);
  DataMemoryBarrier(0xb);
  do {
    uVar10 = *puVar6;
    bVar3 = (bool)hasExclusiveAccess(puVar6);
  } while (!bVar3);
  *puVar6 = uVar10 | 2;
  DataMemoryBarrier(0xb);
  if (uVar10 == 0) {
    iVar13 = *(int *)(iVar5 + 0x24);
    *(undefined4 *)(iVar5 + 0x24) = 0;
    DataMemoryBarrier(0xb);
    do {
      bVar3 = (bool)hasExclusiveAccess(puVar6);
    } while (!bVar3);
    *puVar6 = *puVar6 & 0xfffffffd;
    if (iVar13 != 0) {
      (**(code **)(iVar13 + 4))(*(undefined4 *)(iVar5 + 0x28));
      *param_1 = 0x80000000;
      return;
    }
  }
  *param_1 = 0x80000000;
  return;
}

