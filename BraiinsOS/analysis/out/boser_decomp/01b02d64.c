// FUN_01b02d64 @ 01b02d64 size=708 calls_out=17 calls_in=1
// strings: /aws-lc/crypto/dsa/dsa.c | /aws-lc/crypto/dsa/dsa.c

undefined4
FUN_01b02d64(uint *param_1,undefined4 param_2,uint param_3,undefined4 *param_4,undefined4 *param_5)

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
  
  local_2c = DAT_01d53560;
  *param_1 = 0;
  iVar1 = FUN_01b032a8(param_5);
  if (iVar1 != 0) {
    if (param_5[3] != 0) {
      FUN_01b2ae48(auStack_68);
      FUN_01b2ae48(auStack_54);
      FUN_01b2ae48(auStack_40);
      iVar1 = FUN_01b2e788();
      if (iVar1 == 0) {
LAB_01b02fe0:
        uVar5 = 0;
        FUN_01b053d4(10,0,3,"/aws-lc/crypto/dsa/dsa.c",0x302);
      }
      else {
        iVar2 = FUN_01b2e300(*param_4);
        if (((((iVar2 == 0) && (iVar2 = FUN_01b2b230(*param_4), iVar2 == 0)) &&
             (iVar2 = FUN_01b2be1c(*param_4,param_5[1]), iVar2 < 0)) &&
            ((iVar2 = FUN_01b2e300(param_4[1]), iVar2 == 0 &&
             (iVar2 = FUN_01b2b230(param_4[1]), iVar2 == 0)))) &&
           (iVar2 = FUN_01b2be1c(param_4[1],param_5[1]), iVar2 < 0)) {
          iVar2 = FUN_01b37470(auStack_54,param_4[1],param_5[1],iVar1);
          if (iVar2 != 0) {
            uVar3 = FUN_01b2b8d0(param_5[1]);
            uVar4 = uVar3 >> 3;
            if (param_3 <= uVar3 >> 3) {
              uVar4 = param_3;
            }
            iVar2 = FUN_01b2ba40(param_2,uVar4,auStack_68);
            if (iVar2 != 0) {
              iVar2 = FUN_01b34254(auStack_68,auStack_68,auStack_54,param_5[1],iVar1);
              if (iVar2 != 0) {
                iVar2 = FUN_01b34254(auStack_54,*param_4,auStack_54,param_5[1],iVar1);
                if ((iVar2 != 0) &&
                   (iVar2 = FUN_01b355d8(param_5 + 0xd,param_5 + 5,*param_5,iVar1), iVar2 != 0)) {
                  iVar2 = FUN_01b36460(auStack_40,param_5[2],auStack_68,param_5[3],auStack_54,
                                       *param_5,iVar1,param_5[0xd]);
                  if (iVar2 != 0) {
                    iVar2 = FUN_01b33d3c(0,auStack_68,auStack_40,param_5[1],iVar1);
                    if (iVar2 != 0) {
                      iVar2 = FUN_01b2be1c(auStack_68,*param_4);
                      *param_1 = (uint)(iVar2 == 0);
                      goto LAB_01b02fb8;
                    }
                  }
                }
              }
            }
          }
          goto LAB_01b02fe0;
        }
LAB_01b02fb8:
        uVar5 = 1;
      }
      FUN_01b2e7c8(iVar1);
      FUN_01b1f904(auStack_68);
      FUN_01b1f904(auStack_54);
      FUN_01b1f904(auStack_40);
      goto LAB_01b02df0;
    }
    FUN_01b053d4(10,0,0x65,"/aws-lc/crypto/dsa/dsa.c",0x2b4);
  }
  uVar5 = 0;
LAB_01b02df0:
  if (local_2c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return uVar5;
}

