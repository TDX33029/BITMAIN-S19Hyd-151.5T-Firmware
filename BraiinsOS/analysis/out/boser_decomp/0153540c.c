// FUN_0153540c @ 0153540c size=620 calls_out=11 calls_in=2
// strings: 

int FUN_0153540c(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4,
                undefined4 param_5)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  int *piVar8;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  undefined4 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined4 local_f4;
  int *local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 local_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 local_a8 [3];
  undefined4 uStack_9c;
  int *local_98;
  undefined4 uStack_94;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 local_50;
  undefined4 local_4c;
  undefined8 local_38;
  int *local_30;
  undefined4 local_2c;
  
  uVar13 = CONCAT44(local_e4,local_e8);
  iVar4 = FUN_01577618(param_1 + 6,param_2,param_5);
  if (iVar4 == 0) {
    return 0;
  }
  piVar8 = (int *)param_1[7];
  do {
    iVar4 = *piVar8;
    bVar2 = (bool)hasExclusiveAccess(piVar8);
  } while (!bVar2);
  *piVar8 = iVar4 + 1;
  if (iVar4 < 0) {
LAB_0153567c:
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x153567c);
    (*pcVar1)();
  }
  uVar9 = param_1[8];
  if (param_4 == 0) {
    uVar6 = 0;
  }
  else {
    DataMemoryBarrier(0xb);
    if (*(int *)(param_4 + 0x14) != 0) {
      FUN_0154f894((undefined4 *)(param_4 + 0xc),param_4);
    }
    local_f0 = *(int **)(param_4 + 0xc);
    do {
      iVar4 = *local_f0;
      bVar2 = (bool)hasExclusiveAccess(local_f0);
    } while (!bVar2);
    *local_f0 = iVar4 + 1;
    if (iVar4 < 0) goto LAB_0153567c;
    iVar4 = param_1[7];
    uVar11 = param_1[8];
    uVar10 = (*(int **)(param_4 + 4))[1];
    local_ec = *(undefined4 *)(param_4 + 0x10);
    uVar7 = 0;
    if (uVar10 <= uVar11) {
      iVar5 = thunk_FUN_01bed842(**(int **)(param_4 + 4) + 8,iVar4 + 8,uVar10);
      uVar7 = uVar10;
      if (iVar5 != 0) {
        uVar7 = 0;
      }
    }
    uVar13 = FUN_016bc0ec(iVar4 + 8 + uVar7,uVar11 - uVar7);
    local_f4 = 3;
    uVar6 = 2;
  }
  uVar14 = FUN_01531840(param_3);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)param_1) {
  case 0:
    uVar3 = 0;
    break;
  case 1:
    local_e0 = *param_1;
    uStack_dc = param_1[1];
    local_d8 = param_1[2];
    uStack_d4 = param_1[3];
    uStack_d0 = param_1[4];
    uStack_cc = param_1[5];
    goto LAB_015355dc;
  case 2:
    local_d8 = param_1[2];
    uStack_d4 = param_1[3];
    uStack_d0 = param_1[4];
    uStack_cc = param_1[5];
    uVar3 = 2;
    break;
  case 3:
    FUN_006666fc((uint)&local_e0 | 4,param_1[2],param_1[3]);
    uVar3 = 3;
    break;
  case 4:
    FUN_014fcef8((uint)&local_e0 | 4,param_1 + 1);
    uVar3 = 4;
    break;
  case 5:
    FUN_0156aa80((uint)&local_e0 | 4,param_1 + 1);
    uVar3 = 5;
  }
  local_e0 = CONCAT31(local_e0._1_3_,uVar3);
LAB_015355dc:
  puVar12 = (undefined4 *)((uint)&local_c8 | 4);
  *puVar12 = local_e0;
  puVar12[1] = uStack_dc;
  puVar12[2] = local_d8;
  puVar12[3] = uStack_d4;
  puVar12[4] = uStack_d0;
  puVar12[5] = uStack_cc;
  local_50 = 6;
  local_88 = 0x80000022;
  local_84 = local_c8;
  uStack_80 = uStack_c4;
  uStack_7c = uStack_c0;
  local_78 = local_bc;
  uStack_74 = uStack_b8;
  uStack_70 = uStack_b4;
  uStack_6c = uStack_b0;
  uStack_9c = local_f4;
  local_98 = local_f0;
  uStack_94 = local_ec;
  local_a8[0] = uVar6;
  local_4c = param_2;
  local_30 = piVar8;
  local_2c = uVar9;
  uStack_90 = uVar13;
  local_38 = uVar14;
  iVar4 = thunk_FUN_01be5118(0x80);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0x80);
  }
  FUN_01bed4e2(iVar4,local_a8,0x80);
  return iVar4;
}

