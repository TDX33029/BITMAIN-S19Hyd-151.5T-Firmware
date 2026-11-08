// FUN_01576e50 @ 01576e50 size=1596 calls_out=12 calls_in=1
// strings: No CA certificates were loaded from the systemNoRootAnchors

void FUN_01576e50(undefined4 *param_1,int *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  undefined4 *puVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  int *piVar9;
  int *piVar10;
  uint *puVar11;
  int iVar12;
  uint uVar13;
  int *piVar14;
  uint uVar15;
  uint *puVar16;
  int *piVar17;
  int local_c4;
  int local_ac;
  int local_a8;
  int local_a4;
  int local_a0;
  int local_98;
  uint *local_94;
  int local_90;
  uint local_8c;
  int *local_88;
  int local_84;
  uint *local_80;
  uint *local_7c;
  int local_78;
  uint *local_74;
  int local_70;
  uint local_6c;
  int *local_68;
  int *local_64;
  uint local_60;
  int local_5c;
  int *local_58;
  int *local_54;
  int *local_50;
  int *local_48;
  int *local_44;
  uint local_40;
  int *local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  local_c4 = 4;
  local_a0 = 0;
  local_a4 = 4;
  local_ac = 0;
  local_a8 = 0;
  FUN_0156faf0(&local_98);
  local_78 = local_98;
  local_7c = local_94;
  puVar8 = local_94 + local_90 * 3;
  local_80 = local_94;
  local_74 = puVar8;
  if (local_90 != 0) {
    local_ac = 0;
    local_c4 = 4;
    puVar11 = local_94;
    do {
      puVar16 = puVar11 + 3;
      uVar6 = *puVar11;
      if (uVar6 == 0x80000001) goto LAB_0157713c;
      uVar15 = puVar11[1];
      FUN_016cfa90(&local_70,uVar15,puVar11[2]);
      piVar5 = local_50;
      piVar9 = local_54;
      piVar17 = local_58;
      iVar12 = local_5c;
      uVar13 = local_60;
      piVar14 = local_64;
      piVar10 = local_68;
      uVar3 = local_6c;
      if (local_70 == 1) {
        uVar3 = 4;
        if ((int)local_68 < 0) {
          uVar3 = (uint)local_68 ^ 0x80000000;
        }
        if (uVar3 == 0x1b) {
          piVar14 = local_54 + 1;
          for (piVar10 = local_50; piVar5 = piVar9, piVar10 != (int *)0x0;
              piVar10 = (int *)((int)piVar10 + -1)) {
            if (piVar14[-1] != 0) {
              thunk_FUN_016d3fb4(*piVar14);
            }
            piVar14 = piVar14 + 3;
          }
        }
        else {
          if (uVar3 != 4) goto joined_r0x0157710c;
          if (((char)local_5c == '\0') && (((uint)local_58 & 0x7fffffff) != 0)) {
            thunk_FUN_016d3fb4(local_54);
          }
          piVar9 = piVar14 + 1;
          while( true ) {
            piVar5 = piVar14;
            piVar17 = piVar10;
            if (uVar13 == 0) break;
            if (piVar9[-1] != 0) {
              thunk_FUN_016d3fb4(*piVar9);
            }
            piVar9 = piVar9 + 3;
            uVar13 = uVar13 - 1;
          }
        }
        if (piVar17 != (int *)0x0) goto LAB_0157711c;
      }
      else {
        FUN_01575480(&local_48,(uint)&local_70 | 4);
        if (local_ac == local_a8) {
          FUN_0154e368(&local_a8);
          local_c4 = local_a4;
        }
        iVar7 = local_ac + 1;
        puVar4 = (undefined4 *)(local_c4 + local_ac * 0x24);
        *puVar4 = local_48;
        puVar4[1] = local_44;
        puVar4[2] = local_40;
        puVar4[3] = local_3c;
        puVar4[4] = local_38;
        puVar4[5] = uStack_34;
        puVar4[6] = uStack_30;
        puVar4[7] = uStack_2c;
        puVar4[8] = uStack_28;
        local_a0 = iVar7;
        if ((uVar3 & 0x7fffffff) != 0) {
          thunk_FUN_016d3fb4(piVar10);
        }
        if ((uVar13 & 0x7fffffff) != 0) {
          thunk_FUN_016d3fb4(iVar12);
        }
        local_ac = iVar7;
        if ((-0x7fffffff < (int)piVar9) && (piVar9 != (int *)0x0)) {
LAB_0157711c:
          thunk_FUN_016d3fb4(piVar5);
        }
      }
joined_r0x0157710c:
      if ((uVar6 & 0x7fffffff) != 0) {
        thunk_FUN_016d3fb4(uVar15);
      }
      puVar11 = puVar16;
    } while (puVar16 != puVar8);
    puVar16 = puVar8;
LAB_0157713c:
    local_7c = puVar16;
  }
  if ((int)puVar8 - (int)local_7c != 0) {
    puVar11 = local_7c + 1;
    uVar6 = (uint)((int)puVar8 - (int)local_7c) / 0xc;
    do {
      if ((puVar11[-1] & 0x7fffffff) != 0) {
        thunk_FUN_016d3fb4(*puVar11);
      }
      puVar11 = puVar11 + 3;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  if (local_98 != 0) {
    thunk_FUN_016d3fb4(local_94);
  }
  local_40 = local_8c;
  local_48 = local_88;
  piVar17 = local_88 + local_84 * 7;
  local_44 = local_88;
  piVar5 = local_88;
  local_3c = piVar17;
  if (local_84 != 0) {
    do {
      local_44 = piVar5 + 7;
      if (*piVar5 == -0x7ffffffe) goto LAB_01577224;
      local_6c = piVar5[1];
      local_68 = (int *)piVar5[2];
      local_64 = (int *)piVar5[3];
      local_60 = piVar5[4];
      local_5c = piVar5[5];
      local_58 = (int *)piVar5[6];
      local_70 = *piVar5;
      FUN_0156f6b8(&local_70);
      piVar10 = piVar5 + 7;
      piVar5 = piVar5 + 7;
    } while (piVar10 != piVar17);
    local_44 = piVar17;
  }
LAB_01577224:
  iVar12 = ((uint)((int)piVar17 - (int)local_44) >> 2) * -0x49249249 + 1;
  piVar5 = local_44;
  while (iVar12 = iVar12 + -1, iVar12 != 0) {
    FUN_0156f6b8(piVar5);
    piVar5 = piVar5 + 7;
  }
  if (local_8c != 0) {
    thunk_FUN_016d3fb4(local_88);
  }
  if (local_ac == 0) {
    iVar12 = thunk_FUN_016d4a50(0x2e);
    if (iVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,0x2e);
    }
    FUN_016dd1aa(iVar12,"No CA certificates were loaded from the systemNoRootAnchors",0x2e);
    *param_1 = 0x80000020;
    param_1[1] = 0x2e;
    param_1[2] = iVar12;
    param_1[3] = 0x2e;
    if (local_a8 != 0) {
      thunk_FUN_016d3fb4(local_c4);
    }
  }
  else {
    local_68 = (int *)local_a8;
    local_64 = (int *)local_a4;
    local_60 = local_a0;
    local_6c = 1;
    local_70 = 1;
    piVar5 = (int *)thunk_FUN_016d4a50(0x14);
    if (piVar5 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0x14);
    }
    *piVar5 = local_70;
    piVar5[1] = local_6c;
    piVar5[2] = (int)local_68;
    piVar5[3] = (int)local_64;
    piVar5[4] = local_60;
    do {
      iVar12 = *param_2;
      bVar2 = (bool)hasExclusiveAccess(param_2);
    } while (!bVar2);
    *param_2 = iVar12 + 1;
    if (iVar12 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x1577490);
      (*pcVar1)();
    }
    local_50 = (int *)CONCAT13(local_50._3_1_,0x10000);
    local_60 = param_2[8];
    local_5c = param_2[9];
    local_58 = (int *)param_2[10];
    local_54 = (int *)param_2[0xb];
    local_50 = (int *)CONCAT22(local_50._2_2_,0x101);
    local_68 = (int *)0x0;
    local_70 = 0;
    local_6c = 4;
    DataMemoryBarrier(0xb);
    do {
      iVar12 = *param_2;
      bVar2 = (bool)hasExclusiveAccess(param_2);
    } while (!bVar2);
    *param_2 = iVar12 + -1;
    local_64 = piVar5;
    if (iVar12 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0156180c(param_2);
    }
    FUN_0152ea64(&local_48,&local_70);
    if (local_48 == (int *)&DAT_0000000d) {
      *param_1 = 0x80000029;
      param_1[1] = local_44;
      DataMemoryBarrier(0xb);
      do {
        iVar12 = *param_2;
        bVar2 = (bool)hasExclusiveAccess(param_2);
      } while (!bVar2);
      *param_2 = iVar12 + -1;
      goto LAB_01577448;
    }
    local_68 = local_48;
    local_64 = local_44;
    local_60 = local_40;
    local_6c = 1;
    local_70 = 1;
    piVar5 = (int *)thunk_FUN_016d4a50(0x14);
    if (piVar5 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0x14);
    }
    *piVar5 = local_70;
    piVar5[1] = local_6c;
    piVar5[2] = (int)local_68;
    piVar5[3] = (int)local_64;
    piVar5[4] = local_60;
    param_1[1] = piVar5;
    param_1[2] = &DAT_018a91cc;
    *param_1 = &DAT_80000028;
  }
  DataMemoryBarrier(0xb);
  do {
    iVar12 = *param_2;
    bVar2 = (bool)hasExclusiveAccess(param_2);
  } while (!bVar2);
  *param_2 = iVar12 + -1;
LAB_01577448:
  if (iVar12 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0156180c(param_2);
  }
  return;
}

