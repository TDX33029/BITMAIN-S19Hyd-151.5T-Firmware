// FUN_018a5dc0 @ 018a5dc0 size=560 calls_out=6 calls_in=1
// strings: {recursion limit reached}

undefined1 FUN_018a5dc0(int *param_1)

{
  byte bVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  bool bVar6;
  int local_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  int local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  if (*param_1 != 0) {
    iVar5 = 0;
    do {
      iVar2 = FUN_018a388c(param_1,0x45);
      if (iVar2 != 0) {
        return 0;
      }
      iVar2 = 0;
      if (iVar5 != 0) {
        iVar2 = param_1[4];
      }
      if (((iVar5 != 0 && iVar2 != 0) && (iVar2 = FUN_012fb940(iVar2," + ",3), iVar2 != 0)) ||
         (bVar1 = FUN_018a6010(param_1), bVar1 == 2)) {
        return 1;
      }
      while (iVar2 = FUN_018a388c(param_1,0x70), iVar2 != 0) {
        if ((bVar1 & 1) == 0) {
          if ((param_1[4] != 0) && (iVar2 = FUN_012fb940(param_1[4],"<",1), iVar2 != 0)) {
            return 1;
          }
        }
        else if ((param_1[4] != 0) && (iVar2 = FUN_012fb940(param_1[4],&DAT_00533bc1,2), iVar2 != 0)
                ) {
          return 1;
        }
        if (*param_1 == 0) {
          iVar2 = param_1[4];
          if (iVar2 == 0) goto LAB_018a5f78;
          pcVar3 = &DAT_005258a1;
          goto LAB_018a5f68;
        }
        FUN_018a2a94(&local_48,param_1);
        if (local_48 == 0) {
          if (param_1[4] != 0) {
            pcVar3 = "{recursion limit reached}";
            if ((char)local_44 == '\0') {
              pcVar3 = 
              "{invalid syntax}struct ErrorCodeInvalidCrlNumber/etc/bos_ref.cfgSessionTicketAck\x05"
              ;
            }
            uVar4 = 0x10;
            if ((char)local_44 != '\0') {
              uVar4 = 0x19;
            }
            iVar5 = FUN_012fb940(param_1[4],pcVar3,uVar4);
            if (iVar5 != 0) {
              return 1;
            }
          }
          *(char *)(param_1 + 1) = (char)local_44;
          *param_1 = 0;
          return 0;
        }
        local_38 = local_48;
        uStack_34 = local_44;
        uStack_30 = uStack_40;
        uStack_2c = uStack_3c;
        if (param_1[4] != 0) {
          iVar2 = FUN_018a2c68(&local_38);
          if (iVar2 != 0) {
            return 1;
          }
          if ((param_1[4] != 0) && (iVar2 = FUN_012fb940(param_1[4]," = ",3), iVar2 != 0)) {
            return 1;
          }
        }
        iVar2 = FUN_018a3158(param_1);
        bVar1 = 1;
        if (iVar2 != 0) {
          return 1;
        }
      }
      bVar6 = (bVar1 & 1) != 0;
      iVar2 = 0;
      if (bVar6) {
        iVar2 = param_1[4];
      }
      if (bVar6 && iVar2 != 0) {
        pcVar3 = ">";
LAB_018a5f68:
        iVar2 = FUN_012fb940(iVar2,pcVar3,1);
        if (iVar2 != 0) {
          return 1;
        }
      }
LAB_018a5f78:
      iVar5 = iVar5 + 1;
    } while (*param_1 != 0);
  }
  return 0;
}

