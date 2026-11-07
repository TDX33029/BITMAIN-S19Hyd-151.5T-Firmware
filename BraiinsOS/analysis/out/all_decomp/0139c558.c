// FUN_0139c558 @ 0139c558 size=664 calls_out=8 calls_in=0
// strings: 

void FUN_0139c558(uint *param_1,int *param_2,int param_3,undefined4 param_4)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  uint local_44;
  byte *local_40;
  uint local_3c;
  undefined1 *local_38;
  code *local_34;
  uint local_30;
  uint local_2c;
  undefined1 local_28 [4];
  
  if (param_2[0x254] == 2) {
    if (*param_2 == 2 && param_2[1] == 0) {
      FUN_0139d778(&local_38);
    }
    else {
      if (*(int *)(param_3 + 0x248) == 2) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa444(&DAT_01893558);
      }
      uVar4 = 0;
      if (*(char *)(param_2[0x9e] + 0x15a) == '\x01') {
        uVar4 = (uint)*(byte *)(param_2[0x9e] + 0x15b);
      }
      FUN_0137a9fc(&local_38,param_2,param_3 + 0xd8);
      if (local_38 == (undefined1 *)0x2) {
        bVar2 = (byte)*local_34;
        local_40 = (byte *)local_34;
      }
      else {
        if (((uint)local_38 & uVar4 & 1) == 0) {
          *param_1 = (uint)local_38;
          param_1[1] = (uint)local_34;
          param_1[2] = local_30;
          return;
        }
        FUN_013b7ec0(&local_44,param_4,local_34,local_30,local_30,param_2,param_3 + 0xd8);
        if (local_44 != 2) {
          *param_1 = local_44;
          param_1[1] = (uint)local_40;
          param_1[2] = local_3c;
          return;
        }
        bVar2 = *local_40;
      }
      if (1 < bVar2) {
        local_38 = local_28;
        local_34 = FUN_013c828c;
                    /* WARNING: Subroutine does not return */
        FUN_00faa478(&DAT_005733f0,&local_38,&DAT_01892790);
      }
      thunk_FUN_016d3fb4(local_40);
      FUN_0139d778(&local_38,param_2,param_3,param_4);
    }
  }
  else {
    iVar3 = param_2[0x1f1];
    cVar1 = *(char *)((int)param_2 + 0x7c5);
    FUN_013ae3dc(&local_38,param_2 + 0x144,param_4);
    if (local_38 == (undefined1 *)0x2) {
      bVar2 = (byte)*local_34;
      local_40 = (byte *)local_34;
    }
    else {
      if ((((uint)local_38 & 1) == 0) || ((char)iVar3 == '\0' || cVar1 == '\0')) {
        *param_1 = (uint)local_38;
        param_1[1] = (uint)local_34;
        param_1[2] = local_30;
        return;
      }
      FUN_013b7b18(&local_44,param_4,local_34,local_30,local_30,param_2 + 0x144);
      if (local_44 != 2) {
        *param_1 = local_44;
        param_1[1] = (uint)local_40;
        param_1[2] = local_3c;
        return;
      }
      bVar2 = *local_40;
    }
    if (1 < bVar2) {
      local_38 = local_28;
      local_34 = FUN_013c828c;
                    /* WARNING: Subroutine does not return */
      FUN_00faa478(&DAT_005733f0,&local_38,&DAT_01892790);
    }
    thunk_FUN_016d3fb4(local_40);
    FUN_0139d778(&local_38,param_2,param_3,param_4);
  }
  if (local_38 == (undefined1 *)0x1) {
    *param_1 = 1;
    param_1[1] = local_2c;
    param_1[2] = local_30;
    return;
  }
  *param_1 = 0;
  return;
}

