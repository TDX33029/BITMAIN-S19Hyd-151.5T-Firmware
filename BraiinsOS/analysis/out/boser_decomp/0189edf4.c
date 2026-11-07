// FUN_0189edf4 @ 0189edf4 size=400 calls_out=6 calls_in=1
// strings: {recursion limit reached}

undefined4 FUN_0189edf4(int *param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  undefined8 uVar6;
  uint local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  if (*param_1 == 0) {
    iVar5 = param_1[4];
    if (iVar5 == 0) {
      return 0;
    }
    uVar6 = 0x1005258a1;
  }
  else {
    FUN_0189f0a0(&local_30,param_1);
    uVar1 = local_30;
    if (local_30 == 0) {
      if (param_1[4] != 0) {
        pcVar4 = "{recursion limit reached}";
        if ((char)local_2c == '\0') {
          pcVar4 = 
          "{invalid syntax}struct ErrorCodeInvalidCrlNumber/etc/bos_ref.cfgSessionTicketAck\x05";
        }
        uVar3 = 0x10;
        if ((char)local_2c != '\0') {
          uVar3 = 0x19;
        }
        iVar5 = FUN_012fb940(param_1[4],pcVar4,uVar3);
        if (iVar5 != 0) {
          return 1;
        }
      }
      *(char *)(param_1 + 1) = (char)local_2c;
      *param_1 = 0;
      return 0;
    }
    FUN_0189f168(&local_30,local_30,local_2c);
    if ((local_30 & 1) == 0) {
      iVar5 = param_1[4];
      if (iVar5 == 0) {
        return 0;
      }
      iVar2 = FUN_012fb940(iVar5,"0x",2);
      if (iVar2 != 0) {
        return 1;
      }
      iVar2 = FUN_012fb940(iVar5,uVar1,local_2c);
    }
    else {
      iVar5 = param_1[4];
      local_1c = local_24;
      local_20 = local_28;
      if (iVar5 == 0) {
        return 0;
      }
      iVar2 = FUN_012fd074(&local_20,iVar5);
    }
    if (iVar2 != 0) {
      return 1;
    }
    if ((*(byte *)(iVar5 + 10) & 0x80) != 0) {
      return 0;
    }
    uVar6 = FUN_018a0238(param_2);
    if ((int)uVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&DAT_01d2201c);
    }
  }
  uVar3 = FUN_012fb940(iVar5,(int)uVar6,(int)((ulonglong)uVar6 >> 0x20));
  return uVar3;
}

