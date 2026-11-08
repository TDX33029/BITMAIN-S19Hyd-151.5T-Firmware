// FUN_0118ae2c @ 0118ae2c size=856 calls_out=13 calls_in=1
// strings: 

void FUN_0118ae2c(undefined4 *param_1)

{
  char cVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  bool bVar7;
  
  if (*(char *)((int)param_1 + 0x549) == '\0') {
    FUN_019bb7e0(param_1[0x14b],param_1[0x14c]);
    if (param_1[0x11a] != -0x80000000) {
      FUN_01a2affc();
    }
    FUN_005f6b64(param_1 + 0x148);
    return;
  }
  if (*(char *)((int)param_1 + 0x549) != '\x03') {
    return;
  }
  switch(*(undefined1 *)(param_1 + 0x6e)) {
  case 0:
    piVar2 = (int *)param_1[0x35];
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar2;
      bVar7 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar7);
    *piVar2 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0195b288(param_1[0x35]);
    }
    if (param_1[3] != -0x80000000) {
      FUN_01a2affc();
    }
    FUN_019bb7e0(*param_1,param_1[1]);
    if (param_1[0x31] != -0x80000000) {
      FUN_019bb7e0(param_1[0x31],param_1[0x32]);
    }
  default:
    goto switchD_0118ae5c_caseD_1;
  case 3:
    cVar1 = *(char *)(param_1 + 0x7b);
    bVar7 = cVar1 == '\x03';
    if (bVar7) {
      cVar1 = *(char *)(param_1 + 0x7a);
    }
    if (bVar7 && cVar1 == '\x03') {
      FUN_0193c3cc(param_1 + 0x72);
    }
    goto LAB_0118b120;
  case 4:
    break;
  case 5:
    cVar1 = *(char *)(param_1 + 0x7d);
    if (cVar1 == '\x06') {
      puVar6 = (undefined4 *)param_1[0x7f];
      uVar5 = param_1[0x7e];
      pcVar3 = (code *)*puVar6;
      if (pcVar3 != (code *)0x0) {
        (*pcVar3)(uVar5);
      }
      if (puVar6[1] != 0) {
        thunk_FUN_01be4678(uVar5);
      }
      FUN_019f8c54(param_1[0x7a],param_1[0x7b]);
    }
    else if (cVar1 == '\x05') {
      cVar1 = *(char *)(param_1 + 0x89);
      bVar7 = cVar1 == '\x03';
      if (bVar7) {
        cVar1 = *(char *)(param_1 + 0x88);
      }
      if (bVar7 && cVar1 == '\x03') {
        FUN_0193c3cc(param_1 + 0x80);
      }
    }
    else if (cVar1 == '\x04') {
      FUN_0193cfd0(param_1 + 0x7e);
      FUN_005fb2fc(param_1 + 0xd5);
    }
    goto switchD_0118af18_caseD_1;
  }
  switch(*(undefined1 *)((int)param_1 + 0x1e1)) {
  case 0:
    piVar2 = (int *)param_1[0x77];
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar2;
      bVar7 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar7);
    *piVar2 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0195b288(param_1[0x77]);
    }
  default:
    goto switchD_0118af18_caseD_1;
  case 3:
    break;
  case 4:
    FUN_0193cfd0(param_1 + 0x79);
    FUN_005fb2fc(param_1 + 0xd0);
    break;
  case 5:
    if (*(char *)((int)param_1 + 0x23b) == '\x03') {
      FUN_019faf5c(param_1 + 0x7a);
      *(undefined1 *)(param_1 + 0x8e) = 0;
      *(undefined1 *)((int)param_1 + 0x23a) = 0;
      FUN_0193d87c(param_1 + 0x82);
      FUN_005f797c(param_1 + 0x8b);
      *(undefined1 *)((int)param_1 + 0x239) = 0;
    }
    else if (*(char *)((int)param_1 + 0x23b) == '\0') {
      piVar2 = (int *)param_1[0x8d];
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar2;
        bVar7 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar7);
      *piVar2 = iVar4 + -1;
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0195b288(param_1[0x8d]);
      }
    }
    piVar2 = (int *)param_1[0x79];
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar2;
      bVar7 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar7);
    *piVar2 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01a38f34(param_1[0x79]);
    }
  }
  if (*(char *)(param_1 + 0x78) != '\0') {
    piVar2 = (int *)param_1[0x75];
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar2;
      bVar7 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar7);
    *piVar2 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0195b288(param_1[0x75]);
    }
  }
  *(undefined1 *)(param_1 + 0x78) = 0;
switchD_0118af18_caseD_1:
  FUN_019f8c54(param_1[0x6b],param_1[0x6c]);
LAB_0118b120:
  if (param_1[0x68] != -0x80000000) {
    FUN_019bb7e0(param_1[0x68],param_1[0x69]);
  }
  *(undefined1 *)((int)param_1 + 0x1b9) = 0;
  FUN_019bb7e0(param_1[0x65],param_1[0x66]);
  *(undefined1 *)((int)param_1 + 0x1ba) = 0;
  if (param_1[0x37] != -0x80000000) {
    FUN_01a2affc();
  }
  piVar2 = (int *)param_1[0x36];
  *(undefined1 *)((int)param_1 + 0x1bb) = 0;
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar2;
    bVar7 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar7);
  *piVar2 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0195b288(param_1[0x36]);
  }
  *(undefined1 *)(param_1 + 0x6f) = 0;
switchD_0118ae5c_caseD_1:
  *(undefined2 *)((int)param_1 + 0x546) = 0;
  *(undefined1 *)(param_1 + 0x152) = 0;
  FUN_019bb7e0(param_1[0x115],param_1[0x116]);
  return;
}

