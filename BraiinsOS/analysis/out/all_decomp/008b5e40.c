// FUN_008b5e40 @ 008b5e40 size=484 calls_out=2 calls_in=0
// strings: 

undefined8 FUN_008b5e40(int *param_1,int param_2)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  DataMemoryBarrier(0xb);
  if ((char)param_1[0xb] == '\0') {
    piVar2 = param_1 + 4;
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *(char *)piVar2 = '\x01';
    iVar4 = 1;
    DataMemoryBarrier(0xb);
    if ((char)iVar3 == '\0') {
      if (param_1[2] != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa464(&DAT_00566930,0x20,&DAT_018a5d08);
      }
      iVar4 = 0;
      param_1[2] = 1;
      param_1[3] = param_2;
      DataMemoryBarrier(0xb);
      *(undefined1 *)(param_1 + 4) = 0;
      DataMemoryBarrier(0xb);
      DataMemoryBarrier(0xb);
      if ((char)param_1[0xb] != '\0') {
        DataMemoryBarrier(0xb);
        do {
          iVar3 = *piVar2;
          bVar1 = (bool)hasExclusiveAccess(piVar2);
        } while (!bVar1);
        *(char *)piVar2 = '\x01';
        DataMemoryBarrier(0xb);
        param_2 = 0;
        if ((char)iVar3 == '\0') {
          iVar4 = param_1[2];
          param_2 = param_1[3];
          param_1[2] = 0;
          DataMemoryBarrier(0xb);
          *(undefined1 *)(param_1 + 4) = 0;
          DataMemoryBarrier(0xb);
        }
      }
    }
  }
  else {
    iVar4 = 1;
  }
  DataMemoryBarrier(0xb);
  *(undefined1 *)(param_1 + 0xb) = 1;
  piVar2 = param_1 + 7;
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *(char *)piVar2 = '\x01';
  DataMemoryBarrier(0xb);
  if ((char)iVar3 == '\0') {
    iVar3 = param_1[5];
    param_1[5] = 0;
    if (iVar3 == 0) {
      DataMemoryBarrier(0xb);
      *(undefined1 *)(param_1 + 7) = 0;
      DataMemoryBarrier(0xb);
    }
    else {
      DataMemoryBarrier(0xb);
      *(char *)piVar2 = '\0';
      DataMemoryBarrier(0xb);
      (**(code **)(iVar3 + 4))(param_1[6]);
    }
  }
  piVar2 = param_1 + 10;
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *(char *)piVar2 = '\x01';
  DataMemoryBarrier(0xb);
  if ((char)iVar3 == '\0') {
    iVar3 = param_1[8];
    param_1[8] = 0;
    if (iVar3 != 0) {
      (**(code **)(iVar3 + 0xc))(param_1[9]);
    }
    DataMemoryBarrier(0xb);
    *(undefined1 *)(param_1 + 10) = 0;
    DataMemoryBarrier(0xb);
  }
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *param_1;
    bVar1 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar1);
  *param_1 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_010fee9c(param_1);
  }
  return CONCAT44(param_2,iVar4);
}

