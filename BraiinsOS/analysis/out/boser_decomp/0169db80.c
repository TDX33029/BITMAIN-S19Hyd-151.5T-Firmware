// FUN_0169db80 @ 0169db80 size=328 calls_out=7 calls_in=0
// strings: 

uint FUN_0169db80(int *param_1,int param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint local_38;
  undefined4 local_34;
  uint local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  if (param_1[0x254] == 2) {
    if (*param_1 == 2 && param_1[1] == 0) goto LAB_0169dc4c;
    if (*(int *)(param_2 + 0x248) == 2) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&DAT_01d08064);
    }
    uVar3 = 0;
    if (*(char *)(param_1[0x9e] + 0x15a) == '\x01') {
      uVar3 = (uint)*(byte *)(param_1[0x9e] + 0x15b);
    }
    FUN_016845b8(&local_2c,param_1,param_2 + 0xd8,param_3);
    if (local_2c != 2) {
      if ((local_2c & uVar3 & 1) == 0) goto LAB_0169dc78;
      FUN_01686d30(&local_38,param_3,local_28,local_24,local_24,param_1,param_2 + 0xd8);
      goto LAB_0169dcb4;
    }
LAB_0169dc44:
    local_34 = local_28;
  }
  else {
    iVar2 = param_1[0x1f1];
    cVar1 = *(char *)((int)param_1 + 0x7c5);
    FUN_0167efb0(&local_2c,param_1 + 0x144,param_3);
    if (local_2c == 2) goto LAB_0169dc44;
    if (((local_2c & 1) == 0) || ((char)iVar2 == '\0' || cVar1 == '\0')) goto LAB_0169dc78;
    FUN_01686b80(&local_38,param_3,local_28,local_24,local_24,param_1 + 0x144);
LAB_0169dcb4:
    local_2c = local_38;
    if (local_38 != 2) {
LAB_0169dc78:
      return (uint)(local_2c != 0);
    }
  }
  FUN_016c2dec(local_34);
LAB_0169dc4c:
  uVar3 = FUN_0169f1f8(param_1,param_2,param_3);
  return uVar3;
}

