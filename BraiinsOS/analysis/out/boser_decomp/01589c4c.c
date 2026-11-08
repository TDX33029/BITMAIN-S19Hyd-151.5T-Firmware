// FUN_01589c4c @ 01589c4c size=692 calls_out=8 calls_in=0
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01589c4c(uint *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  code *pcVar7;
  uint *puVar8;
  code *pcVar9;
  undefined4 uVar10;
  uint uVar11;
  uint *puVar12;
  undefined8 uVar13;
  uint local_70;
  uint *local_6c;
  uint local_68;
  uint local_60;
  uint uStack_5c;
  uint uStack_58;
  uint uStack_54;
  uint uStack_50;
  int local_4c [3];
  uint local_40;
  uint *local_3c;
  uint local_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  
  uVar13 = FUN_01584bd0(param_2,param_3,param_4,param_5);
  iVar6 = (int)((ulonglong)uVar13 >> 0x20);
  uVar1 = (undefined4)uVar13;
  pcVar7 = *(code **)(iVar6 + 0xc);
  iVar2 = (*pcVar7)();
  if (iVar2 != 0) {
    local_4c[0] = iVar2;
    FUN_014fb894(&local_40,local_4c);
    FUN_014fb3a0(local_4c);
    local_60 = (uint)local_3c;
    uStack_5c = local_38;
    uStack_58 = uStack_34;
    uStack_54 = uStack_30;
    uStack_50 = uStack_2c;
    if (local_40 != 0x80000000) {
      puVar8 = (uint *)((uint)&local_40 | 4);
      *puVar8 = (uint)local_3c;
      puVar8[1] = local_38;
      puVar8[2] = uStack_34;
      puVar8[3] = uStack_30;
      puVar8[4] = uStack_2c;
      pcVar9 = *(code **)(iVar6 + 0x10);
      (*pcVar9)(local_4c,uVar1);
      puVar12 = (uint *)&SUB_00000004;
      uVar10 = 0;
      uVar3 = local_4c[0] + 1;
      if (local_4c[0] == -1) {
        uVar3 = 0xffffffff;
      }
      uVar11 = 4;
      if (4 < uVar3) {
        uVar11 = uVar3;
      }
      iVar2 = uVar11 * 0x18;
      if (0x5555555 < uVar3) {
LAB_01589d80:
                    /* WARNING: Subroutine does not return */
        FUN_00664620(uVar10,iVar2);
      }
      if (iVar2 == 0) {
        uVar11 = 0;
      }
      else {
        uVar10 = 4;
        puVar12 = (uint *)FUN_01298504(iVar2,4);
        if (puVar12 == (uint *)0x0) goto LAB_01589d80;
      }
      *puVar12 = local_40;
      puVar12[1] = (uint)local_3c;
      puVar12[2] = local_38;
      puVar12[3] = uStack_34;
      puVar12[4] = uStack_30;
      puVar12[5] = uStack_2c;
      iVar2 = 0x18;
      local_68 = 1;
      local_70 = uVar11;
      local_6c = puVar12;
      while (uVar3 = local_68, iVar4 = (*pcVar7)(uVar1), iVar4 != 0) {
        local_4c[0] = iVar4;
        FUN_014fb894(&local_40,local_4c);
        FUN_014fb3a0(local_4c);
        local_60 = (uint)local_3c;
        uStack_5c = local_38;
        uStack_58 = uStack_34;
        uStack_54 = uStack_30;
        uStack_50 = uStack_2c;
        if (local_40 == 0x80000000) break;
        *puVar8 = (uint)local_3c;
        puVar8[1] = local_38;
        puVar8[2] = uStack_34;
        puVar8[3] = uStack_30;
        puVar8[4] = uStack_2c;
        if (uVar3 == local_70) {
          (*pcVar9)(local_4c,uVar1);
          iVar4 = local_4c[0] + 1;
          if (local_4c[0] == -1) {
            iVar4 = -1;
          }
          FUN_01af7b44(&local_70,uVar3,iVar4,4,0x18);
          puVar12 = local_6c;
        }
        puVar5 = (uint *)((int)puVar12 + iVar2);
        local_68 = uVar3 + 1;
        iVar2 = iVar2 + 0x18;
        *puVar5 = local_40;
        puVar5[1] = (uint)local_3c;
        puVar5[2] = local_38;
        puVar5[3] = uStack_34;
        puVar5[4] = uStack_30;
        puVar5[5] = uStack_2c;
      }
      FUN_01139b38(uVar1,iVar6);
      local_40 = local_70;
      local_3c = local_6c;
      local_38 = local_68;
      if (local_68 != 0) {
        *param_1 = local_70;
        param_1[1] = (uint)local_6c;
        param_1[2] = local_68;
        param_1[3] = 0;
        param_1[4] = 4;
        param_1[5] = 0;
        param_1[6] = 0;
        return;
      }
      goto LAB_01589cec;
    }
  }
  local_38 = 0;
  local_40 = 0;
  local_3c = (uint *)&SUB_00000004;
  FUN_01139b38(uVar1,iVar6);
LAB_01589cec:
  param_1[1] = 0;
  param_1[2] = 4;
  param_1[3] = 0;
  param_1[4] = 0;
  *param_1 = 0x80000000;
  FUN_0074dd34(&local_40);
  return;
}

