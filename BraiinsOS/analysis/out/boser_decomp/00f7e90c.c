// FUN_00f7e90c @ 00f7e90c size=1068 calls_out=18 calls_in=0
// strings: send stream capacity unexpectedly closed | internal error: entered unreachable code: unexpected stage

/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint FUN_00f7e90c(int param_1,int param_2)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  char *pcVar9;
  int iVar10;
  int *piVar11;
  int *piVar12;
  undefined8 uVar13;
  undefined4 local_60;
  int local_5c;
  int local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  uint local_40;
  int local_3c;
  int local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  
  if (*(int *)(param_1 + 0x10) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb100("internal error: entered unreachable code: unexpected stage",0x75,&DAT_01d2e13c);
  }
  uVar13 = FUN_019ec558(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  piVar11 = (int *)(param_1 + 0x28);
  iVar10 = param_1 + 0x18;
  do {
    FUN_01a88034(iVar10,1);
    iVar6 = FUN_01a88114(iVar10);
    while (iVar6 == 0) {
      FUN_01a87820(&local_40,iVar10,param_2);
      uVar7 = local_40 & 0xff;
      if (uVar7 != 5) {
        if (uVar7 == 6) {
          param_2 = FUN_01427b74(9);
          FUN_01427c64(param_2,"send stream capacity unexpectedly closed",0x28);
          goto LAB_00f7eb84;
        }
        if (uVar7 != 7) {
          local_60 = local_40;
          local_5c = local_3c;
          local_58 = local_38;
          local_54 = local_34;
          local_50 = local_30;
          uStack_4c = uStack_2c;
          param_2 = FUN_01a84cd8(&local_60);
          goto LAB_00f7eb84;
        }
        break;
      }
      iVar6 = local_3c;
    }
    FUN_01a61e0c(&local_40,iVar10,param_2,1);
    if ((local_40 & 0xff) != 6) {
      if ((local_40 & 0xff) == 5) {
        local_5c = local_3c;
        local_60 = CONCAT31(local_60._1_3_,2);
        param_2 = FUN_01a84cd8(&local_60);
      }
      else {
        local_60 = local_40;
        local_5c = local_3c;
        local_58 = local_38;
        local_54 = local_34;
        local_50 = local_30;
        uStack_4c = uStack_2c;
        param_2 = FUN_01a84cd8(&local_60);
      }
LAB_00f7eb84:
      uVar7 = 0;
      goto LAB_00f7eb88;
    }
    FUN_01a88ae4(&local_60,piVar11);
    uVar4 = uStack_4c;
    uVar3 = local_50;
    uVar2 = local_54;
    iVar6 = local_58;
    if ((local_60 & 1) == 0) {
      if (local_58 == 0) {
        piVar12 = (int *)*piVar11;
        if (piVar12 != (int *)0x0) {
          DataMemoryBarrier(0xb);
          do {
            iVar8 = *piVar12;
            bVar1 = (bool)hasExclusiveAccess(piVar12);
          } while (!bVar1);
          *piVar12 = iVar8 + -1;
          if (iVar8 == 1) {
            DataMemoryBarrier(0xb);
            FUN_01a75fb4(*piVar11);
          }
        }
        *piVar11 = 0;
      }
      local_34 = uVar2;
      local_38 = iVar6;
      local_30 = uVar3;
      uStack_2c = uVar4;
      uVar7 = 0;
    }
    else {
      if (*piVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0cc(&DAT_01d2df1c);
      }
      FUN_01348e78(*piVar11 + 0x24,param_2);
      FUN_01a88ae4(&local_40,piVar11);
      uVar7 = local_40;
      if ((local_40 & 1) != 0) goto LAB_00f7eb88;
    }
    if (local_38 == 0) {
      local_60 = 2;
      cVar5 = FUN_01a620d4(iVar10,&local_60,1);
      param_2 = 0;
      if (cVar5 == '\f') goto LAB_00f7eb88;
      local_60 = CONCAT31(CONCAT21(local_60._2_2_,cVar5),3);
      param_2 = FUN_01a84cd8(&local_60);
      goto LAB_00f7ec7c;
    }
    local_54 = local_34;
    local_60 = 1;
    local_50 = local_30;
    uStack_4c = uStack_2c;
    local_58 = local_38;
    cVar5 = FUN_01a620d4(iVar10,&local_60,0);
  } while (cVar5 == '\f');
  local_60 = CONCAT31(CONCAT21(local_60._2_2_,cVar5),3);
  param_2 = FUN_01a84cd8(&local_60);
LAB_00f7ec7c:
LAB_00f7eb88:
  if (((uVar7 & 1) == 0) && (param_2 != 0)) {
    iVar10 = *(int *)(param_1 + 0x2c);
    *(undefined4 *)(param_1 + 0x2c) = 0;
    if (iVar10 != 0) {
      DataMemoryBarrier(0xb);
      if (*(char *)(iVar10 + 0x28) == '\0') {
        piVar11 = (int *)(iVar10 + 8);
        pcVar9 = (char *)(iVar10 + 0xc);
        DataMemoryBarrier(0xb);
        do {
          cVar5 = *pcVar9;
          bVar1 = (bool)hasExclusiveAccess(pcVar9);
        } while (!bVar1);
        *pcVar9 = '\x01';
        piVar12 = piVar11;
        if (cVar5 != '\0') {
          piVar12 = (int *)0x0;
        }
        DataMemoryBarrier(0xb);
        if (cVar5 == '\0') {
          if (*piVar11 != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb0ec(&DAT_0056c428,0x20,&DAT_01d2dfec);
          }
          *(int *)(iVar10 + 8) = param_2;
          param_2 = 0;
          DataMemoryBarrier(0xb);
          *(undefined1 *)(piVar12 + 1) = 0;
          DataMemoryBarrier(0xb);
          DataMemoryBarrier(0xb);
          if (*(char *)(iVar10 + 0x28) != '\0') {
            DataMemoryBarrier(0xb);
            do {
              cVar5 = *pcVar9;
              bVar1 = (bool)hasExclusiveAccess(pcVar9);
            } while (!bVar1);
            *pcVar9 = '\x01';
            DataMemoryBarrier(0xb);
            if (cVar5 == '\0') {
              param_2 = *piVar11;
              *piVar11 = 0;
              DataMemoryBarrier(0xb);
              *pcVar9 = '\0';
              DataMemoryBarrier(0xb);
            }
          }
        }
      }
      FUN_01881df4(iVar10);
      if (param_2 == 0) goto LAB_00f7ec08;
    }
    FUN_01a69838(param_2);
  }
LAB_00f7ec08:
  FUN_019ec558((int)uVar13,(int)((ulonglong)uVar13 >> 0x20));
  if ((uVar7 & 1) == 0) {
    local_60 = 2;
    FUN_00f31ef4(param_1,&local_60);
  }
  return uVar7 & 1;
}

