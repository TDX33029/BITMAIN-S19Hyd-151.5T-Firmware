// FUN_007a2d04 @ 007a2d04 size=588 calls_out=15 calls_in=2
// strings: 

void FUN_007a2d04(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  code *pcVar4;
  undefined4 *puVar5;
  bool bVar6;
  
  if (*param_1 == 1) {
    bVar6 = param_1[2] != 0 || param_1[3] != 0;
    iVar1 = 0;
    if (bVar6) {
      iVar1 = param_1[4];
    }
    if (bVar6 && iVar1 != 0) {
      FUN_01443048(iVar1,param_1[5]);
      return;
    }
switchD_007a2d38_caseD_1:
    return;
  }
  if (*param_1 != 0) {
    return;
  }
  if (5 < *(byte *)(param_1 + 0x57)) {
    return;
  }
  switch(*(byte *)(param_1 + 0x57)) {
  case 0:
    FUN_0079a4d4(param_1 + 0x44);
    FUN_0079a694(param_1 + 0x42);
    FUN_005faf6c(param_1 + 0x56);
    return;
  default:
    goto switchD_007a2d38_caseD_1;
  case 3:
    break;
  case 4:
    FUN_019ede44(param_1 + 0x65);
    FUN_0101f424(param_1 + 0x6d);
    FUN_019ede44(param_1 + 0x5c);
    FUN_01431b40(param_1 + 0x7c);
    goto switchD_007a2dd4_default;
  case 5:
    FUN_007a3114(param_1 + 0x7a);
    if (param_1[0x58] == -0x80000000) goto switchD_007a2dd4_default;
    iVar1 = param_1[0x77];
    iVar3 = param_1[0x78];
LAB_007a2e24:
    FUN_019bb7e0(iVar1,iVar3);
    goto switchD_007a2dd4_default;
  }
  switch(*(undefined1 *)((int)param_1 + 0x1a9)) {
  case 3:
    FUN_007a3114(param_1 + 0x8e);
    if (param_1[0x6c] == -0x80000000) goto switchD_007a2dd4_default;
    iVar1 = param_1[0x8b];
    iVar3 = param_1[0x8c];
    goto LAB_007a2e24;
  case 4:
    puVar5 = (undefined4 *)param_1[0x81];
    iVar1 = param_1[0x80];
    pcVar4 = (code *)*puVar5;
    if (pcVar4 != (code *)0x0) {
      (*pcVar4)(iVar1);
    }
    if (puVar5[1] != 0) {
      thunk_FUN_01be4678(iVar1);
    }
    FUN_01431b40(param_1 + 0x6c);
    goto LAB_007a2f1c;
  case 5:
    if ((char)param_1[0xe5] == '\x03') {
      if ((char)param_1[0xc5] == '\x03') {
        FUN_007a32a4(param_1 + 0x7c);
      }
      FUN_007a3468(param_1 + 0xc6);
      *(undefined2 *)((int)param_1 + 0x395) = 0;
      *(undefined1 *)((int)param_1 + 0x397) = 0;
    }
    else if ((char)param_1[0xe5] == '\0') {
      FUN_0079a86c(param_1 + 0x6c);
    }
    break;
  case 6:
    if (*(char *)((int)param_1 + 0x2f9) == '\x03') {
      FUN_007a32a4(param_1 + 0x6e);
      FUN_019bb7e0(param_1[0xb7],param_1[0xb8]);
      *(undefined1 *)(param_1 + 0xbe) = 0;
    }
    else if (*(char *)((int)param_1 + 0x2f9) == '\0') {
      FUN_019bb7e0(param_1[0xbb],param_1[0xbc]);
    }
    break;
  default:
    goto switchD_007a2dd4_default;
  }
  FUN_019bb7e0(param_1[0x67],param_1[0x68]);
  *(undefined1 *)((int)param_1 + 0x1aa) = 0;
  if (param_1[100] != -0x7fffffff) {
    *(undefined1 *)((int)param_1 + 0x1ab) = 0;
  }
LAB_007a2f1c:
  *(undefined1 *)((int)param_1 + 0x1ab) = 0;
switchD_007a2dd4_default:
  FUN_007a3554(param_1 + 0x20);
  piVar2 = (int *)param_1[0x55];
  DataMemoryBarrier(0xb);
  do {
    iVar1 = *piVar2;
    bVar6 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar6);
  *piVar2 = iVar1 + -1;
  if (iVar1 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01a38efc(param_1[0x55]);
  }
  FUN_005faf6c(param_1 + 0x54);
  FUN_0079a694(param_1 + 0x1e);
  FUN_0079a4d4(param_1 + 2);
  return;
}

