// FUN_006b9e24 @ 006b9e24 size=1356 calls_out=7 calls_in=3
// strings: 

undefined4 FUN_006b9e24(int *param_1)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  undefined4 *puVar4;
  int iVar5;
  uint *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  uint uVar9;
  int *piVar10;
  int iVar11;
  uint uVar12;
  int *local_28;
  undefined1 local_24;
  
  if (*(byte *)(param_1 + 2) == 2) {
    return 1;
  }
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    iVar11 = param_1[1];
    piVar10 = (int *)(iVar11 + 8);
    do {
      if (*piVar10 != 0) {
        ClearExclusiveLocal();
        FUN_015bf680(piVar10);
        goto LAB_006b9e78;
      }
      bVar3 = (bool)hasExclusiveAccess(piVar10);
    } while (!bVar3);
    *piVar10 = 1;
    DataMemoryBarrier(0xb);
LAB_006b9e78:
    uVar12 = 0;
    if ((DAT_018dd988 & 0x7fffffff) == 0) {
      cVar2 = *(char *)(iVar11 + 0xc);
    }
    else {
      uVar12 = FUN_015bf3f8();
      uVar12 = uVar12 ^ 1;
      cVar2 = *(char *)(iVar11 + 0xc);
    }
    if (cVar2 != '\0') {
      local_24 = (undefined1)uVar12;
      local_28 = piVar10;
                    /* WARNING: Subroutine does not return */
      FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_28,&DAT_01858988,&DAT_018a4b30);
    }
    if (*(char *)(iVar11 + 0x18) != '\0') {
      if (*(int *)(iVar11 + 0x10) != 0) {
        (**(code **)(*(int *)(iVar11 + 0x10) + 0xc))(*(undefined4 *)(iVar11 + 0x14));
      }
      *(undefined4 *)(iVar11 + 0x10) = 0;
      if (((uVar12 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
         (iVar5 = FUN_015bf3f8(), iVar5 == 0)) {
        *(undefined1 *)(iVar11 + 0xc) = 1;
      }
      DataMemoryBarrier(0xb);
      do {
        iVar11 = *piVar10;
        bVar3 = (bool)hasExclusiveAccess(piVar10);
      } while (!bVar3);
      *piVar10 = 0;
      if (iVar11 == 2) {
        FUN_016d6968(0xf0,piVar10,0x81,1);
        return 0;
      }
      return 0;
    }
    *(undefined1 *)(param_1 + 2) = 0;
    if (((uVar12 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
       (iVar5 = FUN_015bf3f8(), iVar5 == 0)) {
      *(undefined1 *)(iVar11 + 0xc) = 1;
    }
    DataMemoryBarrier(0xb);
    do {
      iVar11 = *piVar10;
      bVar3 = (bool)hasExclusiveAccess(piVar10);
    } while (!bVar3);
    *piVar10 = 0;
    if (iVar11 == 2) {
      FUN_016d6968(0xf0,piVar10,0x81,1);
    }
  }
  puVar6 = (uint *)(*param_1 + 0x1c);
  DataMemoryBarrier(0xb);
  uVar12 = *(uint *)(*param_1 + 0x1c);
  do {
    if (uVar12 < 0x80000000) {
      return 1;
    }
    if ((uVar12 & 0x7fffffff) == 0x7fffffff) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa464(&DAT_0040888b,0x46,&DAT_018a4b40);
    }
    uVar9 = *puVar6;
    if (uVar9 == uVar12) {
      DataMemoryBarrier(0xb);
      do {
        bVar3 = (bool)hasExclusiveAccess(puVar6);
        if (bVar3) {
          *puVar6 = uVar12 + 1 | 0x80000000;
          DataMemoryBarrier(0xb);
          iVar11 = *param_1;
          if ((uVar12 & 0x7fffffff) < *(uint *)(iVar11 + 0x18)) goto LAB_006ba124;
          iVar11 = param_1[1];
          piVar10 = (int *)(iVar11 + 8);
          goto LAB_006ba004;
        }
        uVar9 = *puVar6;
      } while (uVar9 == uVar12);
    }
    ClearExclusiveLocal();
    DataMemoryBarrier(0xb);
    uVar12 = uVar9;
  } while( true );
  while (bVar3 = (bool)hasExclusiveAccess(piVar10), !bVar3) {
LAB_006ba004:
    if (*piVar10 != 0) {
      ClearExclusiveLocal();
      FUN_015bf680(piVar10);
      goto LAB_006ba020;
    }
  }
  *piVar10 = 1;
  DataMemoryBarrier(0xb);
LAB_006ba020:
  uVar12 = 0;
  if ((DAT_018dd988 & 0x7fffffff) == 0) {
    cVar2 = *(char *)(iVar11 + 0xc);
  }
  else {
    uVar12 = FUN_015bf3f8();
    uVar12 = uVar12 ^ 1;
    cVar2 = *(char *)(iVar11 + 0xc);
  }
  if (cVar2 != '\0') {
    local_24 = (undefined1)uVar12;
    local_28 = piVar10;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_28,&DAT_01858988,&DAT_018a4b50);
  }
  if (*(int *)(iVar11 + 0x10) != 0) {
    (**(code **)(*(int *)(iVar11 + 0x10) + 0xc))(*(undefined4 *)(iVar11 + 0x14));
  }
  *(undefined1 *)(iVar11 + 0x18) = 1;
  *(undefined4 *)(iVar11 + 0x10) = 0;
  if (((uVar12 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) && (iVar5 = FUN_015bf3f8(), iVar5 == 0))
  {
    *(undefined1 *)(iVar11 + 0xc) = 1;
  }
  DataMemoryBarrier(0xb);
  do {
    iVar11 = *piVar10;
    bVar3 = (bool)hasExclusiveAccess(piVar10);
  } while (!bVar3);
  *piVar10 = 0;
  if (iVar11 == 2) {
    FUN_016d6968(0xf0,piVar10,0x81,1);
  }
  piVar10 = (int *)param_1[1];
  do {
    iVar11 = *piVar10;
    bVar3 = (bool)hasExclusiveAccess(piVar10);
  } while (!bVar3);
  *piVar10 = iVar11 + 1;
  if (iVar11 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x6ba320);
    (*pcVar1)();
  }
  iVar5 = *param_1;
  puVar4 = (undefined4 *)thunk_FUN_016d4a50(8);
  if (puVar4 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,8);
  }
  *puVar4 = 0;
  puVar4[1] = piVar10;
  puVar8 = (undefined4 *)(iVar5 + 0x10);
  DataMemoryBarrier(0xb);
  do {
    puVar7 = (undefined4 *)*puVar8;
    bVar3 = (bool)hasExclusiveAccess(puVar8);
  } while (!bVar3);
  *puVar8 = puVar4;
  DataMemoryBarrier(0xb);
  *puVar7 = puVar4;
  DataMemoryBarrier(0xb);
  iVar11 = *param_1;
  *(byte *)(param_1 + 2) = (byte)((uint)*(undefined4 *)(iVar5 + 0x1c) >> 0x1f);
LAB_006ba124:
  puVar4 = (undefined4 *)thunk_FUN_016d4a50(8);
  if (puVar4 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,8);
  }
  puVar8 = (undefined4 *)(iVar11 + 8);
  *(undefined1 *)(puVar4 + 1) = 1;
  *puVar4 = 0;
  DataMemoryBarrier(0xb);
  do {
    puVar7 = (undefined4 *)*puVar8;
    bVar3 = (bool)hasExclusiveAccess(puVar8);
  } while (!bVar3);
  *puVar8 = puVar4;
  DataMemoryBarrier(0xb);
  *puVar7 = puVar4;
  puVar6 = (uint *)(iVar11 + 0x2c);
  DataMemoryBarrier(0xb);
  do {
    uVar12 = *puVar6;
    bVar3 = (bool)hasExclusiveAccess(puVar6);
  } while (!bVar3);
  *puVar6 = uVar12 | 2;
  DataMemoryBarrier(0xb);
  if (uVar12 == 0) {
    iVar5 = *(int *)(iVar11 + 0x24);
    *(undefined4 *)(iVar11 + 0x24) = 0;
    DataMemoryBarrier(0xb);
    do {
      bVar3 = (bool)hasExclusiveAccess(puVar6);
    } while (!bVar3);
    *puVar6 = *puVar6 & 0xfffffffd;
    if (iVar5 != 0) {
      (**(code **)(iVar5 + 4))(*(undefined4 *)(iVar11 + 0x28));
      return 2;
    }
  }
  return 2;
}

