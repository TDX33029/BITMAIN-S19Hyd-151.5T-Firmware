// FUN_017303f8 @ 017303f8 size=388 calls_out=5 calls_in=3
// strings: /aws-lc/crypto/fipsmodule/ec/ec.c

undefined4 FUN_017303f8(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  code *pcVar2;
  undefined4 uVar3;
  code *pcVar4;
  undefined1 auStack_b4 [68];
  undefined1 auStack_70 [68];
  int local_2c;
  
  pcVar4 = *(code **)(*param_1 + 0x2c);
  local_2c = DAT_018ddaf8;
  pcVar2 = *(code **)(*param_1 + 0x30);
  (*pcVar2)(param_1,auStack_b4,param_4);
  (*pcVar2)(param_1,auStack_70,param_3);
  FUN_0172ec3c(param_1,auStack_70,auStack_70,param_1 + 0x4d);
  (*pcVar4)(param_1,auStack_70,auStack_70,param_3);
  FUN_0172ec3c(param_1,auStack_70,auStack_70,param_1 + 0x5e);
  iVar1 = FUN_017303ac(param_1,auStack_b4,auStack_70);
  if (iVar1 == 0) {
    FUN_016e9cd0(0xf,0,0x78,"/aws-lc/crypto/fipsmodule/ec/ec.c",0x2aa);
    uVar3 = 0;
    if (param_1[0x75] != 0) {
      FUN_016dd1aa(param_2,param_1 + 2,0x44);
      FUN_016dd1aa(param_2 + 0x44,param_1 + 0x13);
    }
  }
  else {
    uVar3 = 1;
    FUN_016dd1aa(param_2,param_3,0x44);
    FUN_016dd1aa(param_2 + 0x44,param_4);
  }
  if (local_2c != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78();
  }
  return uVar3;
}

