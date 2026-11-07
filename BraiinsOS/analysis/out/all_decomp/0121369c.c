// FUN_0121369c @ 0121369c size=1756 calls_out=14 calls_in=1
// strings: 

int FUN_0121369c(int param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  code *pcVar1;
  bool bVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  int *piVar9;
  uint uVar10;
  uint uVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  int *piVar14;
  undefined4 *puVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 *puVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined4 *local_e0;
  undefined4 *puStack_dc;
  undefined4 *puStack_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 *local_c0;
  undefined4 *local_bc;
  undefined4 *local_b8;
  undefined4 *local_b4;
  undefined4 *local_b0;
  undefined4 *local_ac;
  undefined4 *local_a8;
  undefined4 *local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 *local_8c;
  undefined4 *local_88;
  int local_84;
  undefined1 local_58;
  undefined4 local_54;
  undefined8 local_40;
  int *local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  piVar9 = *(int **)(param_1 + 4);
  puVar3 = *(undefined4 **)(param_1 + 8);
  piVar14 = piVar9;
  puVar18 = (undefined4 *)0x0;
  do {
    while( true ) {
      puVar12 = puVar18;
      local_c0 = puVar3;
      if (piVar14 == piVar9 + (int)puVar3 * 5) {
        piVar14 = *(int **)(param_1 + 0xc);
        do {
          iVar4 = *piVar14;
          bVar2 = (bool)hasExclusiveAccess(piVar14);
        } while (!bVar2);
        *piVar14 = iVar4 + 1;
        if (-1 < iVar4) {
          uVar5 = *(undefined4 *)(param_1 + 0x10);
          if (param_4 == 0) {
            local_b0 = (undefined4 *)0x0;
          }
          else {
            DataMemoryBarrier(0xb);
            if (*(int *)(param_4 + 0x14) != 0) {
              FUN_011f6248((undefined4 *)(param_4 + 0xc),param_4);
            }
            piVar6 = *(int **)(param_4 + 0xc);
            do {
              iVar4 = *piVar6;
              bVar2 = (bool)hasExclusiveAccess(piVar6);
            } while (!bVar2);
            *piVar6 = iVar4 + 1;
            if (iVar4 < 0) goto LAB_01213d7c;
            uVar16 = *(undefined4 *)(param_4 + 0xc);
            uVar7 = 0;
            uVar17 = *(undefined4 *)(param_4 + 0x10);
            uVar10 = *(uint *)(param_1 + 0x10);
            uVar11 = (*(int **)(param_4 + 4))[1];
            if (uVar11 <= uVar10) {
              iVar4 = thunk_FUN_016dd50a(**(int **)(param_4 + 4) + 8,piVar14 + 2,uVar11);
              uVar7 = uVar11;
              if (iVar4 != 0) {
                uVar7 = 0;
              }
            }
            local_98 = FUN_011e1508((int)(piVar14 + 2) + uVar7,uVar10 - uVar7);
            local_a4 = (undefined4 *)0x3;
            local_b0 = (undefined4 *)0x2;
            local_a0 = uVar16;
            local_9c = uVar17;
          }
          uVar19 = FUN_01238114(param_3);
          if (puVar3 == (undefined4 *)0x0) {
            puVar3 = (undefined4 *)0x0;
            local_bc = (undefined4 *)&DAT_00000004;
            local_c0 = (undefined4 *)0x0;
          }
          else {
            puVar18 = (undefined4 *)thunk_FUN_016d4a50((int)puVar3 * 0xc);
            if (puVar18 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_00600af4(4,(int)puVar3 * 0xc);
            }
            puVar12 = (undefined4 *)0x0;
            local_bc = puVar18;
            do {
              uVar20 = FUN_011cf8a8(piVar9,param_2,param_3,param_4,param_5);
              FUN_01158f58(&local_e0,(int)uVar20,(int)((ulonglong)uVar20 >> 0x20));
              piVar9 = piVar9 + 5;
              puVar12 = (undefined4 *)((int)puVar12 + 1);
              *puVar18 = local_e0;
              puVar18[1] = puStack_dc;
              puVar18[2] = puStack_d8;
              puVar18 = puVar18 + 3;
            } while (puVar3 != puVar12);
          }
          local_e0 = local_c0;
          puStack_dc = local_bc;
          puStack_d8 = puVar3;
          iVar4 = FUN_011f1290(piVar14,uVar5,&local_b0,(int)uVar19,(int)((ulonglong)uVar19 >> 0x20),
                               param_2,&local_e0);
          return iVar4;
        }
        goto LAB_01213d7c;
      }
      piVar6 = piVar14 + 5;
      iVar4 = *piVar14;
      uVar7 = 1;
      puVar18 = (undefined4 *)((int)puVar12 + 1);
      if ((int)*(uint *)(iVar4 + 8) < 0) {
        uVar7 = *(uint *)(iVar4 + 8) ^ 0x80000000;
      }
      piVar14 = piVar6;
      if (uVar7 == 0) break;
      if (uVar7 == 1) {
        iVar8 = *(int *)(iVar4 + 0x10);
        puVar15 = *(undefined4 **)(iVar4 + 0xc);
        if (iVar8 == 1) {
          iVar4 = (**(code **)(puVar15[1] + 0x10))(*puVar15,param_2,param_5);
          if (iVar4 != 0) goto LAB_012137b4;
        }
        else {
          if (iVar8 == 0) goto LAB_012137b4;
          puVar13 = puVar15 + iVar8 * 8;
          while( true ) {
            iVar4 = (**(code **)(puVar15[1] + 0x10))(*puVar15,param_2,param_5);
            if (iVar4 == 0) break;
            puVar15 = puVar15 + 8;
            if (puVar15 == puVar13) goto LAB_012137b4;
          }
        }
      }
      else {
        puVar15 = *(undefined4 **)(iVar4 + 0x10);
        iVar4 = *(int *)(iVar4 + 0x14) << 5;
        do {
          if (iVar4 == 0) goto LAB_012137b4;
          iVar8 = (**(code **)(puVar15[1] + 0x10))(*puVar15,param_2,param_5);
          iVar4 = iVar4 + -0x20;
          puVar15 = puVar15 + 8;
        } while (iVar8 != 0);
      }
    }
  } while (*(int *)(iVar4 + 0xc) != 0);
LAB_012137b4:
  iVar4 = 0;
  if (puVar12 < puVar3) {
    piVar14 = piVar9 + (int)puVar12 * 5;
    do {
      while( true ) {
        piVar14 = piVar14 + 5;
        if (piVar14 == piVar9 + (int)puVar3 * 5) {
          return 0;
        }
        iVar4 = *piVar14;
        uVar7 = 1;
        if ((int)*(uint *)(iVar4 + 8) < 0) {
          uVar7 = *(uint *)(iVar4 + 8) ^ 0x80000000;
        }
        if (uVar7 == 0) break;
        if (uVar7 == 1) {
          puVar18 = *(undefined4 **)(iVar4 + 0xc);
          iVar4 = *(int *)(iVar4 + 0x10);
          if (iVar4 == 1) {
            iVar4 = (**(code **)(puVar18[1] + 0x10))(*puVar18,param_2,param_5);
            if (iVar4 != 0) goto LAB_012138a4;
          }
          else {
            if (iVar4 == 0) goto LAB_012138a4;
            puVar12 = puVar18 + iVar4 * 8;
            while (iVar4 = (**(code **)(puVar18[1] + 0x10))(*puVar18,param_2,param_5), iVar4 != 0) {
              puVar18 = puVar18 + 8;
              if (puVar18 == puVar12) goto LAB_012138a4;
            }
          }
        }
        else {
          puVar18 = *(undefined4 **)(iVar4 + 0x10);
          iVar4 = *(int *)(iVar4 + 0x14) << 5;
          do {
            if (iVar4 == 0) goto LAB_012138a4;
            iVar8 = (**(code **)(puVar18[1] + 0x10))(*puVar18,param_2,param_5);
            iVar4 = iVar4 + -0x20;
            puVar18 = puVar18 + 8;
          } while (iVar8 != 0);
        }
      }
    } while (*(int *)(iVar4 + 0xc) != 0);
LAB_012138a4:
    piVar14 = *(int **)(param_1 + 0xc);
    do {
      iVar4 = *piVar14;
      bVar2 = (bool)hasExclusiveAccess(piVar14);
    } while (!bVar2);
    *piVar14 = iVar4 + 1;
    if (iVar4 < 0) {
LAB_01213d7c:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x1213d7c);
      (*pcVar1)();
    }
    uVar5 = *(undefined4 *)(param_1 + 0x10);
    if (param_4 == 0) {
      local_e0 = (undefined4 *)0x0;
    }
    else {
      DataMemoryBarrier(0xb);
      if (*(int *)(param_4 + 0x14) != 0) {
        FUN_011f6248((undefined4 *)(param_4 + 0xc),param_4);
      }
      piVar6 = *(int **)(param_4 + 0xc);
      do {
        iVar4 = *piVar6;
        bVar2 = (bool)hasExclusiveAccess(piVar6);
      } while (!bVar2);
      *piVar6 = iVar4 + 1;
      if (iVar4 < 0) goto LAB_01213d7c;
      uVar17 = *(undefined4 *)(param_4 + 0xc);
      uVar16 = *(undefined4 *)(param_4 + 0x10);
      uVar7 = 0;
      uVar11 = *(uint *)(param_1 + 0x10);
      uVar10 = (*(int **)(param_4 + 4))[1];
      if (uVar10 <= uVar11) {
        iVar4 = thunk_FUN_016dd50a(**(int **)(param_4 + 4) + 8,piVar14 + 2,uVar10);
        uVar7 = uVar10;
        if (iVar4 != 0) {
          uVar7 = 0;
        }
      }
      local_c8 = FUN_011e1508((int)(piVar14 + 2) + uVar7,uVar11 - uVar7);
      local_d4 = 3;
      local_e0 = (undefined4 *)0x2;
      local_d0 = uVar17;
      local_cc = uVar16;
    }
    uVar19 = FUN_01238114(param_3);
    uVar7 = (int)puVar3 * 0xc;
    puVar18 = (undefined4 *)thunk_FUN_016d4a50(uVar7);
    if (puVar18 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(4,uVar7);
    }
    puVar15 = (undefined4 *)0x0;
    puVar12 = puVar18;
    local_bc = puVar18;
    do {
      uVar20 = FUN_011cf8a8(piVar9,param_2,param_3,param_4,param_5);
      FUN_01158f58(&local_b0,(int)uVar20,(int)((ulonglong)uVar20 >> 0x20));
      puVar15 = (undefined4 *)((int)puVar15 + 1);
      piVar9 = piVar9 + 5;
      *puVar12 = local_b0;
      puVar12[1] = local_ac;
      puVar12[2] = local_a8;
      puVar12 = puVar12 + 3;
    } while (puVar3 != puVar15);
    uVar10 = 0;
    local_c0 = puVar18;
    local_bc = puVar18;
    local_b8 = puVar3;
    local_b4 = puVar18 + (int)puVar3 * 3;
    do {
      puVar12 = (undefined4 *)((int)puVar18 + uVar10);
      local_a8 = (undefined4 *)*puVar12;
      local_b0 = (undefined4 *)puVar12[1];
      local_a4 = local_b0 + puVar12[2];
      local_ac = local_b0;
      FUN_011cf188(&local_30,&local_b0);
      uVar10 = uVar10 + 0xc;
      *puVar12 = local_30;
      puVar12[1] = uStack_2c;
      puVar12[2] = uStack_28;
    } while (uVar7 != uVar10);
    iVar4 = (uVar10 >> 2) * -0x55555555;
    local_bc = puVar18 + (int)puVar3 * 3;
    local_b0 = puVar18;
    local_ac = (undefined4 *)iVar4;
    local_a8 = puVar3;
    FUN_0124fb38(&local_c0);
    FUN_0124fe58(&local_c0);
    local_b0 = local_e0;
    local_ac = puStack_dc;
    local_a8 = puStack_d8;
    local_a4 = (undefined4 *)local_d4;
    local_a0 = local_d0;
    local_9c = local_cc;
    local_58 = 6;
    local_90 = 0x80000023;
    local_8c = puVar3;
    local_88 = puVar18;
    local_84 = iVar4;
    local_54 = param_2;
    local_38 = piVar14;
    local_34 = uVar5;
    local_40 = uVar19;
    local_98 = local_c8;
    iVar4 = thunk_FUN_016d4a50(0x80);
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(8,0x80);
    }
    FUN_016dd1aa(iVar4,&local_b0,0x80);
  }
  return iVar4;
}

