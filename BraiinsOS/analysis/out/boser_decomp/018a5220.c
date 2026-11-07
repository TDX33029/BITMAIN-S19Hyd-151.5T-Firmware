// FUN_018a5220 @ 018a5220 size=452 calls_out=6 calls_in=1
// strings: {recursion limit reached}

undefined4 FUN_018a5220(int *param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 local_48;
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
      if ((iVar5 != 0 && iVar2 != 0) && (iVar2 = FUN_012fb940(iVar2,&DAT_00533bc1,2), iVar2 != 0)) {
        return 1;
      }
      if (*param_1 == 0) {
LAB_018a5340:
        if (param_1[4] != 0) {
          iVar2 = FUN_012fb940(param_1[4],&DAT_005258a1,1);
          goto LAB_018a535c;
        }
      }
      else {
        FUN_018a29fc(&local_48,param_1,0x73);
        if ((char)local_48 == '\x01') {
          iVar5 = param_1[4];
          cVar1 = local_48._1_1_;
LAB_018a5398:
          if (iVar5 != 0) {
            pcVar3 = "{recursion limit reached}";
            if (cVar1 == '\0') {
              pcVar3 = 
              "{invalid syntax}struct ErrorCodeInvalidCrlNumber/etc/bos_ref.cfgSessionTicketAck\x05"
              ;
            }
            uVar4 = 0x10;
            if (cVar1 != '\0') {
              uVar4 = 0x19;
            }
            iVar5 = FUN_012fb940(iVar5,pcVar3,uVar4);
            if (iVar5 != 0) {
              return 1;
            }
          }
          *(char *)(param_1 + 1) = cVar1;
          *param_1 = 0;
          return 0;
        }
        if (*param_1 == 0) goto LAB_018a5340;
        FUN_018a2a94(&local_48,param_1);
        if (local_48 == 0) {
          iVar5 = param_1[4];
          cVar1 = (char)local_44;
          goto LAB_018a5398;
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
          if ((param_1[4] != 0) && (iVar2 = FUN_012fb940(param_1[4],0x5312dd,2), iVar2 != 0)) {
            return 1;
          }
        }
        iVar2 = FUN_018a38dc(param_1,1);
LAB_018a535c:
        if (iVar2 != 0) {
          return 1;
        }
      }
      iVar5 = iVar5 + -1;
    } while (*param_1 != 0);
  }
  return 0;
}

