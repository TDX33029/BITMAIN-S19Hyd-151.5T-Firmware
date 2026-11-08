// FUN_01537b4c @ 01537b4c size=760 calls_out=10 calls_in=0
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01537b4c(uint *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  code *pcVar6;
  code *pcVar7;
  undefined4 uVar8;
  int iVar9;
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
  
  iVar1 = FUN_01533958(param_2,param_3,param_4,param_5,param_6);
  if (iVar1 == 0) {
    uVar13 = 0x1cfc1a400000001;
  }
  else {
    uVar13 = FUN_01596948();
  }
  iVar9 = (int)((ulonglong)uVar13 >> 0x20);
  uVar10 = (undefined4)uVar13;
  pcVar6 = *(code **)(iVar9 + 0xc);
  iVar1 = (*pcVar6)(uVar10);
  if (iVar1 != 0) {
    local_4c[0] = iVar1;
    FUN_014fb894(&local_40,local_4c);
    FUN_014fb3a0(local_4c);
    local_60 = (uint)local_3c;
    uStack_5c = local_38;
    uStack_58 = uStack_34;
    uStack_54 = uStack_30;
    uStack_50 = uStack_2c;
    if (local_40 != 0x80000000) {
      puVar2 = (uint *)((uint)&local_40 | 4);
      *puVar2 = (uint)local_3c;
      puVar2[1] = local_38;
      puVar2[2] = uStack_34;
      puVar2[3] = uStack_30;
      puVar2[4] = uStack_2c;
      pcVar7 = *(code **)(iVar9 + 0x10);
      (*pcVar7)(local_4c,uVar10);
      puVar12 = (uint *)&SUB_00000004;
      uVar8 = 0;
      uVar3 = local_4c[0] + 1;
      if (local_4c[0] == -1) {
        uVar3 = 0xffffffff;
      }
      uVar11 = 4;
      if (4 < uVar3) {
        uVar11 = uVar3;
      }
      iVar1 = uVar11 * 0x18;
      if (0x5555555 < uVar3) {
LAB_01537cb8:
                    /* WARNING: Subroutine does not return */
        FUN_00664620(uVar8,iVar1);
      }
      if (iVar1 == 0) {
        uVar11 = 0;
      }
      else {
        uVar8 = 4;
        puVar12 = (uint *)FUN_01298504(iVar1,4);
        if (puVar12 == (uint *)0x0) goto LAB_01537cb8;
      }
      *puVar12 = local_40;
      puVar12[1] = (uint)local_3c;
      puVar12[2] = local_38;
      puVar12[3] = uStack_34;
      puVar12[4] = uStack_30;
      puVar12[5] = uStack_2c;
      iVar1 = 0x18;
      local_68 = 1;
      local_70 = uVar11;
      local_6c = puVar12;
      while (uVar3 = local_68, iVar4 = (*pcVar6)(uVar10), iVar4 != 0) {
        local_4c[0] = iVar4;
        FUN_014fb894(&local_40,local_4c);
        FUN_014fb3a0(local_4c);
        local_60 = (uint)local_3c;
        uStack_5c = local_38;
        uStack_58 = uStack_34;
        uStack_54 = uStack_30;
        uStack_50 = uStack_2c;
        if (local_40 == 0x80000000) break;
        *puVar2 = (uint)local_3c;
        puVar2[1] = local_38;
        puVar2[2] = uStack_34;
        puVar2[3] = uStack_30;
        puVar2[4] = uStack_2c;
        if (uVar3 == local_70) {
          (*pcVar7)(local_4c,uVar10);
          iVar4 = local_4c[0] + 1;
          if (local_4c[0] == -1) {
            iVar4 = -1;
          }
          FUN_01af7b44(&local_70,uVar3,iVar4,4,0x18);
          puVar12 = local_6c;
        }
        puVar5 = (uint *)((int)puVar12 + iVar1);
        local_68 = uVar3 + 1;
        iVar1 = iVar1 + 0x18;
        *puVar5 = local_40;
        puVar5[1] = (uint)local_3c;
        puVar5[2] = local_38;
        puVar5[3] = uStack_34;
        puVar5[4] = uStack_30;
        puVar5[5] = uStack_2c;
      }
      FUN_01139b38(uVar10,iVar9);
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
      goto LAB_01537c1c;
    }
  }
  local_3c = (uint *)&SUB_00000004;
  local_38 = 0;
  local_40 = 0;
  FUN_01139b38(uVar10,iVar9);
LAB_01537c1c:
  param_1[1] = 0;
  param_1[2] = 4;
  param_1[3] = 0;
  param_1[4] = 0;
  *param_1 = 0x80000000;
  FUN_0074dd34(&local_40);
  return;
}

