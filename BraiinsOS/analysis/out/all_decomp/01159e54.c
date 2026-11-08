// FUN_01159e54 @ 01159e54 size=536 calls_out=7 calls_in=1
// strings: 

int FUN_01159e54(int *param_1)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int *piVar12;
  uint uVar13;
  int iVar14;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  int local_b4;
  int local_ac;
  undefined4 local_a8 [3];
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined8 uStack_90;
  undefined1 *local_88;
  undefined2 local_84;
  undefined1 local_50;
  int local_4c;
  undefined8 local_38;
  int local_30;
  int local_2c;
  
  uStack_90 = CONCAT44(local_bc,local_c0);
  iVar6 = *param_1 + -0x18;
  iVar8 = param_1[2];
  do {
    iVar9 = iVar8;
    iVar4 = iVar6;
    if (iVar4 + 0x18 == param_1[1]) {
      return 0;
    }
    cVar2 = *(char *)(iVar4 + 0x18);
    *param_1 = iVar4 + 0x30;
    iVar8 = iVar9 + 1;
    if (cVar2 != '\x02') {
      param_1[2] = iVar8;
      break;
    }
    uVar10 = *(uint *)(iVar4 + 0x20);
    uVar11 = *(uint *)(iVar4 + 0x24);
    param_1[2] = iVar8;
    iVar6 = iVar4 + 0x18;
  } while (uVar11 == 0 && (1 < uVar10) <= uVar11);
  piVar12 = (int *)param_1[3];
  piVar5 = (int *)*piVar12;
  do {
    iVar6 = *piVar5;
    bVar3 = (bool)hasExclusiveAccess(piVar5);
  } while (!bVar3);
  *piVar5 = iVar6 + 1;
  if (iVar6 < 0) {
LAB_0115a058:
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x115a058);
    (*pcVar1)();
  }
  iVar8 = *piVar12;
  iVar14 = piVar12[1];
  iVar6 = *(int *)param_1[4];
  if (iVar6 == 0) {
    local_a8[0] = 0;
  }
  else {
    DataMemoryBarrier(0xb);
    if (*(int *)(iVar6 + 0x14) != 0) {
      FUN_011f6248((undefined4 *)(iVar6 + 0xc),iVar6);
    }
    piVar5 = *(int **)(iVar6 + 0xc);
    do {
      iVar7 = *piVar5;
      bVar3 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar3);
    *piVar5 = iVar7 + 1;
    if (iVar7 < 0) goto LAB_0115a058;
    iVar7 = *piVar12;
    uVar13 = piVar12[1];
    local_c4 = *(undefined4 *)(iVar6 + 0x10);
    local_c8 = *(undefined4 *)(iVar6 + 0xc);
    uVar11 = (*(int **)(iVar6 + 4))[1];
    uVar10 = 0;
    if (uVar11 <= uVar13) {
      iVar6 = thunk_FUN_016dd50a(**(int **)(iVar6 + 4) + 8,iVar7 + 8,uVar11,0,local_c4,iVar14);
      uVar10 = uVar11;
      if (iVar6 != 0) {
        uVar10 = 0;
      }
    }
    uStack_90 = FUN_011e1508(iVar7 + 8 + uVar10,uVar13 - uVar10);
    local_cc = 3;
    local_a8[0] = 2;
  }
  local_ac = param_1[5];
  local_b8 = 0x80000001;
  local_b4 = iVar9;
  local_38 = FUN_01238114(&local_b8);
  local_84 = 0x400;
  local_88 = &DAT_80000028;
  local_50 = 6;
  uStack_9c = local_cc;
  local_98 = local_c8;
  uStack_94 = local_c4;
  local_4c = iVar4 + 0x18;
  local_30 = iVar8;
  local_2c = iVar14;
  iVar6 = thunk_FUN_016d4a50(0x80);
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0x80);
  }
  FUN_016dd1aa(iVar6,local_a8,0x80);
  return iVar6;
}

