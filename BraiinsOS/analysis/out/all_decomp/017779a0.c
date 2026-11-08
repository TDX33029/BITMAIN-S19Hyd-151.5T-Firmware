// FUN_017779a0 @ 017779a0 size=368 calls_out=8 calls_in=1
// strings: /aws-lc/crypto/fipsmodule/ecdsa/ecdsa.c

undefined4
FUN_017779a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 *param_5,int param_6)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  undefined4 local_40;
  undefined1 auStack_3c [24];
  int local_24;
  
  local_24 = DAT_018ddaf8;
  if ((*(int *)(param_6 + 0x18) == 0) ||
     (pcVar4 = *(code **)(*(int *)(param_6 + 0x18) + 8), pcVar4 == (code *)0x0)) {
    iVar2 = FUN_01777928(param_2,param_3,param_6);
    if (iVar2 != 0) {
      uVar1 = FUN_016e879c(param_6);
      FUN_016e0f64(auStack_3c,param_4,uVar1);
      iVar3 = FUN_016e84dc(auStack_3c,iVar2);
      if ((iVar3 != 0) && (iVar3 = FUN_016e1360(auStack_3c,0,&local_40), iVar3 != 0)) {
        *param_5 = local_40;
        uVar1 = 1;
        FUN_0172bf9c(iVar2);
        goto LAB_01777a1c;
      }
      FUN_016e9cd0(0x1a,0,0x69,"/aws-lc/crypto/fipsmodule/ecdsa/ecdsa.c",0x15c);
    }
    *param_5 = 0;
    uVar1 = 0;
    FUN_0172bf9c(iVar2);
  }
  else {
    uVar1 = (*pcVar4)();
  }
LAB_01777a1c:
  if (local_24 != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78();
  }
  return uVar1;
}

