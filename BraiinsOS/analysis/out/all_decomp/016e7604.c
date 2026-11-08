// FUN_016e7604 @ 016e7604 size=732 calls_out=17 calls_in=1
// strings: /aws-lc/crypto/dsa/dsa.c | /aws-lc/crypto/dsa/dsa.c

undefined4
FUN_016e7604(uint *param_1,undefined4 param_2,uint param_3,undefined4 *param_4,undefined4 *param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined1 auStack_68 [20];
  undefined1 auStack_54 [20];
  undefined1 auStack_40 [20];
  int local_2c;
  
  local_2c = DAT_018ddaf8;
  *param_1 = 0;
  iVar1 = FUN_016e7aac(param_5);
  if (iVar1 != 0) {
    if (param_5[3] != 0) {
      FUN_01714208(auStack_68);
      FUN_01714208(auStack_54);
      FUN_01714208(auStack_40);
      iVar1 = FUN_017184a8();
      if (iVar1 == 0) {
LAB_016e78b4:
        uVar5 = 0;
        FUN_016e9cd0(10,0,3,"/aws-lc/crypto/dsa/dsa.c",0x302);
      }
      else {
        iVar2 = FUN_01717e5c(*param_4);
        if (((((iVar2 == 0) && (iVar2 = FUN_0171462c(*param_4), iVar2 == 0)) &&
             (iVar2 = FUN_01715744(*param_4,param_5[1]), iVar2 < 0)) &&
            ((iVar2 = FUN_01717e5c(param_4[1]), iVar2 == 0 &&
             (iVar2 = FUN_0171462c(param_4[1]), iVar2 == 0)))) &&
           (iVar2 = FUN_01715744(param_4[1],param_5[1]), iVar2 < 0)) {
          iVar2 = FUN_01722b3c(auStack_54,param_4[1],param_5[1],iVar1);
          if (iVar2 != 0) {
            uVar3 = FUN_01714eb4(param_5[1]);
            uVar4 = uVar3 >> 3;
            if (param_3 <= uVar3 >> 3) {
              uVar4 = param_3;
            }
            iVar2 = FUN_017150f4(param_2,uVar4,auStack_68);
            if (iVar2 != 0) {
              iVar2 = FUN_0171f040(auStack_68,auStack_68,auStack_54,param_5[1],iVar1);
              if (iVar2 != 0) {
                iVar2 = FUN_0171f040(auStack_54,*param_4,auStack_54,param_5[1],iVar1);
                if ((iVar2 != 0) &&
                   (iVar2 = FUN_017205f4(param_5 + 0xd,param_5 + 5,*param_5,iVar1), iVar2 != 0)) {
                  iVar2 = FUN_017219a4(auStack_40,param_5[2],auStack_68,param_5[3],auStack_54,
                                       *param_5,iVar1,param_5[0xd]);
                  if (iVar2 != 0) {
                    iVar2 = FUN_0171ead4(0,auStack_68,auStack_40,param_5[1],iVar1);
                    if (iVar2 != 0) {
                      iVar2 = FUN_01715744(auStack_68,*param_4);
                      *param_1 = (uint)(iVar2 == 0);
                      goto LAB_016e76b4;
                    }
                  }
                }
              }
            }
          }
          goto LAB_016e78b4;
        }
LAB_016e76b4:
        uVar5 = 1;
      }
      FUN_017184e8(iVar1);
      FUN_017046e0(auStack_68);
      FUN_017046e0(auStack_54);
      FUN_017046e0(auStack_40);
      goto LAB_016e76d8;
    }
    FUN_016e9cd0(10,0,0x65,"/aws-lc/crypto/dsa/dsa.c",0x2b4);
  }
  uVar5 = 0;
LAB_016e76d8:
  if (local_2c != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78();
  }
  return uVar5;
}

