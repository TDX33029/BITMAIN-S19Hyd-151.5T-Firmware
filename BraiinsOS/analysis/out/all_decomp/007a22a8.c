// FUN_007a22a8 @ 007a22a8 size=1460 calls_out=8 calls_in=1
// strings: 

void FUN_007a22a8(undefined4 *param_1,int *param_2,undefined4 *param_3)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int iVar11;
  undefined1 uVar12;
  int *piVar13;
  uint uVar14;
  undefined4 local_74;
  int *local_70;
  undefined4 local_6c;
  int local_68;
  undefined *puStack_64;
  undefined4 uStack_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  local_6c = 1;
  local_70 = (int *)0x1;
  local_68 = *param_3;
  puStack_64 = (undefined *)param_3[1];
  uStack_60 = param_3[2];
  local_5c = param_3[3];
  uStack_58 = param_3[4];
  local_54 = param_3[5];
  uStack_50 = param_3[6];
  uStack_4c = param_3[7];
  uStack_48 = param_3[8];
  uStack_44 = param_3[9];
  local_40 = param_3[10];
  uStack_3c = param_3[0xb];
  uStack_38 = param_3[0xc];
  uStack_34 = param_3[0xd];
  uStack_30 = param_3[0xe];
  uStack_2c = param_3[0xf];
  iVar5 = thunk_FUN_016d4a50(0x48);
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0x48);
  }
  FUN_016dd1aa(iVar5,&local_70,0x48);
  if (*(byte *)(param_2 + 2) != 2) {
    if ((*(byte *)(param_2 + 2) & 1) != 0) {
      iVar11 = param_2[1];
      piVar13 = (int *)(iVar11 + 8);
      do {
        if (*piVar13 != 0) {
          ClearExclusiveLocal();
          FUN_015bf680(piVar13);
          goto LAB_007a238c;
        }
        bVar3 = (bool)hasExclusiveAccess(piVar13);
      } while (!bVar3);
      *piVar13 = 1;
      DataMemoryBarrier(0xb);
LAB_007a238c:
      uVar14 = 0;
      if ((DAT_018dd988 & 0x7fffffff) == 0) {
        cVar2 = *(char *)(iVar11 + 0xc);
      }
      else {
        uVar14 = FUN_015bf3f8();
        uVar14 = uVar14 ^ 1;
        cVar2 = *(char *)(iVar11 + 0xc);
      }
      if (cVar2 != '\0') {
        local_6c._1_3_ = (undefined3)((uint)local_6c >> 8);
        local_6c = CONCAT31(local_6c._1_3_,(char)uVar14);
        local_70 = piVar13;
                    /* WARNING: Subroutine does not return */
        FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_70,&DAT_01858988,&DAT_018a4b30);
      }
      if (*(char *)(iVar11 + 0x18) != '\0') {
        if (*(int *)(iVar11 + 0x10) != 0) {
          (**(code **)(*(int *)(iVar11 + 0x10) + 0xc))(*(undefined4 *)(iVar11 + 0x14));
        }
        *(undefined4 *)(iVar11 + 0x10) = 0;
        if (((uVar14 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
           (iVar8 = FUN_015bf3f8(), iVar8 == 0)) {
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
        *param_1 = 0;
        param_1[1] = iVar5;
        param_1[2] = &DAT_01887410;
        param_1[3] = local_74;
        *(undefined1 *)(param_1 + 4) = 0;
        return;
      }
      *(undefined1 *)(param_2 + 2) = 0;
      if (((uVar14 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
         (iVar8 = FUN_015bf3f8(), iVar8 == 0)) {
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
    uVar14 = *(uint *)(*param_2 + 0x1c);
    puVar6 = (uint *)(*param_2 + 0x1c);
    DataMemoryBarrier(0xb);
    while (0x7fffffff < uVar14) {
      if ((uVar14 & 0x7fffffff) == 0x7fffffff) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa464(&DAT_0040888b,0x46,&DAT_018a4b40);
      }
      uVar4 = *puVar6;
      if (*puVar6 == uVar14) {
        DataMemoryBarrier(0xb);
        do {
          bVar3 = (bool)hasExclusiveAccess(puVar6);
          if (bVar3) {
            *puVar6 = uVar14 + 1 | 0x80000000;
            DataMemoryBarrier(0xb);
            iVar11 = *param_2;
            if ((uVar14 & 0x7fffffff) < *(uint *)(iVar11 + 0x18)) goto LAB_007a2620;
            iVar11 = param_2[1];
            piVar13 = (int *)(iVar11 + 8);
            goto LAB_007a2510;
          }
          uVar4 = *puVar6;
        } while (*puVar6 == uVar14);
      }
      uVar14 = uVar4;
      ClearExclusiveLocal();
      DataMemoryBarrier(0xb);
    }
  }
  uVar12 = 1;
  *param_1 = 0;
  param_1[1] = iVar5;
  param_1[2] = &DAT_01887410;
  param_1[3] = local_74;
  goto LAB_007a2350;
  while (bVar3 = (bool)hasExclusiveAccess(piVar13), !bVar3) {
LAB_007a2510:
    if (*piVar13 != 0) {
      ClearExclusiveLocal();
      FUN_015bf680(piVar13);
      goto LAB_007a252c;
    }
  }
  *piVar13 = 1;
  DataMemoryBarrier(0xb);
LAB_007a252c:
  uVar14 = 0;
  if ((DAT_018dd988 & 0x7fffffff) == 0) {
    cVar2 = *(char *)(iVar11 + 0xc);
  }
  else {
    uVar14 = FUN_015bf3f8();
    uVar14 = uVar14 ^ 1;
    cVar2 = *(char *)(iVar11 + 0xc);
  }
  if (cVar2 != '\0') {
    local_6c._1_3_ = (undefined3)((uint)local_6c >> 8);
    local_6c = CONCAT31(local_6c._1_3_,(char)uVar14);
    local_70 = piVar13;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_70,&DAT_01858988,&DAT_018a4b50);
  }
  if (*(int *)(iVar11 + 0x10) != 0) {
    (**(code **)(*(int *)(iVar11 + 0x10) + 0xc))(*(undefined4 *)(iVar11 + 0x14));
  }
  *(undefined1 *)(iVar11 + 0x18) = 1;
  *(undefined4 *)(iVar11 + 0x10) = 0;
  if (((uVar14 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) && (iVar8 = FUN_015bf3f8(), iVar8 == 0))
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
    pcVar1 = (code *)software_udf(0xfdee,0x7a2830);
    (*pcVar1)();
  }
  iVar8 = *param_2;
  puVar7 = (undefined4 *)thunk_FUN_016d4a50(8);
  if (puVar7 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,8);
  }
  puVar10 = (undefined4 *)(iVar8 + 0x10);
  *puVar7 = 0;
  puVar7[1] = piVar13;
  DataMemoryBarrier(0xb);
  do {
    puVar9 = (undefined4 *)*puVar10;
    bVar3 = (bool)hasExclusiveAccess(puVar10);
  } while (!bVar3);
  *puVar10 = puVar7;
  DataMemoryBarrier(0xb);
  *puVar9 = puVar7;
  DataMemoryBarrier(0xb);
  iVar11 = *param_2;
  *(byte *)(param_2 + 2) = (byte)((uint)*(undefined4 *)(iVar8 + 0x1c) >> 0x1f);
LAB_007a2620:
  local_6c = 0;
  puStack_64 = &DAT_01887410;
  uStack_60 = local_74;
  local_5c = 0;
  local_70 = (int *)0x1;
  local_68 = iVar5;
  puVar7 = (undefined4 *)thunk_FUN_016d4a50(0x18);
  if (puVar7 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x18);
  }
  *puVar7 = local_70;
  puVar7[1] = local_6c;
  puVar7[2] = local_68;
  puVar7[3] = puStack_64;
  puVar7[4] = uStack_60;
  puVar7[5] = local_5c;
  piVar13 = (int *)(iVar11 + 8);
  DataMemoryBarrier(0xb);
  do {
    iVar5 = *piVar13;
    bVar3 = (bool)hasExclusiveAccess(piVar13);
  } while (!bVar3);
  *piVar13 = (int)puVar7;
  DataMemoryBarrier(0xb);
  *(undefined4 **)(iVar5 + 0x14) = puVar7;
  puVar6 = (uint *)(iVar11 + 0x2c);
  DataMemoryBarrier(0xb);
  do {
    uVar14 = *puVar6;
    bVar3 = (bool)hasExclusiveAccess(puVar6);
  } while (!bVar3);
  *puVar6 = uVar14 | 2;
  uVar12 = 2;
  DataMemoryBarrier(0xb);
  if (uVar14 == 0) {
    iVar5 = *(int *)(iVar11 + 0x24);
    *(undefined4 *)(iVar11 + 0x24) = 0;
    DataMemoryBarrier(0xb);
    do {
      bVar3 = (bool)hasExclusiveAccess(puVar6);
    } while (!bVar3);
    *puVar6 = *puVar6 & 0xfffffffd;
    if (iVar5 != 0) {
      (**(code **)(iVar5 + 4))(*(undefined4 *)(iVar11 + 0x28));
      *(undefined1 *)(param_1 + 4) = 2;
      return;
    }
  }
LAB_007a2350:
  *(undefined1 *)(param_1 + 4) = uVar12;
  return;
}

