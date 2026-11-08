// FUN_010b612c @ 010b612c size=740 calls_out=3 calls_in=3
// strings: 

void FUN_010b612c(int *param_1,undefined4 *param_2,int *param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  int *piVar11;
  int local_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  int local_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int local_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  
  piVar7 = (int *)*param_2;
  *param_2 = 0;
  if (piVar7 == (int *)0x0) {
    *param_1 = 3;
    param_1[1] = 0;
    FUN_00a517d8(param_3);
    return;
  }
  DataMemoryBarrier(0xb);
  if ((char)piVar7[0x1a] == '\0') {
    piVar10 = piVar7 + 2;
    piVar11 = piVar7 + 0x12;
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar11;
      bVar1 = (bool)hasExclusiveAccess(piVar11);
    } while (!bVar1);
    *(char *)piVar11 = '\x01';
    DataMemoryBarrier(0xb);
    if ((char)iVar2 == '\0') {
      if (*piVar10 != 3 || piVar7[3] != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa464(&DAT_00566930,0x20,&DAT_018a5d08);
      }
      iVar2 = param_3[1];
      iVar3 = param_3[2];
      iVar4 = param_3[3];
      iVar5 = param_3[4];
      iVar9 = 0;
      iVar8 = 3;
      *piVar10 = *param_3;
      piVar7[3] = iVar2;
      piVar7[4] = iVar3;
      piVar7[5] = iVar4;
      piVar7[6] = iVar5;
      iVar2 = param_3[6];
      iVar3 = param_3[7];
      iVar4 = param_3[8];
      iVar5 = param_3[9];
      piVar7[7] = param_3[5];
      piVar7[8] = iVar2;
      piVar7[9] = iVar3;
      piVar7[10] = iVar4;
      piVar7[0xb] = iVar5;
      iVar2 = param_3[0xb];
      iVar3 = param_3[0xc];
      iVar4 = param_3[0xd];
      iVar5 = param_3[0xe];
      iVar6 = param_3[0xf];
      piVar7[0xc] = param_3[10];
      piVar7[0xd] = iVar2;
      piVar7[0xe] = iVar3;
      piVar7[0xf] = iVar4;
      piVar7[0x10] = iVar5;
      piVar7[0x11] = iVar6;
      DataMemoryBarrier(0xb);
      *(undefined1 *)(piVar7 + 0x12) = 0;
      DataMemoryBarrier(0xb);
      DataMemoryBarrier(0xb);
      if ((char)piVar7[0x1a] != '\0') {
        DataMemoryBarrier(0xb);
        do {
          iVar2 = *piVar11;
          bVar1 = (bool)hasExclusiveAccess(piVar11);
        } while (!bVar1);
        *(char *)piVar11 = '\x01';
        DataMemoryBarrier(0xb);
        if ((char)iVar2 == '\0') {
          iVar8 = *piVar10;
          iVar9 = piVar7[3];
          *piVar10 = 3;
          piVar7[3] = 0;
          if (iVar8 == 3 && iVar9 == 0) {
            DataMemoryBarrier(0xb);
            *(undefined1 *)(piVar7 + 0x12) = 0;
            DataMemoryBarrier(0xb);
            iVar8 = 3;
            iVar9 = 0;
          }
          else {
            local_60 = piVar7[4];
            iStack_5c = piVar7[5];
            iStack_58 = piVar7[6];
            iStack_54 = piVar7[7];
            local_50 = piVar7[8];
            iStack_4c = piVar7[9];
            iStack_48 = piVar7[10];
            iStack_44 = piVar7[0xb];
            iStack_40 = piVar7[0xc];
            local_3c = piVar7[0xd];
            iStack_38 = piVar7[0xe];
            iStack_34 = piVar7[0xf];
            iStack_30 = piVar7[0x10];
            iStack_2c = piVar7[0x11];
            DataMemoryBarrier(0xb);
            *(undefined1 *)(piVar7 + 0x12) = 0;
            DataMemoryBarrier(0xb);
          }
        }
      }
      goto LAB_010b61e0;
    }
    iVar8 = *param_3;
    iVar9 = param_3[1];
    local_60 = param_3[2];
    iStack_5c = param_3[3];
    iStack_58 = param_3[4];
    iStack_54 = param_3[5];
  }
  else {
    iVar8 = *param_3;
    iVar9 = param_3[1];
    local_60 = param_3[2];
    iStack_5c = param_3[3];
    iStack_58 = param_3[4];
    iStack_54 = param_3[5];
  }
  local_50 = param_3[6];
  iStack_4c = param_3[7];
  iStack_48 = param_3[8];
  iStack_44 = param_3[9];
  iStack_40 = param_3[10];
  local_3c = param_3[0xb];
  iStack_38 = param_3[0xc];
  iStack_34 = param_3[0xd];
  iStack_30 = param_3[0xe];
  iStack_2c = param_3[0xf];
LAB_010b61e0:
  DataMemoryBarrier(0xb);
  *(undefined1 *)(piVar7 + 0x1a) = 1;
  piVar10 = piVar7 + 0x16;
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar10;
    bVar1 = (bool)hasExclusiveAccess(piVar10);
  } while (!bVar1);
  *(char *)piVar10 = '\x01';
  DataMemoryBarrier(0xb);
  if ((char)iVar2 == '\0') {
    iVar2 = piVar7[0x14];
    piVar7[0x14] = 0;
    if (iVar2 == 0) {
      DataMemoryBarrier(0xb);
      *(undefined1 *)(piVar7 + 0x16) = 0;
      DataMemoryBarrier(0xb);
    }
    else {
      DataMemoryBarrier(0xb);
      *(char *)piVar10 = '\0';
      DataMemoryBarrier(0xb);
      (**(code **)(iVar2 + 4))(piVar7[0x15]);
    }
  }
  piVar10 = piVar7 + 0x19;
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar10;
    bVar1 = (bool)hasExclusiveAccess(piVar10);
  } while (!bVar1);
  *(char *)piVar10 = '\x01';
  DataMemoryBarrier(0xb);
  if ((char)iVar2 == '\0') {
    iVar2 = piVar7[0x17];
    piVar7[0x17] = 0;
    if (iVar2 != 0) {
      (**(code **)(iVar2 + 0xc))(piVar7[0x18]);
    }
    DataMemoryBarrier(0xb);
    *(undefined1 *)(piVar7 + 0x19) = 0;
    DataMemoryBarrier(0xb);
  }
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar7;
    bVar1 = (bool)hasExclusiveAccess(piVar7);
  } while (!bVar1);
  *piVar7 = iVar2 + -1;
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_010b5534(piVar7);
  }
  if (iVar8 == 3 && iVar9 == 0) {
    *param_1 = 4;
    param_1[1] = 0;
    return;
  }
  param_1[2] = local_60;
  param_1[3] = iStack_5c;
  param_1[4] = iStack_58;
  param_1[5] = iStack_54;
  param_1[6] = local_50;
  param_1[7] = iStack_4c;
  param_1[8] = iStack_48;
  param_1[9] = iStack_44;
  param_1[10] = iStack_40;
  param_1[0xb] = local_3c;
  param_1[0xc] = iStack_38;
  param_1[0xd] = iStack_34;
  param_1[0xe] = iStack_30;
  param_1[0xf] = iStack_2c;
  *param_1 = iVar8;
  param_1[1] = iVar9;
  return;
}

