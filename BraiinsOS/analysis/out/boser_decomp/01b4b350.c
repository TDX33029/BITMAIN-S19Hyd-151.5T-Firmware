// FUN_01b4b350 @ 01b4b350 size=812 calls_out=13 calls_in=3
// strings: /aws-lc/crypto/fipsmodule/evp/digestsign.c | /aws-lc/crypto/fipsmodule/evp/digestsign.c | /aws-lc/crypto/fipsmodule/evp/digestsign.c | /aws-lc/crypto/fipsmodule/evp/digestsign.c

ulonglong FUN_01b4b350(undefined4 *param_1,int param_2,uint *param_3,undefined4 param_4,
                      undefined4 param_5)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  code *UNRECOVERED_JUMPTABLE;
  ulonglong uVar6;
  uint local_80;
  undefined1 auStack_7c [12];
  int local_70;
  undefined1 auStack_64 [32];
  undefined4 *local_44;
  undefined4 local_28;
  int local_24;
  
  local_44 = param_1;
  if (param_1[3] == 0) {
    local_28 = 0xdf;
    uVar3 = 0x43;
    uVar1 = 0xe;
LAB_01b4b398:
    FUN_01b053d4(uVar1,0,uVar3,"/aws-lc/crypto/fipsmodule/evp/digestsign.c");
    return 0;
  }
  iVar2 = FUN_01b256ac(param_1[3],0);
  if ((iVar2 == 0) && (iVar2 = FUN_01b49618(param_1), iVar2 == 0)) {
    UNRECOVERED_JUMPTABLE = *(code **)(*(int *)param_1[3] + 0x1c);
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x01b4b474. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar6 = (*UNRECOVERED_JUMPTABLE)((int *)param_1[3],param_2,param_3,param_4);
      return uVar6;
    }
    local_28 = 0xf2;
    uVar3 = 0x7d;
    uVar1 = 6;
    goto LAB_01b4b398;
  }
  if ((param_2 != 0) && (iVar2 = FUN_01b4964c(param_1,param_4,param_5), iVar2 == 0)) {
    return 0;
  }
  local_24 = DAT_01d53560;
  iVar2 = FUN_01b256ac(param_1[3],0,&PTR_01d3b2b0,0);
  if ((iVar2 == 0) && (iVar2 = FUN_01b49618(param_1), iVar2 == 0)) {
    FUN_01b053d4(6,0,0x7d,"/aws-lc/crypto/fipsmodule/evp/digestsign.c",0x96);
    uVar4 = 0;
    goto LAB_01b4b1bc;
  }
  if (param_2 == 0) {
    iVar2 = FUN_01b49618(param_1);
    if (iVar2 == 0) {
      uVar1 = FUN_01b3b6b4(*param_1);
      uVar4 = FUN_01b483a0(param_1[3],0,param_3,0,uVar1);
    }
    else {
      uVar4 = 1;
      uVar5 = FUN_01b3bdcc(param_1);
      *param_3 = uVar5;
    }
    goto LAB_01b4b1bc;
  }
  FUN_01b3b838(auStack_7c);
  iVar2 = FUN_01b3ba10(auStack_7c,param_1);
  if (iVar2 == 0) {
LAB_01b4b208:
    uVar4 = 0;
  }
  else {
    iVar2 = FUN_01b49618(param_1);
    if (iVar2 != 0) {
      uVar5 = *param_3;
      uVar4 = FUN_01b3bdcc(auStack_7c);
      if (uVar5 < uVar4) {
        FUN_01b053d4(6,0,100,"/aws-lc/crypto/fipsmodule/evp/digestsign.c",0x32);
      }
      else {
        iVar2 = FUN_01b4afcc(*(int *)(local_70 + 0x14) + 8,param_2,&local_80);
        if (iVar2 != 0) {
          uVar4 = 1;
          *param_3 = local_80;
          goto LAB_01b4b284;
        }
      }
      goto LAB_01b4b208;
    }
    iVar2 = FUN_01b3bc6c(auStack_7c,auStack_64,&local_80);
    if (iVar2 == 0) goto LAB_01b4b208;
    iVar2 = FUN_01b483a0(param_1[3],param_2,param_3,auStack_64,local_80);
    uVar4 = (uint)(iVar2 != 0);
  }
LAB_01b4b284:
  FUN_01b3b854(auStack_7c);
LAB_01b4b1bc:
  if (local_24 != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return (ulonglong)uVar4;
}

