// FUN_018a5be4 @ 018a5be4 size=452 calls_out=4 calls_in=1
// strings: {recursion limit reached}

undefined4 FUN_018a5be4(int *param_1)

{
  int iVar1;
  char *pcVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  bool bVar8;
  undefined8 uVar9;
  char local_30;
  char local_2f;
  uint local_28;
  uint local_24;
  
  if (*param_1 == 0) {
    if (param_1[4] != 0) {
      uVar4 = FUN_012fb940(param_1[4],&DAT_005258a1,1);
      return uVar4;
    }
    uVar4 = 0;
  }
  else {
    FUN_018a29fc(&local_30,param_1,0x47);
    if (local_30 == '\x01') {
      if (param_1[4] != 0) {
        pcVar2 = "{recursion limit reached}";
        if (local_2f == '\0') {
          pcVar2 = 
          "{invalid syntax}struct ErrorCodeInvalidCrlNumber/etc/bos_ref.cfgSessionTicketAck\x05";
        }
        uVar4 = 0x10;
        if (local_2f != '\0') {
          uVar4 = 0x19;
        }
        iVar1 = FUN_012fb940(param_1[4],pcVar2,uVar4);
        if (iVar1 != 0) {
          return 1;
        }
      }
      uVar4 = 0;
      *(char *)(param_1 + 1) = local_2f;
      *param_1 = 0;
    }
    else if (param_1[4] == 0) {
      uVar4 = FUN_018a5dc0(param_1);
    }
    else if (local_28 == 0 && local_24 == 0) {
LAB_018a5d84:
      uVar4 = FUN_018a5dc0(param_1);
      param_1[5] = param_1[5] - local_28;
    }
    else {
      iVar1 = FUN_012fb940(param_1[4],&DAT_0056fa20,4);
      if (iVar1 == 0) {
        uVar4 = 1;
        uVar5 = 0;
        uVar3 = 0;
        do {
          if (local_24 < uVar5 || uVar5 - local_24 < (uint)(local_28 <= uVar3)) {
            if ((param_1[4] != 0) && (iVar1 = FUN_012fb940(param_1[4],"> ",2), iVar1 != 0)) {
              return 1;
            }
            goto LAB_018a5d84;
          }
          bVar8 = 0xfffffffe < uVar3;
          uVar6 = uVar3 + 1;
          bVar7 = uVar3 != 0 || uVar5 != 0;
          iVar1 = 0;
          if (bVar7) {
            iVar1 = param_1[4];
          }
          if (bVar7 && iVar1 != 0) {
            uVar9 = FUN_012fb940(iVar1,&DAT_00533bc1,2);
            uVar3 = (uint)((ulonglong)uVar9 >> 0x20);
            if ((int)uVar9 != 0) goto LAB_018a5cc0;
          }
          param_1[5] = param_1[5] + 1;
          iVar1 = FUN_018a41f0(param_1,uVar3,1,0);
          uVar5 = uVar5 + bVar8;
          uVar3 = uVar6;
        } while (iVar1 == 0);
      }
      else {
LAB_018a5cc0:
        uVar4 = 1;
      }
    }
  }
  return uVar4;
}

