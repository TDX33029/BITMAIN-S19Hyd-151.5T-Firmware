// FUN_01aa0a20 @ 01aa0a20 size=776 calls_out=10 calls_in=2
// strings: 

void FUN_01aa0a20(int *param_1,int *param_2,uint *param_3)

{
  uint uVar1;
  uint *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  int local_80;
  int local_7c;
  uint *local_78;
  uint local_74;
  uint local_6c;
  int local_68;
  int local_64;
  uint *local_60;
  uint uStack_5c;
  uint *local_54;
  uint *local_50;
  undefined4 **local_4c;
  uint *local_48;
  uint uStack_44;
  int local_40;
  int local_3c;
  uint *local_38;
  uint auStack_34 [2];
  uint *local_2c;
  uint *local_28;
  
  puVar6 = (uint *)param_2[1];
  if (puVar6 < param_3) {
    local_54 = param_3;
    local_50 = puVar6;
                    /* WARNING: Subroutine does not return */
    FUN_01284540(&local_54);
  }
  uVar3 = 0;
  if ((int)param_3 < 0) {
LAB_01aa0a48:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar3,param_3);
  }
  iVar5 = 1;
  local_78 = (uint *)0x0;
  if (param_3 != (uint *)0x0) {
    uVar3 = 1;
    iVar5 = FUN_01298504(param_3,1);
    local_78 = param_3;
    if (iVar5 == 0) goto LAB_01aa0a48;
  }
  uVar1 = 0x20 - LZCOUNT((uint)local_78 >> 10);
  local_7c = 0;
  if (6 < uVar1) {
    uVar1 = 7;
  }
  puVar2 = puVar6;
  if (param_3 < puVar6) {
    puVar2 = param_3;
  }
  local_74 = uVar1 << 2 | 1;
  local_80 = iVar5;
  if (puVar2 != (uint *)0x0) {
    if (local_78 == (uint *)0x0) {
      FUN_01aa0a20(&local_68,param_2);
      local_40 = local_68;
      local_3c = local_64;
      local_38 = local_60;
      auStack_34[0] = uStack_5c;
      FUN_0128341c(&local_54,&local_40);
      if (local_54 == (uint *)0x0) {
        FUN_012840cc(&local_80);
        local_80 = (int)local_50;
        local_7c = (int)local_4c;
        local_78 = local_48;
        local_74 = uStack_44;
      }
      else {
        local_40 = (int)local_50;
        local_3c = (int)local_4c;
        local_38 = local_48;
        auStack_34[0] = uStack_44;
        if (local_48 == (uint *)0x0) {
          local_28 = (uint *)0x0;
          iVar4 = 0;
        }
        else {
          FUN_01283c9c(&local_80,local_48);
          iVar4 = local_7c;
          local_28 = local_78;
          iVar5 = local_80;
        }
        FUN_01bed4e2(iVar5 + iVar4,local_4c,local_48);
        local_28 = (uint *)((int)local_28 - iVar4);
        if (local_28 < local_48) {
          local_2c = local_48;
                    /* WARNING: Subroutine does not return */
          FUN_01284540(&local_2c);
        }
        local_7c = iVar4 + (int)local_48;
        (**(code **)(local_40 + 0x10))(auStack_34,local_3c,local_38);
      }
    }
    else {
      iVar5 = *param_2;
      while( true ) {
        puVar2 = puVar6;
        if (param_3 < puVar6) {
          puVar2 = param_3;
        }
        if (puVar2 == (uint *)0x0) break;
        local_50 = (uint *)((int)local_78 - local_7c);
        if (local_50 < puVar2) {
          FUN_01283c9c(&local_80,puVar2);
          local_50 = (uint *)((int)local_78 - local_7c);
        }
        iVar4 = local_7c;
        FUN_01bed4e2(local_80 + local_7c,iVar5,puVar2);
        if (local_50 < puVar2) {
          local_54 = puVar2;
                    /* WARNING: Subroutine does not return */
          FUN_01284540(&local_54);
        }
        iVar5 = iVar5 + (int)puVar2;
        local_7c = iVar4 + (int)puVar2;
        puVar6 = (uint *)((int)puVar6 - (int)puVar2);
        *param_2 = iVar5;
        param_2[1] = (int)puVar6;
        param_3 = (uint *)((int)param_3 - (int)puVar2);
      }
    }
  }
  uVar1 = local_74;
  if ((local_74 & 1) == 0) {
    param_1[1] = local_80;
    param_1[2] = local_7c;
    param_1[3] = local_74;
    *param_1 = (int)&DAT_01d2e520;
  }
  else {
    local_60 = (uint *)(local_7c + (local_74 >> 5));
    local_64 = local_80 - (local_74 >> 5);
    local_68 = (int)local_78 + (local_74 >> 5);
    FUN_01283524(&local_40,&local_68);
    local_6c = uVar1 >> 5;
    if (local_38 < (uint *)(uVar1 >> 5)) {
      local_4c = &local_2c;
      local_2c = local_38;
      local_48 = (uint *)&LAB_01a6a304;
      local_50 = (uint *)&LAB_01a6a304;
      local_54 = &local_6c;
                    /* WARNING: Subroutine does not return */
      FUN_012fb100(&DAT_005ac267,&local_54,&DAT_01d2e534);
    }
    *param_1 = local_40;
    param_1[1] = local_3c + local_6c;
    param_1[2] = (int)local_38 - local_6c;
    param_1[3] = auStack_34[0];
  }
  return;
}

