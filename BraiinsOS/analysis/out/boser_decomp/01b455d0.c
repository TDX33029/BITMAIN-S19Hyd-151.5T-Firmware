// FUN_01b455d0 @ 01b455d0 size=388 calls_out=6 calls_in=5
// strings: /aws-lc/crypto/fipsmodule/ec/ec_key.c | /aws-lc/crypto/fipsmodule/ec/ec_key.c | /aws-lc/crypto/fipsmodule/ec/ec_key.c | /aws-lc/crypto/fipsmodule/ec/ec_key.c | /aws-lc/crypto/fipsmodule/ec/ec_key.c

void FUN_01b455d0(int *param_1)

{
  int iVar1;
  int extraout_r1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_e0 [204];
  uint local_14;
  
  local_14 = DAT_01d53560;
  if (((param_1 == (int *)0x0) || (*param_1 == 0)) || (param_1[1] == 0)) {
    uVar3 = 0x11e;
    uVar2 = 0x43;
  }
  else {
    iVar1 = FUN_01b44da4();
    if (iVar1 == 0) {
      iVar1 = FUN_01b44e30(*param_1,param_1[1]);
      if (iVar1 == 0) {
        uVar3 = 0x129;
        uVar2 = 0x78;
      }
      else {
        if (param_1[2] == 0) {
LAB_01b45730:
          uVar2 = 1;
          goto LAB_01b45648;
        }
        iVar1 = FUN_01b446c0(*param_1,auStack_e0,param_1[2] + 0x14);
        if (iVar1 == 0) {
          uVar3 = 0x107;
          uVar2 = 0xf;
        }
        else {
          iVar1 = FUN_01b44980(*param_1,auStack_e0,param_1[1] + 4);
          if (iVar1 != 0) goto LAB_01b45730;
          uVar3 = 0x114;
          uVar2 = 0x71;
        }
      }
    }
    else {
      uVar3 = 0x123;
      uVar2 = 0x77;
    }
  }
  FUN_01b053d4(0xf,0,uVar2,"/aws-lc/crypto/fipsmodule/ec/ec_key.c",uVar3);
  uVar2 = 0;
  iVar1 = extraout_r1;
LAB_01b45648:
  if ((local_14 ^ DAT_01d53560) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4(uVar2,iVar1,local_14 ^ DAT_01d53560,0);
  }
  return;
}

