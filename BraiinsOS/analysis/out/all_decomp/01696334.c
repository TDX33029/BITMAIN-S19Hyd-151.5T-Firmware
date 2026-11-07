// FUN_01696334 @ 01696334 size=1652 calls_out=15 calls_in=2
// strings: 

void FUN_01696334(int *param_1,int *param_2,int *param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7)

{
  byte bVar1;
  char cVar2;
  int *piVar3;
  int *piVar4;
  undefined4 *puVar5;
  int *piVar6;
  int *extraout_r2;
  int *piVar7;
  int iVar8;
  undefined4 extraout_r3;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  bool bVar14;
  undefined8 uVar15;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined1 auStack_c0 [8];
  undefined1 *local_b8;
  undefined1 *local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  int *local_90;
  int *local_88;
  undefined4 local_84;
  int iStack_80;
  int *local_7c;
  byte local_78;
  undefined1 *local_74;
  undefined4 *local_70;
  int *local_6c;
  int local_68;
  int *piStack_64;
  int iStack_60;
  int iStack_5c;
  int local_58;
  int *piStack_54;
  int iStack_50;
  int iStack_4c;
  int *local_48;
  int local_44;
  int iStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  local_cc = param_6;
  local_d0 = param_5;
  local_a0 = 0;
  local_9c = 0;
  local_98 = 0;
  local_94 = 0;
  local_90 = (int *)0x0;
  local_c8 = param_7;
  local_b8 = &DAT_3b9aca00;
  local_a8 = &DAT_3b9aca00;
  do {
    if (*param_2 != 0) {
      ClearExclusiveLocal();
      FUN_015bf680(param_2);
      goto LAB_016963a8;
    }
    bVar14 = (bool)hasExclusiveAccess(param_2);
  } while (!bVar14);
  *param_2 = 1;
  DataMemoryBarrier(0xb);
LAB_016963a8:
  uVar13 = 0;
  if ((DAT_018dd988 & 0x7fffffff) == 0) {
    cVar2 = (char)param_2[1];
  }
  else {
    uVar13 = FUN_015bf3f8();
    uVar13 = uVar13 ^ 1;
    cVar2 = (char)param_2[1];
  }
  bVar1 = (byte)uVar13;
  if (cVar2 != '\0') {
    uVar13 = (uint)local_44 >> 8;
    local_44 = CONCAT31((int3)uVar13,bVar1);
    local_48 = param_2;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_48,&DAT_018ae1f0,&DAT_018ae140);
  }
  iVar9 = param_2[10];
  if (iVar9 != 0) {
    uVar15 = thunk_FUN_016de0ee(0,0x288);
    piVar3 = (int *)((int)uVar15 + (int)((ulonglong)uVar15 >> 0x20));
    if ((char)piVar3[2] == '\0') {
      piVar3 = (int *)FUN_009e3710();
    }
    uVar12 = 0;
    piVar6 = (int *)param_2[9];
    do {
      piVar7 = piVar6 + 3;
      iVar10 = *piVar6;
      if (*(int *)(iVar10 + 8) != *piVar3 || *(int *)(iVar10 + 0xc) != piVar3[1]) {
        piVar4 = (int *)(iVar10 + 0x14);
        if (*piVar4 == 0) {
          DataMemoryBarrier(0xb);
          do {
            bVar14 = (bool)hasExclusiveAccess(piVar4);
            if (bVar14) {
              *piVar4 = piVar6[1];
              DataMemoryBarrier(0xb);
              if (piVar6[2] != 0) {
                DataMemoryBarrier(0xb);
                *(int *)(iVar10 + 0x18) = piVar6[2];
              }
              DataMemoryBarrier(0xb);
              piVar3 = (int *)(*(int *)(iVar10 + 0x10) + 0x18);
              do {
                iVar9 = *piVar3;
                bVar14 = (bool)hasExclusiveAccess(piVar3);
              } while (!bVar14);
              *piVar3 = 1;
              if (iVar9 == -1) {
                FUN_016d6968(0xf0,piVar3,0x81,1);
              }
              uVar11 = param_2[10];
              if (uVar12 < uVar11) {
                puVar5 = (undefined4 *)(param_2[9] + uVar12 * 0xc);
                piVar3 = (int *)*puVar5;
                piVar6 = (int *)puVar5[2];
                FUN_016dd52c(puVar5,puVar5 + 3,(uVar11 + ~uVar12) * 0xc);
                uVar11 = uVar11 - 1;
                param_2[10] = uVar11;
                if (piVar3 != (int *)0x0) {
                  local_90 = piVar6;
                  if (((uVar13 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
                     (iVar9 = FUN_015bf3f8(), iVar9 == 0)) {
                    *(undefined1 *)(param_2 + 1) = 1;
                  }
                  DataMemoryBarrier(0xb);
                  do {
                    iVar9 = *param_2;
                    bVar14 = (bool)hasExclusiveAccess(param_2);
                  } while (!bVar14);
                  *param_2 = 0;
                  if (iVar9 == 2) {
                    FUN_016d6968(0xf0,param_2,0x81,1);
                  }
                  if (local_90 == (int *)0x0) {
                    iVar9 = *param_3;
                    if (iVar9 != -0x7fffffff) {
                      if (iVar9 != -0x80000000 && iVar9 != 0) {
                        thunk_FUN_016d3fb4(param_3[1]);
                      }
                    /* WARNING: Subroutine does not return */
                      FUN_00faa444(&DAT_018ae150);
                    }
                  }
                  else {
                    iVar9 = param_3[1];
                    iVar10 = param_3[2];
                    *local_90 = *param_3;
                    local_90[1] = iVar9;
                    local_90[2] = iVar10;
                    DataMemoryBarrier(0xb);
                    *(undefined1 *)(local_90 + 3) = 1;
                  }
                  *param_1 = 2;
                  DataMemoryBarrier(0xb);
                  do {
                    iVar9 = *piVar3;
                    bVar14 = (bool)hasExclusiveAccess(piVar3);
                  } while (!bVar14);
                  *piVar3 = iVar9 + -1;
                  if (iVar9 == 1) {
                    DataMemoryBarrier(0xb);
                    FUN_00fbaa00(piVar3);
                    return;
                  }
                  return;
                }
              }
                    /* WARNING: Subroutine does not return */
              FUN_00602938(uVar12,uVar11,&DAT_018ae220);
            }
          } while (*piVar4 == 0);
        }
        ClearExclusiveLocal();
        DataMemoryBarrier(0xb);
      }
      uVar12 = uVar12 + 1;
      piVar6 = piVar7;
    } while (piVar7 != (int *)param_2[9] + iVar9 * 3);
  }
  if ((char)param_2[0xe] != '\0') {
    iVar9 = *param_3;
    iVar10 = param_3[1];
    iVar8 = param_3[2];
    *param_1 = 1;
    param_1[1] = iVar9;
    param_1[2] = iVar10;
    param_1[3] = iVar8;
    if (((uVar13 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
       (iVar9 = FUN_015bf3f8(), iVar9 == 0)) {
      *(undefined1 *)(param_2 + 1) = 1;
    }
    DataMemoryBarrier(0xb);
    do {
      iVar9 = *param_2;
      bVar14 = (bool)hasExclusiveAccess(param_2);
    } while (!bVar14);
    *param_2 = 0;
    if (iVar9 == 2) {
      software_interrupt(0);
      FUN_016d3496(param_2,0x81,1,param_5);
      return;
    }
    return;
  }
  iVar9 = param_3[2];
  local_70 = &local_d0;
  local_74 = auStack_c0;
  local_6c = param_2;
  uVar15 = thunk_FUN_016de0ee(local_74,0x280,*param_3,param_3[1]);
  piVar3 = (int *)((int)uVar15 + (int)((ulonglong)uVar15 >> 0x20));
  local_88 = extraout_r2;
  local_84 = extraout_r3;
  iStack_80 = iVar9;
  local_7c = param_2;
  local_78 = bVar1;
  if (((char)piVar3[1] == '\x01') || (piVar3 = (int *)FUN_01698f8c(piVar3), piVar3 != (int *)0x0)) {
    local_48 = local_88;
    iVar9 = *piVar3;
    *piVar3 = 0;
    if (iVar9 == 0) {
      piVar3 = (int *)FUN_00fba86c();
      local_48 = local_88;
      bVar14 = local_88 == (int *)0x80000001;
      local_88 = (int *)0x80000001;
      if (bVar14) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa444(&DAT_018ae130);
      }
      puVar5 = (undefined4 *)((uint)&local_88 | 4);
      local_44 = *puVar5;
      iStack_40 = puVar5[1];
      uStack_3c = puVar5[2];
      local_38 = puVar5[3];
      uStack_34 = puVar5[4];
      uStack_30 = puVar5[5];
      uStack_2c = puVar5[6];
      FUN_01696ae4(&local_68,&local_48,piVar3);
      DataMemoryBarrier(0xb);
      do {
        iVar9 = *piVar3;
        bVar14 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar14);
      *piVar3 = iVar9 + -1;
      if (iVar9 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00fbaa00(piVar3);
      }
    }
    else {
      DataMemoryBarrier(0xb);
      *(undefined4 *)(iVar9 + 0x14) = 0;
      DataMemoryBarrier(0xb);
      *(undefined4 *)(iVar9 + 0x18) = 0;
      local_88 = (int *)0x80000001;
      if (local_48 == (int *)0x80000001) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa444(&DAT_018ae130);
      }
      puVar5 = (undefined4 *)((uint)&local_88 | 4);
      local_44 = *puVar5;
      iStack_40 = puVar5[1];
      uStack_3c = puVar5[2];
      local_38 = puVar5[3];
      uStack_34 = puVar5[4];
      uStack_30 = puVar5[5];
      uStack_2c = puVar5[6];
      FUN_01696ae4(&local_58,&local_48,iVar9);
      piVar6 = (int *)*piVar3;
      *piVar3 = iVar9;
      if (piVar6 != (int *)0x0) {
        DataMemoryBarrier(0xb);
        do {
          iVar9 = *piVar6;
          bVar14 = (bool)hasExclusiveAccess(piVar6);
        } while (!bVar14);
        *piVar6 = iVar9 + -1;
        if (iVar9 == 1) {
          DataMemoryBarrier(0xb);
          FUN_00fbaa00();
        }
      }
      local_68 = local_58;
      piStack_64 = piStack_54;
      iStack_60 = iStack_50;
      iStack_5c = iStack_4c;
    }
    local_48 = piStack_64;
    local_44 = iStack_60;
    iStack_40 = iStack_5c;
    if (local_68 != 3) {
      *param_1 = local_68;
      param_1[1] = (int)piStack_64;
      param_1[2] = iStack_60;
      param_1[3] = iStack_5c;
      goto joined_r0x01696730;
    }
  }
  FUN_01697398(param_1,&local_88);
joined_r0x01696730:
  if (local_88 != (int *)0x80000001) {
    piVar3 = local_7c;
    if (((uint)local_88 & 0x7fffffff) != 0) {
      thunk_FUN_016d3fb4(local_84);
      piVar3 = local_7c;
    }
    local_7c = piVar3;
    if ((((local_78 & 1) == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
       (iVar9 = FUN_015bf3f8(), iVar9 == 0)) {
      *(undefined1 *)(piVar3 + 1) = 1;
    }
    DataMemoryBarrier(0xb);
    do {
      iVar9 = *piVar3;
      bVar14 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar14);
    *piVar3 = 0;
    if (iVar9 == 2) {
      FUN_016d6968(0xf0,piVar3,0x81,1);
      return;
    }
  }
  return;
}

