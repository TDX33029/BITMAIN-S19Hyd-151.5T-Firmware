// FUN_01b68d88 @ 01b68d88 size=504 calls_out=8 calls_in=2
// strings: /aws-lc/crypto/fipsmodule/curve25519/curve25519.c | /aws-lc/crypto/fipsmodule/curve25519/curve25519.c

void FUN_01b68d88(int param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7)

{
  bool bVar1;
  uint extraout_r1;
  uint extraout_r1_00;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined4 local_1b4;
  undefined1 auStack_1b0 [32];
  undefined1 auStack_190 [32];
  undefined1 auStack_170 [32];
  undefined1 auStack_150 [292];
  uint local_2c;
  
  local_2c = DAT_01d53560;
  if (param_3 == 0x40 || param_1 != 2) {
    FUN_01b26974(auStack_1b0,param_4,0x20);
    FUN_01b26974(auStack_190,param_4 + 0x20);
    uVar2 = extraout_r1_00;
    if (*(byte *)(param_4 + 0x3f) < 0x20) {
      iVar5 = 3;
      puVar4 = (uint *)"aws_lc_0_39_0_aes_ctr_set_key";
      while( true ) {
        uVar7 = FUN_01b28590(auStack_190 + iVar5 * 8);
        uVar2 = (uint)((ulonglong)uVar7 >> 0x20);
        uVar6 = puVar4[-2];
        uVar3 = puVar4[-1];
        if (uVar3 <= uVar2 && (uint)((uint)uVar7 <= uVar6) <= uVar3 - uVar2) break;
        if (uVar2 <= uVar3 && (uint)(uVar6 <= (uint)uVar7) <= uVar2 - uVar3) {
          FUN_01bed93e(auStack_150,0,0x121);
          local_1b4 = 0;
          iVar5 = FUN_01b26ba4(param_1,auStack_150,&local_1b4,param_6,param_7);
          if (iVar5 == 0) {
            uVar8 = 0x20f;
            goto LAB_01b68e08;
          }
          uVar7 = FUN_01b68840(auStack_170,param_5,auStack_1b0,auStack_190,param_2,param_3,
                               auStack_150,local_1b4);
          uVar2 = (uint)((ulonglong)uVar7 >> 0x20);
          if ((int)uVar7 == 1) {
            uVar7 = FUN_01b6b750(auStack_170,auStack_1b0,0x20);
            uVar2 = (uint)((ulonglong)uVar7 >> 0x20);
            bVar1 = (int)uVar7 == 0;
            goto LAB_01b68e50;
          }
          break;
        }
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        puVar4 = puVar4 + -2;
      }
    }
  }
  else {
    uVar8 = 0x1e5;
LAB_01b68e08:
    FUN_01b053d4(0xe,0,0xe,"/aws-lc/crypto/fipsmodule/curve25519/curve25519.c",uVar8);
    uVar2 = extraout_r1;
  }
  bVar1 = false;
LAB_01b68e50:
  if ((local_2c ^ DAT_01d53560) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4(bVar1,uVar2,local_2c ^ DAT_01d53560,0);
  }
  return;
}

