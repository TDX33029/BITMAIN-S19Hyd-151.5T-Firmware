// FUN_01b66288 @ 01b66288 size=424 calls_out=6 calls_in=4
// strings: sha512_final_impl | /aws-lc/crypto/fipsmodule/sha/sha512.c | md_len % 8 == 0 || md_len == SHA512_224_DIGEST_LENGTH

void FUN_01b66288(int param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 extraout_r1_02;
  undefined4 uVar3;
  undefined4 extraout_r1_03;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined1 auStack_30 [12];
  uint local_24;
  
  uVar4 = *(uint *)(param_2 + 0xd4);
  iVar5 = param_2 + 0x50;
  local_24 = DAT_01d53560;
  uVar1 = *(int *)(param_2 + 0xd0) + 1;
  *(undefined1 *)(iVar5 + *(int *)(param_2 + 0xd0)) = 0x80;
  if (0x70 < uVar1) {
    FUN_01b257dc(iVar5 + uVar1,0,0x80 - uVar1);
    FUN_01b20858(param_2,iVar5,1);
    uVar1 = 0;
  }
  FUN_01b257dc(iVar5 + uVar1,0,0x70 - uVar1);
  FUN_01b26e08(param_2 + 0xc0,extraout_r1,*(undefined4 *)(param_2 + 0x48),
               *(undefined4 *)(param_2 + 0x4c));
  FUN_01b26e08(param_2 + 200,extraout_r1_00,*(undefined4 *)(param_2 + 0x40),
               *(undefined4 *)(param_2 + 0x44));
  FUN_01b20858(param_2,iVar5,1);
  uVar3 = extraout_r1_01;
  if (param_1 == 0) {
    uVar2 = 0;
  }
  else {
    if ((uVar4 & 7) != 0 && uVar4 != 0x1c) {
                    /* WARNING: Subroutine does not return */
      FUN_01be3310("md_len % 8 == 0 || md_len == SHA512_224_DIGEST_LENGTH",
                   "/aws-lc/crypto/fipsmodule/sha/sha512.c",0x155,"sha512_final_impl");
    }
    iVar5 = param_1 + (uVar4 & 0xfffffff8);
    puVar6 = (undefined4 *)(param_2 + -8);
    for (; param_1 != iVar5; param_1 = param_1 + 8) {
      FUN_01b26e08(param_1,uVar3,puVar6[2],puVar6[3]);
      uVar3 = extraout_r1_02;
      puVar6 = puVar6 + 2;
    }
    if (uVar4 == 0x1c) {
      FUN_01b26e08(auStack_30,uVar3,*(undefined4 *)(param_2 + 0x18),*(undefined4 *)(param_2 + 0x1c))
      ;
      FUN_01b26974(param_1,auStack_30,4);
      uVar3 = extraout_r1_03;
    }
    uVar2 = 1;
  }
  if ((local_24 ^ DAT_01d53560) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4(uVar2,uVar3,local_24 ^ DAT_01d53560,0);
  }
  return;
}

