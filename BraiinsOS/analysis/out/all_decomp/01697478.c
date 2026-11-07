// FUN_01697478 @ 01697478 size=1404 calls_out=14 calls_in=1
// strings: 

undefined1
FUN_01697478(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  byte bVar1;
  bool bVar2;
  char cVar3;
  undefined1 uVar4;
  int *piVar5;
  int *piVar6;
  undefined4 *puVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int *piVar12;
  uint uVar13;
  uint uVar14;
  undefined8 uVar15;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  int aiStack_88 [2];
  undefined1 *local_80;
  undefined1 *local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  int local_58;
  int *local_50;
  undefined4 *local_4c;
  int *local_48;
  int *local_44;
  byte local_40;
  undefined2 local_3f;
  undefined1 local_3d;
  int *local_38;
  undefined4 *local_34;
  int *local_30;
  int *local_2c;
  byte local_28;
  undefined2 local_27;
  undefined1 local_25;
  
  local_90 = param_5;
  local_68 = 0;
  local_64 = 0;
  local_60 = 0;
  local_5c = 0;
  local_58 = 0;
  local_80 = &DAT_3b9aca00;
  local_70 = &DAT_3b9aca00;
  do {
    local_98 = param_3;
    local_94 = param_4;
    if (*param_1 != 0) {
      ClearExclusiveLocal();
      FUN_015bf680(param_1);
      goto LAB_016974dc;
    }
    bVar2 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar2);
  *param_1 = 1;
  DataMemoryBarrier(0xb);
LAB_016974dc:
  uVar14 = 0;
  if ((DAT_018dd988 & 0x7fffffff) == 0) {
    cVar3 = (char)param_1[1];
  }
  else {
    uVar14 = FUN_015bf3f8();
    uVar14 = uVar14 ^ 1;
    cVar3 = (char)param_1[1];
  }
  bVar1 = (byte)uVar14;
  if (cVar3 != '\0') {
    uVar14 = (uint)local_34 >> 8;
    local_34 = (undefined4 *)CONCAT31((int3)uVar14,bVar1);
    local_38 = param_1;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_38,&DAT_018ae1f0,&DAT_018ae140);
  }
  iVar9 = param_1[10];
  if (iVar9 != 0) {
    uVar15 = thunk_FUN_016de0ee(0,0x288);
    piVar5 = (int *)((int)uVar15 + (int)((ulonglong)uVar15 >> 0x20));
    if ((char)piVar5[2] == '\0') {
      piVar5 = (int *)FUN_009e3710();
    }
    uVar13 = 0;
    piVar12 = (int *)param_1[9];
    do {
      piVar8 = piVar12 + 3;
      iVar10 = *piVar12;
      if (*(int *)(iVar10 + 8) != *piVar5 || *(int *)(iVar10 + 0xc) != piVar5[1]) {
        piVar6 = (int *)(iVar10 + 0x14);
        if (*piVar6 == 0) {
          DataMemoryBarrier(0xb);
          do {
            bVar2 = (bool)hasExclusiveAccess(piVar6);
            if (bVar2) {
              *piVar6 = piVar12[1];
              DataMemoryBarrier(0xb);
              if (piVar12[2] != 0) {
                DataMemoryBarrier(0xb);
                *(int *)(iVar10 + 0x18) = piVar12[2];
              }
              DataMemoryBarrier(0xb);
              piVar5 = (int *)(*(int *)(iVar10 + 0x10) + 0x18);
              do {
                iVar9 = *piVar5;
                bVar2 = (bool)hasExclusiveAccess(piVar5);
              } while (!bVar2);
              *piVar5 = 1;
              if (iVar9 == -1) {
                FUN_016d6968(0xf0,piVar5,0x81,1);
              }
              uVar11 = param_1[10];
              if (uVar13 < uVar11) {
                puVar7 = (undefined4 *)(param_1[9] + uVar13 * 0xc);
                piVar5 = (int *)*puVar7;
                iVar9 = puVar7[2];
                FUN_016dd52c(puVar7,puVar7 + 3,(uVar11 + ~uVar13) * 0xc);
                uVar11 = uVar11 - 1;
                param_1[10] = uVar11;
                if (piVar5 != (int *)0x0) {
                  local_58 = iVar9;
                  if (((uVar14 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
                     (iVar9 = FUN_015bf3f8(), iVar9 == 0)) {
                    *(undefined1 *)(param_1 + 1) = 1;
                  }
                  DataMemoryBarrier(0xb);
                  do {
                    iVar9 = *param_1;
                    bVar2 = (bool)hasExclusiveAccess(param_1);
                  } while (!bVar2);
                  *param_1 = 0;
                  if (iVar9 == 2) {
                    FUN_016d6968(0xf0,param_1,0x81,1);
                  }
                  if (local_58 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_00faa444(&DAT_018ae150);
                  }
                  *(undefined1 *)(local_58 + 2) = 1;
                  DataMemoryBarrier(0xb);
                  *(undefined1 *)(local_58 + 1) = 1;
                  DataMemoryBarrier(0xb);
                  do {
                    iVar9 = *piVar5;
                    bVar2 = (bool)hasExclusiveAccess(piVar5);
                  } while (!bVar2);
                  *piVar5 = iVar9 + -1;
                  if (iVar9 == 1) {
                    DataMemoryBarrier(0xb);
                    FUN_00fbaa00(piVar5);
                    return 2;
                  }
                  return 2;
                }
              }
                    /* WARNING: Subroutine does not return */
              FUN_00602938(uVar13,uVar11,&DAT_018ae220);
            }
          } while (*piVar6 == 0);
        }
        ClearExclusiveLocal();
        DataMemoryBarrier(0xb);
      }
      uVar13 = uVar13 + 1;
      piVar12 = piVar8;
    } while (piVar8 != (int *)param_1[9] + iVar9 * 3);
  }
  if ((char)param_1[0xe] != '\0') {
    if (((uVar14 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
       (iVar9 = FUN_015bf3f8(), iVar9 == 0)) {
      *(undefined1 *)(param_1 + 1) = 1;
    }
    DataMemoryBarrier(0xb);
    do {
      iVar9 = *param_1;
      bVar2 = (bool)hasExclusiveAccess(param_1);
    } while (!bVar2);
    *param_1 = 0;
    if (iVar9 == 2) {
      FUN_016d6968(0xf0,param_1,0x81,1);
      return 1;
    }
    return 1;
  }
  local_50 = aiStack_88;
  local_4c = &local_98;
  local_48 = param_1;
  local_44 = param_1;
  local_40 = bVar1;
  uVar15 = thunk_FUN_016de0ee(0,0x280);
  piVar5 = (int *)((int)uVar15 + (int)((ulonglong)uVar15 >> 0x20));
  if (((char)piVar5[1] == '\x01') || (piVar5 = (int *)FUN_01698f8c(piVar5), piVar5 != (int *)0x0)) {
    iVar9 = *piVar5;
    *piVar5 = 0;
    local_28 = bVar1;
    if (iVar9 == 0) {
      piVar12 = (int *)FUN_00fba86c();
      local_40 = 2;
      local_38 = aiStack_88;
      local_34 = &local_98;
      local_30 = param_1;
      local_2c = param_1;
      uVar4 = FUN_01697afc(&local_38,piVar12);
      DataMemoryBarrier(0xb);
      do {
        iVar9 = *piVar12;
        bVar2 = (bool)hasExclusiveAccess(piVar12);
      } while (!bVar2);
      *piVar12 = iVar9 + -1;
    }
    else {
      DataMemoryBarrier(0xb);
      *(undefined4 *)(iVar9 + 0x14) = 0;
      DataMemoryBarrier(0xb);
      *(undefined4 *)(iVar9 + 0x18) = 0;
      local_38 = local_50;
      local_34 = local_4c;
      local_30 = local_48;
      local_2c = local_44;
      local_40 = 2;
      local_27 = local_3f;
      local_25 = local_3d;
      uVar4 = FUN_01697afc(&local_38,iVar9);
      piVar12 = (int *)*piVar5;
      *piVar5 = iVar9;
      piVar5 = local_44;
      if (piVar12 == (int *)0x0) goto joined_r0x01697824;
      DataMemoryBarrier(0xb);
      do {
        iVar9 = *piVar12;
        bVar2 = (bool)hasExclusiveAccess(piVar12);
      } while (!bVar2);
      *piVar12 = iVar9 + -1;
    }
    piVar5 = local_44;
    if (iVar9 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00fbaa00(piVar12);
      piVar5 = local_44;
    }
  }
  else {
    uVar4 = FUN_01698234(&local_50);
    piVar5 = local_44;
  }
joined_r0x01697824:
  if (local_40 != 2) {
    local_44 = piVar5;
    if ((((local_40 & 1) == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
       (iVar9 = FUN_015bf3f8(), iVar9 == 0)) {
      *(undefined1 *)(piVar5 + 1) = 1;
    }
    DataMemoryBarrier(0xb);
    do {
      iVar9 = *piVar5;
      bVar2 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar2);
    *piVar5 = 0;
    if (iVar9 == 2) {
      FUN_016d6968(0xf0,piVar5,0x81,1);
      return uVar4;
    }
  }
  return uVar4;
}

