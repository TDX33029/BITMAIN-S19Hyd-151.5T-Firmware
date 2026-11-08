// FUN_01737858 @ 01737858 size=524 calls_out=12 calls_in=1
// strings: /aws-lc/crypto/fipsmodule/ecdh/ecdh.c | /aws-lc/crypto/fipsmodule/ecdh/ecdh.c | /aws-lc/crypto/fipsmodule/ecdh/ecdh.c | /aws-lc/crypto/fipsmodule/ecdh/ecdh.c

undefined4 FUN_01737858(undefined4 param_1,undefined4 *param_2,undefined4 *param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 auStack_f8 [204];
  int local_2c;
  
  iVar5 = *(int *)(param_4 + 8);
  local_2c = DAT_018ddaf8;
  if (iVar5 == 0) {
    FUN_016e9cd0(0x1b,0,0x65,"/aws-lc/crypto/fipsmodule/ecdh/ecdh.c",0x20);
  }
  else {
    uVar1 = FUN_0172ca8c(param_4,&PTR_018bc3f4,0);
    iVar2 = FUN_01736960(uVar1,*param_3,0);
    if (iVar2 == 0) {
      iVar2 = FUN_0172cc2c();
      if (iVar2 != 0) {
        iVar3 = FUN_01737020(iVar2,uVar1);
        uVar4 = 0;
        if (((iVar3 == 0) || (iVar3 = FUN_01737170(iVar2,param_3), iVar3 == 0)) ||
           (iVar3 = FUN_01737690(iVar2), iVar3 == 0)) {
          FUN_016e9cd0(0xf,0,0x84,"/aws-lc/crypto/fipsmodule/ecdh/ecdh.c",0x3b);
          FUN_0177aaa0(auStack_f8,0xcc);
        }
        else {
          iVar5 = FUN_01736384(uVar1,auStack_f8,param_3 + 1,iVar5 + 0x14);
          if (iVar5 != 0) {
            iVar5 = FUN_0172e7d0(uVar1,param_1,param_2,*param_2,auStack_f8);
            if (iVar5 != 0) {
              uVar4 = 1;
              FUN_0177aaa0(auStack_f8,0xcc);
              goto LAB_01737924;
            }
          }
          FUN_016e9cd0(0x1b,0,0x66,"/aws-lc/crypto/fipsmodule/ecdh/ecdh.c",0x43);
          FUN_0177aaa0(auStack_f8,0xcc);
        }
LAB_01737924:
        FUN_0172c984(iVar2);
        goto LAB_0173792c;
      }
      FUN_0177aaa0(auStack_f8,0xcc);
    }
    else {
      FUN_016e9cd0(0xf,0,0x6a,"/aws-lc/crypto/fipsmodule/ecdh/ecdh.c",0x26);
    }
  }
  uVar4 = 0;
LAB_0173792c:
  if (local_2c != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78();
  }
  return uVar4;
}

