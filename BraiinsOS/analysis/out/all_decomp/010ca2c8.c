// FUN_010ca2c8 @ 010ca2c8 size=528 calls_out=7 calls_in=0
// strings: 

void FUN_010ca2c8(int param_1,int *param_2)

{
  undefined1 uVar1;
  bool bVar2;
  int *piVar3;
  int *piVar4;
  code *pcVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  undefined4 *puVar9;
  int iVar10;
  int *piVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  undefined4 local_1c;
  
  uVar1 = *(undefined1 *)((int)param_2 + 0xd);
  iVar10 = param_2[3];
  if (*param_2 == 0) {
    uVar12 = 0;
    piVar4 = param_2;
  }
  else {
    uVar13 = (**(code **)(param_2[1] + 0xc))();
    uVar12 = (undefined4)uVar13;
    piVar4 = (int *)((ulonglong)uVar13 >> 0x20);
  }
  piVar6 = (int *)param_2[2];
  do {
    iVar7 = *piVar6;
    bVar2 = (bool)hasExclusiveAccess(piVar6);
  } while (!bVar2);
  *piVar6 = iVar7 + 1;
  if (iVar7 < 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)software_udf(0xfdee,0x10ca4d4);
    (*pcVar5)();
  }
  iVar7 = *(int *)(param_1 + 8);
  local_1c = CONCAT31(CONCAT21(local_1c._2_2_,uVar1),(char)iVar10);
  piVar8 = (int *)(iVar7 + 0x98);
  if (*piVar8 == 0) {
    bVar2 = (bool)hasExclusiveAccess(piVar8);
    if (bVar2) {
      *piVar8 = 8;
      DataMemoryBarrier(0xb);
      goto LAB_010ca364;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  FUN_0127e06c(piVar8);
LAB_010ca364:
  FUN_0128236c(piVar8);
  FUN_0128236c((uint)piVar8 | 1);
  puVar9 = *(undefined4 **)(iVar7 + 0xa0);
  iVar10 = *(int *)(iVar7 + 0x9c);
  *(undefined4 *)(iVar7 + 0x9c) = uVar12;
  piVar3 = (int *)(iVar7 + 0xac);
  piVar11 = *(int **)(iVar7 + 0xa4);
  uVar12 = *(undefined4 *)(iVar7 + 0xa8);
  *(int **)(iVar7 + 0xa0) = piVar4;
  *(int **)(iVar7 + 0xa4) = piVar6;
  *(undefined4 *)(iVar7 + 0xa8) = local_1c;
  DataMemoryBarrier(0xb);
  do {
    bVar2 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar2);
  *piVar3 = *piVar3 + 2;
  FUN_01282570(piVar8);
  FUN_01282570((uint)piVar8 | 1);
  if (*piVar8 == 8) {
    DataMemoryBarrier(0xb);
    do {
      bVar2 = (bool)hasExclusiveAccess(piVar8);
      if (bVar2) {
        *piVar8 = 0;
        goto LAB_010ca408;
      }
    } while (*piVar8 == 8);
  }
  ClearExclusiveLocal();
  FUN_0127db4c(piVar8);
LAB_010ca408:
  FUN_0163b708(iVar7 + 8);
  FUN_0163b708(iVar7 + 0x18);
  FUN_0163b708(iVar7 + 0x28);
  FUN_0163b708(iVar7 + 0x38);
  FUN_0163b708(iVar7 + 0x48);
  FUN_0163b708(iVar7 + 0x58);
  FUN_0163b708(iVar7 + 0x68);
  FUN_0163b708(iVar7 + 0x78);
  local_1c._1_1_ = (char)((uint)uVar12 >> 8);
  if (local_1c._1_1_ != '\x02') {
    if (iVar10 != 0) {
      pcVar5 = (code *)*puVar9;
      if (pcVar5 != (code *)0x0) {
        (*pcVar5)(iVar10);
      }
      if (puVar9[1] != 0) {
        thunk_FUN_016d3fb4(iVar10);
      }
    }
    DataMemoryBarrier(0xb);
    do {
      iVar10 = *piVar11;
      bVar2 = (bool)hasExclusiveAccess(piVar11);
    } while (!bVar2);
    *piVar11 = iVar10 + -1;
    if (iVar10 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00784894(piVar11);
      return;
    }
  }
  return;
}

