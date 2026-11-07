// FUN_018a5a48 @ 018a5a48 size=240 calls_out=3 calls_in=1
// strings: {recursion limit reached}

undefined4 FUN_018a5a48(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  int local_38;
  int local_34;
  int iStack_30;
  int iStack_2c;
  int local_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  
  if (*param_1 == 0) {
    if (param_1[4] != 0) {
      uVar1 = FUN_012fb940(param_1[4],&DAT_005258a1,1);
      return uVar1;
    }
  }
  else {
    FUN_018a579c(&local_38,param_1);
    if (local_38 == 0) {
      if (param_1[4] != 0) {
        pcVar3 = 
        "{invalid syntax}struct ErrorCodeInvalidCrlNumber/etc/bos_ref.cfgSessionTicketAck\x05";
        uVar1 = 0x10;
        if ((char)local_34 != '\0') {
          uVar1 = 0x19;
          pcVar3 = "{recursion limit reached}";
        }
        iVar2 = FUN_012fb940(param_1[4],pcVar3,uVar1);
        if (iVar2 != 0) {
          return 1;
        }
      }
      *param_1 = local_38;
      param_1[1] = local_34;
      param_1[2] = iStack_30;
      param_1[3] = iStack_2c;
    }
    else if (param_1[4] != 0) {
      local_28 = *param_1;
      iStack_24 = param_1[1];
      iStack_20 = param_1[2];
      iStack_1c = param_1[3];
      *param_1 = local_38;
      param_1[1] = local_34;
      param_1[2] = iStack_30;
      param_1[3] = iStack_2c;
      uVar1 = FUN_018a3158(param_1);
      *param_1 = local_28;
      param_1[1] = iStack_24;
      param_1[2] = iStack_20;
      param_1[3] = iStack_1c;
      return uVar1;
    }
  }
  return 0;
}

