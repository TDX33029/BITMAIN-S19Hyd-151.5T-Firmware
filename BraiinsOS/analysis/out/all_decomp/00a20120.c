// FUN_00a20120 @ 00a20120 size=1392 calls_out=10 calls_in=2
// strings: 

void FUN_00a20120(undefined4 *param_1)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  uint *puVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  uint *puVar11;
  undefined4 uVar12;
  uint uVar13;
  int *piVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  undefined4 uVar17;
  undefined1 uVar18;
  undefined4 uVar19;
  uint local_50;
  undefined1 *puStack_4c;
  undefined1 *puStack_48;
  uint uStack_44;
  uint local_40;
  undefined1 *local_3c;
  undefined1 *local_38;
  uint local_34;
  uint local_30;
  uint uStack_2c;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_1 + 0xc)) {
  case 0:
    *(undefined1 *)((int)param_1 + 0x31) = 1;
    uVar7 = *param_1;
    uVar12 = param_1[1];
    uVar17 = param_1[2];
    uVar19 = param_1[3];
    piVar14 = *(int **)param_1[10];
    if (piVar14 != (int *)0x0) {
      iVar9 = piVar14[5];
      piVar8 = piVar14 + 5;
      DataMemoryBarrier(0xb);
      while( true ) {
        if (iVar9 == 0x3fffffff) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa464(&DAT_00408941,0x35,&DAT_0187bdf8);
        }
        iVar10 = *piVar8;
        if (*piVar8 == iVar9) break;
LAB_00a20180:
        iVar9 = iVar10;
        ClearExclusiveLocal();
        DataMemoryBarrier(0xb);
      }
      DataMemoryBarrier(0xb);
LAB_00a201b4:
      bVar3 = (bool)hasExclusiveAccess(piVar8);
      if (!bVar3) goto code_r0x00a201c0;
      *piVar8 = iVar9 + 1;
      DataMemoryBarrier(0xb);
      do {
        iVar9 = *piVar14;
        bVar3 = (bool)hasExclusiveAccess(piVar14);
      } while (!bVar3);
      *piVar14 = iVar9 + 1;
      if (iVar9 < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xfdee,0xa20694);
        (*pcVar1)();
      }
    }
    param_1[0xb] = piVar14;
    *(undefined1 *)((int)param_1 + 0x31) = 0;
    param_1[4] = uVar7;
    param_1[5] = uVar12;
    param_1[6] = uVar17;
    param_1[7] = uVar19;
    param_1[8] = param_1 + 0xb;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_01875f68);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_01875f68);
  }
  puVar11 = param_1 + 4;
  if (*puVar11 == 0x80000014) goto LAB_00a204f8;
  uVar18 = 1;
  bVar3 = false;
  iVar9 = *(int *)param_1[8];
  if ((iVar9 != 0) && (DataMemoryBarrier(0xb), 0x7fffffff < *(uint *)(iVar9 + 0x10))) {
    local_50 = *puVar11;
    *puVar11 = 0x80000014;
    if (local_50 == 0x80000014) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb74b8(&DAT_004090e8,0x1c,&DAT_018a5da0);
    }
    iVar9 = *(int *)param_1[8];
    puStack_4c = (undefined1 *)param_1[5];
    puStack_48 = (undefined1 *)param_1[6];
    uStack_44 = param_1[7];
    if (iVar9 != 0) {
      uVar13 = *(uint *)(iVar9 + 0x10);
      puVar5 = (uint *)(iVar9 + 0x10);
      DataMemoryBarrier(0xb);
      while (0x7fffffff < uVar13) {
        if ((~uVar13 & 0x7fffffff) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa464(&DAT_0040888b,0x46,&DAT_0187b670);
        }
        uVar4 = *puVar5;
        if (*puVar5 == uVar13) {
          DataMemoryBarrier(0xb);
LAB_00a202e4:
          bVar2 = (bool)hasExclusiveAccess(puVar5);
          if (!bVar2) goto code_r0x00a202f0;
          *puVar5 = uVar13 + 1 | 0x80000000;
          DataMemoryBarrier(0xb);
          local_30 = 0;
          local_40 = local_50;
          local_3c = puStack_4c;
          local_38 = puStack_48;
          local_34 = uStack_44;
          puVar5 = (uint *)thunk_FUN_016d4a50(0x18);
          if (puVar5 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600874(8,0x18);
          }
          *puVar5 = local_40;
          puVar5[1] = (uint)local_3c;
          puVar5[2] = (uint)local_38;
          puVar5[3] = local_34;
          puVar5[4] = local_30;
          puVar5[5] = uStack_2c;
          piVar14 = (int *)(iVar9 + 8);
          DataMemoryBarrier(0xb);
          do {
            iVar10 = *piVar14;
            bVar3 = (bool)hasExclusiveAccess(piVar14);
          } while (!bVar3);
          *piVar14 = (int)puVar5;
          DataMemoryBarrier(0xb);
          *(uint **)(iVar10 + 0x10) = puVar5;
          puVar5 = (uint *)(iVar9 + 0x20);
          DataMemoryBarrier(0xb);
          do {
            uVar13 = *puVar5;
            bVar3 = (bool)hasExclusiveAccess(puVar5);
          } while (!bVar3);
          *puVar5 = uVar13 | 2;
          uVar18 = 2;
          bVar3 = true;
          DataMemoryBarrier(0xb);
          if (uVar13 == 0) {
            iVar10 = *(int *)(iVar9 + 0x18);
            *(undefined4 *)(iVar9 + 0x18) = 0;
            DataMemoryBarrier(0xb);
            do {
              bVar2 = (bool)hasExclusiveAccess(puVar5);
            } while (!bVar2);
            *puVar5 = *puVar5 & 0xfffffffd;
            if (iVar10 != 0) {
              (**(code **)(iVar10 + 4))(*(undefined4 *)(iVar9 + 0x1c));
            }
          }
          goto LAB_00a204e0;
        }
LAB_00a202a0:
        uVar13 = uVar4;
        ClearExclusiveLocal();
        DataMemoryBarrier(0xb);
      }
      if (local_50 == 0x80000014) {
        uVar18 = 2;
        bVar3 = true;
        goto LAB_00a204e0;
      }
    }
    puVar6 = (undefined4 *)((uint)&local_50 | 4);
    local_30 = CONCAT31(local_30._1_3_,1);
    puVar15 = (undefined1 *)*puVar6;
    local_38 = (undefined1 *)puVar6[1];
    local_34 = puVar6[2];
    local_40 = local_50;
    local_3c = puVar15;
    uVar13 = 3;
    if ((int)local_50 < 0) {
      uVar13 = local_50 ^ 0x80000000;
    }
    puVar5 = &local_40;
    puVar16 = local_38;
    if (uVar13 == 2) {
      for (; local_34 != 0; local_34 = local_34 - 1) {
        *puVar16 = 0;
        puVar16 = puVar16 + 1;
      }
      puVar5 = (uint *)((uint)puVar5 | 4);
      local_34 = 0;
      puVar16 = local_38;
      for (; puVar15 != (undefined1 *)0x0; puVar15 = puVar15 + -1) {
        *puVar16 = 0;
        puVar16 = puVar16 + 1;
      }
LAB_00a204c8:
      if (*puVar5 != 0) {
        thunk_FUN_016d3fb4(puVar5[1]);
      }
    }
    else if (uVar13 == 3) {
      if (local_38 != (undefined1 *)0x0) {
        puVar16 = puVar15;
        do {
          *puVar16 = 0;
          local_38 = local_38 + -1;
          puVar16 = puVar16 + 1;
        } while (local_38 != (undefined1 *)0x0);
      }
      local_38 = (undefined1 *)0x0;
      for (uVar13 = local_50; uVar13 != 0; uVar13 = uVar13 - 1) {
        *puVar15 = 0;
        puVar15 = puVar15 + 1;
      }
      goto LAB_00a204c8;
    }
    uVar18 = 1;
  }
LAB_00a204e0:
  if (*puVar11 != 0x80000014) {
    FUN_00a07488(puVar11);
  }
  if (!bVar3) {
    local_40 = CONCAT31(local_40._1_3_,uVar18);
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_00358382,0x17,&local_40,&DAT_0186bb04,&DAT_01875f78);
  }
LAB_00a204f8:
  iVar9 = param_1[0xb];
  if (iVar9 != 0) {
    piVar14 = (int *)(iVar9 + 0x14);
    DataMemoryBarrier(0xb);
    do {
      iVar10 = *piVar14;
      bVar3 = (bool)hasExclusiveAccess(piVar14);
    } while (!bVar3);
    *piVar14 = iVar10 + -1;
    DataMemoryBarrier(0xb);
    if (iVar10 == 1) {
      DataMemoryBarrier(0xb);
      if (0x7fffffff < *(uint *)(iVar9 + 0x10)) {
        puVar11 = (uint *)(iVar9 + 0x10);
        DataMemoryBarrier(0xb);
        do {
          bVar3 = (bool)hasExclusiveAccess(puVar11);
        } while (!bVar3);
        *puVar11 = *puVar11 & 0x7fffffff;
        DataMemoryBarrier(0xb);
      }
      puVar11 = (uint *)(iVar9 + 0x20);
      DataMemoryBarrier(0xb);
      do {
        uVar13 = *puVar11;
        bVar3 = (bool)hasExclusiveAccess(puVar11);
      } while (!bVar3);
      *puVar11 = uVar13 | 2;
      DataMemoryBarrier(0xb);
      if (uVar13 == 0) {
        iVar10 = *(int *)(iVar9 + 0x18);
        *(undefined4 *)(iVar9 + 0x18) = 0;
        DataMemoryBarrier(0xb);
        do {
          bVar3 = (bool)hasExclusiveAccess(puVar11);
        } while (!bVar3);
        *puVar11 = *puVar11 & 0xfffffffd;
        if (iVar10 != 0) {
          (**(code **)(iVar10 + 4))(*(undefined4 *)(iVar9 + 0x1c));
        }
      }
    }
    piVar14 = (int *)param_1[0xb];
    DataMemoryBarrier(0xb);
    do {
      iVar9 = *piVar14;
      bVar3 = (bool)hasExclusiveAccess(piVar14);
    } while (!bVar3);
    *piVar14 = iVar9 + -1;
    if (iVar9 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00f36f34(param_1[0xb]);
    }
  }
  *(undefined1 *)((int)param_1 + 0x31) = 0;
  *(undefined1 *)(param_1 + 0xc) = 1;
  return;
code_r0x00a201c0:
  iVar10 = *piVar8;
  if (*piVar8 != iVar9) goto LAB_00a20180;
  goto LAB_00a201b4;
code_r0x00a202f0:
  uVar4 = *puVar5;
  if (*puVar5 != uVar13) goto LAB_00a202a0;
  goto LAB_00a202e4;
}

