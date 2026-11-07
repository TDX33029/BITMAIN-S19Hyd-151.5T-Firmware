// FUN_018a36f0 @ 018a36f0 size=396 calls_out=6 calls_in=2
// strings: {recursion limit reached}

undefined4 FUN_018a36f0(int *param_1)

{
  int iVar1;
  undefined4 extraout_r1;
  char *pcVar2;
  undefined4 uVar3;
  int iVar4;
  char local_30;
  char local_2f;
  undefined4 local_28;
  undefined4 uStack_24;
  
  if (*param_1 != 0) {
    iVar4 = 0;
    do {
      iVar1 = FUN_018a388c(param_1,0x45);
      if (iVar1 != 0) {
        return 0;
      }
      iVar1 = 0;
      if (iVar4 != 0) {
        iVar1 = param_1[4];
      }
      if ((iVar4 != 0 && iVar1 != 0) && (iVar1 = FUN_012fb940(iVar1,&DAT_00533bc1,2), iVar1 != 0)) {
        return 1;
      }
      iVar1 = FUN_018a388c(param_1,0x4c);
      if (iVar1 == 0) {
        iVar1 = FUN_018a388c(param_1,0x4b);
        if (iVar1 == 0) {
          iVar1 = FUN_018a3158(param_1);
        }
        else {
          iVar1 = FUN_018a38dc(param_1,0);
        }
LAB_018a37d4:
        if (iVar1 != 0) {
          return 1;
        }
      }
      else {
        if (*param_1 != 0) {
          FUN_018a40c8(&local_30,param_1);
          if (local_30 == '\x01') {
            if (param_1[4] != 0) {
              pcVar2 = "{recursion limit reached}";
              if (local_2f == '\0') {
                pcVar2 = 
                "{invalid syntax}struct ErrorCodeInvalidCrlNumber/etc/bos_ref.cfgSessionTicketAck\x05"
                ;
              }
              uVar3 = 0x10;
              if (local_2f != '\0') {
                uVar3 = 0x19;
              }
              iVar4 = FUN_012fb940(param_1[4],pcVar2,uVar3);
              if (iVar4 != 0) {
                return 1;
              }
            }
            *(char *)(param_1 + 1) = local_2f;
            *param_1 = 0;
            return 0;
          }
          iVar1 = FUN_018a41f0(param_1,extraout_r1,local_28,uStack_24);
          goto LAB_018a37d4;
        }
        if ((param_1[4] != 0) && (iVar1 = FUN_012fb940(param_1[4],&DAT_005258a1,1), iVar1 != 0)) {
          return 1;
        }
      }
      iVar4 = iVar4 + -1;
    } while (*param_1 != 0);
  }
  return 0;
}

