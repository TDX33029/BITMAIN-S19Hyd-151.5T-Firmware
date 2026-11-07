// FUN_013a68d0 @ 013a68d0 size=1240 calls_out=12 calls_in=0
// strings: internal error: entered unreachable code: ReverseAnchored always has a DFA

void FUN_013a68d0(uint *param_1,int *param_2,int param_3,int *param_4)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  byte **local_58;
  code *local_54;
  uint local_50;
  uint local_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  uint local_3c;
  byte *local_38;
  uint local_34;
  byte local_30 [4];
  byte *local_2c;
  code *local_28;
  
  if (*param_4 - 1U < 2) {
    if (param_2[0x254] == 2) {
      if (*param_2 == 2 && param_2[1] == 0) goto LAB_013a6bb8;
      if (*(int *)(param_3 + 0x248) == 2) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa444(&DAT_01893558);
      }
      uVar5 = 0;
      if (*(char *)(param_2[0x9e] + 0x15a) == '\x01') {
        uVar5 = (uint)*(byte *)(param_2[0x9e] + 0x15b);
      }
      FUN_0137a9fc(&local_58,param_2,param_3 + 0xd8,param_4);
      if (local_58 == (byte **)0x2) {
        bVar1 = (byte)*local_54;
        local_2c = (byte *)local_54;
      }
      else {
        if (((uint)local_58 & uVar5 & 1) == 0) {
          *param_1 = (uint)local_58;
          param_1[1] = (uint)local_54;
          param_1[2] = local_50;
          return;
        }
        FUN_013b7ec0(&local_3c,param_4,local_54,local_50,local_50,param_2,param_3 + 0xd8);
        if (local_3c != 2) {
          *param_1 = local_3c;
          param_1[1] = (uint)local_38;
          param_1[2] = local_34;
          return;
        }
        bVar1 = *local_38;
        local_2c = local_38;
      }
      if (1 < bVar1) {
        local_58 = &local_2c;
        local_54 = FUN_013c828c;
                    /* WARNING: Subroutine does not return */
        FUN_00faa478(&DAT_005733f0,&local_58,&DAT_01892790);
      }
    }
    else {
      iVar3 = param_2[0x1f1];
      cVar2 = *(char *)((int)param_2 + 0x7c5);
      FUN_013ae3dc(&local_58,param_2 + 0x144,param_4);
      if (local_58 == (byte **)0x2) {
        bVar1 = (byte)*local_54;
        local_2c = (byte *)local_54;
      }
      else {
        if ((((uint)local_58 & 1) == 0) || ((char)iVar3 == '\0' || cVar2 == '\0')) {
          *param_1 = (uint)local_58;
          param_1[1] = (uint)local_54;
          param_1[2] = local_50;
          return;
        }
        FUN_013b7b18(&local_3c,param_4,local_54,local_50,local_50,param_2 + 0x144);
        if (local_3c != 2) {
          *param_1 = local_3c;
          param_1[1] = (uint)local_38;
          param_1[2] = local_34;
          return;
        }
        bVar1 = *local_38;
        local_2c = local_38;
      }
      if (1 < bVar1) {
        local_58 = &local_2c;
        local_54 = FUN_013c828c;
                    /* WARNING: Subroutine does not return */
        FUN_00faa478(&DAT_005733f0,&local_58,&DAT_01892790);
      }
    }
    thunk_FUN_016d3fb4(local_2c);
  }
  else {
    local_50 = param_4[2];
    local_4c = param_4[3];
    iStack_48 = param_4[4];
    iStack_44 = param_4[5];
    iStack_40 = param_4[6];
    local_58 = (byte **)0x1;
    if (param_2[0x254] == 2) {
      if (*param_2 == 2 && param_2[1] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa478("internal error: entered unreachable code: ReverseAnchored always has a DFA",
                     0x95,&DAT_01893408);
      }
      if (*(int *)(param_3 + 0x248) == 2) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa444(&DAT_01893568);
      }
      uVar5 = 0;
      if (*(char *)(param_2[0x140] + 0x15a) == '\x01') {
        uVar5 = (uint)*(byte *)(param_2[0x140] + 0x15b);
      }
      FUN_0137d1fc(&local_3c,param_2 + 0xa2,param_3 + 0x198,&local_58);
      if (local_3c == 2) {
        bVar1 = *local_38;
      }
      else {
        if (((local_3c & uVar5 & 1) == 0) ||
           (FUN_013b809c(&local_3c,&local_58,local_38,local_34,local_34,param_2 + 0xa2,
                         param_3 + 0x198), local_3c != 2)) goto joined_r0x013a6d1c;
        bVar1 = *local_38;
      }
      if (1 < bVar1) {
        local_2c = local_30;
        local_28 = FUN_013c828c;
                    /* WARNING: Subroutine does not return */
        FUN_00faa478(&DAT_005733f0,&local_2c,&DAT_01892790);
      }
      pbVar4 = *(byte **)(local_38 + 4);
      thunk_FUN_016d3fb4(local_38);
      local_3c = 2;
      local_38 = pbVar4;
joined_r0x013a6d1c:
      if (local_3c != 2) {
        if ((local_3c & 1) != 0) {
          uVar5 = param_4[5];
          *param_1 = 1;
          param_1[1] = (uint)local_38;
          param_1[2] = uVar5;
          return;
        }
        goto LAB_013a6d40;
      }
    }
    else {
      iVar3 = param_2[0x29f];
      cVar2 = *(char *)((int)param_2 + 0xa7d);
      FUN_013b1554(&local_3c,param_2 + 0x1f2,&local_58);
      if (local_3c == 2) {
        bVar1 = *local_38;
      }
      else {
        if ((((local_3c & 1) == 0) || ((char)iVar3 == '\0' || cVar2 == '\0')) ||
           (FUN_013b8260(&local_3c,&local_58,local_38,local_34,local_34,param_2 + 0x1f2),
           local_3c != 2)) goto joined_r0x013a6d1c;
        bVar1 = *local_38;
      }
      if (1 < bVar1) {
        local_2c = local_30;
        local_28 = FUN_013c828c;
                    /* WARNING: Subroutine does not return */
        FUN_00faa478(&DAT_005733f0,&local_2c,&DAT_01892790);
      }
      thunk_FUN_016d3fb4(local_38);
    }
  }
LAB_013a6bb8:
  FUN_0139d778(&local_58,param_2,param_3,param_4);
  if (local_58 == (byte **)0x1) {
    *param_1 = 1;
    param_1[1] = local_4c;
    param_1[2] = local_50;
    return;
  }
LAB_013a6d40:
  *param_1 = 0;
  return;
}

