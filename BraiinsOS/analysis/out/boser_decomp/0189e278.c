// FUN_0189e278 @ 0189e278 size=372 calls_out=5 calls_in=2
// strings: {recursion limit reached}

undefined4 FUN_0189e278(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 extraout_r1;
  char *pcVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  char local_30;
  char local_2f;
  undefined4 local_28;
  undefined4 uStack_24;
  
  iVar2 = *param_1;
  if (iVar2 == 0) {
    return 0;
  }
  iVar7 = 0;
  piVar1 = param_1;
  do {
    uVar4 = param_1[1];
    uVar6 = param_1[2];
    if ((uVar6 < uVar4) &&
       (piVar1 = (int *)(uint)*(byte *)(iVar2 + uVar6), piVar1 == (int *)&DAT_00000045)) {
      param_1[2] = uVar6 + 1;
      return 0;
    }
    if (iVar7 != 0) {
      piVar1 = (int *)param_1[4];
    }
    if (iVar7 != 0 && piVar1 != (int *)0x0) {
      iVar2 = FUN_012fb940(piVar1,&DAT_00533bc1,2);
      if (iVar2 != 0) {
        return 1;
      }
      iVar2 = *param_1;
      if (iVar2 != 0) {
        uVar4 = param_1[1];
        uVar6 = param_1[2];
        goto LAB_0189e2d4;
      }
LAB_0189e348:
      iVar2 = FUN_0189dc34(param_1);
    }
    else {
LAB_0189e2d4:
      if (uVar4 <= uVar6) goto LAB_0189e348;
      if (*(char *)(iVar2 + uVar6) == 'K') {
        param_1[2] = uVar6 + 1;
        iVar2 = FUN_0189e514(param_1,0);
      }
      else {
        if (*(char *)(iVar2 + uVar6) != 'L') goto LAB_0189e348;
        param_1[2] = uVar6 + 1;
        FUN_0189e3f8(&local_30,param_1);
        if (local_30 != '\0') {
          if (param_1[4] != 0) {
            pcVar3 = "{recursion limit reached}";
            if (local_2f == '\0') {
              pcVar3 = 
              "{invalid syntax}struct ErrorCodeInvalidCrlNumber/etc/bos_ref.cfgSessionTicketAck\x05"
              ;
            }
            uVar5 = 0x10;
            if (local_2f != '\0') {
              uVar5 = 0x19;
            }
            iVar2 = FUN_012fb940(param_1[4],pcVar3,uVar5);
            if (iVar2 != 0) {
              return 1;
            }
          }
          *(char *)(param_1 + 1) = local_2f;
          *param_1 = 0;
          return 0;
        }
        iVar2 = FUN_0189ecd0(param_1,extraout_r1,local_28,uStack_24);
      }
    }
    if (iVar2 != 0) {
      return 1;
    }
    iVar2 = *param_1;
    iVar7 = iVar7 + -1;
    piVar1 = (int *)0x0;
    if (iVar2 == 0) {
      return 0;
    }
  } while( true );
}

