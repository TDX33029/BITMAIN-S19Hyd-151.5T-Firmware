// FUN_0194ff54 @ 0194ff54 size=932 calls_out=16 calls_in=1
// strings: 

void FUN_0194ff54(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  
  switch(*(undefined1 *)(param_1 + 0x2f)) {
  case 0:
    FUN_0193cf34(param_1 + 8);
    piVar2 = *(int **)(param_1 + 0x28);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar4 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar4);
    *piVar2 = iVar3 + -1;
    goto LAB_01950310;
  default:
    return;
  case 3:
    cVar1 = *(char *)(param_1 + 0x68);
    bVar4 = cVar1 == '\x03';
    if (bVar4) {
      cVar1 = *(char *)(param_1 + 0x45);
    }
    if (bVar4 && cVar1 == '\x04') {
      FUN_019e0ae8(param_1 + 0x48);
      if (*(int *)(param_1 + 0x58) != 0) {
        (**(code **)(*(int *)(param_1 + 0x58) + 0xc))(*(undefined4 *)(param_1 + 0x5c));
      }
      *(undefined1 *)(param_1 + 0x44) = 0;
    }
    break;
  case 4:
    cVar1 = *(char *)(param_1 + 0x5c);
    bVar4 = cVar1 == '\x03';
    if (bVar4) {
      cVar1 = *(char *)(param_1 + 0x58);
    }
    if (bVar4 && cVar1 == '\x03') {
      FUN_0193c3cc(param_1 + 0x38);
    }
    break;
  case 5:
    cVar1 = *(char *)(param_1 + 0x263);
    if (cVar1 != '\x05') {
      if (cVar1 == '\x04') {
        if (*(char *)(param_1 + 0x278) == '\x05') {
          if (*(char *)(param_1 + 0x2c9) == '\x03') {
            FUN_019faf5c(param_1 + 0x280);
            FUN_0193d87c(param_1 + 0x2a0);
            *(undefined1 *)(param_1 + 0x2c8) = 0;
          }
          piVar2 = *(int **)(param_1 + 0x27c);
          DataMemoryBarrier(0xb);
          do {
            iVar3 = *piVar2;
            bVar4 = (bool)hasExclusiveAccess(piVar2);
          } while (!bVar4);
          *piVar2 = iVar3 + -1;
          if (iVar3 == 1) {
            DataMemoryBarrier(0xb);
            FUN_01a38f34(*(undefined4 *)(param_1 + 0x27c));
          }
        }
        else if (*(char *)(param_1 + 0x278) == '\x04') {
          FUN_0193cfd0(param_1 + 0x27c);
          FUN_005fb2fc(param_1 + 0x3d8);
        }
        goto LAB_019502c4;
      }
      if (cVar1 == '\x03') {
        if (*(char *)(param_1 + 1000) == '\x03') {
          if (*(char *)(param_1 + 0x3b5) == '\x04') {
            FUN_01139b38(*(undefined4 *)(param_1 + 0x3b8),*(undefined4 *)(param_1 + 0x3bc));
            FUN_019f8c54(*(undefined4 *)(param_1 + 0x3a0),*(undefined4 *)(param_1 + 0x3a4));
LAB_019501d0:
            piVar2 = *(int **)(param_1 + 0x39c);
            DataMemoryBarrier(0xb);
            do {
              iVar3 = *piVar2;
              bVar4 = (bool)hasExclusiveAccess(piVar2);
            } while (!bVar4);
            *piVar2 = iVar3 + -1;
            if (iVar3 == 1) {
              DataMemoryBarrier(0xb);
              FUN_01a38f34(*(undefined4 *)(param_1 + 0x39c));
            }
            FUN_005f6dd8(param_1 + 0x2a0);
            *(undefined1 *)(param_1 + 0x3b4) = 0;
          }
          else if (*(char *)(param_1 + 0x3b5) == '\x03') {
            cVar1 = *(char *)(param_1 + 0x3e4);
            bVar4 = cVar1 == '\x03';
            if (bVar4) {
              cVar1 = *(char *)(param_1 + 0x3e0);
            }
            if (bVar4 && cVar1 == '\x03') {
              FUN_0193c3cc(param_1 + 0x3c0);
            }
            goto LAB_019501d0;
          }
          FUN_005fa03c(param_1 + 0x26c);
        }
        goto LAB_019502dc;
      }
      goto LAB_019502e4;
    }
    switch(*(undefined1 *)(param_1 + 0x3b1)) {
    case 0:
      piVar2 = *(int **)(param_1 + 0x3ac);
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *piVar2;
        bVar4 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar4);
      *piVar2 = iVar3 + -1;
      if (iVar3 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0195b288(*(undefined4 *)(param_1 + 0x3ac));
      }
    default:
      goto switchD_019500b4_caseD_1;
    case 3:
      break;
    case 4:
      FUN_0193cfd0(param_1 + 0x3b4);
      FUN_005fb2fc(param_1 + 0x510);
      break;
    case 5:
      if (*(char *)(param_1 + 0x40b) == '\x03') {
        FUN_019faf5c(param_1 + 0x3b8);
        *(undefined1 *)(param_1 + 0x408) = 0;
        *(undefined1 *)(param_1 + 0x40a) = 0;
        FUN_0193d87c(param_1 + 0x3d8);
        FUN_005f797c(param_1 + 0x3fc);
        *(undefined1 *)(param_1 + 0x409) = 0;
      }
      else if (*(char *)(param_1 + 0x40b) == '\0') {
        piVar2 = *(int **)(param_1 + 0x404);
        DataMemoryBarrier(0xb);
        do {
          iVar3 = *piVar2;
          bVar4 = (bool)hasExclusiveAccess(piVar2);
        } while (!bVar4);
        *piVar2 = iVar3 + -1;
        if (iVar3 == 1) {
          DataMemoryBarrier(0xb);
          FUN_0195b288(*(undefined4 *)(param_1 + 0x404));
        }
      }
      piVar2 = *(int **)(param_1 + 0x3b4);
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *piVar2;
        bVar4 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar4);
      *piVar2 = iVar3 + -1;
      if (iVar3 == 1) {
        DataMemoryBarrier(0xb);
        FUN_01a38f34(*(undefined4 *)(param_1 + 0x3b4));
      }
    }
    if (*(char *)(param_1 + 0x3b0) != '\0') {
      piVar2 = *(int **)(param_1 + 0x3a4);
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *piVar2;
        bVar4 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar4);
      *piVar2 = iVar3 + -1;
      if (iVar3 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0195b288(*(undefined4 *)(param_1 + 0x3a4));
      }
    }
    *(undefined1 *)(param_1 + 0x3b0) = 0;
switchD_019500b4_caseD_1:
    *(undefined1 *)(param_1 + 0x260) = 0;
LAB_019502c4:
    FUN_005f6dd8(param_1 + 0x15c);
    *(undefined1 *)(param_1 + 0x261) = 0;
    FUN_01960218(param_1 + 0x30);
LAB_019502dc:
    *(undefined1 *)(param_1 + 0x262) = 0;
LAB_019502e4:
    FUN_019f8c54(*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x20));
  }
  FUN_0193cf34(param_1);
  piVar2 = *(int **)(param_1 + 0x28);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar4 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar4);
  *piVar2 = iVar3 + -1;
LAB_01950310:
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0195ae2c(*(undefined4 *)(param_1 + 0x28));
    return;
  }
  return;
}

