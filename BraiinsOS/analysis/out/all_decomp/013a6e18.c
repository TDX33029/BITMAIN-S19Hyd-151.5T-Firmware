// FUN_013a6e18 @ 013a6e18 size=1032 calls_out=12 calls_in=0
// strings: internal error: entered unreachable code: ReverseAnchored always has a DFA

uint FUN_013a6e18(int *param_1,int param_2,int *param_3)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  byte ****ppppbVar4;
  uint uVar5;
  byte ****local_58;
  byte ***local_54;
  int local_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  byte ***local_38;
  byte ***local_34;
  undefined4 local_30;
  byte ***local_2c;
  byte ***local_28;
  code *local_24;
  
  if (*param_3 - 1U < 2) {
    if (param_1[0x254] == 2) {
      if (*param_1 == 2 && param_1[1] == 0) goto LAB_013a7148;
      if (*(int *)(param_2 + 0x248) == 2) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa444(&DAT_01893558);
      }
      uVar5 = 0;
      if (*(char *)(param_1[0x9e] + 0x15a) == '\x01') {
        uVar5 = (uint)*(byte *)(param_1[0x9e] + 0x15b);
      }
      FUN_0137a9fc(&local_58,param_1,param_2 + 0xd8,param_3);
      if (local_58 == (byte ****)0x2) {
        bVar1 = *(byte *)local_54;
        local_28 = local_54;
      }
      else {
        ppppbVar4 = local_58;
        if ((((uint)local_58 & uVar5 & 1) == 0) ||
           (FUN_013b7ec0(&local_38,param_3,local_54,local_50,local_50,param_1,param_2 + 0xd8),
           ppppbVar4 = (byte ****)local_38, local_38 != (byte ***)0x2)) goto LAB_013a717c;
        bVar1 = *(byte *)local_34;
        local_28 = local_34;
      }
      if (1 < bVar1) {
        local_58 = &local_28;
        local_54 = (byte ***)FUN_013c828c;
                    /* WARNING: Subroutine does not return */
        FUN_00faa478(&DAT_005733f0,&local_58,&DAT_01892790);
      }
    }
    else {
      iVar3 = param_1[0x1f1];
      cVar2 = *(char *)((int)param_1 + 0x7c5);
      FUN_013ae3dc(&local_58,param_1 + 0x144,param_3);
      if (local_58 == (byte ****)0x2) {
        bVar1 = *(byte *)local_54;
        local_28 = local_54;
      }
      else {
        ppppbVar4 = local_58;
        if (((((uint)local_58 & 1) == 0) || ((char)iVar3 == '\0' || cVar2 == '\0')) ||
           (FUN_013b7b18(&local_38,param_3,local_54,local_50,local_50,param_1 + 0x144),
           ppppbVar4 = (byte ****)local_38, local_38 != (byte ***)0x2)) {
LAB_013a717c:
          return (uint)(ppppbVar4 == (byte ****)0x1);
        }
        bVar1 = *(byte *)local_34;
        local_28 = local_34;
      }
      if (1 < bVar1) {
        local_58 = &local_28;
        local_54 = (byte ***)FUN_013c828c;
                    /* WARNING: Subroutine does not return */
        FUN_00faa478(&DAT_005733f0,&local_58,&DAT_01892790);
      }
    }
    thunk_FUN_016d3fb4(local_28);
    goto LAB_013a7148;
  }
  local_50 = param_3[2];
  iStack_4c = param_3[3];
  iStack_48 = param_3[4];
  iStack_44 = param_3[5];
  iStack_40 = param_3[6];
  local_58 = (byte ****)0x1;
  if (param_1[0x254] == 2) {
    if (*param_1 == 2 && param_1[1] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa478("internal error: entered unreachable code: ReverseAnchored always has a DFA",0x95
                   ,&DAT_01893408);
    }
    if (*(int *)(param_2 + 0x248) == 2) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa444(&DAT_01893568);
    }
    uVar5 = 0;
    if (*(char *)(param_1[0x140] + 0x15a) == '\x01') {
      uVar5 = (uint)*(byte *)(param_1[0x140] + 0x15b);
    }
    FUN_0137d1fc(&local_38,param_1 + 0xa2,param_2 + 0x198,&local_58);
    if (local_38 == (byte ***)0x2) {
      bVar1 = *(byte *)local_34;
      local_2c = local_34;
joined_r0x013a6f70:
      if (1 < bVar1) {
        local_28 = (byte ***)&local_2c;
        local_24 = FUN_013c828c;
                    /* WARNING: Subroutine does not return */
        FUN_00faa478(&DAT_005733f0,&local_28,&DAT_01892790);
      }
      goto LAB_013a702c;
    }
    if ((((uint)local_38 & uVar5 & 1) != 0) &&
       (FUN_013b809c(&local_38,&local_58,local_34,local_30,local_30,param_1 + 0xa2,param_2 + 0x198),
       local_38 == (byte ***)0x2)) {
      bVar1 = *(byte *)local_34;
      local_2c = local_34;
      goto joined_r0x013a6f70;
    }
  }
  else {
    iVar3 = param_1[0x29f];
    cVar2 = *(char *)((int)param_1 + 0xa7d);
    FUN_013b1554(&local_38,param_1 + 0x1f2,&local_58);
    if (local_38 == (byte ***)0x2) {
      bVar1 = *(byte *)local_34;
      local_2c = local_34;
    }
    else {
      if (((((uint)local_38 & 1) == 0) || ((char)iVar3 == '\0' || cVar2 == '\0')) ||
         (FUN_013b8260(&local_38,&local_58,local_34,local_30,local_30,param_1 + 0x1f2),
         local_38 != (byte ***)0x2)) goto LAB_013a7140;
      bVar1 = *(byte *)local_34;
      local_2c = local_34;
    }
    if (1 < bVar1) {
      local_28 = (byte ***)&local_2c;
      local_24 = FUN_013c828c;
                    /* WARNING: Subroutine does not return */
      FUN_00faa478(&DAT_005733f0,&local_28,&DAT_01892790);
    }
LAB_013a702c:
    thunk_FUN_016d3fb4(local_2c);
    local_38 = (byte ***)0x2;
  }
LAB_013a7140:
  if (local_38 != (byte ***)0x2) {
    return (uint)(local_38 != (byte ***)0x0);
  }
LAB_013a7148:
  uVar5 = FUN_0139e540(param_1,param_2,param_3);
  return uVar5;
}

