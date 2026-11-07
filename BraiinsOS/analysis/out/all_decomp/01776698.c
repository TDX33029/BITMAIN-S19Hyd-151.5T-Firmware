// FUN_01776698 @ 01776698 size=2252 calls_out=21 calls_in=1
// strings: fe_mul_impl | /aws-lc/crypto/fipsmodule/curve25519/curve25519_nohw.c | constant_time_declassify_int(in1[_assert_fe_i] <= ((_assert_fe_i & 1) ? 0x6999999u : 0xd333332u))

void FUN_01776698(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,int param_8)

{
  undefined4 uVar1;
  undefined4 extraout_r1;
  undefined4 uVar2;
  uint *puVar3;
  char *pcVar4;
  char *pcVar5;
  int iVar6;
  bool bVar7;
  undefined8 uVar8;
  undefined1 auStack_b04 [40];
  undefined1 auStack_adc [40];
  undefined1 auStack_ab4 [40];
  undefined1 auStack_a8c [40];
  undefined1 auStack_a64 [40];
  undefined4 local_a3c;
  undefined1 auStack_a38 [36];
  undefined4 local_a14;
  undefined1 auStack_a10 [36];
  undefined1 auStack_9ec [40];
  undefined1 auStack_9c4 [40];
  undefined1 auStack_99c [40];
  undefined1 auStack_974 [40];
  uint local_94c;
  uint local_948;
  uint local_944;
  uint local_940;
  uint local_93c;
  uint local_938;
  uint local_934;
  uint local_930;
  uint local_92c;
  uint local_928;
  uint local_924;
  uint local_920;
  uint local_91c;
  uint local_918;
  uint local_914;
  uint local_910;
  uint local_90c;
  uint local_908;
  uint local_904;
  uint local_900;
  undefined1 auStack_8fc [40];
  undefined1 auStack_8d4 [40];
  undefined1 auStack_8ac [40];
  undefined1 auStack_884 [40];
  undefined1 auStack_85c [40];
  undefined1 auStack_834 [40];
  undefined1 auStack_80c [40];
  undefined1 auStack_7e4 [40];
  undefined1 auStack_7bc [80];
  undefined1 auStack_76c [160];
  undefined1 auStack_6cc [160];
  undefined1 auStack_62c [160];
  undefined1 auStack_58c [160];
  undefined1 auStack_4ec [160];
  undefined1 auStack_44c [160];
  undefined1 auStack_3ac [160];
  undefined1 auStack_30c [160];
  undefined1 auStack_26c [64];
  char acStack_22c [255];
  char local_12d [256];
  undefined1 local_2d;
  uint local_2c [2];
  
  local_2c[0] = DAT_018ddaf8;
  uVar8 = FUN_01724408(auStack_9ec,param_2,&PTR_018bc3f4,0);
  uVar2 = (undefined4)((ulonglong)uVar8 >> 0x20);
  uVar1 = 0;
  if ((int)uVar8 != 0) {
    if (param_8 == 0) {
      FUN_01773c38(auStack_26c,param_3,0x20,param_2,0x20,param_5,param_6,0,0);
    }
    else {
      FUN_01773c38(auStack_26c,param_7,param_8,param_3,0x20,param_2,0x20,param_5,param_6);
    }
    pcVar5 = local_12d + 1;
    FUN_01727168(auStack_26c);
    FUN_017072ac(auStack_b04,auStack_9ec);
    FUN_017075c0(auStack_9ec,auStack_b04);
    FUN_017072ac(auStack_b04,auStack_974);
    FUN_017075c0(auStack_974,auStack_b04);
    FUN_016f20e0(acStack_22c,auStack_26c);
    FUN_016f20e0(pcVar5,param_4);
    FUN_01725a64(auStack_76c,auStack_9ec);
    FUN_016dd52c(auStack_80c,auStack_9ec,0x28);
    FUN_016dd52c(auStack_7e4,auStack_9c4,0x28);
    FUN_016dd52c(auStack_7bc,auStack_99c,0x28);
    FUN_0170d2b8(&local_94c,auStack_80c);
    FUN_01725f7c(auStack_80c,&local_94c);
    FUN_01726408(&local_94c,auStack_80c,auStack_76c);
    FUN_01725f7c(auStack_8ac,&local_94c);
    FUN_01725a64(auStack_6cc,auStack_8ac);
    FUN_01726408(&local_94c,auStack_80c,auStack_6cc);
    FUN_01725f7c(auStack_8ac,&local_94c);
    FUN_01725a64(auStack_62c,auStack_8ac);
    FUN_01726408(&local_94c,auStack_80c,auStack_62c);
    FUN_01725f7c(auStack_8ac,&local_94c);
    FUN_01725a64(auStack_58c,auStack_8ac);
    FUN_01726408(&local_94c,auStack_80c,auStack_58c);
    FUN_01725f7c(auStack_8ac,&local_94c);
    FUN_01725a64(auStack_4ec,auStack_8ac);
    FUN_01726408(&local_94c,auStack_80c,auStack_4ec);
    FUN_01725f7c(auStack_8ac,&local_94c);
    FUN_01725a64(auStack_44c,auStack_8ac);
    FUN_01726408(&local_94c,auStack_80c,auStack_44c);
    FUN_01725f7c(auStack_8ac,&local_94c);
    FUN_01725a64(auStack_3ac,auStack_8ac);
    FUN_01726408(&local_94c,auStack_80c,auStack_3ac);
    FUN_01725f7c(auStack_8ac,&local_94c);
    FUN_01725a64(auStack_30c,auStack_8ac);
    FUN_016dd606(auStack_a64,0,0x28);
    FUN_016dd606(auStack_a38,0,0x24);
    local_a3c = 1;
    FUN_016dd606(auStack_a10,0,0x24);
    local_a14 = 1;
    puVar3 = local_2c;
    iVar6 = 0xff;
    pcVar4 = pcVar5;
    do {
      pcVar4 = pcVar4 + -1;
      if ((*pcVar4 != '\0') || (puVar3 = (uint *)((int)puVar3 + -1), *(char *)puVar3 != '\0')) {
        pcVar5 = pcVar5 + iVar6;
        pcVar4 = acStack_22c + iVar6;
        goto LAB_01776a28;
      }
      bVar7 = iVar6 != 0;
      iVar6 = iVar6 + -1;
    } while (bVar7);
LAB_01776aa4:
    FUN_017240e8(param_1,auStack_a64);
    uVar1 = 1;
    uVar2 = extraout_r1;
  }
  if ((local_2c[0] ^ DAT_018ddaf8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78(uVar1,uVar2,local_2c[0] ^ DAT_018ddaf8,0);
  }
  return;
LAB_01776a28:
  FUN_0170d2b8(&local_94c,auStack_a64);
  iVar6 = (int)*pcVar4;
  if (iVar6 < 1) {
    if (iVar6 != 0) {
      FUN_01725f7c(auStack_8ac,&local_94c);
      FUN_01726980(&local_94c,auStack_8ac,auStack_76c + (-iVar6 >> 1) * 0xa0);
    }
    iVar6 = (int)*pcVar5;
    if (0 < iVar6) goto LAB_01776a74;
LAB_01776a04:
    if (iVar6 != 0) {
      FUN_01725f7c(auStack_8ac,&local_94c);
      FUN_01706e70(&local_94c,auStack_884,auStack_8ac);
      FUN_01706a0c(&local_924,auStack_884,auStack_8ac);
      if ((((((0xd333332 < local_94c) || (0x6999999 < local_948)) || (0xd333332 < local_944)) ||
           ((0x6999999 < local_940 || (0xd333332 < local_93c)))) || (0x6999999 < local_938)) ||
         (((0xd333332 < local_934 || (0x6999999 < local_930)) ||
          ((0xd333332 < local_92c || (0x6999999 < local_928)))))) {
LAB_01776f40:
                    /* WARNING: Subroutine does not return */
        FUN_016d2c94("constant_time_declassify_int(in1[_assert_fe_i] <= ((_assert_fe_i & 1) ? 0x6999999u : 0xd333332u))"
                     ,"/aws-lc/crypto/fipsmodule/curve25519/curve25519_nohw.c",0xca,"fe_mul_impl");
      }
      iVar6 = (-iVar6 >> 1) * 0x78;
      FUN_01705480(auStack_ab4,&local_94c,&UNK_004447e4 + iVar6);
      if ((((0xd333332 < local_924) || (0x6999999 < local_920)) || (0xd333332 < local_91c)) ||
         (((0x6999999 < local_918 || (0xd333332 < local_914)) ||
          ((0x6999999 < local_910 ||
           (((0xd333332 < local_90c || (0x6999999 < local_908)) ||
            ((0xd333332 < local_904 || (0x6999999 < local_900)))))))))) goto LAB_01776f40;
      FUN_01705480(auStack_adc,&local_924,&DAT_004447bc + iVar6);
      if ((((((0xd333332 < *(uint *)(&DAT_0044480c + iVar6)) ||
             (0x6999999 < *(uint *)(&DAT_00444810 + iVar6))) ||
            (0xd333332 < *(uint *)(&DAT_00444814 + iVar6))) ||
           ((0x6999999 < *(uint *)(&DAT_00444818 + iVar6) ||
            (0xd333332 < *(uint *)(&DAT_0044481c + iVar6))))) ||
          (0x6999999 < *(uint *)(&DAT_00444820 + iVar6))) ||
         (((0xd333332 < *(uint *)(&DAT_00444824 + iVar6) ||
           (0x6999999 < *(uint *)(&DAT_00444828 + iVar6))) ||
          ((0xd333332 < *(uint *)(&DAT_0044482c + iVar6) ||
           (0x6999999 < *(uint *)(&DAT_00444830 + iVar6))))))) goto LAB_01776f40;
      FUN_01705480(auStack_a8c,&DAT_0044480c + iVar6,auStack_834);
      FUN_01706e70(auStack_8d4,auStack_85c);
      FUN_01706a0c(&local_94c,auStack_ab4,auStack_adc);
      FUN_01706e70(&local_924,auStack_ab4,auStack_adc);
      FUN_017075c0(auStack_ab4,auStack_8d4);
      FUN_01706a0c(auStack_8fc,auStack_ab4,auStack_a8c);
      FUN_01706e70(auStack_8d4,auStack_ab4,auStack_a8c);
    }
  }
  else {
    FUN_01725f7c(auStack_8ac,&local_94c);
    FUN_01726408(&local_94c,auStack_8ac,auStack_76c + (iVar6 >> 1) * 0xa0);
    iVar6 = (int)*pcVar5;
    if (iVar6 < 1) goto LAB_01776a04;
LAB_01776a74:
    FUN_01725f7c(auStack_8ac,&local_94c);
    FUN_0170d3f8(&local_94c,auStack_8ac,&DAT_004447bc + (iVar6 >> 1) * 0x78);
  }
  FUN_01725c00(auStack_a64,&local_94c);
  pcVar5 = pcVar5 + -1;
  if (pcVar4 == acStack_22c) goto LAB_01776aa4;
  pcVar4 = pcVar4 + -1;
  goto LAB_01776a28;
}

