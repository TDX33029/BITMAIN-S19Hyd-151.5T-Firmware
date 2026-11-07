// FUN_010e929c @ 010e929c size=860 calls_out=8 calls_in=3
// strings: 

/* WARNING: Type propagation algorithm not settling */

void FUN_010e929c(int *param_1,int *param_2,code *param_3)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  code *pcVar4;
  code *pcVar5;
  code *pcVar6;
  code *pcVar7;
  code *local_88;
  code *local_84;
  code *local_80;
  uint local_7c;
  code *local_78;
  code *pcStack_74;
  code *pcStack_70;
  uint uStack_6c;
  code *local_64;
  code *local_60;
  code **ppcStack_5c;
  code *pcStack_58;
  uint local_54;
  code *local_50;
  code *local_4c;
  code *local_48;
  uint local_44 [2];
  uint local_3c;
  code *local_38;
  code *local_34;
  code *local_30;
  uint local_2c [2];
  
  pcVar7 = (code *)param_2[1];
  if (pcVar7 < param_3) {
    local_64 = param_3;
    local_60 = pcVar7;
                    /* WARNING: Subroutine does not return */
    FUN_00f600c0(&local_64);
  }
  if ((int)param_3 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0,param_3);
  }
  pcVar4 = (code *)0x1;
  local_80 = (code *)0x0;
  if ((param_3 != (code *)0x0) &&
     (pcVar4 = (code *)thunk_FUN_016d4a50(param_3), local_80 = param_3, pcVar4 == (code *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,param_3);
  }
  uVar2 = 0x20 - LZCOUNT((uint)local_80 >> 10);
  local_84 = (code *)0x0;
  if (6 < uVar2) {
    uVar2 = 7;
  }
  pcVar3 = pcVar7;
  if (param_3 < pcVar7) {
    pcVar3 = param_3;
  }
  local_7c = uVar2 << 2 | 1;
  local_88 = pcVar4;
  if (pcVar3 != (code *)0x0) {
    if (local_80 == (code *)0x0) {
      FUN_010e929c(&local_78,param_2);
      local_50 = local_78;
      local_4c = pcStack_74;
      local_48 = pcStack_70;
      local_44[0] = uStack_6c;
      iVar1 = (**(code **)(local_78 + 0xc))(local_44);
      pcVar3 = local_48;
      pcVar7 = local_4c;
      if (iVar1 == 0) {
        local_54 = local_44[0];
        local_2c[0] = local_44[0];
        local_60 = local_50;
        ppcStack_5c = (code **)local_4c;
        pcStack_58 = local_48;
        local_64 = (code *)0x1;
        local_38 = local_50;
        local_34 = local_4c;
        local_30 = local_48;
        if (local_48 == (code *)0x0) {
          pcVar6 = (code *)0x0;
          pcVar5 = (code *)0x0;
        }
        else {
          FUN_00f5f538(&local_88,local_48);
          pcVar5 = local_84;
          pcVar4 = local_88;
          pcVar6 = local_80;
        }
        FUN_016dd1aa(pcVar4 + (int)pcVar5,pcVar7,pcVar3);
        if (pcVar6 + -(int)pcVar5 < pcVar3) {
          local_50 = pcVar3;
          local_4c = pcVar6 + -(int)pcVar5;
                    /* WARNING: Subroutine does not return */
          FUN_00f600c0(&local_50);
        }
        local_84 = pcVar5 + (int)pcVar3;
        (**(code **)(local_38 + 0x10))(local_2c,local_34,local_30);
      }
      else {
        local_2c[0] = local_44[0];
        local_30 = local_48;
        local_34 = local_4c;
        local_38 = local_50;
        (**(code **)(local_50 + 8))(&local_60,local_2c);
        local_64 = (code *)0x0;
        local_88 = local_60;
        local_84 = (code *)ppcStack_5c;
        local_80 = pcStack_58;
        local_7c = local_54;
      }
    }
    else {
      pcVar4 = (code *)*param_2;
      while( true ) {
        pcVar3 = pcVar7;
        if (param_3 < pcVar7) {
          pcVar3 = param_3;
        }
        if (pcVar3 == (code *)0x0) break;
        pcVar5 = local_80 + -(int)local_84;
        if (pcVar5 < pcVar3) {
          FUN_00f5f538(&local_88,pcVar3);
          pcVar5 = local_80 + -(int)local_84;
        }
        pcVar6 = local_84;
        FUN_016dd1aa(local_88 + (int)local_84,pcVar4,pcVar3);
        if (pcVar5 < pcVar3) {
          local_64 = pcVar3;
          local_60 = pcVar5;
                    /* WARNING: Subroutine does not return */
          FUN_00f600c0(&local_64);
        }
        pcVar4 = pcVar4 + (int)pcVar3;
        local_84 = pcVar6 + (int)pcVar3;
        pcVar7 = pcVar7 + -(int)pcVar3;
        *param_2 = (int)pcVar4;
        param_2[1] = (int)pcVar7;
        param_3 = param_3 + -(int)pcVar3;
      }
    }
  }
  uVar2 = local_7c;
  if ((local_7c & 1) == 0) {
    param_1[1] = (int)local_88;
    param_1[2] = (int)local_84;
    param_1[3] = local_7c;
    *param_1 = (int)&DAT_018ad580;
    return;
  }
  local_48 = local_84 + (local_7c >> 5);
  local_4c = (code *)((int)local_88 - (local_7c >> 5));
  local_50 = local_80 + (local_7c >> 5);
  FUN_00f5ef18(&local_38,&local_50);
  local_3c = uVar2 >> 5;
  if (local_30 < (code *)(uVar2 >> 5)) {
    ppcStack_5c = &local_78;
    pcStack_58 = FUN_007883b8;
    local_60 = FUN_007883b8;
    local_64 = (code *)&local_3c;
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_00584155,&local_64,&DAT_018a6700);
  }
  *param_1 = (int)local_38;
  param_1[1] = (int)(local_34 + local_3c);
  param_1[2] = (int)local_30 - local_3c;
  param_1[3] = local_2c[0];
  return;
}

