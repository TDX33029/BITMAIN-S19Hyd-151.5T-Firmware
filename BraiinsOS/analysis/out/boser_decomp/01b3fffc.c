// FUN_01b3fffc @ 01b3fffc size=388 calls_out=5 calls_in=3
// strings: /aws-lc/crypto/fipsmodule/ec/ec.c

undefined4 FUN_01b3fffc(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  code *pcVar2;
  undefined4 uVar3;
  code *pcVar4;
  undefined1 auStack_b4 [68];
  undefined1 auStack_70 [68];
  int local_2c;
  
  local_2c = DAT_01d53560;
  pcVar4 = *(code **)(*param_1 + 0x2c);
  pcVar2 = *(code **)(*param_1 + 0x30);
  (*pcVar2)(param_1,auStack_b4,param_4);
  (*pcVar2)(param_1,auStack_70,param_3);
  FUN_01b3ecc0(param_1,auStack_70,auStack_70,param_1 + 0x4d);
  (*pcVar4)(param_1,auStack_70,auStack_70,param_3);
  FUN_01b3ecc0(param_1,auStack_70,auStack_70,param_1 + 0x5e);
  iVar1 = FUN_01b3ffb0(param_1,auStack_b4,auStack_70);
  if (iVar1 == 0) {
    FUN_01b053d4(0xf,0,0x78,"/aws-lc/crypto/fipsmodule/ec/ec.c",0x2aa);
    uVar3 = 0;
    if (param_1[0x75] != 0) {
      FUN_01bed4e2(param_2,param_1 + 2,0x44);
      FUN_01bed4e2(param_2 + 0x44,param_1 + 0x13);
    }
  }
  else {
    uVar3 = 1;
    FUN_01bed4e2(param_2,param_3,0x44);
    FUN_01bed4e2(param_2 + 0x44,param_4);
  }
  if (local_2c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return uVar3;
}

