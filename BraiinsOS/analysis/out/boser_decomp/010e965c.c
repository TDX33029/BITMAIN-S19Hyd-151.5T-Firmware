// FUN_010e965c @ 010e965c size=656 calls_out=9 calls_in=1
// strings: 

void FUN_010e965c(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  bool bVar6;
  
  cVar1 = *(char *)(param_1 + 0x34);
  if (cVar1 == '\0') {
    piVar2 = *(int **)(param_1 + 0x30);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar6 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar6);
    *piVar2 = iVar3 + -1;
    goto LAB_010e9728;
  }
  if (cVar1 == '\x03') {
    FUN_019ede44(param_1 + 0x38);
  }
  else {
    if (cVar1 != '\x04') {
      return;
    }
    if (*(char *)(param_1 + 0x18c) == '\x03') {
      cVar1 = *(char *)(param_1 + 0x101);
      if (cVar1 == '\x05') {
        if (*(char *)(param_1 + 0x184) == '\x03') {
          cVar1 = *(char *)(param_1 + 0x180);
          bVar6 = cVar1 == '\x03';
          if (bVar6) {
            cVar1 = *(char *)(param_1 + 0x15d);
          }
          if (bVar6 && cVar1 == '\x04') {
            FUN_019ede44(param_1 + 0x160);
            *(undefined1 *)(param_1 + 0x15c) = 0;
          }
          iVar3 = param_1 + 0x130;
LAB_010e97b4:
          FUN_00d38274(iVar3);
        }
        else if (*(char *)(param_1 + 0x184) == '\0') {
          iVar3 = param_1 + 0x118;
          goto LAB_010e97b4;
        }
        *(undefined1 *)(param_1 + 0xff) = 0;
LAB_010e97c0:
        if (*(char *)(param_1 + 0xfc) != '\0') {
          FUN_00d38310(param_1 + 0x90);
        }
        *(undefined1 *)(param_1 + 0xfc) = 0;
      }
      else {
        if (cVar1 == '\x04') {
          cVar1 = *(char *)(param_1 + 0x148);
          bVar6 = cVar1 == '\x03';
          if (bVar6) {
            cVar1 = *(char *)(param_1 + 0x144);
          }
          if (bVar6 && cVar1 == '\x03') {
            cVar1 = *(char *)(param_1 + 0x140);
            bVar6 = cVar1 == '\x03';
            if (bVar6) {
              cVar1 = *(char *)(param_1 + 0x11c);
            }
            if (bVar6 && cVar1 == '\x04') {
              FUN_0193c3cc(param_1 + 0x120);
            }
          }
          goto LAB_010e97c0;
        }
        if (cVar1 != '\x03') goto LAB_010e96e4;
        if (*(char *)(param_1 + 0x11c) == '\x03') {
          puVar5 = *(undefined4 **)(param_1 + 0x118);
          uVar4 = *(undefined4 *)(param_1 + 0x114);
          if ((code *)*puVar5 != (code *)0x0) {
            (*(code *)*puVar5)(uVar4);
          }
LAB_010e98c0:
          if (puVar5[1] != 0) {
            thunk_FUN_01be4678(uVar4);
          }
        }
        else if (*(char *)(param_1 + 0x11c) == '\0') {
          puVar5 = *(undefined4 **)(param_1 + 0x110);
          uVar4 = *(undefined4 *)(param_1 + 0x10c);
          if ((code *)*puVar5 != (code *)0x0) {
            (*(code *)*puVar5)(uVar4);
          }
          goto LAB_010e98c0;
        }
      }
      *(undefined1 *)(param_1 + 0x100) = 0;
      if (*(char *)(param_1 + 0xfd) != '\0') {
        piVar2 = *(int **)(param_1 + 0xf4);
        DataMemoryBarrier(0xb);
        *(undefined1 *)(piVar2 + 2) = 0;
        DataMemoryBarrier(0xb);
        do {
          iVar3 = *piVar2;
          bVar6 = (bool)hasExclusiveAccess(piVar2);
        } while (!bVar6);
        *piVar2 = iVar3 + -1;
        if (iVar3 == 1) {
          DataMemoryBarrier(0xb);
          FUN_01a38efc(*(undefined4 *)(param_1 + 0xf4));
        }
      }
      *(undefined1 *)(param_1 + 0xfd) = 0;
      if (*(char *)(param_1 + 0xfe) != '\0') {
        piVar2 = *(int **)(param_1 + 0xf0);
        DataMemoryBarrier(0xb);
        do {
          iVar3 = *piVar2;
          bVar6 = (bool)hasExclusiveAccess(piVar2);
        } while (!bVar6);
        *piVar2 = iVar3 + -1;
        if (iVar3 == 1) {
          DataMemoryBarrier(0xb);
          FUN_0121cce0(*(undefined4 *)(param_1 + 0xf0));
        }
      }
      piVar2 = *(int **)(param_1 + 0xec);
      *(undefined1 *)(param_1 + 0xfe) = 0;
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *piVar2;
        bVar6 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar6);
      *piVar2 = iVar3 + -1;
      if (iVar3 == 1) {
        DataMemoryBarrier(0xb);
        FUN_01177f84(*(undefined4 *)(param_1 + 0xec));
      }
    }
  }
LAB_010e96e4:
  piVar2 = *(int **)(param_1 + 0x30);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar6 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar6);
  *piVar2 = iVar3 + -1;
LAB_010e9728:
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01a38efc(*(undefined4 *)(param_1 + 0x30));
  }
  FUN_010e9a80(param_1);
  return;
}

