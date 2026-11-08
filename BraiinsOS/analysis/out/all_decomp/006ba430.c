// FUN_006ba430 @ 006ba430 size=1412 calls_out=8 calls_in=1
// strings: 

void FUN_006ba430(undefined4 *param_1,int *param_2,undefined4 param_3)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  uint *puVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  uint uVar10;
  int iVar11;
  int *piVar12;
  uint uVar13;
  int *local_98;
  undefined1 local_94;
  undefined4 local_24;
  
  if ((char)param_2[2] == '\x01') {
    iVar11 = param_2[1];
    piVar12 = (int *)(iVar11 + 8);
    do {
      if (*piVar12 != 0) {
        ClearExclusiveLocal();
        FUN_015bf680(piVar12);
        goto LAB_006ba474;
      }
      bVar3 = (bool)hasExclusiveAccess(piVar12);
    } while (!bVar3);
    *piVar12 = 1;
    DataMemoryBarrier(0xb);
LAB_006ba474:
    uVar13 = 0;
    if ((DAT_018dd988 & 0x7fffffff) == 0) {
      cVar2 = *(char *)(iVar11 + 0xc);
    }
    else {
      uVar13 = FUN_015bf3f8();
      uVar13 = uVar13 ^ 1;
      cVar2 = *(char *)(iVar11 + 0xc);
    }
    if (cVar2 != '\0') {
      local_94 = (undefined1)uVar13;
      local_98 = piVar12;
                    /* WARNING: Subroutine does not return */
      FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_98,&DAT_01858988,&DAT_018a4b30);
    }
    if (*(char *)(iVar11 + 0x18) != '\0') {
      if (*(int *)(iVar11 + 0x10) != 0) {
        (**(code **)(*(int *)(iVar11 + 0x10) + 0xc))(*(undefined4 *)(iVar11 + 0x14));
      }
      *(undefined4 *)(iVar11 + 0x10) = 0;
      if (((uVar13 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
         (iVar7 = FUN_015bf3f8(), iVar7 == 0)) {
        *(undefined1 *)(iVar11 + 0xc) = 1;
      }
      DataMemoryBarrier(0xb);
      do {
        iVar11 = *piVar12;
        bVar3 = (bool)hasExclusiveAccess(piVar12);
      } while (!bVar3);
      *piVar12 = 0;
      if (iVar11 == 2) {
        FUN_016d6968(0xf0,piVar12,0x81,1);
      }
      FUN_016dd1aa(param_1,param_3,0x74);
      *(undefined1 *)(param_1 + 0x1d) = 0;
      return;
    }
    *(undefined1 *)(param_2 + 2) = 0;
    if (((uVar13 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
       (iVar7 = FUN_015bf3f8(), iVar7 == 0)) {
      *(undefined1 *)(iVar11 + 0xc) = 1;
    }
    DataMemoryBarrier(0xb);
    do {
      iVar11 = *piVar12;
      bVar3 = (bool)hasExclusiveAccess(piVar12);
    } while (!bVar3);
    *piVar12 = 0;
    if (iVar11 == 2) {
      FUN_016d6968(0xf0,piVar12,0x81,1);
    }
  }
  puVar4 = (uint *)(*param_2 + 0x1c);
  DataMemoryBarrier(0xb);
  uVar13 = *(uint *)(*param_2 + 0x1c);
  do {
    if (uVar13 < 0x80000000) {
      FUN_016dd1aa(param_1,param_3,0x74);
      *(undefined1 *)(param_1 + 0x1d) = 1;
      return;
    }
    if ((uVar13 & 0x7fffffff) == 0x7fffffff) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa464(&DAT_0040888b,0x46,&DAT_018a4b40);
    }
    uVar10 = *puVar4;
    if (uVar10 == uVar13) {
      DataMemoryBarrier(0xb);
      do {
        bVar3 = (bool)hasExclusiveAccess(puVar4);
        if (bVar3) {
          *puVar4 = uVar13 + 1 | 0x80000000;
          DataMemoryBarrier(0xb);
          iVar11 = *param_2;
          if ((uVar13 & 0x7fffffff) < *(uint *)(iVar11 + 0x18)) goto LAB_006ba718;
          iVar11 = param_2[1];
          piVar12 = (int *)(iVar11 + 8);
          goto LAB_006ba5fc;
        }
        uVar10 = *puVar4;
      } while (uVar10 == uVar13);
    }
    ClearExclusiveLocal();
    DataMemoryBarrier(0xb);
    uVar13 = uVar10;
  } while( true );
  while (bVar3 = (bool)hasExclusiveAccess(piVar12), !bVar3) {
LAB_006ba5fc:
    if (*piVar12 != 0) {
      ClearExclusiveLocal();
      FUN_015bf680(piVar12);
      goto LAB_006ba618;
    }
  }
  *piVar12 = 1;
  DataMemoryBarrier(0xb);
LAB_006ba618:
  uVar13 = 0;
  if ((DAT_018dd988 & 0x7fffffff) == 0) {
    cVar2 = *(char *)(iVar11 + 0xc);
  }
  else {
    uVar13 = FUN_015bf3f8();
    uVar13 = uVar13 ^ 1;
    cVar2 = *(char *)(iVar11 + 0xc);
  }
  if (cVar2 != '\0') {
    local_94 = (undefined1)uVar13;
    local_98 = piVar12;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_98,&DAT_01858988,&DAT_018a4b50);
  }
  if (*(int *)(iVar11 + 0x10) != 0) {
    (**(code **)(*(int *)(iVar11 + 0x10) + 0xc))(*(undefined4 *)(iVar11 + 0x14));
  }
  *(undefined1 *)(iVar11 + 0x18) = 1;
  *(undefined4 *)(iVar11 + 0x10) = 0;
  if (((uVar13 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) && (iVar7 = FUN_015bf3f8(), iVar7 == 0))
  {
    *(undefined1 *)(iVar11 + 0xc) = 1;
  }
  DataMemoryBarrier(0xb);
  do {
    iVar11 = *piVar12;
    bVar3 = (bool)hasExclusiveAccess(piVar12);
  } while (!bVar3);
  *piVar12 = 0;
  if (iVar11 == 2) {
    FUN_016d6968(0xf0,piVar12,0x81,1);
  }
  piVar12 = (int *)param_2[1];
  do {
    iVar11 = *piVar12;
    bVar3 = (bool)hasExclusiveAccess(piVar12);
  } while (!bVar3);
  *piVar12 = iVar11 + 1;
  if (iVar11 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x6ba974);
    (*pcVar1)();
  }
  iVar7 = *param_2;
  puVar5 = (undefined4 *)thunk_FUN_016d4a50(8);
  if (puVar5 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,8);
  }
  puVar9 = (undefined4 *)(iVar7 + 0x10);
  *puVar5 = 0;
  puVar5[1] = piVar12;
  DataMemoryBarrier(0xb);
  do {
    puVar8 = (undefined4 *)*puVar9;
    bVar3 = (bool)hasExclusiveAccess(puVar9);
  } while (!bVar3);
  *puVar9 = puVar5;
  DataMemoryBarrier(0xb);
  *puVar8 = puVar5;
  DataMemoryBarrier(0xb);
  iVar11 = *param_2;
  *(byte *)(param_2 + 2) = (byte)((uint)*(undefined4 *)(iVar7 + 0x1c) >> 0x1f);
LAB_006ba718:
  FUN_016dd1aa(&local_98,param_3,0x74);
  local_24 = 0;
  iVar7 = thunk_FUN_016d4a50(0x78);
  if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x78);
  }
  FUN_016dd1aa(iVar7,&local_98,0x78);
  piVar12 = (int *)(iVar11 + 8);
  DataMemoryBarrier(0xb);
  do {
    iVar6 = *piVar12;
    bVar3 = (bool)hasExclusiveAccess(piVar12);
  } while (!bVar3);
  *piVar12 = iVar7;
  DataMemoryBarrier(0xb);
  *(int *)(iVar6 + 0x74) = iVar7;
  puVar4 = (uint *)(iVar11 + 0x2c);
  DataMemoryBarrier(0xb);
  do {
    uVar13 = *puVar4;
    bVar3 = (bool)hasExclusiveAccess(puVar4);
  } while (!bVar3);
  *puVar4 = uVar13 | 2;
  DataMemoryBarrier(0xb);
  if (uVar13 == 0) {
    iVar7 = *(int *)(iVar11 + 0x24);
    *(undefined4 *)(iVar11 + 0x24) = 0;
    DataMemoryBarrier(0xb);
    do {
      bVar3 = (bool)hasExclusiveAccess(puVar4);
    } while (!bVar3);
    *puVar4 = *puVar4 & 0xfffffffd;
    if (iVar7 != 0) {
      (**(code **)(iVar7 + 4))(*(undefined4 *)(iVar11 + 0x28));
      *param_1 = 0x80000001;
      return;
    }
  }
  *param_1 = 0x80000001;
  return;
}

