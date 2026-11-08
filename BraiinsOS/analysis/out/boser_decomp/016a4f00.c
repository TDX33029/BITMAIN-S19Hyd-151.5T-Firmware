// FUN_016a4f00 @ 016a4f00 size=800 calls_out=12 calls_in=0
// strings: 

void FUN_016a4f00(uint *param_1,int *param_2,int param_3,int *param_4)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  int iStack_3c;
  uint uStack_38;
  undefined1 local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  
  if (*param_4 - 1U < 2) {
    if (param_2[0x254] == 2) {
      if (!(*param_2 == 2 && param_2[1] == 0)) {
        if (*(int *)(param_3 + 0x248) == 2) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb0cc(&DAT_01d08064);
        }
        uVar4 = 0;
        if (*(char *)(param_2[0x9e] + 0x15a) == '\x01') {
          uVar4 = (uint)*(byte *)(param_2[0x9e] + 0x15b);
        }
        FUN_016845b8(&local_4c,param_2,param_3 + 0xd8,param_4);
        if (local_4c == 2) goto LAB_016a507c;
        if ((local_4c & uVar4 & 1) == 0) {
LAB_016a4f9c:
          *param_1 = local_4c;
          param_1[1] = local_48;
          param_1[2] = local_44;
          return;
        }
        FUN_01686d30(&local_30,param_4,local_48,local_44,local_44,param_2,param_3 + 0xd8);
        if (local_30 != 2) {
          local_4c = local_30;
          local_48 = local_2c;
          local_44 = local_28;
          goto LAB_016a4f9c;
        }
        goto LAB_016a5080;
      }
    }
    else {
      iVar2 = param_2[0x1f1];
      cVar1 = *(char *)((int)param_2 + 0x7c5);
      FUN_0167efb0(&local_4c,param_2 + 0x144,param_4);
      if (local_4c == 2) {
LAB_016a507c:
        local_2c = local_48;
      }
      else {
        uVar4 = local_44;
        if (((local_4c & 1) == 0) || ((char)iVar2 == '\0' || cVar1 == '\0')) goto LAB_016a5170;
        FUN_01686b80(&local_30,param_4,local_48,local_44,local_44,param_2 + 0x144);
        if (local_30 != 2) {
          local_4c = local_30;
          local_48 = local_2c;
          uVar4 = local_28;
          goto LAB_016a5170;
        }
      }
LAB_016a5080:
      FUN_016c2dec(local_2c);
    }
LAB_016a5130:
    FUN_0169e4e0(&local_4c,param_2,param_3,param_4);
    if (local_4c != 0) {
      param_1[1] = local_40;
      param_1[2] = local_44;
      uVar4 = 1;
      goto LAB_016a5184;
    }
  }
  else {
    local_34 = (undefined1)param_4[6];
    local_44 = param_4[2];
    local_40 = param_4[3];
    iStack_3c = param_4[4];
    uVar4 = param_4[5];
    local_4c = 1;
    uStack_38 = uVar4;
    if (param_2[0x254] == 2) {
      if (*param_2 == 2 && param_2[1] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb100(&DAT_004ce4ac,0x95,&DAT_01d07f64);
      }
      if (*(int *)(param_3 + 0x248) == 2) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0cc(&DAT_01d08074);
      }
      uVar3 = 0;
      if (*(char *)(param_2[0x140] + 0x15a) == '\x01') {
        uVar3 = (uint)*(byte *)(param_2[0x140] + 0x15b);
      }
      FUN_016834b8(&local_30,param_2 + 0xa2,param_3 + 0x198,&local_4c);
      if (local_30 != 2) {
        local_48 = local_2c;
        if ((local_30 & uVar3 & 1) != 0) {
          FUN_01687260(&local_30,&local_4c,local_2c,local_28,local_28,param_2 + 0xa2,param_3 + 0x198
                      );
          goto LAB_016a51c0;
        }
        goto LAB_016a5128;
      }
LAB_016a50b4:
      local_48 = FUN_016c2dec(local_2c);
      local_30 = 2;
    }
    else {
      iVar2 = param_2[0x29f];
      cVar1 = *(char *)((int)param_2 + 0xa7d);
      FUN_0168111c(&local_30,param_2 + 0x1f2,&local_4c);
      if (local_30 == 2) goto LAB_016a50b4;
      local_48 = local_2c;
      if (((local_30 & 1) != 0) && ((char)iVar2 != '\0' && cVar1 != '\0')) {
        FUN_016873fc(&local_30,&local_4c,local_2c,local_28,local_28,param_2 + 0x1f2);
LAB_016a51c0:
        if (local_30 == 2) goto LAB_016a50b4;
        local_48 = local_2c;
      }
    }
LAB_016a5128:
    if (local_30 == 2) goto LAB_016a5130;
    if ((local_30 & 1) != 0) {
      local_4c = 1;
LAB_016a5170:
      *param_1 = local_4c;
      param_1[1] = local_48;
      param_1[2] = uVar4;
      return;
    }
  }
  uVar4 = 0;
LAB_016a5184:
  *param_1 = uVar4;
  return;
}

