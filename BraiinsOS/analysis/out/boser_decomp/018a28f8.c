// FUN_018a28f8 @ 018a28f8 size=248 calls_out=3 calls_in=1
// strings: {recursion limit reached}

undefined4 FUN_018a28f8(int *param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  int local_40;
  int local_3c;
  int iStack_38;
  int iStack_34;
  int local_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  
  if (*param_1 == 0) {
    if (param_1[4] != 0) {
      uVar1 = FUN_012fb940(param_1[4],&DAT_005258a1,1);
      return uVar1;
    }
  }
  else {
    FUN_018a579c(&local_40,param_1);
    if (local_40 == 0) {
      if (param_1[4] != 0) {
        pcVar3 = 
        "{invalid syntax}struct ErrorCodeInvalidCrlNumber/etc/bos_ref.cfgSessionTicketAck\x05";
        uVar1 = 0x10;
        if ((char)local_3c != '\0') {
          uVar1 = 0x19;
          pcVar3 = "{recursion limit reached}";
        }
        iVar2 = FUN_012fb940(param_1[4],pcVar3,uVar1);
        if (iVar2 != 0) {
          return 1;
        }
      }
      *param_1 = local_40;
      param_1[1] = local_3c;
      param_1[2] = iStack_38;
      param_1[3] = iStack_34;
    }
    else if (param_1[4] != 0) {
      local_30 = *param_1;
      iStack_2c = param_1[1];
      iStack_28 = param_1[2];
      iStack_24 = param_1[3];
      *param_1 = local_40;
      param_1[1] = local_3c;
      param_1[2] = iStack_38;
      param_1[3] = iStack_34;
      uVar1 = FUN_018a21dc(param_1,param_2 & 1);
      *param_1 = local_30;
      param_1[1] = iStack_2c;
      param_1[2] = iStack_28;
      param_1[3] = iStack_24;
      return uVar1;
    }
  }
  return 0;
}

