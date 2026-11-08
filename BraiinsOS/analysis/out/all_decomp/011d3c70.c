// FUN_011d3c70 @ 011d3c70 size=704 calls_out=7 calls_in=1
// strings: 

int FUN_011d3c70(int *param_1,char *param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  undefined4 *puVar8;
  uint uVar9;
  int iVar10;
  undefined4 *puVar11;
  int iVar12;
  int *piVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  undefined8 uVar17;
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
  int local_2c;
  
  uVar17 = CONCAT44(local_ac,local_b0);
  if (*param_2 != '\x04') {
    return 0;
  }
  iVar12 = *(int *)(param_2 + 8);
  iVar7 = *(int *)(param_2 + 0xc);
  iVar16 = *param_1;
  iVar5 = iVar12;
  while (iVar5 != iVar12 + iVar7 * 0x18) {
    uVar3 = 1;
    iVar15 = iVar5 + 0x18;
    if ((int)*(uint *)(iVar16 + 8) < 0) {
      uVar3 = *(uint *)(iVar16 + 8) ^ 0x80000000;
    }
    if (uVar3 == 0) {
      iVar5 = iVar15;
      if (*(int *)(iVar16 + 0xc) == 0) {
        return 0;
      }
    }
    else if (uVar3 == 1) {
      puVar8 = *(undefined4 **)(iVar16 + 0xc);
      iVar10 = *(int *)(iVar16 + 0x10);
      if (iVar10 == 1) {
        iVar10 = (**(code **)(puVar8[1] + 0x10))(*puVar8,iVar5,param_5);
        iVar5 = iVar15;
        if (iVar10 != 0) {
          return 0;
        }
      }
      else {
        if (iVar10 == 0) {
          return 0;
        }
        puVar11 = puVar8 + iVar10 * 8;
        while (iVar10 = (**(code **)(puVar8[1] + 0x10))(*puVar8,iVar5,param_5), iVar10 != 0) {
          puVar8 = puVar8 + 8;
          if (puVar8 == puVar11) {
            return 0;
          }
        }
        iVar5 = iVar15;
      }
    }
    else {
      puVar8 = *(undefined4 **)(iVar16 + 0x10);
      iVar10 = *(int *)(iVar16 + 0x14) << 5;
      do {
        if (iVar10 == 0) {
          return 0;
        }
        iVar4 = (**(code **)(puVar8[1] + 0x10))(*puVar8,iVar5,param_5);
        iVar10 = iVar10 + -0x20;
        puVar8 = puVar8 + 8;
      } while (iVar4 != 0);
      iVar5 = iVar15;
    }
  }
  piVar13 = (int *)param_1[1];
  do {
    iVar5 = *piVar13;
    bVar2 = (bool)hasExclusiveAccess(piVar13);
  } while (!bVar2);
  *piVar13 = iVar5 + 1;
  if (iVar5 < 0) {
LAB_011d3f1c:
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x11d3f1c);
    (*pcVar1)();
  }
  iVar5 = param_1[2];
  if (param_4 == 0) {
    local_a8[0] = 0;
  }
  else {
    DataMemoryBarrier(0xb);
    if (*(int *)(param_4 + 0x14) != 0) {
      FUN_011f6248((undefined4 *)(param_4 + 0xc),param_4,0,param_1,param_2);
    }
    piVar6 = *(int **)(param_4 + 0xc);
    do {
      iVar7 = *piVar6;
      bVar2 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar2);
    *piVar6 = iVar7 + 1;
    if (iVar7 < 0) goto LAB_011d3f1c;
    local_b8 = *(undefined4 *)(param_4 + 0xc);
    local_b4 = *(undefined4 *)(param_4 + 0x10);
    uVar9 = param_1[2];
    uVar3 = 0;
    uVar14 = (*(int **)(param_4 + 4))[1];
    if (uVar14 <= uVar9) {
      iVar7 = thunk_FUN_016dd50a(**(int **)(param_4 + 4) + 8,piVar13 + 2,uVar14);
      uVar3 = uVar14;
      if (iVar7 != 0) {
        uVar3 = 0;
      }
    }
    uVar17 = FUN_011e1508((int)(piVar13 + 2) + uVar3,uVar9 - uVar3);
    local_bc = 3;
    local_a8[0] = 2;
  }
  local_38 = FUN_01238114(param_3);
  local_88 = 0x8000000f;
  local_50 = 6;
  uStack_9c = local_bc;
  local_98 = local_b8;
  uStack_94 = local_b4;
  local_4c = param_2;
  local_30 = piVar13;
  local_2c = iVar5;
  uStack_90 = uVar17;
  iVar5 = thunk_FUN_016d4a50(0x80);
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0x80);
  }
  FUN_016dd1aa(iVar5,local_a8,0x80);
  return iVar5;
}

