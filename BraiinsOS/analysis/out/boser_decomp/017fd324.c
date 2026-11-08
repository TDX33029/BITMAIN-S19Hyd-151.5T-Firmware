// FUN_017fd324 @ 017fd324 size=308 calls_out=7 calls_in=0
// strings: Map must not be polled after it returned `Poll::Ready` | internal error: entered unreachable code

int FUN_017fd324(int *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  
  if ((char)param_1[4] == '\x03') {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("Map must not be polled after it returned `Poll::Ready`",0x36,&DAT_01d2da7c);
  }
  iVar2 = FUN_017fd53c(param_1);
  if (iVar2 == 0) {
    if ((char)param_1[4] == '\x03') {
LAB_017fd440:
                    /* WARNING: Subroutine does not return */
      FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01d2da6c);
    }
    piVar5 = (int *)param_1[3];
    iVar3 = param_1[4];
    piVar4 = (int *)param_1[1];
    piVar6 = (int *)param_1[2];
    if (*param_1 != 0) {
      FUN_017c305c();
    }
    *(undefined1 *)(param_1 + 4) = 3;
    if ((char)iVar3 != '\x02') {
      if ((char)iVar3 == '\x03') goto LAB_017fd440;
      FUN_013e2464(piVar6);
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *piVar6;
        bVar1 = (bool)hasExclusiveAccess(piVar6);
      } while (!bVar1);
      *piVar6 = iVar3 + -1;
      if (iVar3 == 1) {
        DataMemoryBarrier(0xb);
        FUN_01784e7c(piVar6);
      }
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *piVar5;
        bVar1 = (bool)hasExclusiveAccess(piVar5);
      } while (!bVar1);
      *piVar5 = iVar3 + -1;
      if (iVar3 == 1) {
        DataMemoryBarrier(0xb);
        FUN_014210d0(piVar5);
      }
    }
    if (piVar4 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *piVar4;
        bVar1 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar1);
      *piVar4 = iVar3 + -1;
      if (iVar3 == 1) {
        DataMemoryBarrier(0xb);
        FUN_01436864(piVar4);
      }
    }
  }
  return iVar2;
}

