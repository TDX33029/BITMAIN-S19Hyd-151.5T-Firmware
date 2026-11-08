// FUN_01b69a88 @ 01b69a88 size=532 calls_out=8 calls_in=2
// strings: /aws-lc/crypto/fipsmodule/curve25519/curve25519.c | /aws-lc/crypto/fipsmodule/curve25519/curve25519.c

int FUN_01b69a88(int param_1,undefined4 param_2,undefined1 *param_3,int param_4,int param_5,
                undefined4 param_6,undefined4 param_7)

{
  undefined1 *puVar1;
  uint uVar2;
  undefined1 *puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined1 *puVar7;
  int iVar8;
  uint local_1d4;
  byte local_1d0 [31];
  byte local_1b1;
  undefined1 auStack_1b0 [32];
  undefined1 auStack_190 [64];
  undefined1 auStack_150 [292];
  int local_2c;
  
  uVar5 = (uint)(param_1 == 2);
  if (param_4 == 0x40) {
    uVar5 = 0;
  }
  local_2c = DAT_01d53560;
  if (uVar5 == 0) {
    FUN_01b69704(param_5,0x20,local_1d0,0);
    local_1d0[0] = local_1d0[0] & 0xf8;
    local_1b1 = local_1b1 & 0x3f | 0x40;
    FUN_01bed93e(auStack_150,0,0x121);
    local_1d4 = uVar5;
    iVar4 = FUN_01b26ba4(param_1,auStack_150,&local_1d4,param_6,param_7);
    uVar5 = local_1d4;
    if (iVar4 != 0) {
      if (local_1d4 == 0) {
        uVar2 = 0x20;
        puVar7 = (undefined1 *)0x0;
        iVar8 = 0;
        puVar1 = auStack_1b0;
        puVar3 = param_3;
        iVar6 = param_4;
      }
      else {
        puVar1 = auStack_150;
        uVar2 = local_1d4;
        puVar3 = auStack_1b0;
        iVar6 = 0x20;
        puVar7 = param_3;
        iVar8 = param_4;
      }
      FUN_01b662a4(auStack_190,puVar1,uVar2,puVar3,iVar6,puVar7,iVar8,0,0);
      FUN_01b663b0(param_2,auStack_190,local_1d0,param_5 + 0x20,param_3,param_4,auStack_150,uVar5);
      FUN_01b6b174(local_1d0,0x40);
      FUN_01b6b174(auStack_190,0x40);
      goto LAB_01b69b14;
    }
    FUN_01b053d4(0xe,0,0xe,"/aws-lc/crypto/fipsmodule/curve25519/curve25519.c",0x10c);
    FUN_01b6b174(local_1d0,0x40);
  }
  else {
    FUN_01b053d4(0xe,0,0xe,"/aws-lc/crypto/fipsmodule/curve25519/curve25519.c",0xf3);
  }
  iVar4 = 0;
LAB_01b69b14:
  if (local_2c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return iVar4;
}

