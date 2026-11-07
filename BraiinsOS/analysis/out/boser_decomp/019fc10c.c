// FUN_019fc10c @ 019fc10c size=408 calls_out=10 calls_in=2
// strings: 

void FUN_019fc10c(int *param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  uint *puVar4;
  uint *extraout_r1;
  code *pcVar5;
  uint *extraout_r1_00;
  undefined4 *puVar6;
  bool bVar7;
  
  if (*param_1 == 1) {
    iVar2 = 0;
    if (param_1[2] != 0 || param_1[3] != 0) {
      iVar2 = param_1[4];
    }
    if ((param_1[2] != 0 || param_1[3] != 0) && iVar2 != 0) {
      FUN_01443048(iVar2,param_1[5]);
      return;
    }
    return;
  }
  if (*param_1 != 0) {
    return;
  }
  if (6 < *(byte *)((int)param_1 + 0x62)) {
    return;
  }
  puVar4 = &switchD_019fc140::switchdataD_019fc144;
  switch(*(byte *)((int)param_1 + 0x62)) {
  case 0:
    piVar3 = (int *)param_1[0x16];
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar3;
      bVar7 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar7);
    *piVar3 = iVar2 + -1;
    if (iVar2 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01a38404(param_1[0x16]);
    }
    FUN_019fba9c(param_1 + 10);
    FUN_019fb03c(param_1 + 0x17);
    return;
  default:
    goto switchD_019fc140_caseD_1;
  case 3:
    FUN_019faf5c(param_1 + 0x1a);
    goto LAB_019fc270;
  case 4:
    cVar1 = (char)param_1[0x25];
    bVar7 = cVar1 == '\x03';
    if (bVar7) {
      cVar1 = (char)param_1[0x24];
    }
    if (bVar7 && cVar1 == '\x03') {
      FUN_0193c3cc(param_1 + 0x1c);
      puVar4 = extraout_r1;
    }
    goto LAB_019fc244;
  case 5:
    iVar2 = param_1[0x1b];
    puVar6 = (undefined4 *)param_1[0x1c];
    pcVar5 = (code *)*puVar6;
    if (pcVar5 != (code *)0x0) {
      (*pcVar5)(iVar2);
    }
    if (puVar6[1] != 0) {
      thunk_FUN_01be4678(iVar2);
    }
    FUN_0134c054(param_1[0x1f],param_1[0x1d],4,4);
    break;
  case 6:
    FUN_01139b38(param_1[0x1a],param_1[0x1b]);
  }
  FUN_019f8c54(param_1[0x13],param_1[0x14]);
  puVar4 = extraout_r1_00;
LAB_019fc244:
  iVar2 = param_1[0x10];
  if (iVar2 != -0x80000000) {
    puVar4 = (uint *)(uint)*(byte *)(param_1 + 0x18);
  }
  if (iVar2 != -0x80000000 && puVar4 != (uint *)0x0) {
    FUN_0134c054(iVar2,param_1[0x11],4,4);
  }
  *(undefined1 *)(param_1 + 0x18) = 0;
LAB_019fc270:
  *(undefined1 *)((int)param_1 + 0x61) = 0;
  FUN_019fb03c(param_1 + 0xf);
  FUN_019fba9c(param_1 + 2);
  piVar3 = (int *)param_1[0xe];
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar3;
    bVar7 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar7);
  *piVar3 = iVar2 + -1;
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01a38404(param_1[0xe]);
    return;
  }
switchD_019fc140_caseD_1:
  return;
}

