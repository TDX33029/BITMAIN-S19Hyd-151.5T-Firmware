// FUN_018a6010 @ 018a6010 size=396 calls_out=6 calls_in=2
// strings: {recursion limit reached}

undefined1 FUN_018a6010(int *param_1)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  int local_38;
  int local_34;
  int iStack_30;
  int iStack_2c;
  int local_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  
  iVar2 = FUN_018a388c(param_1,0x42);
  if (iVar2 == 0) {
    iVar2 = FUN_018a388c(param_1,0x49);
    iVar3 = FUN_018a21dc(param_1,0);
    if (iVar2 == 0) {
      uVar1 = 0;
      if (iVar3 != 0) {
        uVar1 = 2;
      }
    }
    else {
      uVar1 = 2;
      if ((iVar3 == 0) &&
         ((param_1[4] == 0 || (iVar2 = FUN_012fb940(param_1[4],"<",1), iVar2 == 0)))) {
        iVar2 = FUN_018a36f0(param_1);
        uVar1 = 1;
        if (iVar2 != 0) {
          uVar1 = 2;
        }
      }
    }
  }
  else {
    if (*param_1 == 0) {
      if (param_1[4] != 0) {
        iVar2 = FUN_012fb940(param_1[4],&DAT_005258a1,1);
        if (iVar2 == 0) {
          return 0;
        }
        return 2;
      }
    }
    else {
      FUN_018a579c(&local_38,param_1);
      if (local_38 == 0) {
        if (param_1[4] != 0) {
          pcVar5 = 
          "{invalid syntax}struct ErrorCodeInvalidCrlNumber/etc/bos_ref.cfgSessionTicketAck\x05";
          uVar4 = 0x10;
          if ((char)local_34 != '\0') {
            uVar4 = 0x19;
            pcVar5 = "{recursion limit reached}";
          }
          iVar2 = FUN_012fb940(param_1[4],pcVar5,uVar4);
          if (iVar2 != 0) {
            return 2;
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
        uVar1 = FUN_018a6010(param_1);
        *param_1 = local_28;
        param_1[1] = iStack_24;
        param_1[2] = iStack_20;
        param_1[3] = iStack_1c;
        return uVar1;
      }
    }
    uVar1 = 0;
  }
  return uVar1;
}

