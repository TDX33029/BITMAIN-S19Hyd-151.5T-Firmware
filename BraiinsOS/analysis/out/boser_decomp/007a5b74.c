// FUN_007a5b74 @ 007a5b74 size=532 calls_out=14 calls_in=1
// strings: 

void FUN_007a5b74(int param_1)

{
  bool bVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 uVar4;
  code *pcVar5;
  int iVar6;
  undefined4 *puVar7;
  
  switch(*(undefined1 *)(param_1 + 0x154)) {
  case 0:
    FUN_0079a4d4(param_1 + 0x108);
    FUN_0079a694(param_1 + 0x100);
    FUN_005faf6c(param_1 + 0x150);
    return;
  default:
    return;
  case 3:
    break;
  case 4:
    FUN_019ede44(param_1 + 0x18c);
    FUN_0101f424(param_1 + 0x1ac);
    FUN_019ede44(param_1 + 0x168);
    FUN_01431b40(param_1 + 0x1e8);
    goto switchD_007a5c08_default;
  case 5:
    FUN_007a3114(param_1 + 0x1e0);
    if (*(int *)(param_1 + 0x158) == -0x80000000) goto switchD_007a5c08_default;
    uVar2 = *(undefined4 *)(param_1 + 0x1d4);
    uVar4 = *(undefined4 *)(param_1 + 0x1d8);
LAB_007a5c58:
    FUN_019bb7e0(uVar2,uVar4);
    goto switchD_007a5c08_default;
  }
  switch(*(undefined1 *)(param_1 + 0x1a1)) {
  case 3:
    FUN_007a3114(param_1 + 0x230);
    if (*(int *)(param_1 + 0x1a8) == -0x80000000) goto switchD_007a5c08_default;
    uVar2 = *(undefined4 *)(param_1 + 0x224);
    uVar4 = *(undefined4 *)(param_1 + 0x228);
    goto LAB_007a5c58;
  case 4:
    puVar7 = *(undefined4 **)(param_1 + 0x1fc);
    uVar2 = *(undefined4 *)(param_1 + 0x1f8);
    pcVar5 = (code *)*puVar7;
    if (pcVar5 != (code *)0x0) {
      (*pcVar5)(uVar2);
    }
    if (puVar7[1] != 0) {
      thunk_FUN_01be4678(uVar2);
    }
    FUN_01431b40(param_1 + 0x1a8);
    goto LAB_007a5d54;
  case 5:
    if (*(char *)(param_1 + 0x38c) == '\x03') {
      if (*(char *)(param_1 + 0x30c) == '\x03') {
        FUN_007a32a4(param_1 + 0x1e8);
      }
      FUN_007a3468(param_1 + 0x310);
      *(undefined2 *)(param_1 + 0x38d) = 0;
      *(undefined1 *)(param_1 + 0x38f) = 0;
    }
    else if (*(char *)(param_1 + 0x38c) == '\0') {
      FUN_0079a86c(param_1 + 0x1a8);
    }
    break;
  case 6:
    if (*(char *)(param_1 + 0x2f1) == '\x03') {
      FUN_007a32a4(param_1 + 0x1b0);
      FUN_019bb7e0(*(undefined4 *)(param_1 + 0x2d4),*(undefined4 *)(param_1 + 0x2d8));
      *(undefined1 *)(param_1 + 0x2f0) = 0;
    }
    else if (*(char *)(param_1 + 0x2f1) == '\0') {
      FUN_019bb7e0(*(undefined4 *)(param_1 + 0x2e4),*(undefined4 *)(param_1 + 0x2e8));
    }
    break;
  default:
    goto switchD_007a5c08_default;
  }
  FUN_019bb7e0(*(undefined4 *)(param_1 + 0x194),*(undefined4 *)(param_1 + 0x198));
  *(undefined1 *)(param_1 + 0x1a2) = 0;
  if (*(int *)(param_1 + 0x188) != -0x7fffffff) {
    *(undefined1 *)(param_1 + 0x1a3) = 0;
  }
LAB_007a5d54:
  *(undefined1 *)(param_1 + 0x1a3) = 0;
switchD_007a5c08_default:
  FUN_007a3554(param_1 + 0x78);
  piVar3 = *(int **)(param_1 + 0x14c);
  DataMemoryBarrier(0xb);
  do {
    iVar6 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar6 + -1;
  if (iVar6 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01a38efc(*(undefined4 *)(param_1 + 0x14c));
  }
  FUN_005faf6c(param_1 + 0x148);
  FUN_0079a694(param_1 + 0x70);
  FUN_0079a4d4(param_1);
  return;
}

