// FUN_01b65d88 @ 01b65d88 size=72 calls_out=1 calls_in=2
// strings: aws_lc_0_39_0_SHA384_Final | /aws-lc/crypto/fipsmodule/sha/sha512.c | sha->md_len == SHA384_DIGEST_LENGTH

/* WARNING: Removing unreachable block (ram,0x01b27038) */
/* WARNING: Removing unreachable block (ram,0x01b26fb8) */
/* WARNING: Removing unreachable block (ram,0x01b26fcc) */

void FUN_01b65d88(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 extraout_r1_02;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  
  uVar1 = DAT_01d53560;
  if (*(int *)(param_2 + 0xd4) != 0x30) {
                    /* WARNING: Subroutine does not return */
    FUN_01be3310("sha->md_len == SHA384_DIGEST_LENGTH","/aws-lc/crypto/fipsmodule/sha/sha512.c",0xe1
                 ,"aws_lc_0_39_0_SHA384_Final");
  }
  iVar5 = param_2 + 0x50;
  uVar2 = *(int *)(param_2 + 0xd0) + 1;
  *(undefined1 *)(iVar5 + *(int *)(param_2 + 0xd0)) = 0x80;
  if (0x70 < uVar2) {
    FUN_01b257dc(iVar5 + uVar2,0,0x80 - uVar2);
    FUN_01b20858(param_2,iVar5,1);
    uVar2 = 0;
  }
  FUN_01b257dc(iVar5 + uVar2,0,0x70 - uVar2);
  FUN_01b26e08(param_2 + 0xc0,extraout_r1,*(undefined4 *)(param_2 + 0x48),
               *(undefined4 *)(param_2 + 0x4c));
  FUN_01b26e08(param_2 + 200,extraout_r1_00,*(undefined4 *)(param_2 + 0x40),
               *(undefined4 *)(param_2 + 0x44));
  FUN_01b20858(param_2,iVar5,1);
  uVar4 = extraout_r1_01;
  if (param_1 == 0) {
    uVar3 = 0;
  }
  else {
    iVar5 = param_1 + 0x30;
    puVar6 = (undefined4 *)(param_2 + -8);
    for (; param_1 != iVar5; param_1 = param_1 + 8) {
      FUN_01b26e08(param_1,uVar4,puVar6[2],puVar6[3]);
      uVar4 = extraout_r1_02;
      puVar6 = puVar6 + 2;
    }
    uVar3 = 1;
  }
  if ((uVar1 ^ DAT_01d53560) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4(uVar3,uVar4,uVar1 ^ DAT_01d53560,0);
  }
  return;
}

