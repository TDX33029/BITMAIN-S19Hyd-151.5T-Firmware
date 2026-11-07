// FUN_00ceccf8 @ 00ceccf8 size=412 calls_out=2 calls_in=3
// strings: 

void FUN_00ceccf8(int *param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  
  piVar7 = (int *)param_1[1];
  do {
    if (piVar7 == (int *)0x0) {
      return;
    }
    iVar4 = piVar7[9];
    iVar5 = piVar7[10];
    iVar2 = piVar7[8];
    piVar7[8] = *(int *)(*param_1 + 8) + 8;
    piVar7[9] = 0;
    if (iVar2 == 0) {
      if (iVar4 != 0) goto LAB_00cecd80;
      param_1[1] = 0;
    }
    else {
      *(int *)(iVar2 + 0x24) = iVar4;
      if (iVar4 == 0) {
        param_1[1] = iVar2;
        *(int *)(iVar2 + 0x28) = iVar5 + -1;
      }
      else {
LAB_00cecd80:
        *(int *)(iVar4 + 0x20) = iVar2;
        piVar7[10] = iVar5 + -1;
      }
    }
    piVar3 = piVar7 + 0xd;
    piVar6 = piVar7 + -2;
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *(char *)piVar3 = '\x01';
    DataMemoryBarrier(0xb);
    if (*piVar7 != 0 || piVar7[1] != 0) {
      if ((char)piVar7[5] == '\0') {
        piVar8 = piVar7 + 2;
        piVar3 = (int *)*piVar8;
        DataMemoryBarrier(0xb);
        do {
          iVar4 = *piVar3;
          bVar1 = (bool)hasExclusiveAccess(piVar3);
        } while (!bVar1);
        *piVar3 = iVar4 + -1;
      }
      else {
        if ((char)piVar7[5] != '\x03') goto LAB_00cecd1c;
        piVar3 = (int *)piVar7[4];
        if (*piVar3 == 0xcc) {
          DataMemoryBarrier(0xb);
          bVar1 = (bool)hasExclusiveAccess(piVar3);
          if (!bVar1) goto LAB_00cece4c;
          *piVar3 = 0x84;
        }
        else {
          ClearExclusiveLocal();
LAB_00cece4c:
          (**(code **)(piVar3[2] + 0x10))();
        }
        piVar8 = piVar7 + 3;
        piVar3 = (int *)*piVar8;
        DataMemoryBarrier(0xb);
        do {
          iVar4 = *piVar3;
          bVar1 = (bool)hasExclusiveAccess(piVar3);
        } while (!bVar1);
        *piVar3 = iVar4 + -1;
      }
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        FUN_008f31e8(*piVar8);
      }
    }
LAB_00cecd1c:
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
        FUN_00ced03c(piVar6);
      }
    }
    piVar7 = (int *)param_1[1];
  } while( true );
}

