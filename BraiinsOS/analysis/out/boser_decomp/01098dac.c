// FUN_01098dac @ 01098dac size=476 calls_out=9 calls_in=2
// strings: 

void FUN_01098dac(int *param_1,undefined4 *param_2,undefined4 param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined *puVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  undefined1 auStack_70 [24];
  int local_58;
  int local_54;
  int local_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int local_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)((int)param_2 + 0x1e)) {
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c1deec);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c1deec);
  case 3:
    uVar5 = *param_2;
    puVar6 = (undefined *)param_2[1];
LAB_01098f10:
    (**(code **)(puVar6 + 0xc))(&local_58,uVar5,param_3);
    if (local_58 == -0x7fffffe9) {
      *param_1 = -0x7fffffe9;
      uVar3 = 3;
    }
    else {
      local_40 = local_58;
      iStack_3c = local_54;
      iStack_38 = local_50;
      iStack_34 = iStack_4c;
      iStack_30 = iStack_48;
      iStack_2c = iStack_44;
      FUN_01139b38(*param_2,param_2[1]);
      *(undefined1 *)(param_2 + 7) = 0;
      *param_1 = local_40;
      param_1[1] = iStack_3c;
      param_1[2] = iStack_38;
      param_1[3] = iStack_34;
      param_1[4] = iStack_30;
      param_1[5] = iStack_2c;
      uVar3 = 1;
    }
    *(undefined1 *)((int)param_2 + 0x1e) = uVar3;
    return;
  }
  uVar3 = *(undefined1 *)((int)param_2 + 0x1f);
  iVar9 = param_2[5];
  *(undefined2 *)(param_2 + 7) = 1;
  param_2[4] = param_2[6];
  piVar8 = *(int **)(iVar9 + 0x18);
  do {
    iVar4 = *piVar8;
    bVar2 = (bool)hasExclusiveAccess(piVar8);
  } while (!bVar2);
  *piVar8 = iVar4 + 1;
  if (-1 < iVar4) {
    piVar7 = *(int **)(iVar9 + 0x1c);
    do {
      iVar4 = *piVar7;
      bVar2 = (bool)hasExclusiveAccess(piVar7);
    } while (!bVar2);
    *piVar7 = iVar4 + 1;
    if (-1 < iVar4) {
      FUN_01ae1a9c(&local_58);
      FUN_00b33f58(auStack_70,piVar8,&local_58,0,1);
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar7;
        bVar2 = (bool)hasExclusiveAccess(piVar7);
      } while (!bVar2);
      *piVar7 = iVar4 + -1;
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        FUN_01177f84(piVar7);
      }
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar8;
        bVar2 = (bool)hasExclusiveAccess(piVar8);
      } while (!bVar2);
      *piVar8 = iVar4 + -1;
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0121cce0(piVar8);
      }
      *(undefined1 *)(param_2 + 7) = 0;
      local_50 = 0;
      local_54 = 4;
      local_58 = 0;
      uVar5 = FUN_00b7c40c(iVar9,uVar3,param_2[2],param_2[3],&local_58,param_2[4],auStack_70);
      puVar6 = &DAT_01c13710;
      *param_2 = uVar5;
      param_2[1] = &DAT_01c13710;
      goto LAB_01098f10;
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0x1098f7c);
  (*pcVar1)();
}

