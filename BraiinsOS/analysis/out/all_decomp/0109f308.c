// FUN_0109f308 @ 0109f308 size=600 calls_out=6 calls_in=2
// strings: 

void FUN_0109f308(int *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  char *pcVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int local_1c;
  int local_18;
  int local_14;
  
  if (param_1[1] == 0) {
    return;
  }
  iVar7 = *param_1;
  param_1[1] = 0;
  local_18 = 0;
  pcVar5 = (char *)(iVar7 + 8);
  local_1c = 0;
  if (*pcVar5 == '\0') {
    bVar2 = (bool)hasExclusiveAccess(pcVar5);
    if (bVar2) {
      *pcVar5 = '\x01';
      DataMemoryBarrier(0xb);
      goto LAB_0109f360;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  FUN_01280da8(pcVar5);
LAB_0109f360:
  FUN_0128236c(pcVar5);
  iVar3 = *(int *)(iVar7 + 0x18);
  iVar8 = local_14;
  while (local_14 = iVar3, local_14 != 0) {
    iVar8 = *(int *)(local_14 + 4);
    *(int *)(iVar7 + 0x18) = iVar8;
    if (iVar8 == 0) {
      *(undefined4 *)(iVar7 + 0x14) = 0;
    }
    else {
      *(undefined4 *)(iVar8 + 8) = 0;
    }
    *(undefined1 *)(local_14 + 0x10) = 2;
    *(undefined4 *)(local_14 + 4) = 0;
    *(undefined4 *)(local_14 + 8) = 0;
    if (local_1c == local_14) {
      FUN_010557ec(&local_1c,&local_14,&DAT_018ac72c);
      goto LAB_0109f55c;
    }
    *(undefined4 *)(local_14 + 4) = 0;
    *(int *)(local_14 + 8) = local_1c;
    if (local_1c != 0) {
      *(int *)(local_1c + 4) = local_14;
    }
    if (local_18 == 0) {
      local_18 = local_14;
    }
    local_1c = local_14;
    iVar8 = local_14;
    iVar3 = *(int *)(iVar7 + 0x18);
  }
  iVar3 = *(int *)(iVar7 + 0x10);
  while (local_14 = iVar3, local_14 != 0) {
    iVar8 = *(int *)(local_14 + 4);
    *(int *)(iVar7 + 0x10) = iVar8;
    if (iVar8 == 0) {
      *(undefined4 *)(iVar7 + 0xc) = 0;
    }
    else {
      *(undefined4 *)(iVar8 + 8) = 0;
    }
    *(undefined1 *)(local_14 + 0x10) = 2;
    *(undefined4 *)(local_14 + 4) = 0;
    *(undefined4 *)(local_14 + 8) = 0;
    if (local_1c == local_14) {
      FUN_010557ec(&local_1c,&local_14,&DAT_018ac72c);
LAB_0109f55c:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x109f55c);
      (*pcVar1)();
    }
    *(undefined4 *)(local_14 + 4) = 0;
    *(int *)(local_14 + 8) = local_1c;
    if (local_1c != 0) {
      *(int *)(local_1c + 4) = local_14;
    }
    if (local_18 == 0) {
      local_18 = local_14;
    }
    local_1c = local_14;
    iVar8 = local_14;
    iVar3 = *(int *)(iVar7 + 0x10);
  }
  local_14 = iVar8;
  FUN_01282570(pcVar5);
  if (*pcVar5 == '\x01') {
    DataMemoryBarrier(0xb);
    do {
      bVar2 = (bool)hasExclusiveAccess(pcVar5);
      if (bVar2) {
        *pcVar5 = '\0';
        goto LAB_0109f488;
      }
    } while (*pcVar5 == '\x01');
  }
  ClearExclusiveLocal();
  FUN_01280a5c(pcVar5);
LAB_0109f488:
  do {
    if (local_18 == 0) {
      return;
    }
    iVar7 = *(int *)(local_18 + 4);
    piVar6 = (int *)(local_18 + -8);
    if (iVar7 != 0) {
      *(undefined4 *)(iVar7 + 8) = 0;
    }
    piVar4 = *(int **)(local_18 + 0xc);
    if (iVar7 == 0) {
      local_1c = 0;
    }
    *(undefined4 *)(local_18 + 4) = 0;
    *(undefined4 *)(local_18 + 8) = 0;
    local_18 = iVar7;
    if (*piVar4 == 0xcc) {
      DataMemoryBarrier(0xb);
      bVar2 = (bool)hasExclusiveAccess(piVar4);
      if (!bVar2) goto LAB_0109f4dc;
      *piVar4 = 0x84;
    }
    else {
      ClearExclusiveLocal();
LAB_0109f4dc:
      (**(code **)(piVar4[2] + 0x10))();
    }
    DataMemoryBarrier(0xb);
    do {
      iVar7 = *piVar6;
      bVar2 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar2);
    *piVar6 = iVar7 + -1;
    if (iVar7 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0105b210(piVar6);
    }
  } while( true );
}

