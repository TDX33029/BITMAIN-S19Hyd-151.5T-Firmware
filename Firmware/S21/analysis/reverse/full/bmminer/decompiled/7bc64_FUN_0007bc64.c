// FUN_0007bc64 @ 0007bc64  size=1644  callers=1
// program: bmminer


void FUN_0007bc64(int param_1,undefined4 param_2)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  byte *local_14;
  byte *local_10;
  int local_c;
  
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0xffffffff;
  local_c = FUN_0007b94c(param_1,param_2);
  while (local_c != 0x22) {
    if (local_c == -2) goto LAB_0007c2c0;
    if (local_c == -1) {
      FUN_0007b2bc(param_2,param_1,6,"premature end of input");
      goto LAB_0007c2c0;
    }
    if ((-1 < local_c) && (local_c < 0x20)) {
      FUN_0007b9d8(param_1,local_c);
      if (local_c == 10) {
        FUN_0007b2bc(param_2,param_1,8,"unexpected newline");
      }
      else {
        FUN_0007b2bc(param_2,param_1,8,"control character 0x%x",local_c);
      }
      goto LAB_0007c2c0;
    }
    if (local_c == 0x5c) {
      local_c = FUN_0007b94c(param_1,param_2);
      if (local_c == 0x75) {
        local_c = FUN_0007b94c(param_1,param_2);
        for (local_18 = 0; local_18 < 4; local_18 = local_18 + 1) {
          if ((((local_c < 0x30) || (0x39 < local_c)) && ((local_c < 0x41 || (0x46 < local_c)))) &&
             ((local_c < 0x61 || (0x66 < local_c)))) {
            FUN_0007b2bc(param_2,param_1,8,"invalid escape");
            goto LAB_0007c2c0;
          }
          local_c = FUN_0007b94c(param_1,param_2);
        }
      }
      else {
        if (((((local_c != 0x22) && (local_c != 0x5c)) && (local_c != 0x2f)) &&
            ((local_c != 0x62 && (local_c != 0x66)))) &&
           ((local_c != 0x6e && ((local_c != 0x72 && (local_c != 0x74)))))) {
          FUN_0007b2bc(param_2,param_1,8,"invalid escape");
          goto LAB_0007c2c0;
        }
        local_c = FUN_0007b94c(param_1,param_2);
      }
    }
    else {
      local_c = FUN_0007b94c(param_1,param_2);
    }
  }
  local_14 = (byte *)FUN_0007d8a0(*(int *)(param_1 + 0x2c) + 1);
  if (local_14 == (byte *)0x0) {
LAB_0007c2c0:
    FUN_0007baec(param_1);
  }
  else {
    *(byte **)(param_1 + 0x40) = local_14;
    iVar2 = FUN_0007db90(param_1 + 0x28);
    local_10 = (byte *)(iVar2 + 1);
    while (*local_10 != 0x22) {
      if (*local_10 == 0x5c) {
        pbVar3 = local_10 + 1;
        if (*pbVar3 == 0x75) {
          local_10 = pbVar3;
          local_1c = FUN_0007bb30(pbVar3);
          if (local_1c < 0) {
            FUN_0007b2bc(param_2,param_1,8,"invalid Unicode escape \'%.6s\'",local_10 + -1);
            goto LAB_0007c2c0;
          }
          pbVar3 = local_10 + 5;
          if ((local_1c < 0xd800) || (0xdbff < local_1c)) {
            local_10 = pbVar3;
            if ((0xdbff < local_1c) && (local_1c < 0xe000)) {
              FUN_0007b2bc(param_2,param_1,8,"invalid Unicode \'\\u%04X\'",local_1c);
              goto LAB_0007c2c0;
            }
          }
          else {
            if ((*pbVar3 != 0x5c) || (local_10[6] != 0x75)) {
              local_10 = pbVar3;
              FUN_0007b2bc(param_2,param_1,8,"invalid Unicode \'\\u%04X\'",local_1c);
              goto LAB_0007c2c0;
            }
            local_10 = local_10 + 6;
            local_20 = FUN_0007bb30(local_10);
            if (local_20 < 0) {
              FUN_0007b2bc(param_2,param_1,8,"invalid Unicode escape \'%.6s\'",local_10 + -1);
              goto LAB_0007c2c0;
            }
            local_10 = local_10 + 5;
            if ((local_20 < 0xdc00) || (0xdfff < local_20)) {
              FUN_0007b2bc(param_2,param_1,8,"invalid Unicode \'\\u%04X\\u%04X\'",local_1c,local_20)
              ;
              goto LAB_0007c2c0;
            }
            local_1c = (local_1c + -0xd800) * 0x400 + local_20 + 0x2400;
          }
          iVar2 = FUN_0007e210(local_1c,local_14,&local_24);
          if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
            __assert_fail("0","load.c",0x1c4,"lex_scan_string");
          }
          local_14 = local_14 + local_24;
        }
        else {
          bVar1 = *pbVar3;
          if (bVar1 == 0x62) {
            *local_14 = 8;
          }
          else if (bVar1 < 99) {
            if (((bVar1 != 0x2f) && (bVar1 != 0x5c)) && (bVar1 != 0x22)) goto LAB_0007c210;
            *local_14 = *pbVar3;
          }
          else if (bVar1 == 0x6e) {
            *local_14 = 10;
          }
          else if (bVar1 < 0x6f) {
            if (bVar1 != 0x66) {
LAB_0007c210:
              local_10 = pbVar3;
                    /* WARNING: Subroutine does not return */
              __assert_fail("0","load.c",0x1d0,"lex_scan_string");
            }
            *local_14 = 0xc;
          }
          else if (bVar1 == 0x72) {
            *local_14 = 0xd;
          }
          else {
            if (bVar1 != 0x74) goto LAB_0007c210;
            *local_14 = 9;
          }
          local_14 = local_14 + 1;
          local_10 = local_10 + 2;
        }
      }
      else {
        *local_14 = *local_10;
        local_14 = local_14 + 1;
        local_10 = local_10 + 1;
      }
    }
    *local_14 = 0;
    *(int *)(param_1 + 0x44) = (int)local_14 - *(int *)(param_1 + 0x40);
    *(undefined4 *)(param_1 + 0x3c) = 0x100;
  }
  return;
}

