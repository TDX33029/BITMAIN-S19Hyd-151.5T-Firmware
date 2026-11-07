// FUN_01bedf2c @ 01bedf2c size=248 calls_out=0 calls_in=12
// strings: 

int * FUN_01bedf2c(int *param_1)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  
  cVar1 = DAT_01d53573;
  if (DAT_01d53573 != '\0') {
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(param_1);
      piVar4 = (int *)*param_1;
      if (piVar4 != (int *)0x0) break;
      bVar7 = (bool)hasExclusiveAccess(param_1);
      if (bVar7) {
        *param_1 = -0x7fffffff;
      }
      piVar4 = (int *)0x0;
    } while (!bVar7);
    DataMemoryBarrier(0x1b);
    if (cVar1 < '\0') {
      DAT_01d53573 = '\0';
    }
    if (piVar4 != (int *)0x0) {
      iVar5 = 10;
      do {
        if ((int)piVar4 < 0) {
          piVar2 = (int *)((int)piVar4 + 0x7fffffff);
          piVar3 = piVar4;
        }
        else {
          piVar3 = (int *)((int)piVar4 + -0x7fffffff);
          piVar2 = piVar4;
        }
        DataMemoryBarrier(0x1b);
        do {
          ExclusiveAccess(param_1);
          piVar4 = (int *)*param_1;
          if (piVar2 != piVar4) goto LAB_01bedf74;
          bVar7 = (bool)hasExclusiveAccess(param_1);
        } while (!bVar7);
        *param_1 = (int)piVar3;
LAB_01bedf74:
        DataMemoryBarrier(0x1b);
        if (piVar2 == piVar4) {
          return piVar2;
        }
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      DataMemoryBarrier(0x1b);
      do {
        ExclusiveAccess(param_1);
        iVar5 = *param_1;
        bVar7 = (bool)hasExclusiveAccess(param_1);
      } while (!bVar7);
      *param_1 = iVar5 + 1;
      DataMemoryBarrier(0x1b);
      iVar5 = iVar5 + 1;
      do {
        if (iVar5 < 0) {
          software_interrupt(0);
          piVar2 = (int *)((int)param_1 + 0x26);
          if ((int *)((int)param_1 + 0x26) == (int *)0x0) {
            software_interrupt(0);
            piVar2 = param_1;
          }
          iVar5 = iVar5 + 0x7fffffff;
        }
        DataMemoryBarrier(0x1b);
        do {
          ExclusiveAccess(param_1);
          iVar6 = *param_1;
          if (iVar5 != iVar6) goto LAB_01bedff4;
          bVar7 = (bool)hasExclusiveAccess(param_1);
        } while (!bVar7);
        *param_1 = iVar5 + -0x80000000;
LAB_01bedff4:
        DataMemoryBarrier(0x1b);
        bVar7 = iVar5 == iVar6;
        iVar5 = iVar6;
        if (bVar7) {
          return piVar2;
        }
      } while( true );
    }
  }
  return param_1;
}

