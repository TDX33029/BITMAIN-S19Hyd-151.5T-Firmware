// FUN_00faa8ac @ 00faa8ac size=704 calls_out=2 calls_in=163
// strings: [...]

void FUN_00faa8ac(int param_1,uint param_2,uint param_3,uint param_4,undefined4 param_5)

{
  byte *pbVar1;
  uint uVar2;
  uint local_70;
  uint uStack_6c;
  int local_68;
  uint local_64;
  char *local_60;
  undefined4 local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  int local_4c;
  uint *local_48;
  undefined1 *local_44;
  uint *local_40;
  code *local_3c;
  char **local_38;
  code *local_34;
  char **local_30;
  undefined4 *local_2c;
  char **local_28;
  undefined4 *local_24;
  
  local_48 = &local_70;
  if (param_2 < 0x101) {
    local_5c = 0;
    local_60 = (char *)0x1;
    local_64 = param_2;
  }
  else {
    local_64 = 0x100;
    do {
      if (-0x41 < *(char *)(param_1 + local_64)) goto LAB_00faa914;
      local_64 = local_64 - 1;
    } while (local_64 != 0);
    local_64 = 0;
LAB_00faa914:
    local_5c = 0;
    local_60 = "[...]";
    if (local_64 < param_2) {
      local_5c = 5;
    }
    else {
      local_60 = (char *)0x1;
    }
  }
  local_50 = param_3;
  local_70 = param_3;
  uStack_6c = param_4;
  local_68 = param_1;
  if (param_3 <= param_2) {
    if (param_4 <= param_2) {
      if (param_4 < param_3) {
        local_30 = &local_60;
        local_38 = (char **)&local_68;
        local_40 = &uStack_6c;
        local_2c = &DAT_015bee04;
        local_34 = (code *)&DAT_015bee04;
        local_3c = (code *)&LAB_00fac484;
        local_44 = &LAB_00fac484;
                    /* WARNING: Subroutine does not return */
        FUN_00faa478(&DAT_0056dea2,&local_48);
      }
      local_58 = param_4;
      if (((param_3 != 0) && (param_3 < param_2)) && (*(char *)(param_1 + param_3) < -0x40)) {
        local_58 = param_3;
      }
      if (local_58 < param_2) {
        for (local_50 = local_58; local_50 != 0; local_50 = local_50 - 1) {
          if (-0x41 < *(char *)(param_1 + local_50)) {
            if (local_50 == param_2) goto LAB_00faa9b0;
            goto LAB_00faa9c4;
          }
        }
        local_50 = 0;
        if (param_2 != 0) {
LAB_00faa9c4:
          pbVar1 = (byte *)(param_1 + local_50);
          local_54 = (uint)*pbVar1;
          if ((char)*pbVar1 < '\0') {
            if (local_54 < 0xe0) {
              local_54 = pbVar1[1] & 0x3f | (local_54 & 0x1f) << 6;
            }
            else {
              uVar2 = pbVar1[2] & 0x3f | (pbVar1[1] & 0x3f) << 6;
              if (local_54 < 0xf0) {
                local_54 = uVar2 | (local_54 & 0x1f) << 0xc;
              }
              else {
                local_54 = pbVar1[3] & 0x3f | uVar2 << 6 | (local_54 & 7) << 0x12;
              }
            }
            local_4c = 1;
            if (0x7f < local_54) {
              local_4c = 2;
            }
            if ((0x7ff < local_54) && (local_4c = 4, local_54 < 0x10000)) {
              local_4c = 3;
            }
          }
          else {
            local_4c = 1;
          }
          local_4c = local_4c + local_50;
          local_28 = &local_60;
          local_30 = (char **)&local_68;
          local_38 = (char **)&local_50;
          local_40 = &local_54;
          local_48 = &local_58;
          local_24 = &DAT_015bee04;
          local_2c = &DAT_015bee04;
          local_34 = FUN_00faab9c;
          local_3c = FUN_00fa93dc;
          local_44 = &LAB_00fac484;
                    /* WARNING: Subroutine does not return */
          FUN_00faa478(&DAT_0056b8b5,&local_48);
        }
      }
LAB_00faa9b0:
                    /* WARNING: Subroutine does not return */
      FUN_00faa444(param_5);
    }
    local_50 = param_4;
  }
  local_38 = &local_60;
  local_44 = &LAB_00fac484;
  local_34 = (code *)&DAT_015bee04;
  local_48 = &local_50;
  local_3c = (code *)&DAT_015bee04;
  local_40 = (uint *)&local_68;
                    /* WARNING: Subroutine does not return */
  FUN_00faa478(&DAT_0056e15d,&local_48);
}

