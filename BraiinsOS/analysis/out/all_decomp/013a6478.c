// FUN_013a6478 @ 013a6478 size=992 calls_out=10 calls_in=0
// strings: internal error: entered unreachable code: ReverseAnchored always has a DFA

void FUN_013a6478(int *param_1,int *param_2,int param_3,int *param_4)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  uint extraout_r3;
  uint uVar4;
  byte *pbVar5;
  int local_58;
  byte **local_54;
  int local_50;
  int local_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  byte ***local_3c;
  code *local_38;
  uint local_34;
  byte *local_30;
  byte **local_2c;
  code *local_28;
  
  if (*param_4 - 1U < 2) {
    if (param_2[0x254] == 2) {
      if (*param_2 == 2 && param_2[1] == 0) goto LAB_013a66c0;
      if (*(int *)(param_3 + 0x248) == 2) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa444(&DAT_01893548);
      }
      FUN_0139daac(&local_58,param_2,param_3 + 0xd8,param_4);
      if (local_58 != 2) goto LAB_013a6658;
      local_2c = local_54;
      if (1 < *(byte *)local_54) {
        local_3c = &local_2c;
        local_38 = FUN_013c828c;
                    /* WARNING: Subroutine does not return */
        FUN_00faa478(&DAT_005733f0,&local_3c,&DAT_01892790);
      }
    }
    else {
      FUN_0139d490(&local_58,param_2 + 0x144,param_4);
      if (local_58 != 2) {
LAB_013a6658:
        param_1[2] = local_50;
        *param_1 = local_58;
        param_1[1] = (int)local_54;
        param_1[3] = local_4c;
        return;
      }
      local_2c = local_54;
      if (1 < *(byte *)local_54) {
        local_3c = &local_2c;
        local_38 = FUN_013c828c;
                    /* WARNING: Subroutine does not return */
        FUN_00faa478(&DAT_005733f0,&local_3c,&DAT_01892790);
      }
    }
    thunk_FUN_016d3fb4();
    goto LAB_013a66c0;
  }
  local_50 = param_4[2];
  local_4c = param_4[3];
  iStack_48 = param_4[4];
  iStack_44 = param_4[5];
  iStack_40 = param_4[6];
  local_58 = 1;
  if (param_2[0x254] == 2) {
    if (*param_2 == 2 && param_2[1] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa478("internal error: entered unreachable code: ReverseAnchored always has a DFA",0x95
                   ,&DAT_01893408);
    }
    if (*(int *)(param_3 + 0x248) == 2) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa444(&DAT_01893568);
    }
    uVar4 = 0;
    if (*(char *)(param_2[0x140] + 0x15a) == '\x01') {
      uVar4 = (uint)*(byte *)(param_2[0x140] + 0x15b);
    }
    FUN_0137d1fc(&local_3c,param_2 + 0xa2,param_3 + 0x198,&local_58);
    if (local_3c == (byte ***)0x2) {
      bVar1 = (byte)*local_38;
      local_30 = (byte *)local_38;
    }
    else {
      if ((((uint)local_3c & uVar4 & 1) == 0) ||
         (FUN_013b809c(&local_3c,&local_58,local_38,local_34,local_34,param_2 + 0xa2,param_3 + 0x198
                      ), local_3c != (byte ***)0x2)) goto LAB_013a66b8;
      bVar1 = (byte)*local_38;
      local_30 = (byte *)local_38;
    }
    if (1 < bVar1) {
      local_2c = &local_30;
      local_28 = FUN_013c828c;
                    /* WARNING: Subroutine does not return */
      FUN_00faa478(&DAT_005733f0,&local_2c,&DAT_01892790);
    }
LAB_013a6644:
    pbVar5 = *(byte **)(local_30 + 4);
    thunk_FUN_016d3fb4(local_30);
    local_3c = (byte ***)0x2;
    local_34 = extraout_r3;
    local_38 = (code *)pbVar5;
  }
  else {
    iVar3 = param_2[0x29f];
    cVar2 = *(char *)((int)param_2 + 0xa7d);
    FUN_013b1554(&local_3c,param_2 + 0x1f2,&local_58);
    if (local_3c == (byte ***)0x2) {
      bVar1 = (byte)*local_38;
      local_30 = (byte *)local_38;
joined_r0x013a6640:
      if (1 < bVar1) {
        local_2c = &local_30;
        local_28 = FUN_013c828c;
                    /* WARNING: Subroutine does not return */
        FUN_00faa478(&DAT_005733f0,&local_2c,&DAT_01892790);
      }
      goto LAB_013a6644;
    }
    if ((((((uint)local_3c & 1) != 0) && ((char)iVar3 != '\0')) && (cVar2 != '\0')) &&
       (FUN_013b8260(&local_3c,&local_58,local_38,local_34,local_34,param_2 + 0x1f2),
       local_3c == (byte ***)0x2)) {
      bVar1 = (byte)*local_38;
      local_30 = (byte *)local_38;
      goto joined_r0x013a6640;
    }
  }
LAB_013a66b8:
  if (local_3c != (byte ***)0x2) {
    if (((uint)local_3c & 1) == 0) {
      *param_1 = 0;
      return;
    }
    if ((uint)param_4[5] < local_34) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa478(&DAT_003ceb44,0x25,&DAT_018935b8);
    }
    param_1[2] = param_4[5];
    *param_1 = 1;
    param_1[1] = local_34;
    param_1[3] = (int)local_38;
    return;
  }
LAB_013a66c0:
  FUN_0139d778(param_1,param_2,param_3,param_4);
  return;
}

