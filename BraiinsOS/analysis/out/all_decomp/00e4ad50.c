// FUN_00e4ad50 @ 00e4ad50 size=748 calls_out=5 calls_in=1
// strings: 

void FUN_00e4ad50(int *param_1,int *param_2)

{
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int *local_70;
  int local_6c;
  int iStack_68;
  int iStack_64;
  int iStack_60;
  int local_5c;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int local_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int local_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  
  do {
    if (*param_2 != 0) {
      ClearExclusiveLocal();
      FUN_015bf680(param_2);
      goto LAB_00e4ad80;
    }
    bVar2 = (bool)hasExclusiveAccess(param_2);
  } while (!bVar2);
  *param_2 = 1;
  DataMemoryBarrier(0xb);
LAB_00e4ad80:
  uVar11 = 0;
  if ((DAT_018dd988 & 0x7fffffff) == 0) {
    cVar1 = (char)param_2[1];
  }
  else {
    uVar11 = FUN_015bf3f8();
    uVar11 = uVar11 ^ 1;
    cVar1 = (char)param_2[1];
  }
  if (cVar1 != '\0') {
    uVar8 = (uint)local_6c >> 8;
    local_6c = CONCAT31((int3)uVar8,(char)uVar11);
    local_70 = param_2;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_70,&DAT_0187a7c0,&DAT_01886a4c);
  }
  FUN_00e477bc(param_2 + 2,1);
  if (param_2[5] != 0) {
    param_2[5] = param_2[5] + -1;
    uVar5 = param_2[4] + 1;
    uVar8 = uVar5 - param_2[2];
    if (uVar5 < (uint)param_2[2]) {
      uVar8 = uVar5;
    }
    piVar4 = (int *)(param_2[3] + param_2[4] * 0x58);
    iVar10 = *piVar4;
    iVar6 = piVar4[10];
    iVar9 = piVar4[0xb];
    param_2[4] = uVar8;
    if (iVar10 != 4) {
      local_48 = piVar4[1];
      iStack_44 = piVar4[2];
      iStack_40 = piVar4[3];
      iStack_3c = piVar4[4];
      local_38 = piVar4[5];
      iStack_34 = piVar4[6];
      iStack_30 = piVar4[7];
      iStack_2c = piVar4[8];
      iStack_28 = piVar4[9];
      local_70 = (int *)piVar4[0xc];
      local_6c = piVar4[0xd];
      iStack_68 = piVar4[0xe];
      iStack_64 = piVar4[0xf];
      iStack_60 = piVar4[0x10];
      local_5c = piVar4[0x11];
      iStack_58 = piVar4[0x12];
      iStack_54 = piVar4[0x13];
      iStack_50 = piVar4[0x14];
      iStack_4c = piVar4[0x15];
      if (((uVar11 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
         (iVar7 = FUN_015bf3f8(), iVar7 == 0)) {
        *(undefined1 *)(param_2 + 1) = 1;
      }
      DataMemoryBarrier(0xb);
      do {
        iVar7 = *param_2;
        bVar2 = (bool)hasExclusiveAccess(param_2);
      } while (!bVar2);
      *param_2 = 0;
      if (iVar7 == 2) {
        FUN_016d6968(0xf0,param_2,0x81,1);
      }
      *param_1 = iVar10;
      param_1[1] = local_48;
      param_1[2] = iStack_44;
      param_1[3] = iStack_40;
      param_1[4] = iStack_3c;
      param_1[5] = local_38;
      param_1[6] = iStack_34;
      param_1[7] = iStack_30;
      param_1[8] = iStack_2c;
      param_1[9] = iStack_28;
      param_1[10] = iVar6;
      param_1[0xb] = iVar9;
      param_1[0xc] = (int)local_70;
      param_1[0xd] = local_6c;
      param_1[0xe] = iStack_68;
      param_1[0xf] = iStack_64;
      param_1[0x10] = iStack_60;
      param_1[0x11] = local_5c;
      param_1[0x12] = iStack_58;
      param_1[0x13] = iStack_54;
      param_1[0x14] = iStack_50;
      param_1[0x15] = iStack_4c;
      return;
    }
  }
  DataMemoryBarrier(0xb);
  if ((char)param_2[0x11] == '\0') {
    if (((uVar11 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
       (iVar6 = FUN_015bf3f8(), iVar6 == 0)) {
      *(undefined1 *)(param_2 + 1) = 1;
    }
    DataMemoryBarrier(0xb);
    do {
      iVar6 = *param_2;
      bVar2 = (bool)hasExclusiveAccess(param_2);
    } while (!bVar2);
    *param_2 = 0;
    if (iVar6 == 2) {
      FUN_016d6968(0xf0,param_2,0x81,1);
    }
    uVar3 = 0;
  }
  else {
    if (((uVar11 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
       (iVar6 = FUN_015bf3f8(), iVar6 == 0)) {
      *(undefined1 *)(param_2 + 1) = 1;
    }
    DataMemoryBarrier(0xb);
    do {
      iVar6 = *param_2;
      bVar2 = (bool)hasExclusiveAccess(param_2);
    } while (!bVar2);
    *param_2 = 0;
    if (iVar6 == 2) {
      FUN_016d6968(0xf0,param_2,0x81,1);
    }
    uVar3 = 2;
  }
  *(undefined1 *)(param_1 + 1) = uVar3;
  *param_1 = 4;
  return;
}

