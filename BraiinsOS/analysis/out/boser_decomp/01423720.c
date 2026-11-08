// FUN_01423720 @ 01423720 size=488 calls_out=3 calls_in=4
// strings: 

void FUN_01423720(int *param_1,int *param_2,int *param_3)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
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
  
  iVar9 = *param_2;
  *param_2 = 0;
  if (iVar9 == 0) {
    *param_1 = 3;
    param_1[1] = 0;
    FUN_0142e6dc(param_3);
    return;
  }
  DataMemoryBarrier(0xb);
  if (*(char *)(iVar9 + 0x68) == '\0') {
    piVar10 = (int *)(iVar9 + 8);
    pcVar6 = (char *)(iVar9 + 0x48);
    DataMemoryBarrier(0xb);
    do {
      cVar1 = *pcVar6;
      bVar2 = (bool)hasExclusiveAccess(pcVar6);
    } while (!bVar2);
    *pcVar6 = '\x01';
    DataMemoryBarrier(0xb);
    if (cVar1 == '\0') {
      if (*piVar10 != 3 || *(int *)(iVar9 + 0xc) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0ec(&DAT_0056c428,0x20,&DAT_01d2dfec);
      }
      iVar7 = param_3[1];
      iVar8 = param_3[2];
      iVar3 = param_3[3];
      iVar4 = param_3[4];
      *piVar10 = *param_3;
      *(int *)(iVar9 + 0xc) = iVar7;
      *(int *)(iVar9 + 0x10) = iVar8;
      *(int *)(iVar9 + 0x14) = iVar3;
      *(int *)(iVar9 + 0x18) = iVar4;
      iVar7 = param_3[6];
      iVar8 = param_3[7];
      iVar3 = param_3[8];
      iVar4 = param_3[9];
      *(int *)(iVar9 + 0x1c) = param_3[5];
      *(int *)(iVar9 + 0x20) = iVar7;
      *(int *)(iVar9 + 0x24) = iVar8;
      *(int *)(iVar9 + 0x28) = iVar3;
      *(int *)(iVar9 + 0x2c) = iVar4;
      iVar7 = param_3[0xb];
      iVar8 = param_3[0xc];
      iVar3 = param_3[0xd];
      iVar4 = param_3[0xe];
      iVar5 = param_3[0xf];
      *(int *)(iVar9 + 0x30) = param_3[10];
      *(int *)(iVar9 + 0x34) = iVar7;
      *(int *)(iVar9 + 0x38) = iVar8;
      *(int *)(iVar9 + 0x3c) = iVar3;
      *(int *)(iVar9 + 0x40) = iVar4;
      *(int *)(iVar9 + 0x44) = iVar5;
      DataMemoryBarrier(0xb);
      *(undefined1 *)(iVar9 + 0x48) = 0;
      DataMemoryBarrier(0xb);
      DataMemoryBarrier(0xb);
      if (*(char *)(iVar9 + 0x68) != '\0') {
        DataMemoryBarrier(0xb);
        do {
          cVar1 = *pcVar6;
          bVar2 = (bool)hasExclusiveAccess(pcVar6);
        } while (!bVar2);
        *pcVar6 = '\x01';
        DataMemoryBarrier(0xb);
        if (cVar1 == '\0') {
          iVar7 = *piVar10;
          iVar8 = *(int *)(iVar9 + 0xc);
          *piVar10 = 3;
          *(undefined4 *)(iVar9 + 0xc) = 0;
          if (iVar7 != 3 || iVar8 != 0) {
            local_60 = *(int *)(iVar9 + 0x10);
            iStack_5c = *(int *)(iVar9 + 0x14);
            iStack_58 = *(int *)(iVar9 + 0x18);
            iStack_54 = *(int *)(iVar9 + 0x1c);
            local_50 = *(int *)(iVar9 + 0x20);
            iStack_4c = *(int *)(iVar9 + 0x24);
            iStack_48 = *(int *)(iVar9 + 0x28);
            iStack_44 = *(int *)(iVar9 + 0x2c);
            iStack_40 = *(int *)(iVar9 + 0x30);
            local_3c = *(int *)(iVar9 + 0x34);
            iStack_38 = *(int *)(iVar9 + 0x38);
            iStack_34 = *(int *)(iVar9 + 0x3c);
            iStack_30 = *(int *)(iVar9 + 0x40);
            iStack_2c = *(int *)(iVar9 + 0x44);
            DataMemoryBarrier(0xb);
            *(undefined1 *)(iVar9 + 0x48) = 0;
            DataMemoryBarrier(0xb);
            FUN_0141ebfc(iVar9);
            goto LAB_014237b8;
          }
          DataMemoryBarrier(0xb);
          *pcVar6 = '\0';
          DataMemoryBarrier(0xb);
        }
      }
      FUN_0141ebfc(iVar9);
      goto LAB_014238a0;
    }
  }
  iVar7 = *param_3;
  iVar8 = param_3[1];
  local_60 = param_3[2];
  iStack_5c = param_3[3];
  iStack_58 = param_3[4];
  iStack_54 = param_3[5];
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
  FUN_0141ebfc(iVar9);
  if (iVar7 != 3 || iVar8 != 0) {
LAB_014237b8:
    *param_1 = iVar7;
    param_1[1] = iVar8;
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
    return;
  }
LAB_014238a0:
  *param_1 = 4;
  param_1[1] = 0;
  return;
}

