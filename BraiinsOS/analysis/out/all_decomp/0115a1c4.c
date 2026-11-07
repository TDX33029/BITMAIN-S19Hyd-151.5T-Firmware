// FUN_0115a1c4 @ 0115a1c4 size=496 calls_out=7 calls_in=1
// strings: 

int FUN_0115a1c4(undefined4 *param_1)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  char *pcVar4;
  int *piVar5;
  char *pcVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int *piVar13;
  uint uVar14;
  int iVar15;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  int local_b4;
  undefined4 local_ac;
  undefined4 local_a8 [3];
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined8 uStack_90;
  undefined1 *local_88;
  undefined2 local_84;
  undefined1 local_50;
  char *local_4c;
  undefined8 local_38;
  int local_30;
  int local_2c;
  
  uStack_90 = CONCAT44(local_bc,local_c0);
  iVar11 = param_1[2] + -1;
  pcVar4 = (char *)*param_1;
  do {
    pcVar6 = pcVar4;
    if (pcVar6 == (char *)param_1[1]) {
      return 0;
    }
    iVar9 = iVar11 + 2;
    cVar2 = *pcVar6;
    iVar11 = iVar11 + 1;
    *param_1 = pcVar6 + 0x18;
    param_1[2] = iVar9;
    pcVar4 = pcVar6 + 0x18;
  } while (cVar2 == '\x02');
  piVar13 = (int *)param_1[3];
  piVar5 = (int *)*piVar13;
  do {
    iVar9 = *piVar5;
    bVar3 = (bool)hasExclusiveAccess(piVar5);
  } while (!bVar3);
  *piVar5 = iVar9 + 1;
  if (iVar9 < 0) {
LAB_0115a3a0:
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x115a3a0);
    (*pcVar1)();
  }
  iVar12 = *piVar13;
  iVar15 = piVar13[1];
  iVar9 = *(int *)param_1[4];
  if (iVar9 == 0) {
    local_a8[0] = 0;
  }
  else {
    DataMemoryBarrier(0xb);
    if (*(int *)(iVar9 + 0x14) != 0) {
      FUN_011f6248((undefined4 *)(iVar9 + 0xc),iVar9);
    }
    piVar5 = *(int **)(iVar9 + 0xc);
    do {
      iVar7 = *piVar5;
      bVar3 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar3);
    *piVar5 = iVar7 + 1;
    if (iVar7 < 0) goto LAB_0115a3a0;
    iVar7 = *piVar13;
    uVar14 = piVar13[1];
    local_c4 = *(undefined4 *)(iVar9 + 0x10);
    local_c8 = *(undefined4 *)(iVar9 + 0xc);
    uVar10 = (*(int **)(iVar9 + 4))[1];
    uVar8 = 0;
    if (uVar10 <= uVar14) {
      iVar9 = thunk_FUN_016dd50a(**(int **)(iVar9 + 4) + 8,iVar7 + 8,uVar10,0,local_c4,iVar15);
      uVar8 = uVar10;
      if (iVar9 != 0) {
        uVar8 = 0;
      }
    }
    uStack_90 = FUN_011e1508(iVar7 + 8 + uVar8,uVar14 - uVar8);
    local_cc = 3;
    local_a8[0] = 2;
  }
  local_ac = param_1[5];
  local_b8 = 0x80000001;
  local_b4 = iVar11;
  local_38 = FUN_01238114(&local_b8);
  local_84 = 0x1000;
  local_88 = &DAT_80000028;
  local_50 = 6;
  uStack_9c = local_cc;
  local_98 = local_c8;
  uStack_94 = local_c4;
  local_4c = pcVar6;
  local_30 = iVar12;
  local_2c = iVar15;
  iVar11 = thunk_FUN_016d4a50(0x80);
  if (iVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0x80);
  }
  FUN_016dd1aa(iVar11,local_a8,0x80);
  return iVar11;
}

