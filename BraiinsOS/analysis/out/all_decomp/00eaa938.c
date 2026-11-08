// FUN_00eaa938 @ 00eaa938 size=252 calls_out=2 calls_in=2
// strings: 

void FUN_00eaa938(int *param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  
  piVar7 = (int *)param_1[1];
  do {
    if (piVar7 == (int *)0x0) {
      return;
    }
    iVar4 = piVar7[0x1f];
    iVar5 = piVar7[0x20];
    iVar2 = piVar7[0x1e];
    piVar7[0x1e] = *(int *)(*param_1 + 8) + 8;
    piVar7[0x1f] = 0;
    if (iVar2 == 0) {
      if (iVar4 != 0) goto LAB_00eaa9ac;
      param_1[1] = 0;
    }
    else {
      *(int *)(iVar2 + 0x7c) = iVar4;
      if (iVar4 == 0) {
        param_1[1] = iVar2;
        *(int *)(iVar2 + 0x80) = iVar5 + -1;
      }
      else {
LAB_00eaa9ac:
        *(int *)(iVar4 + 0x78) = iVar2;
        piVar7[0x20] = iVar5 + -1;
      }
    }
    piVar6 = piVar7 + -2;
    piVar3 = piVar7 + 0x23;
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *(char *)piVar3 = '\x01';
    DataMemoryBarrier(0xb);
    if (*piVar7 != 0 || piVar7[1] != 0) {
      FUN_00eaaab0(piVar7 + 2);
    }
    *piVar7 = 0;
    piVar7[1] = 0;
    if ((char)iVar2 == '\0') {
      DataMemoryBarrier(0xb);
      do {
        iVar2 = *piVar6;
        bVar1 = (bool)hasExclusiveAccess(piVar6);
      } while (!bVar1);
      *piVar6 = iVar2 + -1;
      if (iVar2 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00aa8008(piVar6);
      }
    }
    piVar7 = (int *)param_1[1];
  } while( true );
}

