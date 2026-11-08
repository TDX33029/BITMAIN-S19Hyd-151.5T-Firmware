// FUN_007a3114 @ 007a3114 size=212 calls_out=6 calls_in=2
// strings: 

void FUN_007a3114(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0x20c) == '\0') {
    param_1 = param_1 + 400;
  }
  else {
    if (*(char *)(param_1 + 0x20c) != '\x03') {
switchD_007a3144_caseD_1:
      return;
    }
    switch(*(undefined1 *)(param_1 + 0xf8)) {
    case 0:
      goto switchD_007a3144_caseD_0;
    default:
      goto switchD_007a3144_caseD_1;
    case 3:
      FUN_007a3590(param_1 + 0x100);
      break;
    case 4:
      FUN_01431b40(param_1 + 0x100);
      break;
    case 5:
      FUN_007a7664((int *)(param_1 + 0x150));
      if (*(int *)(param_1 + 0x150) == 0) {
        FUN_0079aa98(param_1 + 0x154);
      }
      piVar2 = *(int **)(param_1 + 0x158);
      if (piVar2 != (int *)0x0) {
        DataMemoryBarrier(0xb);
        do {
          iVar3 = *piVar2;
          bVar1 = (bool)hasExclusiveAccess(piVar2);
        } while (!bVar1);
        *piVar2 = iVar3 + -1;
        if (iVar3 == 1) {
          DataMemoryBarrier(0xb);
          FUN_007a6a1c(*(undefined4 *)(param_1 + 0x158));
        }
      }
      FUN_01431b40(param_1 + 0x100);
      FUN_0079aa98(param_1 + 0xfc);
    }
    param_1 = param_1 + 0x7c;
  }
switchD_007a3144_caseD_0:
  FUN_007a3468(param_1);
  return;
}

