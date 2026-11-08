// FUN_01b45384 @ 01b45384 size=392 calls_out=7 calls_in=1
// strings: /aws-lc/crypto/fipsmodule/ec/oct.c | /aws-lc/crypto/fipsmodule/ec/oct.c

void FUN_01b45384(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined1 *param_4,
                 int param_5)

{
  int iVar1;
  uint extraout_r1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined1 auStack_ac [136];
  uint local_24;
  
  local_24 = DAT_01d53560;
  iVar1 = FUN_01b44b4c(param_1,*param_2,0,0);
  if (iVar1 == 0) {
    uVar5 = FUN_01b42c7c(param_1,param_2 + 1);
    uVar2 = (uint)((ulonglong)uVar5 >> 0x20);
    if ((int)uVar5 == 0) {
      if (param_4 == (undefined1 *)0x0) {
        uVar4 = local_24 ^ DAT_01d53560;
        lVar6 = (ulonglong)uVar2 << 0x20;
        if (uVar4 == 0) {
          FUN_01b40190(param_1,param_3,0,0);
          return;
        }
        goto LAB_01b454c0;
      }
      uVar5 = FUN_01b3d3b8(param_1,auStack_ac,param_2 + 1);
      uVar2 = (uint)((ulonglong)uVar5 >> 0x20);
      if ((int)uVar5 == 0) goto LAB_01b45400;
      lVar6 = FUN_01b40220(param_1,auStack_ac,param_3,param_4,param_5);
    }
    else {
      if (param_4 != (undefined1 *)0x0) {
        if (param_5 == 0) {
          uVar7 = 0xe1;
          uVar3 = 100;
          goto LAB_01b453f8;
        }
        *param_4 = 0;
      }
      lVar6 = CONCAT44(uVar2,1);
    }
  }
  else {
    uVar7 = 0xd9;
    uVar3 = 0x6a;
LAB_01b453f8:
    FUN_01b053d4(0xf,0,uVar3,"/aws-lc/crypto/fipsmodule/ec/oct.c",uVar7);
    uVar2 = extraout_r1;
LAB_01b45400:
    lVar6 = (ulonglong)uVar2 << 0x20;
  }
  uVar4 = local_24 ^ DAT_01d53560;
  if (uVar4 == 0) {
    return;
  }
LAB_01b454c0:
                    /* WARNING: Subroutine does not return */
  FUN_01be31f4((int)lVar6,(int)((ulonglong)lVar6 >> 0x20),uVar4,0);
}

