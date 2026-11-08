// FUN_0189fa34 @ 0189fa34 size=468 calls_out=5 calls_in=1
// strings: {recursion limit reached}

undefined4 FUN_0189fa34(uint *param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  int local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  uVar2 = *param_1;
  if (uVar2 != 0) {
    iVar7 = 0;
    do {
      uVar4 = param_1[2];
      if ((uVar4 < param_1[1]) && (uVar2 = (uint)*(byte *)(uVar2 + uVar4), uVar2 == 0x45)) {
        param_1[2] = uVar4 + 1;
        return 0;
      }
      if (iVar7 != 0) {
        uVar2 = param_1[4];
      }
      if (iVar7 != 0 && uVar2 != 0) {
        iVar3 = FUN_012fb940(uVar2,&DAT_00533bc1,2);
        if (iVar3 != 0) {
          return 1;
        }
        if (*param_1 != 0) goto LAB_0189fa90;
LAB_0189fb54:
        if (param_1[4] != 0) {
          iVar3 = FUN_012fb940(param_1[4],&DAT_005258a1,1);
          goto LAB_0189fb74;
        }
      }
      else {
LAB_0189fa90:
        FUN_0189d414(&local_48,param_1,0x73);
        if ((char)local_48 == '\x01') {
          uVar2 = param_1[4];
          cVar1 = local_48._1_1_;
LAB_0189fba4:
          if (uVar2 != 0) {
            pcVar5 = "{recursion limit reached}";
            if (cVar1 == '\0') {
              pcVar5 = 
              "{invalid syntax}struct ErrorCodeInvalidCrlNumber/etc/bos_ref.cfgSessionTicketAck\x05"
              ;
            }
            uVar6 = 0x10;
            if (cVar1 != '\0') {
              uVar6 = 0x19;
            }
            iVar7 = FUN_012fb940(uVar2,pcVar5,uVar6);
            if (iVar7 != 0) {
              return 1;
            }
          }
          *(char *)(param_1 + 1) = cVar1;
          *param_1 = 0;
          return 0;
        }
        if (*param_1 == 0) goto LAB_0189fb54;
        FUN_0189d4b0(&local_48,param_1);
        if (local_48 == 0) {
          uVar2 = param_1[4];
          cVar1 = (char)local_44;
          goto LAB_0189fba4;
        }
        local_38 = local_48;
        uStack_34 = local_44;
        uStack_30 = uStack_40;
        uStack_2c = uStack_3c;
        if (param_1[4] != 0) {
          iVar3 = FUN_0189d714(&local_38);
          if (iVar3 != 0) {
            return 1;
          }
          if ((param_1[4] != 0) && (iVar3 = FUN_012fb940(param_1[4],0x5312dd,2), iVar3 != 0)) {
            return 1;
          }
        }
        iVar3 = FUN_0189e514(param_1,1);
LAB_0189fb74:
        if (iVar3 != 0) {
          return 1;
        }
      }
      uVar2 = *param_1;
      iVar7 = iVar7 + -1;
    } while (uVar2 != 0);
  }
  return 0;
}

