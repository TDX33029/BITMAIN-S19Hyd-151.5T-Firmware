// FUN_006c7224 @ 006c7224 size=696 calls_out=6 calls_in=0
// strings: 

void FUN_006c7224(uint *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  int *piVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  uint local_ac;
  uint local_a8;
  uint local_a4;
  uint local_a0;
  undefined4 *local_9c;
  uint uStack_98;
  uint local_94;
  uint local_90;
  uint local_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  
  local_9c = &DAT_0056d238;
  uStack_98 = 0;
  local_94 = 0;
  local_90 = 0;
  local_a0 = 0;
  local_a4 = 8;
  local_a8 = 0;
  FUN_006dffd8(&local_58,param_2 + 0xc);
  local_9c = (undefined4 *)local_58;
  uStack_98 = uStack_54;
  local_94 = uStack_50;
  local_90 = uStack_4c;
  uVar8 = *(uint *)(param_2 + 8);
  if (uVar8 == 0) {
    local_a0 = 0;
    iVar3 = *(int *)(param_2 + 4);
  }
  else {
    uVar6 = 0x1ffffff;
    if (uStack_50 + uStack_4c < 0x1ffffff) {
      uVar6 = uStack_50 + uStack_4c;
    }
    uVar11 = 0;
    if ((uVar6 <= uVar8) ||
       (iVar3 = FUN_00702534(&local_a8,0), uVar11 = local_a0, iVar3 != -0x7fffffff)) {
      FUN_00702520(&local_a8,uVar11,uVar8);
    }
    iVar3 = *(int *)(param_2 + 4);
    local_ac = local_a4;
    uVar6 = local_a0;
    if (local_a0 < uVar8) goto LAB_006c7330;
  }
  local_ac = local_a4;
  iVar10 = (local_a0 - uVar8) + 1;
  iVar4 = local_a4 + uVar8 * 0x40;
  local_a0 = uVar8;
  while (iVar10 = iVar10 + -1, iVar10 != 0) {
    FUN_006c42b0(iVar4);
    iVar4 = iVar4 + 0x40;
  }
  uVar6 = uVar8;
LAB_006c7330:
  if (uVar6 == 0) {
    uVar6 = 0;
    if (local_a8 < uVar8) {
      FUN_0132b898(&local_a8,0,uVar8,8,0x40);
      uVar6 = local_a0;
    }
    if (uVar8 == 0) {
      *param_1 = local_a8;
      param_1[1] = local_a4;
      param_1[2] = uVar6;
      param_1[3] = (uint)local_9c;
      param_1[4] = uStack_98;
      param_1[5] = local_94;
      param_1[6] = local_90;
      return;
    }
    piVar7 = *(int **)(iVar3 + 0x30);
    do {
      iVar4 = *piVar7;
      bVar2 = (bool)hasExclusiveAccess(piVar7);
    } while (!bVar2);
    *piVar7 = iVar4 + 1;
    if (-1 < iVar4) {
      iVar4 = 7;
      if (*(int *)(iVar3 + 0x10) < 0) {
        iVar4 = *(int *)(iVar3 + 0x10);
      }
                    /* WARNING: Could not recover jumptable at 0x006c75b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&DAT_006c75bc + *(int *)(&DAT_006c75bc + iVar4 * 4)))();
      return;
    }
  }
  else {
    piVar7 = *(int **)(iVar3 + 0x30);
    *(undefined4 *)(local_ac + 0x38) = *(undefined4 *)(iVar3 + 0x38);
    do {
      iVar4 = *piVar7;
      bVar2 = (bool)hasExclusiveAccess(piVar7);
    } while (!bVar2);
    *piVar7 = iVar4 + 1;
    if (-1 < iVar4) {
      piVar5 = *(int **)(local_ac + 0x30);
      uVar9 = *(undefined4 *)(iVar3 + 0x34);
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar5;
        bVar2 = (bool)hasExclusiveAccess(piVar5);
      } while (!bVar2);
      *piVar5 = iVar4 + -1;
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0070451c(*(undefined4 *)(local_ac + 0x30),*(undefined4 *)(local_ac + 0x34));
      }
      *(int **)(local_ac + 0x30) = piVar7;
      *(undefined4 *)(local_ac + 0x34) = uVar9;
      iVar4 = 7;
      if (*(int *)(iVar3 + 0x10) < 0) {
        iVar4 = *(int *)(iVar3 + 0x10);
      }
                    /* WARNING: Could not recover jumptable at 0x006c73e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&DAT_006c73e4 + *(int *)(&DAT_006c73e4 + iVar4 * 4)))();
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0x6c7744);
  (*pcVar1)();
}

