// FUN_0169d9e8 @ 0169d9e8 size=404 calls_out=7 calls_in=0
// strings: 

void FUN_0169d9e8(uint *param_1,int *param_2,int param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  
  if (param_2[0x254] == 2) {
    if (*param_2 == 2 && param_2[1] == 0) goto LAB_0169daac;
    if (*(int *)(param_3 + 0x248) == 2) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&DAT_01d08064);
    }
    uVar3 = 0;
    if (*(char *)(param_2[0x9e] + 0x15a) == '\x01') {
      uVar3 = (uint)*(byte *)(param_2[0x9e] + 0x15b);
    }
    FUN_016845b8(&local_34,param_2,param_3 + 0xd8,param_4);
    if (local_34 == 2) goto LAB_0169daa4;
    if ((local_34 & uVar3 & 1) == 0) {
LAB_0169da74:
      *param_1 = local_34;
      param_1[1] = local_30;
      param_1[2] = local_2c;
      return;
    }
    FUN_01686d30(&local_40,param_4,local_30,local_2c,local_2c,param_2,param_3 + 0xd8);
    if (local_40 != 2) {
      local_34 = local_40;
      local_30 = local_3c;
      local_2c = local_38;
      goto LAB_0169da74;
    }
  }
  else {
    iVar2 = param_2[0x1f1];
    cVar1 = *(char *)((int)param_2 + 0x7c5);
    FUN_0167efb0(&local_34,param_2 + 0x144,param_4);
    if (local_34 == 2) {
LAB_0169daa4:
      local_3c = local_30;
    }
    else {
      if (((local_34 & 1) == 0) || ((char)iVar2 == '\0' || cVar1 == '\0')) {
LAB_0169db08:
        *param_1 = local_34;
        param_1[1] = local_30;
        param_1[2] = local_2c;
        return;
      }
      FUN_01686b80(&local_40,param_4,local_30,local_2c,local_2c,param_2 + 0x144);
      if (local_40 != 2) {
        local_34 = local_40;
        local_30 = local_3c;
        local_2c = local_38;
        goto LAB_0169db08;
      }
    }
  }
  FUN_016c2dec(local_3c);
LAB_0169daac:
  FUN_0169e4e0(&local_34,param_2,param_3,param_4);
  if (local_34 != 0) {
    param_1[1] = local_28;
    param_1[2] = local_2c;
  }
  *param_1 = (uint)(local_34 != 0);
  return;
}

