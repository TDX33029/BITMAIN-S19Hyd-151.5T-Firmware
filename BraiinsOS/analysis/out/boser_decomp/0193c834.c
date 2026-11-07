// FUN_0193c834 @ 0193c834 size=996 calls_out=17 calls_in=2
// strings: 

void FUN_0193c834(int *param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  bool bVar4;
  
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
  if (5 < *(byte *)((int)param_1 + 0x37)) {
    return;
  }
  switch(*(byte *)((int)param_1 + 0x37)) {
  case 0:
    FUN_0193cf34(param_1 + 4);
    piVar3 = (int *)param_1[0xc];
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar3;
      bVar4 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar4);
    *piVar3 = iVar2 + -1;
    goto LAB_0193cc2c;
  default:
    goto switchD_0193c868_caseD_1;
  case 3:
    cVar1 = (char)param_1[0x1c];
    bVar4 = cVar1 == '\x03';
    if (bVar4) {
      cVar1 = *(char *)((int)param_1 + 0x4d);
    }
    if (bVar4 && cVar1 == '\x04') {
      FUN_019e0ae8(param_1 + 0x14);
      if (param_1[0x18] != 0) {
        (**(code **)(param_1[0x18] + 0xc))(param_1[0x19]);
      }
      *(undefined1 *)(param_1 + 0x13) = 0;
    }
    break;
  case 4:
    cVar1 = (char)param_1[0x19];
    bVar4 = cVar1 == '\x03';
    if (bVar4) {
      cVar1 = (char)param_1[0x18];
    }
    if (bVar4 && cVar1 == '\x03') {
      FUN_0193c3cc(param_1 + 0x10);
    }
    break;
  case 5:
    cVar1 = *(char *)((int)param_1 + 0x26b);
    if (cVar1 != '\x05') {
      if (cVar1 == '\x04') {
        if ((char)param_1[0xa0] == '\x05') {
          if (*(char *)((int)param_1 + 0x2d1) == '\x03') {
            FUN_019faf5c(param_1 + 0xa2);
            FUN_0193d87c(param_1 + 0xaa);
            *(undefined1 *)(param_1 + 0xb4) = 0;
          }
          piVar3 = (int *)param_1[0xa1];
          DataMemoryBarrier(0xb);
          do {
            iVar2 = *piVar3;
            bVar4 = (bool)hasExclusiveAccess(piVar3);
          } while (!bVar4);
          *piVar3 = iVar2 + -1;
          if (iVar2 == 1) {
            DataMemoryBarrier(0xb);
            FUN_01a38f34(param_1[0xa1]);
          }
        }
        else if ((char)param_1[0xa0] == '\x04') {
          FUN_0193cfd0(param_1 + 0xa1);
          FUN_005fb2fc(param_1 + 0xf8);
        }
        goto LAB_0193cbe0;
      }
      if (cVar1 == '\x03') {
        if ((char)param_1[0xfc] == '\x03') {
          if (*(char *)((int)param_1 + 0x3bd) == '\x04') {
            FUN_01139b38(param_1[0xf0],param_1[0xf1]);
            FUN_019f8c54(param_1[0xea],param_1[0xeb]);
LAB_0193cae8:
            piVar3 = (int *)param_1[0xe9];
            DataMemoryBarrier(0xb);
            do {
              iVar2 = *piVar3;
              bVar4 = (bool)hasExclusiveAccess(piVar3);
            } while (!bVar4);
            *piVar3 = iVar2 + -1;
            if (iVar2 == 1) {
              DataMemoryBarrier(0xb);
              FUN_01a38f34(param_1[0xe9]);
            }
            FUN_005f6dd8(param_1 + 0xaa);
            *(undefined1 *)(param_1 + 0xef) = 0;
          }
          else if (*(char *)((int)param_1 + 0x3bd) == '\x03') {
            cVar1 = (char)param_1[0xfb];
            bVar4 = cVar1 == '\x03';
            if (bVar4) {
              cVar1 = (char)param_1[0xfa];
            }
            if (bVar4 && cVar1 == '\x03') {
              FUN_0193c3cc(param_1 + 0xf2);
            }
            goto LAB_0193cae8;
          }
          FUN_005fa03c(param_1 + 0x9d);
        }
        goto LAB_0193cbf8;
      }
      goto LAB_0193cc00;
    }
    switch(*(undefined1 *)((int)param_1 + 0x3b9)) {
    case 0:
      piVar3 = (int *)param_1[0xed];
      DataMemoryBarrier(0xb);
      do {
        iVar2 = *piVar3;
        bVar4 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar4);
      *piVar3 = iVar2 + -1;
      if (iVar2 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0195b288(param_1[0xed]);
      }
    default:
      goto switchD_0193c9c8_caseD_1;
    case 3:
      break;
    case 4:
      FUN_0193cfd0(param_1 + 0xef);
      FUN_005fb2fc(param_1 + 0x146);
      break;
    case 5:
      if (*(char *)((int)param_1 + 0x413) == '\x03') {
        FUN_019faf5c(param_1 + 0xf0);
        *(undefined1 *)(param_1 + 0x104) = 0;
        *(undefined1 *)((int)param_1 + 0x412) = 0;
        FUN_0193d87c(param_1 + 0xf8);
        FUN_005f797c(param_1 + 0x101);
        *(undefined1 *)((int)param_1 + 0x411) = 0;
      }
      else if (*(char *)((int)param_1 + 0x413) == '\0') {
        piVar3 = (int *)param_1[0x103];
        DataMemoryBarrier(0xb);
        do {
          iVar2 = *piVar3;
          bVar4 = (bool)hasExclusiveAccess(piVar3);
        } while (!bVar4);
        *piVar3 = iVar2 + -1;
        if (iVar2 == 1) {
          DataMemoryBarrier(0xb);
          FUN_0195b288(param_1[0x103]);
        }
      }
      piVar3 = (int *)param_1[0xef];
      DataMemoryBarrier(0xb);
      do {
        iVar2 = *piVar3;
        bVar4 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar4);
      *piVar3 = iVar2 + -1;
      if (iVar2 == 1) {
        DataMemoryBarrier(0xb);
        FUN_01a38f34(param_1[0xef]);
      }
    }
    if ((char)param_1[0xee] != '\0') {
      piVar3 = (int *)param_1[0xeb];
      DataMemoryBarrier(0xb);
      do {
        iVar2 = *piVar3;
        bVar4 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar4);
      *piVar3 = iVar2 + -1;
      if (iVar2 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0195b288(param_1[0xeb]);
      }
    }
    *(undefined1 *)(param_1 + 0xee) = 0;
switchD_0193c9c8_caseD_1:
    *(undefined1 *)(param_1 + 0x9a) = 0;
LAB_0193cbe0:
    FUN_005f6dd8(param_1 + 0x59);
    *(undefined1 *)((int)param_1 + 0x269) = 0;
    FUN_01960218(param_1 + 0xe);
LAB_0193cbf8:
    *(undefined1 *)((int)param_1 + 0x26a) = 0;
LAB_0193cc00:
    FUN_019f8c54(param_1[9],param_1[10]);
  }
  FUN_0193cf34(param_1 + 2);
  piVar3 = (int *)param_1[0xc];
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar3;
    bVar4 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar4);
  *piVar3 = iVar2 + -1;
LAB_0193cc2c:
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0195ae2c(param_1[0xc]);
    return;
  }
switchD_0193c868_caseD_1:
  return;
}

