// FUN_0144b60c @ 0144b60c size=912 calls_out=8 calls_in=1
// strings: 

void FUN_0144b60c(byte *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  uint *unaff_r11;
  bool bVar9;
  uint local_64;
  int local_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  int local_4c;
  byte local_48;
  byte local_47;
  undefined2 local_46;
  int *local_44;
  undefined *local_40;
  uint *local_3c;
  uint uStack_38;
  uint uStack_34;
  
  local_47 = param_1[0x31];
  local_46 = *(undefined2 *)(param_1 + 0x32);
  param_1[0x31] = 2;
  if (local_47 == 2) {
    return;
  }
  local_60 = *(int *)(param_1 + 0x18);
  uStack_5c = *(undefined4 *)(param_1 + 0x1c);
  local_58 = *(undefined4 *)(param_1 + 0x20);
  uStack_54 = *(undefined4 *)(param_1 + 0x24);
  uStack_50 = *(undefined4 *)(param_1 + 0x28);
  local_4c = *(int *)(param_1 + 0x2c);
  local_48 = param_1[0x30];
  if (*(char *)(local_4c + 8) != '\0') goto LAB_0144b6b0;
  DataMemoryBarrier(0xb);
  bVar9 = *(int *)(local_60 + 8) != 3;
  if ((char)local_58 != '\x02') {
    bVar9 = *(int *)(local_60 + 8) == 1;
  }
  if ((!bVar9) || (piVar4 = *(int **)(param_1 + 0x34), (int)piVar4 + 1U < 2)) goto LAB_0144b6b0;
  iVar3 = *piVar4;
  do {
    if (iVar3 == 0) goto LAB_0144b6b0;
    if (iVar3 < 0) {
      local_3c = &DAT_0157d360;
      local_40 = &DAT_018ae270;
                    /* WARNING: Subroutine does not return */
      FUN_00faa478(&DAT_00590e71,&local_40,&DAT_018ae288);
    }
    iVar2 = *piVar4;
    if (iVar2 == iVar3) {
      bVar1 = (bool)hasExclusiveAccess(piVar4);
      if (bVar1) {
        *piVar4 = iVar3 + 1;
      }
      bVar9 = false;
      if (bVar1) {
        DataMemoryBarrier(0xb);
        bVar9 = true;
      }
    }
    else {
      bVar9 = false;
      ClearExclusiveLocal();
    }
    iVar3 = iVar2;
  } while (!bVar9);
  piVar5 = piVar4 + 2;
  do {
    local_44 = piVar4;
    if (*piVar5 != 0) {
      ClearExclusiveLocal();
      FUN_015bf680(piVar5);
      goto LAB_0144b740;
    }
    bVar9 = (bool)hasExclusiveAccess(piVar5);
  } while (!bVar9);
  *piVar5 = 1;
  DataMemoryBarrier(0xb);
LAB_0144b740:
  if ((DAT_018dd988 & 0x7fffffff) == 0) {
    bVar9 = (char)piVar4[3] == '\0';
    if ((char)piVar4[3] != '\0') {
LAB_0144b76c:
      if (((DAT_018dd988 & 0x7fffffff) != 0) && (iVar3 = FUN_015bf3f8(), iVar3 == 0)) {
        *(undefined1 *)(piVar4 + 3) = 1;
      }
      goto LAB_0144b77c;
    }
    local_64 = 0;
    uVar7 = (uint)*param_1;
    uVar8 = uVar7;
    if (uVar7 != 0) goto LAB_0144b7b0;
LAB_0144b8b0:
    uVar8 = uVar7;
LAB_0144b8b4:
    local_40 = (undefined *)(uVar7 | uVar8);
    local_3c = unaff_r11;
    (*(code *)**(undefined4 **)(param_1 + 8))
              (&uStack_38,param_1 + 0x14,*(undefined4 *)(param_1 + 0xc),
               *(undefined4 *)(param_1 + 0x10));
    FUN_0144a224(piVar4 + 4,&local_40,&local_60,&local_44);
    if (((local_64 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
       (iVar3 = FUN_015bf3f8(), iVar3 == 0)) {
      *(undefined1 *)(piVar4 + 3) = 1;
    }
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar5;
      bVar1 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar1);
    *piVar5 = 0;
  }
  else {
    local_64 = FUN_015bf3f8();
    local_64 = local_64 ^ 1;
    bVar9 = (char)piVar4[3] == '\0';
    if ((char)piVar4[3] == '\0') {
      uVar7 = (uint)*param_1;
      uVar8 = uVar7;
      if (uVar7 == 0) goto LAB_0144b8b0;
LAB_0144b7b0:
      if (uVar8 == 1) {
        uVar7 = (uint)param_1[1] << 8;
      }
      else {
        puVar6 = *(undefined4 **)(param_1 + 4);
        unaff_r11 = (uint *)FUN_01495428();
        (**(code **)*puVar6)(&local_40,puVar6 + 3,puVar6[1],puVar6[2]);
        *unaff_r11 = (uint)local_40;
        unaff_r11[1] = (uint)local_3c;
        unaff_r11[2] = uStack_38;
        unaff_r11[3] = uStack_34;
        uVar7 = 0;
      }
      goto LAB_0144b8b4;
    }
    if (local_64 == 0) goto LAB_0144b76c;
LAB_0144b77c:
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar5;
      bVar1 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar1);
    *piVar5 = 0;
  }
  if (iVar3 == 2) {
    FUN_016d6968(0xf0,piVar5,0x81,1);
  }
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar4;
    bVar1 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar1);
  *piVar4 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0143db38(piVar4);
  }
  if (bVar9) {
    return;
  }
LAB_0144b6b0:
  FUN_014491b0(&local_60);
  return;
}

