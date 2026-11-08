// FUN_01b65e34 @ 01b65e34 size=72 calls_out=1 calls_in=1
// strings: aws_lc_0_39_0_SHA512_224_Final | /aws-lc/crypto/fipsmodule/sha/sha512.c | sha->md_len == SHA512_224_DIGEST_LENGTH

/* WARNING: Removing unreachable block (ram,0x01b26fcc) */

void FUN_01b65e34(int param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 extraout_r1_02;
  undefined4 uVar3;
  undefined4 extraout_r1_03;
  int iVar4;
  undefined4 *puVar5;
  undefined1 auStack_30 [12];
  uint uStack_24;
  
  if (*(int *)(param_2 + 0xd4) != 0x1c) {
                    /* WARNING: Subroutine does not return */
    FUN_01be3310("sha->md_len == SHA512_224_DIGEST_LENGTH","/aws-lc/crypto/fipsmodule/sha/sha512.c",
                 0xf0,"aws_lc_0_39_0_SHA512_224_Final");
  }
  iVar4 = param_2 + 0x50;
  uStack_24 = DAT_01d53560;
  uVar1 = *(int *)(param_2 + 0xd0) + 1;
  *(undefined1 *)(iVar4 + *(int *)(param_2 + 0xd0)) = 0x80;
  if (0x70 < uVar1) {
    FUN_01b257dc(iVar4 + uVar1,0,0x80 - uVar1);
    FUN_01b20858(param_2,iVar4,1);
    uVar1 = 0;
  }
  FUN_01b257dc(iVar4 + uVar1,0,0x70 - uVar1);
  FUN_01b26e08(param_2 + 0xc0,extraout_r1,*(undefined4 *)(param_2 + 0x48),
               *(undefined4 *)(param_2 + 0x4c));
  FUN_01b26e08(param_2 + 200,extraout_r1_00,*(undefined4 *)(param_2 + 0x40),
               *(undefined4 *)(param_2 + 0x44));
  FUN_01b20858(param_2,iVar4,1);
  if (param_1 == 0) {
    uVar2 = 0;
    uVar3 = extraout_r1_01;
  }
  else {
    iVar4 = param_1 + 0x18;
    uVar2 = extraout_r1_01;
    puVar5 = (undefined4 *)(param_2 + -8);
    for (; param_1 != iVar4; param_1 = param_1 + 8) {
      FUN_01b26e08(param_1,uVar2,puVar5[2],puVar5[3]);
      uVar2 = extraout_r1_02;
      puVar5 = puVar5 + 2;
    }
    FUN_01b26e08(auStack_30,uVar2,*(undefined4 *)(param_2 + 0x18),*(undefined4 *)(param_2 + 0x1c));
    FUN_01b26974(param_1,auStack_30,4);
    uVar2 = 1;
    uVar3 = extraout_r1_03;
  }
  if ((uStack_24 ^ DAT_01d53560) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4(uVar2,uVar3,uStack_24 ^ DAT_01d53560,0);
  }
  return;
}

