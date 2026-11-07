// FUN_016a5230 @ 016a5230 size=688 calls_out=12 calls_in=0
// strings: 

uint FUN_016a5230(int *param_1,int param_2,int *param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint local_48;
  undefined4 local_44;
  int local_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  undefined1 local_30;
  uint local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  if (1 < *param_3 - 1U) {
    local_30 = (undefined1)param_3[6];
    local_40 = param_3[2];
    iStack_3c = param_3[3];
    iStack_38 = param_3[4];
    iStack_34 = param_3[5];
    local_48 = 1;
    if (param_1[0x254] == 2) {
      if (*param_1 == 2 && param_1[1] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb100(&DAT_004ce4ac,0x95,&DAT_01d07f64);
      }
      if (*(int *)(param_2 + 0x248) == 2) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0cc(&DAT_01d08074);
      }
      uVar3 = 0;
      if (*(char *)(param_1[0x140] + 0x15a) == '\x01') {
        uVar3 = (uint)*(byte *)(param_1[0x140] + 0x15b);
      }
      FUN_016834b8(&local_2c,param_1 + 0xa2,param_2 + 0x198,&local_48);
      if (local_2c != 2) {
        if ((local_2c & uVar3 & 1) != 0) {
          FUN_01687260(&local_2c,&local_48,local_28,local_24,local_24,param_1 + 0xa2,param_2 + 0x198
                      );
          goto LAB_016a54b8;
        }
        goto LAB_016a5454;
      }
LAB_016a53ec:
      FUN_016c2dec(local_28);
      local_2c = 2;
    }
    else {
      iVar2 = param_1[0x29f];
      cVar1 = *(char *)((int)param_1 + 0xa7d);
      FUN_0168111c(&local_2c,param_1 + 0x1f2,&local_48);
      if (local_2c == 2) goto LAB_016a53ec;
      if (((local_2c & 1) != 0) && ((char)iVar2 != '\0' && cVar1 != '\0')) {
        FUN_016873fc(&local_2c,&local_48,local_28,local_24,local_24,param_1 + 0x1f2);
LAB_016a54b8:
        if (local_2c == 2) goto LAB_016a53ec;
      }
    }
LAB_016a5454:
    uVar3 = local_2c;
    if (local_2c != 2) {
LAB_016a5474:
      return (uint)(uVar3 != 0);
    }
    goto LAB_016a545c;
  }
  if (param_1[0x254] == 2) {
    if (*param_1 == 2 && param_1[1] == 0) goto LAB_016a545c;
    if (*(int *)(param_2 + 0x248) == 2) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&DAT_01d08064);
    }
    uVar4 = 0;
    if (*(char *)(param_1[0x9e] + 0x15a) == '\x01') {
      uVar4 = (uint)*(byte *)(param_1[0x9e] + 0x15b);
    }
    FUN_016845b8(&local_48,param_1,param_2 + 0xd8,param_3);
    if (local_48 != 2) {
      uVar3 = local_48;
      if ((local_48 & uVar4 & 1) == 0) goto LAB_016a5474;
      FUN_01686d30(&local_2c,param_3,local_44,local_40,local_40,param_1,param_2 + 0xd8);
      goto LAB_016a542c;
    }
LAB_016a53b4:
    local_28 = local_44;
  }
  else {
    iVar2 = param_1[0x1f1];
    cVar1 = *(char *)((int)param_1 + 0x7c5);
    FUN_0167efb0(&local_48,param_1 + 0x144,param_3);
    if (local_48 == 2) goto LAB_016a53b4;
    uVar3 = local_48;
    if (((local_48 & 1) == 0) || ((char)iVar2 == '\0' || cVar1 == '\0')) goto LAB_016a5474;
    FUN_01686b80(&local_2c,param_3,local_44,local_40,local_40,param_1 + 0x144);
LAB_016a542c:
    uVar3 = local_2c;
    if (local_2c != 2) goto LAB_016a5474;
  }
  FUN_016c2dec(local_28);
LAB_016a545c:
  uVar3 = FUN_0169f1f8(param_1,param_2,param_3);
  return uVar3;
}

