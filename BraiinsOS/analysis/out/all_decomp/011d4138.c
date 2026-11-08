// FUN_011d4138 @ 011d4138 size=1100 calls_out=7 calls_in=2
// strings: 

int FUN_011d4138(uint *param_1,char *param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  bool bVar15;
  undefined8 uVar16;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8 [3];
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined1 local_50;
  char *local_4c;
  undefined8 local_38;
  int *local_30;
  uint local_2c;
  
  uVar16 = CONCAT44(local_ac,local_b0);
  if (*param_2 != '\x04') {
    return 0;
  }
  local_4c = param_2;
  if (*(int *)(param_2 + 0xc) != 0) {
    iVar10 = *(int *)(param_2 + 8);
    uVar12 = 0;
    iVar2 = iVar10 + *(int *)(param_2 + 0xc) * 0x18;
    uVar14 = param_1[2];
    uVar3 = *param_1;
    uVar13 = 0;
    uVar4 = param_1[1];
    do {
      uVar5 = 1;
      if ((int)*(uint *)(uVar14 + 8) < 0) {
        uVar5 = *(uint *)(uVar14 + 8) ^ 0x80000000;
      }
      if (uVar5 == 0) {
        if ((*(int *)(uVar14 + 0xc) == 0) ||
           (iVar11 = (**(code **)(*(int *)(uVar14 + 0x10) + 0x10))
                               (*(int *)(uVar14 + 0xc),iVar10,param_5), iVar11 != 0)) {
LAB_011d41ac:
          bVar15 = 0xfffffffe < uVar13;
          uVar13 = uVar13 + 1;
          uVar12 = uVar12 + bVar15;
          if (uVar4 <= uVar12 && (uint)(uVar13 <= uVar3) <= uVar4 - uVar12) {
            piVar9 = (int *)param_1[3];
            do {
              iVar2 = *piVar9;
              bVar15 = (bool)hasExclusiveAccess(piVar9);
            } while (!bVar15);
            *piVar9 = iVar2 + 1;
            if (iVar2 < 0) goto LAB_011d4564;
            uVar3 = param_1[4];
            if (param_4 == 0) {
              local_a8[0] = 0;
            }
            else {
              DataMemoryBarrier(0xb);
              if (*(int *)(param_4 + 0x14) != 0) {
                FUN_011f6248((undefined4 *)(param_4 + 0xc),param_4);
              }
              piVar7 = *(int **)(param_4 + 0xc);
              do {
                iVar2 = *piVar7;
                bVar15 = (bool)hasExclusiveAccess(piVar7);
              } while (!bVar15);
              *piVar7 = iVar2 + 1;
              if (iVar2 < 0) goto LAB_011d4564;
              local_b8 = *(undefined4 *)(param_4 + 0xc);
              local_b4 = *(undefined4 *)(param_4 + 0x10);
              uVar13 = param_1[4];
              uVar4 = 0;
              uVar12 = (*(int **)(param_4 + 4))[1];
              if (uVar12 <= uVar13) {
                iVar2 = thunk_FUN_016dd50a(**(int **)(param_4 + 4) + 8,piVar9 + 2,uVar12);
                uVar4 = uVar12;
                if (iVar2 != 0) {
                  uVar4 = 0;
                }
              }
              uVar16 = FUN_011e1508((int)(piVar9 + 2) + uVar4,uVar13 - uVar4);
              local_bc = 3;
              local_a8[0] = 2;
            }
            local_38 = FUN_01238114(param_3);
            local_88 = 0x8000000f;
            local_50 = 6;
            uStack_9c = local_bc;
            local_98 = local_b8;
            uStack_94 = local_b4;
            local_30 = piVar9;
            local_2c = uVar3;
            uStack_90 = uVar16;
            iVar2 = thunk_FUN_016d4a50(0x80);
            if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00600874(8,0x80);
            }
            goto LAB_011d453c;
          }
        }
      }
      else if (uVar5 == 1) {
        puVar8 = *(undefined4 **)(uVar14 + 0xc);
        iVar11 = *(int *)(uVar14 + 0x10) << 5;
        do {
          if (iVar11 == 0) goto LAB_011d41ac;
          iVar6 = (**(code **)(puVar8[1] + 0x10))(*puVar8,iVar10,param_5);
          iVar11 = iVar11 + -0x20;
          puVar8 = puVar8 + 8;
        } while (iVar6 != 0);
      }
      else {
        puVar8 = *(undefined4 **)(uVar14 + 0x10);
        iVar11 = *(int *)(uVar14 + 0x14) << 5;
        do {
          if (iVar11 == 0) goto LAB_011d41ac;
          iVar6 = (**(code **)(puVar8[1] + 0x10))(*puVar8,iVar10,param_5);
          iVar11 = iVar11 + -0x20;
          puVar8 = puVar8 + 8;
        } while (iVar6 != 0);
      }
      iVar10 = iVar10 + 0x18;
    } while (iVar10 != iVar2);
    if (uVar13 != 0 || uVar12 != 0) {
      return 0;
    }
  }
  piVar9 = (int *)param_1[3];
  do {
    iVar2 = *piVar9;
    bVar15 = (bool)hasExclusiveAccess(piVar9);
  } while (!bVar15);
  *piVar9 = iVar2 + 1;
  if (iVar2 < 0) {
LAB_011d4564:
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x11d4564);
    (*pcVar1)();
  }
  uVar3 = param_1[4];
  if (param_4 == 0) {
    local_a8[0] = 0;
  }
  else {
    DataMemoryBarrier(0xb);
    if (*(int *)(param_4 + 0x14) != 0) {
      FUN_011f6248((undefined4 *)(param_4 + 0xc),param_4);
    }
    piVar7 = *(int **)(param_4 + 0xc);
    do {
      iVar2 = *piVar7;
      bVar15 = (bool)hasExclusiveAccess(piVar7);
    } while (!bVar15);
    *piVar7 = iVar2 + 1;
    if (iVar2 < 0) goto LAB_011d4564;
    uVar13 = param_1[4];
    uVar4 = 0;
    local_b8 = *(undefined4 *)(param_4 + 0xc);
    local_b4 = *(undefined4 *)(param_4 + 0x10);
    uVar12 = (*(int **)(param_4 + 4))[1];
    if (uVar12 <= uVar13) {
      iVar2 = thunk_FUN_016dd50a(**(int **)(param_4 + 4) + 8,piVar9 + 2,uVar12);
      uVar4 = uVar12;
      if (iVar2 != 0) {
        uVar4 = 0;
      }
    }
    uVar16 = FUN_011e1508((int)(piVar9 + 2) + uVar4,uVar13 - uVar4);
    local_bc = 3;
    local_a8[0] = 2;
  }
  local_38 = FUN_01238114(param_3);
  local_88 = 0x8000000f;
  local_50 = 6;
  uStack_9c = local_bc;
  local_98 = local_b8;
  uStack_94 = local_b4;
  local_30 = piVar9;
  local_2c = uVar3;
  uStack_90 = uVar16;
  iVar2 = thunk_FUN_016d4a50(0x80);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0x80);
  }
LAB_011d453c:
  FUN_016dd1aa(iVar2,local_a8,0x80);
  return iVar2;
}

