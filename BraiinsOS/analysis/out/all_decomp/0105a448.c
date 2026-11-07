// FUN_0105a448 @ 0105a448 size=564 calls_out=2 calls_in=3
// strings: 

void FUN_0105a448(int *param_1,int *param_2,int *param_3)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  
  DataMemoryBarrier(0xb);
  if ((char)param_2[0xd] == '\0') {
    piVar6 = param_2 + 2;
    piVar3 = param_2 + 6;
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *(char *)piVar3 = '\x01';
    DataMemoryBarrier(0xb);
    if ((char)iVar2 == '\0') {
      if (*piVar6 != 4) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa464(&DAT_00566930,0x20,&DAT_018a5d08);
      }
      iVar5 = param_3[1];
      iVar4 = param_3[2];
      iVar2 = param_3[3];
      *piVar6 = *param_3;
      param_2[3] = iVar5;
      param_2[4] = iVar4;
      param_2[5] = iVar2;
      DataMemoryBarrier(0xb);
      *(undefined1 *)(param_2 + 6) = 0;
      DataMemoryBarrier(0xb);
      DataMemoryBarrier(0xb);
      if ((char)param_2[0xd] != '\0') {
        DataMemoryBarrier(0xb);
        do {
          iVar2 = *piVar3;
          bVar1 = (bool)hasExclusiveAccess(piVar3);
        } while (!bVar1);
        *(char *)piVar3 = '\x01';
        DataMemoryBarrier(0xb);
        if ((char)iVar2 == '\0') {
          iVar2 = *piVar6;
          *piVar6 = 4;
          if (iVar2 != 4) {
            *param_1 = iVar2;
            iVar2 = param_2[4];
            iVar4 = param_2[5];
            param_1[1] = param_2[3];
            param_1[2] = iVar2;
            param_1[3] = iVar4;
            DataMemoryBarrier(0xb);
            *(undefined1 *)(param_2 + 6) = 0;
            DataMemoryBarrier(0xb);
            goto LAB_0105a4a4;
          }
          DataMemoryBarrier(0xb);
          *(undefined1 *)(param_2 + 6) = 0;
          DataMemoryBarrier(0xb);
        }
      }
      *param_1 = 4;
      goto LAB_0105a4a4;
    }
  }
  iVar4 = param_3[1];
  iVar5 = param_3[2];
  iVar2 = param_3[3];
  *param_1 = *param_3;
  param_1[1] = iVar4;
  param_1[2] = iVar5;
  param_1[3] = iVar2;
LAB_0105a4a4:
  DataMemoryBarrier(0xb);
  *(undefined1 *)(param_2 + 0xd) = 1;
  piVar3 = param_2 + 9;
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *(char *)piVar3 = '\x01';
  DataMemoryBarrier(0xb);
  if ((char)iVar2 == '\0') {
    iVar2 = param_2[7];
    param_2[7] = 0;
    if (iVar2 == 0) {
      DataMemoryBarrier(0xb);
      *(undefined1 *)(param_2 + 9) = 0;
      DataMemoryBarrier(0xb);
    }
    else {
      DataMemoryBarrier(0xb);
      *(char *)piVar3 = '\0';
      DataMemoryBarrier(0xb);
      (**(code **)(iVar2 + 4))(param_2[8]);
    }
  }
  piVar3 = param_2 + 0xc;
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *(char *)piVar3 = '\x01';
  DataMemoryBarrier(0xb);
  if ((char)iVar2 == '\0') {
    iVar2 = param_2[10];
    param_2[10] = 0;
    if (iVar2 != 0) {
      (**(code **)(iVar2 + 0xc))(param_2[0xb]);
    }
    DataMemoryBarrier(0xb);
    *(undefined1 *)(param_2 + 0xc) = 0;
    DataMemoryBarrier(0xb);
  }
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *param_2;
    bVar1 = (bool)hasExclusiveAccess(param_2);
  } while (!bVar1);
  *param_2 = iVar2 + -1;
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0105a70c(param_2);
    return;
  }
  return;
}

