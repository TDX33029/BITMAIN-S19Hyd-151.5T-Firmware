// FUN_01b69460 @ 01b69460 size=352 calls_out=8 calls_in=1
// strings: /aws-lc/crypto/fipsmodule/ecdsa/ecdsa.c

undefined4
FUN_01b69460(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 *param_5,int param_6)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  undefined4 local_40;
  undefined1 auStack_3c [24];
  int local_24;
  
  local_24 = DAT_01d53560;
  if ((*(int *)(param_6 + 0x18) != 0) &&
     (pcVar4 = *(code **)(*(int *)(param_6 + 0x18) + 8), pcVar4 != (code *)0x0)) {
    uVar1 = (*pcVar4)();
    goto LAB_01b694d8;
  }
  iVar2 = FUN_01b693e8(param_2,param_3,param_6);
  if (iVar2 == 0) {
LAB_01b69564:
    local_40 = 0;
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_01b03e58(param_6);
    FUN_01afc9a8(auStack_3c,param_4,uVar1);
    iVar3 = FUN_01b03ba8(auStack_3c,iVar2);
    if ((iVar3 == 0) || (iVar3 = FUN_01afcd14(auStack_3c,0,&local_40), iVar3 == 0)) {
      FUN_01b053d4(0x1a,0,0x69,"/aws-lc/crypto/fipsmodule/ecdsa/ecdsa.c",0x15c);
      goto LAB_01b69564;
    }
    uVar1 = 1;
  }
  *param_5 = local_40;
  FUN_01b3cb34(iVar2);
LAB_01b694d8:
  if (local_24 != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return uVar1;
}

