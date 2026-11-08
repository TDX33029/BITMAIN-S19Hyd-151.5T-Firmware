// FUN_01ad0484 @ 01ad0484 size=688 calls_out=8 calls_in=3
// strings: start of range should be a character boundary | end of range should be a character boundary

void FUN_01ad0484(int param_1,undefined4 param_2,undefined4 param_3,undefined1 *param_4,int param_5,
                 undefined4 param_6)

{
  int iVar1;
  undefined1 *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined1 *puVar6;
  uint uVar7;
  undefined1 *puVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined8 uVar11;
  undefined4 local_40;
  undefined4 local_3c;
  int local_38;
  uint local_34;
  int local_30;
  undefined1 *local_2c;
  undefined1 *local_28;
  int local_24;
  undefined1 *local_20;
  int local_1c;
  
  uVar7 = *(uint *)(param_1 + 8);
  uVar11 = FUN_01935674(param_2,param_3,uVar7,param_6);
  uVar3 = (uint)((ulonglong)uVar11 >> 0x20);
  uVar10 = (uint)uVar11;
  if (uVar10 != 0) {
    if (uVar10 < uVar7) {
      if (*(char *)(*(int *)(param_1 + 4) + uVar10) < -0x40) goto LAB_01ad04d4;
    }
    else if (uVar10 != uVar7) {
LAB_01ad04d4:
                    /* WARNING: Subroutine does not return */
      FUN_012fb100("start of range should be a character boundary",0x5b,param_6);
    }
  }
  if (uVar3 != 0) {
    if (uVar3 < uVar7) {
      if (*(char *)(*(int *)(param_1 + 4) + uVar3) < -0x40) goto LAB_01ad050c;
    }
    else if (uVar3 != uVar7) {
LAB_01ad050c:
                    /* WARNING: Subroutine does not return */
      FUN_012fb100("end of range should be a character boundary",0x57,param_6);
    }
  }
  uVar11 = FUN_01935674(uVar10,uVar3,uVar7,&DAT_01d2fe30);
  local_34 = (uint)((ulonglong)uVar11 >> 0x20);
  uVar10 = (uint)uVar11;
  local_30 = uVar7 - local_34;
  puVar6 = param_4 + param_5;
  local_3c = 1;
  local_40 = 1;
  *(uint *)(param_1 + 8) = uVar10;
  local_2c = param_4;
  local_38 = param_1;
  local_28 = puVar6;
  if (local_30 == 0) {
    FUN_01ad0998(param_1,&local_2c);
  }
  else {
    if (local_34 != uVar10) {
      iVar4 = local_34 - uVar10;
      puVar2 = (undefined1 *)(*(int *)(param_1 + 4) + uVar10);
      do {
        local_2c = puVar6;
        if (param_5 == 0) goto LAB_01ad0728;
        local_2c = param_4 + 1;
        param_5 = param_5 + -1;
        *puVar2 = *param_4;
        iVar4 = iVar4 + -1;
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
        puVar2 = puVar2 + 1;
        param_4 = local_2c;
      } while (iVar4 != 0);
    }
    if (puVar6 != local_2c) {
      FUN_01ad02ec(&local_40,(int)puVar6 - (int)local_2c);
      uVar10 = *(uint *)(local_38 + 8);
      if (local_34 == uVar10) {
        puVar6 = local_2c;
      }
      else {
        iVar4 = local_34 - uVar10;
        puVar2 = (undefined1 *)(*(int *)(local_38 + 4) + uVar10);
        do {
          if (local_2c == local_28) goto LAB_01ad0728;
          puVar6 = local_2c + 1;
          iVar4 = iVar4 + -1;
          *puVar2 = *local_2c;
          *(int *)(local_38 + 8) = *(int *)(local_38 + 8) + 1;
          local_2c = puVar6;
          puVar2 = puVar2 + 1;
        } while (iVar4 != 0);
      }
    }
    iVar4 = (int)local_28 - (int)puVar6;
    uVar9 = 0;
    if (iVar4 < 0) {
LAB_01ad0644:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar9,iVar4);
    }
    if (iVar4 == 0) {
      local_20 = &DAT_00000001;
      iVar4 = 0;
    }
    else {
      uVar9 = 1;
      local_20 = (undefined1 *)FUN_01298504(iVar4,1);
      if (local_20 == (undefined1 *)0x0) goto LAB_01ad0644;
    }
    local_1c = 0;
    local_24 = iVar4;
    FUN_01ad0998(&local_24,&local_2c);
    iVar4 = local_1c;
    puVar6 = local_20;
    iVar1 = local_24;
    if (local_1c != 0) {
      FUN_01ad02ec(&local_40,local_1c);
      uVar10 = *(uint *)(local_38 + 8);
      if (uVar10 != local_34) {
        iVar5 = ~uVar10 + local_34;
        puVar2 = (undefined1 *)(*(int *)(local_38 + 4) + uVar10);
        puVar8 = puVar6;
        do {
          iVar4 = iVar4 + -1;
          *puVar2 = *puVar8;
          *(int *)(local_38 + 8) = *(int *)(local_38 + 8) + 1;
          if (iVar5 == 0) break;
          iVar5 = iVar5 + -1;
          puVar2 = puVar2 + 1;
          puVar8 = puVar8 + 1;
        } while (iVar4 != 0);
      }
    }
    FUN_019bb7e0(iVar1,puVar6);
  }
LAB_01ad0728:
  FUN_01445cc0(&local_40);
  return;
}

