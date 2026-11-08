// FUN_01b693e8 @ 01b693e8 size=556 calls_out=10 calls_in=1
// strings: /aws-lc/crypto/fipsmodule/ecdsa/ecdsa.c | /aws-lc/crypto/fipsmodule/ecdsa/ecdsa.c

int FUN_01b693e8(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int local_190;
  undefined1 auStack_18c [68];
  undefined1 auStack_148 [220];
  undefined1 auStack_6c [64];
  int local_2c;
  undefined4 local_24;
  
  if ((*(int *)(param_3 + 0x18) != 0) &&
     (pcVar3 = *(code **)(*(int *)(param_3 + 0x18) + 0xc), pcVar3 != (code *)0x0)) {
    local_24 = param_1;
    iVar1 = (*pcVar3)(param_1,param_2,0);
    return iVar1;
  }
  local_2c = DAT_01d53560;
  iVar1 = FUN_01b3d638(param_3,param_2,&PTR_01d3b2b0,0);
  if ((iVar1 == 0) || (*(int *)(param_3 + 8) == 0)) {
    uVar7 = 0x10e;
    uVar2 = 0x43;
  }
  else {
    iVar6 = FUN_01b3d100();
    iVar5 = *(int *)(param_3 + 8);
    FUN_01b658c8(auStack_148);
    iVar5 = iVar5 + 0x14;
    iVar4 = 0x21;
    FUN_01b65f8c(auStack_148,iVar5,*(int *)(iVar6 + 4) << 2);
    FUN_01b65f8c(auStack_148,param_1,param_2);
    FUN_01b66288(auStack_6c,auStack_148);
    do {
      iVar6 = FUN_01b52cc4(iVar1,auStack_18c,auStack_6c);
      if (iVar6 == 0) {
        FUN_01b6b174(auStack_18c,0x44);
        goto LAB_01b6931c;
      }
      iVar6 = FUN_01b44770(iVar1,&local_190,iVar5,auStack_18c,param_1,param_2);
      if ((iVar6 != 0) || (local_190 == 0)) {
        FUN_01b6b174(auStack_18c,0x44);
        goto LAB_01b6935c;
      }
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    FUN_01b6b174(auStack_18c,0x44);
    uVar7 = 0x13f;
    uVar2 = 0x6a;
  }
  FUN_01b053d4(0x1a,0,uVar2,"/aws-lc/crypto/fipsmodule/ecdsa/ecdsa.c",uVar7);
LAB_01b6931c:
  iVar6 = 0;
LAB_01b6935c:
  if (local_2c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return iVar6;
}

