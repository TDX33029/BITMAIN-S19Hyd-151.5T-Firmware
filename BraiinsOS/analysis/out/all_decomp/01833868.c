// FUN_01833868 @ 01833868 size=1416 calls_out=14 calls_in=1
// strings: sig64 != NULL | msg != NULL || msglen == 0 | pubkey != NULL

void FUN_01833868(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  uint uVar1;
  uint extraout_r1;
  uint extraout_r1_00;
  uint extraout_r1_01;
  uint extraout_r1_02;
  uint extraout_r1_03;
  uint extraout_r1_04;
  undefined8 uVar2;
  longlong lVar3;
  int local_a2c;
  undefined1 *local_a28;
  int *local_a24;
  int *local_a20;
  undefined1 auStack_a18 [32];
  undefined1 auStack_9f8 [32];
  int local_9d8;
  int local_9d4;
  uint local_9d0;
  uint local_9cc;
  uint local_9c8;
  uint local_9c4;
  uint local_9c0;
  uint local_9bc;
  uint local_9b8;
  int local_9b4;
  undefined4 local_9ac;
  undefined4 uStack_9a8;
  undefined4 uStack_9a4;
  undefined4 uStack_9a0;
  undefined4 local_99c;
  undefined4 uStack_998;
  undefined4 uStack_994;
  undefined4 uStack_990;
  undefined4 local_98c;
  undefined4 uStack_988;
  undefined4 local_984;
  undefined4 uStack_980;
  undefined4 uStack_97c;
  undefined4 uStack_978;
  undefined4 local_974;
  undefined4 uStack_970;
  undefined4 uStack_96c;
  undefined4 uStack_968;
  undefined4 local_964;
  undefined4 uStack_960;
  undefined4 local_95c;
  undefined4 local_958;
  undefined4 uStack_954;
  undefined4 uStack_950;
  undefined4 uStack_94c;
  undefined4 local_948;
  undefined4 uStack_944;
  undefined4 uStack_940;
  undefined4 uStack_93c;
  undefined4 local_938;
  undefined4 uStack_934;
  undefined4 local_930;
  undefined4 uStack_92c;
  undefined4 uStack_928;
  undefined4 uStack_924;
  undefined4 local_920;
  undefined4 uStack_91c;
  undefined4 uStack_918;
  undefined4 uStack_914;
  undefined4 local_910;
  undefined4 uStack_90c;
  undefined4 local_908;
  int local_904;
  int local_900;
  int local_8fc;
  int local_8f8;
  int local_8f4;
  int local_8f0;
  int local_8ec;
  undefined8 local_8e8;
  undefined4 local_8e0;
  int local_8dc;
  int iStack_8d8;
  int iStack_8d4;
  int iStack_8d0;
  int local_8cc;
  undefined *puStack_8c8;
  int iStack_8c4;
  int iStack_8c0;
  int local_8bc;
  int iStack_8b8;
  uint local_8b4 [10];
  undefined1 auStack_88c [40];
  int local_864;
  undefined1 auStack_860 [320];
  int local_720;
  int local_71c;
  int local_718;
  int local_714;
  int local_710;
  undefined *local_70c;
  int local_708;
  int local_704;
  int local_700;
  int local_6fc;
  int local_480;
  int local_47c;
  int local_478;
  int local_474;
  int local_470;
  undefined *local_46c;
  int local_468;
  int local_464;
  int local_460;
  int local_45c;
  uint local_458 [251];
  undefined1 auStack_6c [32];
  undefined1 auStack_4c [32];
  uint local_2c;
  
  local_2c = DAT_018ddaf8;
  if (param_2 == 0) {
    (**(code **)(param_1 + 0xa0))("sig64 != NULL",*(undefined4 *)(param_1 + 0xa4));
    uVar1 = extraout_r1_02;
  }
  else if (param_4 == 0 || param_3 != 0) {
    if (param_5 == 0) {
      (**(code **)(param_1 + 0xa0))("pubkey != NULL",*(undefined4 *)(param_1 + 0xa4));
      uVar1 = extraout_r1_04;
    }
    else {
      FUN_0181edb4(&local_9d8);
      uVar1 = local_9d4 + 0x40 + (local_9d8 + 0x3d1U >> 0x1a);
      if ((local_9b8 & local_9bc & local_9c0 & local_9c4 & local_9c8 & local_9cc & local_9d0) !=
          0x3ffffff || (uVar1 < 0x4000000 || local_9b4 != 0x3fffff)) {
        FUN_0182582c(auStack_a18,param_2 + 0x20,&local_a2c);
        uVar1 = extraout_r1;
        if (local_a2c == 0) {
          uVar2 = FUN_01825cf0(param_1,&local_9ac,param_5);
          uVar1 = (uint)((ulonglong)uVar2 >> 0x20);
          if ((int)uVar2 != 0) {
            FUN_0181ef6c(auStack_6c,&local_9ac);
            local_480 = -0x631345ef;
            local_47c = 0x23925381;
            local_478 = 0x11679112;
            local_474 = -0x2e9d81f1;
            local_470 = -0x68378ab0;
            local_46c = &DAT_003cc765;
            local_468 = -0x6f09ee9c;
            local_464 = 0x33e9b66a;
            FUN_0182169c(&local_480,param_2,0x20);
            FUN_0182169c(&local_480,auStack_6c,0x20);
            FUN_0182169c(&local_480,param_3,param_4);
            FUN_018239f4(&local_480);
            FUN_0182582c(auStack_9f8,auStack_4c,0);
            FUN_01820018(auStack_9f8,auStack_9f8);
            local_8e0 = local_95c;
            local_958 = local_9ac;
            uStack_954 = uStack_9a8;
            uStack_950 = uStack_9a4;
            uStack_94c = uStack_9a0;
            local_948 = local_99c;
            uStack_944 = uStack_998;
            uStack_940 = uStack_994;
            uStack_93c = uStack_990;
            local_938 = local_98c;
            uStack_934 = uStack_988;
            local_930 = local_984;
            uStack_92c = uStack_980;
            uStack_928 = uStack_97c;
            uStack_924 = uStack_978;
            local_920 = local_974;
            uStack_91c = uStack_970;
            uStack_918 = uStack_96c;
            uStack_914 = uStack_968;
            local_910 = local_964;
            uStack_90c = uStack_960;
            local_8ec = local_a2c;
            local_8f0 = local_a2c;
            local_8f4 = local_a2c;
            local_8f8 = local_a2c;
            local_8e8 = 0;
            local_908 = 1;
            local_8fc = local_a2c;
            local_900 = local_a2c;
            local_904 = local_a2c;
            local_a28 = auStack_860;
            local_a24 = &local_720;
            local_a20 = &local_480;
            FUN_0182fe28(&local_a28,&local_8dc,&local_958,auStack_9f8,auStack_a18);
            uVar1 = extraout_r1_00;
            if (local_864 == 0) {
              FUN_0182bb58(auStack_88c,auStack_88c);
              FUN_0181f914(auStack_860,auStack_88c);
              FUN_0181f130(&local_720,auStack_88c,auStack_860);
              FUN_0181f130(&local_8dc,&local_8dc,auStack_860);
              FUN_0181f130(local_8b4,local_8b4,&local_720);
              local_480 = local_8dc;
              local_47c = iStack_8d8;
              local_478 = iStack_8d4;
              local_474 = iStack_8d0;
              local_470 = local_8cc;
              local_46c = puStack_8c8;
              local_468 = iStack_8c4;
              local_464 = iStack_8c0;
              local_460 = local_8bc;
              local_45c = iStack_8b8;
              local_458[0] = local_8b4[0];
              FUN_0181ea1c(local_458);
              uVar1 = extraout_r1_01;
              if ((local_458[0] & 1) == 0) {
                local_720 = (local_480 + 0xffff0bc) - local_9d8;
                local_71c = (local_47c + 0xffffefc) - local_9d4;
                local_6fc = (local_45c + 0xfffffc) - local_9b4;
                local_718 = (local_478 + 0xffffffc) - local_9d0;
                local_714 = (local_474 + 0xffffffc) - local_9cc;
                local_710 = (local_470 + 0xffffffc) - local_9c8;
                local_708 = (local_468 + 0xffffffc) - local_9c0;
                local_70c = local_46c + (0xffffffc - local_9c4);
                local_704 = (local_464 + 0xffffffc) - local_9bc;
                local_700 = (local_460 + 0xffffffc) - local_9b8;
                lVar3 = FUN_0181eba4(&local_720);
                goto LAB_01833988;
              }
            }
          }
        }
      }
    }
  }
  else {
    (**(code **)(param_1 + 0xa0))("msg != NULL || msglen == 0",*(undefined4 *)(param_1 + 0xa4));
    uVar1 = extraout_r1_03;
  }
  lVar3 = (ulonglong)uVar1 << 0x20;
LAB_01833988:
  if ((local_2c ^ DAT_018ddaf8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78((int)lVar3,(int)((ulonglong)lVar3 >> 0x20),local_2c ^ DAT_018ddaf8,0);
  }
  return;
}

