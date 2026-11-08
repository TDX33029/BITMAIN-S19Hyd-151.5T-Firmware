// FUN_00e392cc @ 00e392cc size=1628 calls_out=19 calls_in=2
// strings: hash chain settings is not supportedpercentage must be a finite numberinvalid relative target reference specifiedpower target min is not specifiedpower target max is not specifiedpower_target_decrement field is missingtuner is not running in power target mode; so there is no current power target to increment; decrement or scalepower_target_increment field is missingpower_target field is missingpower_target field cannot be converted to usizepower_target_decrement cannot be converted to usizepower_target_increment field cannot be converted to usizehashrate target min is not specifiedhashrate target max is not specifiedtuner is not running in hashrate target mode; so there is no current hashrate target to increment; decrement or scalehashrate_target_decrement field is missinghashrate_target_increment field is missing

void FUN_00e392cc(int *param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined1 uVar1;
  uint *puVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  undefined *puVar9;
  uint uVar10;
  char cVar11;
  int *piVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint *puVar16;
  uint uVar17;
  int *piVar18;
  uint uVar19;
  bool bVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  int local_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined1 auStack_140 [88];
  int local_e8;
  int local_e4;
  int *local_e0;
  int *local_dc;
  undefined1 auStack_d8 [88];
  undefined1 auStack_80 [92];
  
  puVar16 = param_2 + 8;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)((int)param_2 + 0xc1)) {
  case 0:
    *(undefined1 *)((int)param_2 + 0xc2) = *(undefined1 *)(param_2 + 0x30);
    param_2[4] = *param_2;
    param_2[5] = param_2[1];
    param_2[6] = param_2[2];
    param_2[0x17] = (int *)param_2[0x16];
    param_2[7] = param_2[3];
    iVar3 = *(int *)param_2[0x16] + 8;
    param_2[0x32] = iVar3;
    *(undefined1 *)(param_2 + 0x41) = 0;
LAB_00e393ac:
    *(undefined1 *)(param_2 + 0x40) = 0;
    param_2[0x33] = iVar3 + 0x3c;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c17508);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c17508);
  case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0x41)) {
    case 0:
      iVar3 = param_2[0x32];
      goto LAB_00e393ac;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c183ac);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c183ac);
    }
    break;
  case 4:
    goto switchD_00e392f0_caseD_4;
  case 5:
    goto switchD_00e392f0_caseD_5;
  case 6:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0x35)) {
    case 0:
      iVar3 = param_2[0x32];
      goto LAB_00e3976c;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(0x1c201d4);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(0x1c201d4);
    case 3:
      uVar4 = param_2[0x33];
      puVar9 = (undefined *)param_2[0x34];
    }
    goto LAB_00e39784;
  }
  uVar21 = FUN_00df39fc(param_2 + 0x33,param_3);
  iVar3 = (int)uVar21;
  if (iVar3 == 0) {
    uVar1 = 3;
    iVar3 = 0;
  }
  else {
    if (*(char *)(param_2 + 0x40) == '\x03') {
      cVar11 = *(char *)(param_2 + 0x3f);
      bVar20 = cVar11 == '\x03';
      if (bVar20) {
        cVar11 = *(char *)(param_2 + 0x3e);
      }
      if (bVar20 && cVar11 == '\x03') {
        FUN_0193c3cc(param_2 + 0x36);
      }
    }
    uVar1 = 1;
  }
  *(undefined1 *)(param_2 + 0x41) = uVar1;
  if (iVar3 == 0) {
    *param_1 = 4;
    param_1[1] = 0;
    uVar1 = 3;
    goto LAB_00e39910;
  }
  FUN_00bba254(param_2 + 0x32);
  FUN_00bd2cf0(param_2 + 0x18,(int)((ulonglong)uVar21 >> 0x20));
  FUN_019f8c54(iVar3,1);
  *(undefined1 *)(param_2 + 0x3f) = 0;
  param_2[0x32] = param_2 + 0x25;
switchD_00e392f0_caseD_4:
  FUN_00bd2a8c(&local_150,param_2 + 0x32,param_3);
  if (local_150 == 0) {
    uVar1 = 4;
    *param_1 = 4;
    param_1[1] = 0;
    goto LAB_00e39910;
  }
  param_2[0x2d] = local_150;
  param_2[0x2e] = uStack_14c;
  param_2[0x2f] = uStack_148;
  if (*(char *)(param_2 + 0x3f) == '\x03') {
    cVar11 = *(char *)(param_2 + 0x3e);
    bVar20 = cVar11 == '\x03';
    if (bVar20) {
      cVar11 = *(char *)(param_2 + 0x3d);
    }
    if (bVar20 && cVar11 == '\x03') {
      FUN_0193c3cc(param_2 + 0x35);
    }
  }
  puVar2 = (uint *)param_2[0x2f];
  uVar13 = *puVar2;
  uVar8 = puVar2[1];
  if (uVar13 == 2 && uVar8 == 0) {
    uVar13 = 0;
    cVar11 = '\x02';
    uVar17 = 0;
    uVar14 = 0;
    *(undefined1 *)(param_2 + 0x14) = 2;
    *puVar16 = 0;
    param_2[9] = 0;
  }
  else {
    uVar21 = *(undefined8 *)(puVar2 + 2);
    uVar22 = *(undefined8 *)(puVar2 + 6);
    uVar19 = puVar2[9];
    uVar10 = puVar2[0xb];
    cVar11 = (char)puVar2[0xc];
    uVar17 = puVar2[4];
    uVar14 = puVar2[5];
    *puVar16 = uVar13;
    *(char *)(param_2 + 0x14) = cVar11;
    param_2[9] = uVar8;
    param_2[0x13] = uVar10;
    param_2[0x11] = uVar19;
    *(undefined8 *)(param_2 + 0xe) = uVar22;
    *(undefined8 *)(param_2 + 10) = uVar21;
  }
  iVar3 = param_2[4];
  param_2[0xc] = uVar17;
  uVar8 = param_2[6];
  param_2[0x10] = iVar3;
  param_2[0x11] = param_2[5];
  param_2[0x12] = uVar8;
  param_2[0x13] = param_2[7];
  uVar19 = *puVar2;
  param_2[0xd] = uVar14;
  if ((uVar19 == 2 && puVar2[1] == 0) || (cVar11 != (char)puVar2[0xc])) {
LAB_00e39668:
    if (*(char *)((int)param_2 + 0xc2) == '\0') {
      FUN_01bed864(puVar2,puVar16,0x38);
LAB_00e39738:
      FUN_019e0044(*(int *)(*(int *)param_2[0x17] + 0x54) + 8);
      goto LAB_00e3974c;
    }
    *(undefined1 *)(param_2 + 0x47) = 0;
switchD_00e392f0_caseD_5:
    FUN_00e100c8(&local_e8,param_2 + 0x32,param_3);
    piVar18 = local_dc;
    piVar12 = local_e0;
    iVar15 = local_e4;
    iVar3 = local_e8;
    if (local_e8 == 4 && local_e4 == 0) {
      *param_1 = 4;
      param_1[1] = 0;
      uVar1 = 5;
      goto LAB_00e39910;
    }
    FUN_01bed4e2(auStack_140,auStack_d8,0x58);
    if (*(char *)(param_2 + 0x47) == '\x03') {
      FUN_00e1003c(param_2 + 0x32);
    }
    if (iVar3 == 3 && iVar15 == 0) {
      FUN_01bed864(param_2[0x2f],puVar16,0x38);
      *(undefined1 *)(*(int *)(*(int *)param_2[0x17] + 0x58) + 8) = 1;
      goto LAB_00e39738;
    }
    FUN_01bed4e2(auStack_80,auStack_140,0x58);
LAB_00e398dc:
    FUN_019f8c54(param_2[0x2d],param_2[0x2e]);
    FUN_005f87f4(param_2 + 0x18);
  }
  else {
    if ((uVar19 & 1) == 0) {
      if ((uVar13 & 1) == 0) goto LAB_00e395dc;
      goto LAB_00e39668;
    }
    if ((uVar13 & *(double *)(puVar2 + 2) == *(double *)(param_2 + 10)) == 0) goto LAB_00e39668;
LAB_00e395dc:
    if ((puVar2[4] & 1) == 0) {
      if ((uVar17 & 1) == 0) goto LAB_00e39624;
      goto LAB_00e39668;
    }
    if ((uVar17 & *(double *)(puVar2 + 6) == *(double *)(param_2 + 0xe)) == 0) goto LAB_00e39668;
LAB_00e39624:
    if (puVar2[8] != 0) {
      if ((iVar3 != 0) && (puVar2[9] == param_2[5])) goto LAB_00e39648;
      goto LAB_00e39668;
    }
    if (iVar3 != 0) goto LAB_00e39668;
LAB_00e39648:
    if ((uVar8 & puVar2[10]) == 0) {
      if (uVar8 != 0 || puVar2[10] != 0) goto LAB_00e39668;
    }
    else if (puVar2[0xb] != param_2[7]) goto LAB_00e39668;
LAB_00e3974c:
    iVar3 = *(int *)param_2[0x17];
    *(undefined1 *)(param_2 + 0x35) = 0;
    iVar3 = iVar3 + 8;
    param_2[0x32] = iVar3;
LAB_00e3976c:
    uVar4 = FUN_00b8a1bc(*(int *)(iVar3 + 0x34) + 8);
    puVar9 = &DAT_01c13d9c;
    param_2[0x33] = uVar4;
    param_2[0x34] = &DAT_01c13d9c;
LAB_00e39784:
    piVar5 = (int *)(**(code **)(puVar9 + 0xc))(uVar4,param_3);
    if (piVar5 == (int *)0x0) {
      *(undefined1 *)(param_2 + 0x35) = 3;
      *param_1 = 4;
      param_1[1] = 0;
      uVar1 = 6;
      goto LAB_00e39910;
    }
    FUN_01139b38(param_2[0x33],param_2[0x34]);
    *(undefined1 *)(param_2 + 0x35) = 1;
    piVar6 = piVar5 + 2;
    if (piVar5[2] == 2 && piVar5[3] == 0) {
      FUN_01a71aac(&local_e8,9,
                   "hash chain settings is not supportedpercentage must be a finite numberinvalid relative target reference specifiedpower target min is not specifiedpower target max is not specifiedpower_target_decrement field is missingtuner is not running in power target mode, so there is no current power target to increment, decrement or scalepower_target_increment field is missingpower_target field is missingpower_target field cannot be converted to usizepower_target_decrement cannot be converted to usizepower_target_increment field cannot be converted to usizehashrate target min is not specifiedhashrate target max is not specifiedtuner is not running in hashrate target mode, so there is no current hashrate target to increment, decrement or scalehashrate_target_decrement field is missinghashrate_target_increment field is missing"
                   ,0x24);
      if (local_e8 != 3 || local_e4 != 0) {
        FUN_01bed4e2(auStack_80,auStack_d8,0x58);
        DataMemoryBarrier(0xb);
        do {
          iVar7 = *piVar5;
          bVar20 = (bool)hasExclusiveAccess(piVar5);
        } while (!bVar20);
        *piVar5 = iVar7 + -1;
        piVar12 = local_e0;
        iVar3 = local_e8;
        iVar15 = local_e4;
        piVar18 = local_dc;
        if (iVar7 == 1) {
          DataMemoryBarrier(0xb);
          FUN_00a967c0(piVar5);
        }
        goto LAB_00e398dc;
      }
      piVar6 = local_e0;
    }
    piVar18 = (int *)param_2[7];
    if (param_2[6] == 0) {
      piVar18 = (int *)piVar6[0x2b];
    }
    DataMemoryBarrier(0xb);
    piVar12 = (int *)param_2[5];
    if (param_2[4] == 0) {
      piVar12 = (int *)piVar6[0x2b];
    }
    do {
      iVar3 = *piVar5;
      bVar20 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar20);
    *piVar5 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00a967c0(piVar5);
    }
    FUN_019f8c54(param_2[0x2d],param_2[0x2e]);
    FUN_005f87f4(param_2 + 0x18);
    iVar15 = 0;
    iVar3 = 3;
  }
  *param_1 = iVar3;
  param_1[1] = iVar15;
  param_1[2] = (int)piVar12;
  param_1[3] = (int)piVar18;
  FUN_01bed4e2(param_1 + 4,auStack_80,0x58);
  uVar1 = 1;
LAB_00e39910:
  *(undefined1 *)((int)param_2 + 0xc1) = uVar1;
  return;
}

