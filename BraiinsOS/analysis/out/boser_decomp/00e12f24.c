// FUN_00e12f24 @ 00e12f24 size=1100 calls_out=16 calls_in=4
// strings: at least one group with quota must be present when sum of all fixed share ratios in all groups is less then 1! | you cannot have any quota-based load balancing entries because sum of all fixed share ratios in all groups is 1!

void FUN_00e12f24(uint *param_1,undefined4 *param_2,undefined4 param_3)

{
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  int *piVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  uint uVar13;
  bool bVar14;
  double dVar15;
  undefined8 uVar16;
  undefined1 local_108 [16];
  int *local_f8;
  code *local_f4;
  uint local_f0;
  uint local_ec;
  uint uStack_e8;
  uint uStack_e4;
  undefined1 auStack_88 [100];
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(byte *)(param_2 + 0x26)) {
  case 0:
    uVar16 = thunk_FUN_01bee35a((&switchD_00e12f48::switchdataD_00e12f4c)[*(byte *)(param_2 + 0x26)]
                                ,0x2c0);
    puVar12 = (uint *)((int)uVar16 + (int)((ulonglong)uVar16 >> 0x20));
    iVar9 = param_2[0x22];
    uVar4 = puVar12[4];
    param_2[0x24] = param_2[0x23];
    if ((char)uVar4 == '\0') {
      FUN_019ae6ac(&local_f0);
      *puVar12 = local_f0;
      puVar12[1] = local_ec;
      puVar12[2] = uStack_e8;
      puVar12[3] = uStack_e4;
      *(undefined1 *)(puVar12 + 4) = 1;
    }
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c175c8);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c175c8);
  case 3:
    goto switchD_00e12f48_caseD_3;
  }
  uVar4 = *puVar12;
  uVar7 = puVar12[1];
  uVar10 = puVar12[2];
  uVar11 = puVar12[3];
  uVar13 = uVar7 + (0xfffffffe < uVar4);
  *puVar12 = uVar4 + 1;
  puVar12[1] = uVar13;
  *param_2 = &DAT_0056d238;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = uVar4;
  param_2[5] = uVar7;
  param_2[6] = uVar10;
  param_2[7] = uVar11;
  *puVar12 = uVar4 + 2;
  puVar12[1] = uVar7 + (0xfffffffd < uVar4);
  param_2[8] = &DAT_0056d238;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = uVar4 + 1;
  param_2[0x11] = 0;
  param_2[0x10] = 0;
  param_2[0x25] = 0;
  param_2[0xe] = uVar10;
  param_2[0xd] = uVar13;
  param_2[0xf] = uVar11;
  iVar5 = *(int *)(iVar9 + 4);
  iVar9 = iVar5 + *(int *)(iVar9 + 8) * 4;
  param_2[0x12] = iVar5;
  param_2[0x13] = iVar9;
  while (iVar5 != iVar9) {
    param_2[0x14] = iVar5;
    *(undefined1 *)(param_2 + 0x21) = 0;
    param_2[0x12] = iVar5 + 4;
switchD_00e12f48_caseD_3:
    uVar16 = FUN_00e06fc8(param_2 + 0x14,param_3);
    piVar8 = (int *)((ulonglong)uVar16 >> 0x20);
    iVar9 = (int)uVar16;
    if (iVar9 == 0) {
      *param_1 = 4;
      param_1[1] = 0;
      uVar3 = 3;
      goto LAB_00e13370;
    }
    if (*(char *)(param_2 + 0x21) == '\x03') {
      cVar1 = *(char *)(param_2 + 0x20);
      bVar14 = cVar1 == '\x03';
      if (bVar14) {
        cVar1 = *(char *)(param_2 + 0x1f);
      }
      if (bVar14 && cVar1 == '\x03') {
        FUN_0193c3cc(param_2 + 0x17);
      }
    }
    FUN_006666fc(&local_f0,piVar8[5],piVar8[6]);
    iVar5 = FUN_01017dc8(param_2,&local_f0);
    if (iVar5 != 0) {
      local_f4 = FUN_00b59e94;
      local_f8 = piVar8 + 4;
      FUN_00664898(local_108,&DAT_0057ab18,&local_f8);
      FUN_01a70fd4(&local_f0,6);
LAB_00e132bc:
      FUN_01bed4e2(auStack_88,&uStack_e8,0x60);
      FUN_019f8c54(iVar9,1);
      goto LAB_00e13348;
    }
    FUN_006666fc(&local_f0,piVar8[8],piVar8[9]);
    iVar5 = FUN_015dcc90(param_2 + 8,&local_f0);
    if (iVar5 != 0) {
      local_f4 = (code *)&LAB_00632348;
      local_f8 = piVar8 + 7;
      FUN_00664898(local_108,&DAT_005ae8c0,&local_f8);
      FUN_01a70fd4(&local_f0,6);
      goto LAB_00e132bc;
    }
    piVar6 = (int *)param_2[0x24];
    if (*piVar8 != 2) {
      piVar6 = piVar8;
    }
    if (*piVar6 == 1) {
      *(double *)(param_2 + 0x10) = *(double *)(piVar6 + 2) + *(double *)(param_2 + 0x10);
    }
    else {
      param_2[0x25] = param_2[0x25] + 1;
    }
    FUN_019f8c54(iVar9,1);
    iVar9 = param_2[0x13];
    iVar5 = param_2[0x12];
  }
  bVar14 = false;
  bVar2 = false;
  dVar15 = *(double *)(param_2 + 0x10);
  if (dVar15 < 1.0) {
    bVar14 = param_2[0x25] == 0;
  }
  if ((dVar15 == 1.0) && (bVar2 = false, param_2[0x25] != 0)) {
    bVar2 = true;
  }
  if (dVar15 <= 1.0) {
    if (bVar14) {
      FUN_01a71aac(&local_f0,9,
                   "at least one group with quota must be present when sum of all fixed share ratios in all groups is less then 1!"
                   ,0x6e);
    }
    else {
      if (!bVar2) {
        local_f0 = 3;
        local_ec = 0;
        goto LAB_00e13348;
      }
      FUN_01a71aac(&local_f0,9,
                   "you cannot have any quota-based load balancing entries because sum of all fixed share ratios in all groups is 1!"
                   ,0x70);
    }
  }
  else {
    local_f8 = param_2 + 0x10;
    local_f4 = FUN_013025ec;
    FUN_00664898(local_108,&DAT_005b361a,&local_f8);
    FUN_01a70fd4(&local_f0,9);
  }
  FUN_01bed4e2(auStack_88,&uStack_e8,0x60);
LAB_00e13348:
  FUN_015d1344(param_2 + 8);
  FUN_0118c3d0(param_2);
  *param_1 = local_f0;
  param_1[1] = local_ec;
  FUN_01bed4e2(param_1 + 2,auStack_88,0x60);
  uVar3 = 1;
LAB_00e13370:
  *(undefined1 *)(param_2 + 0x26) = uVar3;
  return;
}

