// FUN_0158a6a0 @ 0158a6a0 size=700 calls_out=8 calls_in=0
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0158a6a0(uint *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  int iVar7;
  code *pcVar8;
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
  
  uVar13 = FUN_0158a9ec(param_2,param_3,param_4,param_5,param_6);
  iVar7 = (int)((ulonglong)uVar13 >> 0x20);
  uVar1 = (undefined4)uVar13;
  pcVar8 = *(code **)(iVar7 + 0xc);
  iVar2 = (*pcVar8)();
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
      puVar3 = (uint *)((uint)&local_40 | 4);
      *puVar3 = (uint)local_3c;
      puVar3[1] = local_38;
      puVar3[2] = uStack_34;
      puVar3[3] = uStack_30;
      puVar3[4] = uStack_2c;
      pcVar9 = *(code **)(iVar7 + 0x10);
      (*pcVar9)(local_4c,uVar1);
      puVar12 = (uint *)&SUB_00000004;
      uVar10 = 0;
      uVar4 = local_4c[0] + 1;
      if (local_4c[0] == -1) {
        uVar4 = 0xffffffff;
      }
      uVar11 = 4;
      if (4 < uVar4) {
        uVar11 = uVar4;
      }
      iVar2 = uVar11 * 0x18;
      if (0x5555555 < uVar4) {
LAB_0158a7dc:
                    /* WARNING: Subroutine does not return */
        FUN_00664620(uVar10,iVar2);
      }
      if (iVar2 == 0) {
        uVar11 = 0;
      }
      else {
        uVar10 = 4;
        puVar12 = (uint *)FUN_01298504(iVar2,4);
        if (puVar12 == (uint *)0x0) goto LAB_0158a7dc;
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
      while (uVar4 = local_68, iVar5 = (*pcVar8)(uVar1), iVar5 != 0) {
        local_4c[0] = iVar5;
        FUN_014fb894(&local_40,local_4c);
        FUN_014fb3a0(local_4c);
        local_60 = (uint)local_3c;
        uStack_5c = local_38;
        uStack_58 = uStack_34;
        uStack_54 = uStack_30;
        uStack_50 = uStack_2c;
        if (local_40 == 0x80000000) break;
        *puVar3 = (uint)local_3c;
        puVar3[1] = local_38;
        puVar3[2] = uStack_34;
        puVar3[3] = uStack_30;
        puVar3[4] = uStack_2c;
        if (uVar4 == local_70) {
          (*pcVar9)(local_4c,uVar1);
          iVar5 = local_4c[0] + 1;
          if (local_4c[0] == -1) {
            iVar5 = -1;
          }
          FUN_01af7b44(&local_70,uVar4,iVar5,4,0x18);
          puVar12 = local_6c;
        }
        puVar6 = (uint *)((int)puVar12 + iVar2);
        local_68 = uVar4 + 1;
        iVar2 = iVar2 + 0x18;
        *puVar6 = local_40;
        puVar6[1] = (uint)local_3c;
        puVar6[2] = local_38;
        puVar6[3] = uStack_34;
        puVar6[4] = uStack_30;
        puVar6[5] = uStack_2c;
      }
      FUN_01139b38(uVar1,iVar7);
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
      goto LAB_0158a748;
    }
  }
  local_38 = 0;
  local_40 = 0;
  local_3c = (uint *)&SUB_00000004;
  FUN_01139b38(uVar1,iVar7);
LAB_0158a748:
  param_1[1] = 0;
  param_1[2] = 4;
  param_1[3] = 0;
  param_1[4] = 0;
  *param_1 = 0x80000000;
  FUN_0074dd34(&local_40);
  return;
}

