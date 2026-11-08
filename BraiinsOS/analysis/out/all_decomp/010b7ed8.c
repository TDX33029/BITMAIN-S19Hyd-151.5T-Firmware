// FUN_010b7ed8 @ 010b7ed8 size=948 calls_out=8 calls_in=4
// strings: 

void FUN_010b7ed8(undefined4 *param_1,int *param_2,undefined4 *param_3)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  uint uVar11;
  undefined4 *puVar12;
  undefined4 uVar13;
  int *piVar14;
  int iVar15;
  undefined4 uVar16;
  int *local_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  
  iVar5 = FUN_010b7c7c(param_2,0);
  if (iVar5 != 0) {
    uVar8 = *param_3;
    uVar10 = param_3[1];
    uVar13 = param_3[2];
    uVar16 = param_3[3];
    *(undefined1 *)(param_1 + 4) = 0;
    *param_1 = uVar8;
    param_1[1] = uVar10;
    param_1[2] = uVar13;
    param_1[3] = uVar16;
    return;
  }
  uVar8 = *param_3;
  uVar10 = param_3[1];
  uVar13 = param_3[2];
  uVar16 = param_3[3];
  puVar6 = (uint *)(*param_2 + 0x1c);
  uVar11 = *(uint *)(*param_2 + 0x1c);
  DataMemoryBarrier(0xb);
  do {
    if (uVar11 < 0x80000000) {
      *param_1 = uVar8;
      param_1[1] = uVar10;
      param_1[2] = uVar13;
      param_1[3] = uVar16;
      *(undefined1 *)(param_1 + 4) = 1;
      return;
    }
    if ((uVar11 & 0x7fffffff) == 0x7fffffff) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa464(&DAT_0040888b,0x46,&DAT_018a4b40);
    }
    uVar4 = *puVar6;
    if (*puVar6 == uVar11) {
      DataMemoryBarrier(0xb);
      do {
        bVar3 = (bool)hasExclusiveAccess(puVar6);
        if (bVar3) {
          *puVar6 = uVar11 + 1 | 0x80000000;
          DataMemoryBarrier(0xb);
          iVar5 = *param_2;
          if ((uVar11 & 0x7fffffff) < *(uint *)(iVar5 + 0x18)) goto LAB_010b80d8;
          iVar5 = param_2[1];
          piVar14 = (int *)(iVar5 + 8);
          goto LAB_010b7fc8;
        }
        uVar4 = *puVar6;
      } while (*puVar6 == uVar11);
    }
    uVar11 = uVar4;
    ClearExclusiveLocal();
    DataMemoryBarrier(0xb);
  } while( true );
  while (bVar3 = (bool)hasExclusiveAccess(piVar14), !bVar3) {
LAB_010b7fc8:
    if (*piVar14 != 0) {
      ClearExclusiveLocal();
      FUN_015bf680(piVar14);
      goto LAB_010b7fe4;
    }
  }
  *piVar14 = 1;
  DataMemoryBarrier(0xb);
LAB_010b7fe4:
  uVar11 = 0;
  if ((DAT_018dd988 & 0x7fffffff) == 0) {
    cVar2 = *(char *)(iVar5 + 0xc);
  }
  else {
    uVar11 = FUN_015bf3f8();
    uVar11 = uVar11 ^ 1;
    cVar2 = *(char *)(iVar5 + 0xc);
  }
  if (cVar2 != '\0') {
    uVar4 = (uint)local_3c >> 8;
    local_3c = CONCAT31((int3)uVar4,(char)uVar11);
    local_40 = piVar14;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_40,&DAT_01884858,&DAT_018a4b50);
  }
  if (*(int *)(iVar5 + 0x10) != 0) {
    (**(code **)(*(int *)(iVar5 + 0x10) + 0xc))(*(undefined4 *)(iVar5 + 0x14));
  }
  *(undefined1 *)(iVar5 + 0x18) = 1;
  *(undefined4 *)(iVar5 + 0x10) = 0;
  if (((uVar11 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
     (iVar15 = FUN_015bf3f8(), iVar15 == 0)) {
    *(undefined1 *)(iVar5 + 0xc) = 1;
  }
  DataMemoryBarrier(0xb);
  do {
    iVar5 = *piVar14;
    bVar3 = (bool)hasExclusiveAccess(piVar14);
  } while (!bVar3);
  *piVar14 = 0;
  if (iVar5 == 2) {
    FUN_016d6968(0xf0,piVar14,0x81,1);
  }
  piVar14 = (int *)param_2[1];
  do {
    iVar5 = *piVar14;
    bVar3 = (bool)hasExclusiveAccess(piVar14);
  } while (!bVar3);
  *piVar14 = iVar5 + 1;
  if (iVar5 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x10b8280);
    (*pcVar1)();
  }
  iVar15 = *param_2;
  puVar7 = (undefined4 *)thunk_FUN_016d4a50(8);
  if (puVar7 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,8);
  }
  *puVar7 = 0;
  puVar7[1] = piVar14;
  puVar12 = (undefined4 *)(iVar15 + 0x10);
  DataMemoryBarrier(0xb);
  do {
    puVar9 = (undefined4 *)*puVar12;
    bVar3 = (bool)hasExclusiveAccess(puVar12);
  } while (!bVar3);
  *puVar12 = puVar7;
  DataMemoryBarrier(0xb);
  *puVar9 = puVar7;
  DataMemoryBarrier(0xb);
  iVar5 = *param_2;
  *(byte *)(param_2 + 2) = (byte)((uint)*(undefined4 *)(iVar15 + 0x1c) >> 0x1f);
LAB_010b80d8:
  local_2c = 0;
  local_40 = (int *)0x1;
  local_3c = uVar8;
  uStack_38 = uVar10;
  uStack_34 = uVar13;
  uStack_30 = uVar16;
  puVar7 = (undefined4 *)thunk_FUN_016d4a50(0x18);
  if (puVar7 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x18);
  }
  *puVar7 = local_40;
  puVar7[1] = local_3c;
  puVar7[2] = uStack_38;
  puVar7[3] = uStack_34;
  puVar7[4] = uStack_30;
  puVar7[5] = local_2c;
  piVar14 = (int *)(iVar5 + 8);
  DataMemoryBarrier(0xb);
  do {
    iVar15 = *piVar14;
    bVar3 = (bool)hasExclusiveAccess(piVar14);
  } while (!bVar3);
  *piVar14 = (int)puVar7;
  DataMemoryBarrier(0xb);
  *(undefined4 **)(iVar15 + 0x14) = puVar7;
  puVar6 = (uint *)(iVar5 + 0x2c);
  DataMemoryBarrier(0xb);
  do {
    uVar11 = *puVar6;
    bVar3 = (bool)hasExclusiveAccess(puVar6);
  } while (!bVar3);
  *puVar6 = uVar11 | 2;
  DataMemoryBarrier(0xb);
  if (uVar11 == 0) {
    iVar15 = *(int *)(iVar5 + 0x24);
    *(undefined4 *)(iVar5 + 0x24) = 0;
    DataMemoryBarrier(0xb);
    do {
      bVar3 = (bool)hasExclusiveAccess(puVar6);
    } while (!bVar3);
    *puVar6 = *puVar6 & 0xfffffffd;
    if (iVar15 != 0) {
      (**(code **)(iVar15 + 4))(*(undefined4 *)(iVar5 + 0x28));
      *(undefined1 *)(param_1 + 4) = 2;
      return;
    }
  }
  *(undefined1 *)(param_1 + 4) = 2;
  return;
}

