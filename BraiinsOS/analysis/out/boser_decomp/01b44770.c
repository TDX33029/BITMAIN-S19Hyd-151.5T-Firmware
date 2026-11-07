// FUN_01b44770 @ 01b44770 size=512 calls_out=16 calls_in=1
// strings: /aws-lc/crypto/fipsmodule/ecdsa/ecdsa.c

undefined4 *
FUN_01b44770(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined1 auStack_1c4 [68];
  undefined1 auStack_180 [68];
  undefined1 auStack_13c [68];
  undefined1 auStack_f8 [204];
  int local_2c;
  
  local_2c = DAT_01d53560;
  *param_2 = 0;
  iVar1 = FUN_01b3d100();
  uVar2 = FUN_01b2b8d0();
  if (uVar2 < 0xa0) {
    FUN_01b053d4(0x1a,0,0x70,"/aws-lc/crypto/fipsmodule/ecdsa/ecdsa.c",0xa6);
  }
  else {
    iVar3 = FUN_01b446c0(param_1,auStack_f8,param_4);
    if ((iVar3 != 0) && (iVar3 = FUN_01b3e9a0(param_1,auStack_1c4,auStack_f8), iVar3 != 0)) {
      iVar3 = FUN_01b41b94(param_1,auStack_1c4);
      if (iVar3 == 0) {
        FUN_01b41d80(param_1,auStack_180,auStack_1c4);
        FUN_01b41dfc(param_1,auStack_180,param_3,auStack_180);
        FUN_01b3d164(param_1,auStack_13c,param_5,param_6);
        FUN_01b41cc8(param_1,auStack_180,auStack_180,auStack_13c);
        FUN_01b41e54(param_1,auStack_13c,param_4);
        FUN_01b41da8(param_1,auStack_13c,auStack_13c);
        FUN_01b41dfc(param_1,auStack_180,auStack_180,auStack_13c);
        iVar3 = FUN_01b41b94(param_1,auStack_180);
        if (iVar3 == 0) {
          puVar4 = (undefined4 *)FUN_01b3cb78();
          if (((puVar4 != (undefined4 *)0x0) &&
              (iVar3 = FUN_01b2b55c(*puVar4,auStack_1c4,*(undefined4 *)(iVar1 + 4)), iVar3 != 0)) &&
             (iVar1 = FUN_01b2b55c(puVar4[1],auStack_180,*(undefined4 *)(iVar1 + 4)), iVar1 != 0))
          goto LAB_01b447f8;
          FUN_01b3cb34(puVar4);
          goto LAB_01b447f4;
        }
      }
      *param_2 = 1;
    }
  }
LAB_01b447f4:
  puVar4 = (undefined4 *)0x0;
LAB_01b447f8:
  if (local_2c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return puVar4;
}

