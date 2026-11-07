// FUN_012fb514 @ 012fb514 size=696 calls_out=2 calls_in=222
// strings: 

void FUN_012fb514(uint param_1,undefined *param_2,undefined *param_3,undefined *param_4,
                 undefined4 param_5)

{
  byte *pbVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  undefined *local_70;
  undefined *puStack_6c;
  uint local_68;
  undefined *local_64;
  undefined *local_60;
  undefined4 local_5c;
  undefined *local_58;
  uint local_54;
  undefined *local_50;
  undefined *local_4c;
  undefined **local_48;
  code *local_44;
  undefined **local_40;
  code *local_3c;
  undefined **local_38;
  code *local_34;
  undefined **local_30;
  undefined4 *local_2c;
  undefined **local_28;
  undefined4 *local_24;
  
  local_48 = &local_70;
  if (param_2 < (undefined *)0x101) {
    local_5c = 0;
    local_60 = (undefined *)0x1;
    local_64 = param_2;
  }
  else {
    local_64 = (undefined *)0x100;
    do {
      if (-0x41 < (char)local_64[param_1]) goto LAB_012fb57c;
      local_64 = local_64 + -1;
    } while (local_64 != (undefined *)0x0);
    local_64 = (undefined *)0x0;
LAB_012fb57c:
    local_5c = 0;
    local_60 = &DAT_00425b24;
    if (local_64 < param_2) {
      local_5c = 5;
    }
    else {
      local_60 = (undefined *)0x1;
    }
  }
  local_50 = param_3;
  local_70 = param_3;
  puStack_6c = param_4;
  local_68 = param_1;
  if (param_3 <= param_2) {
    if (param_4 <= param_2) {
      if (param_4 < param_3) {
        local_30 = &local_60;
        local_38 = (undefined **)&local_68;
        local_40 = &puStack_6c;
        local_2c = &DAT_0197a814;
        local_34 = (code *)&DAT_0197a814;
        local_3c = FUN_012fd02c;
        local_44 = FUN_012fd02c;
                    /* WARNING: Subroutine does not return */
        FUN_012fb100(&DAT_0059b7a3,&local_48);
      }
      local_58 = param_4;
      if (((param_3 != (undefined *)0x0) && (param_3 < param_2)) && ((char)param_3[param_1] < -0x40)
         ) {
        local_58 = param_3;
      }
      if (param_2 <= local_58) {
LAB_012fb618:
                    /* WARNING: Subroutine does not return */
        FUN_012fb0cc(param_5);
      }
      for (local_50 = local_58; local_50 != (undefined *)0x0; local_50 = local_50 + -1) {
        if (-0x41 < (char)local_50[param_1]) {
          if (local_50 == param_2) goto LAB_012fb618;
          goto LAB_012fb62c;
        }
      }
      local_50 = (undefined *)0x0;
      if (param_2 == (undefined *)0x0) goto LAB_012fb618;
LAB_012fb62c:
      pbVar1 = local_50 + param_1;
      local_54 = (uint)*pbVar1;
      if ((char)*pbVar1 < '\0') {
        if (local_54 < 0xe0) {
          local_54 = pbVar1[1] & 0x3f | (local_54 & 0x1f) << 6;
        }
        else {
          uVar4 = pbVar1[2] & 0x3f | (pbVar1[1] & 0x3f) << 6;
          if (local_54 < 0xf0) {
            local_54 = uVar4 | (local_54 & 0x1f) << 0xc;
          }
          else {
            local_54 = pbVar1[3] & 0x3f | uVar4 << 6 | (local_54 & 7) << 0x12;
          }
        }
        iVar3 = 1;
        if (0x7f < local_54) {
          iVar3 = 2;
        }
        if ((0x7ff < local_54) && (iVar3 = 4, local_54 < 0x10000)) {
          iVar3 = 3;
        }
      }
      else {
        iVar3 = 1;
      }
      local_4c = local_50 + iVar3;
      local_28 = &local_60;
      local_30 = (undefined **)&local_68;
      local_38 = &local_50;
      local_40 = (undefined **)&local_54;
      puVar2 = &DAT_00571cd9;
      local_48 = &local_58;
      local_24 = &DAT_0197a814;
      local_2c = &DAT_0197a814;
      local_34 = FUN_012fb7fc;
      local_3c = FUN_012fa0d8;
      goto LAB_012fb71c;
    }
    local_50 = param_4;
  }
  local_38 = &local_60;
  puVar2 = &DAT_0057318b;
  local_34 = (code *)&DAT_0197a814;
  local_48 = &local_50;
  local_3c = (code *)&DAT_0197a814;
  local_40 = (undefined **)&local_68;
LAB_012fb71c:
  local_44 = FUN_012fd02c;
                    /* WARNING: Subroutine does not return */
  FUN_012fb100(puVar2,&local_48);
}

