// FUN_01777928 @ 01777928 size=572 calls_out=10 calls_in=1
// strings: /aws-lc/crypto/fipsmodule/ecdsa/ecdsa.c | /aws-lc/crypto/fipsmodule/ecdsa/ecdsa.c

int FUN_01777928(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  int iVar6;
  int local_190;
  undefined1 auStack_18c [68];
  undefined1 auStack_148 [220];
  undefined1 auStack_6c [64];
  uint local_2c;
  undefined4 local_24;
  
  if ((*(int *)(param_3 + 0x18) != 0) &&
     (pcVar5 = *(code **)(*(int *)(param_3 + 0x18) + 0xc), pcVar5 != (code *)0x0)) {
    local_24 = param_1;
    iVar3 = (*pcVar5)(param_1,param_2,0);
    return iVar3;
  }
  local_2c = DAT_018ddaf8;
  iVar3 = FUN_0172ca8c(param_3,param_2,&PTR_018bc3f4,0);
  if ((iVar3 == 0) || (*(int *)(param_3 + 8) == 0)) {
    uVar2 = FUN_016e9cd0(0x1a,0,0x43,"/aws-lc/crypto/fipsmodule/ecdsa/ecdsa.c",0x10e);
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_0172c608();
    iVar6 = *(int *)(param_3 + 8);
    FUN_01771398(auStack_148);
    iVar6 = iVar6 + 0x14;
    iVar4 = 0x21;
    FUN_01773288(auStack_148,iVar6,*(int *)(iVar1 + 4) << 2);
    FUN_01773288(auStack_148,param_1,param_2);
    FUN_017736bc(auStack_6c,auStack_148);
    do {
      iVar1 = FUN_0174baa4(iVar3,auStack_18c,auStack_6c);
      if (iVar1 == 0) {
        uVar2 = FUN_0177aaa0(auStack_18c,0x44);
        goto LAB_01777878;
      }
      iVar1 = FUN_01736510(iVar3,&local_190,iVar6,auStack_18c,param_1,param_2);
      if ((iVar1 != 0) || (local_190 == 0)) {
        uVar2 = FUN_0177aaa0(auStack_18c,0x44);
        goto LAB_0177787c;
      }
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    FUN_0177aaa0(auStack_18c,0x44);
    uVar2 = FUN_016e9cd0(0x1a,0,0x6a,"/aws-lc/crypto/fipsmodule/ecdsa/ecdsa.c",0x13f);
LAB_01777878:
    iVar1 = 0;
  }
LAB_0177787c:
  if ((local_2c ^ DAT_018ddaf8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78(uVar2,local_2c ^ DAT_018ddaf8,0);
  }
  return iVar1;
}

