// FUN_00ceb3d8 @ 00ceb3d8 size=272 calls_out=2 calls_in=5
// strings: 

void FUN_00ceb3d8(int *param_1)

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
    iVar5 = piVar7[0x62];
    iVar4 = piVar7[0x61];
    iVar2 = piVar7[0x60];
    piVar7[0x60] = *(int *)(*param_1 + 8) + 8;
    piVar7[0x61] = 0;
    if (iVar2 == 0) {
      if (iVar4 != 0) goto LAB_00ceb460;
      param_1[1] = 0;
    }
    else {
      *(int *)(iVar2 + 0x184) = iVar4;
      if (iVar4 == 0) {
        param_1[1] = iVar2;
        *(int *)(iVar2 + 0x188) = iVar5 + -1;
      }
      else {
LAB_00ceb460:
        *(int *)(iVar4 + 0x180) = iVar2;
        piVar7[0x62] = iVar5 + -1;
      }
    }
    piVar3 = piVar7 + 0x65;
    piVar6 = piVar7 + -2;
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *(char *)piVar3 = '\x01';
    DataMemoryBarrier(0xb);
    if ((*piVar7 != 0 || piVar7[1] != 0) && ((char)piVar7[0x5d] == '\x03')) {
      FUN_00ad4acc(piVar7 + 2);
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
        FUN_00ceb798(piVar6);
      }
    }
    piVar7 = (int *)param_1[1];
  } while( true );
}

