// FUN_01758ff8 @ 01758ff8 size=1120 calls_out=6 calls_in=2
// strings: 

undefined8
FUN_01758ff8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 *param_5,undefined2 param_6,undefined2 param_7,undefined2 param_8,
            undefined2 param_9)

{
  code *pcVar1;
  undefined1 auStack_12c0 [668];
  undefined4 local_1024;
  undefined1 auStack_1000 [704];
  undefined1 auStack_d40 [704];
  undefined1 auStack_a80 [704];
  undefined4 local_7c0;
  undefined4 uStack_7bc;
  undefined4 uStack_7b8;
  undefined4 uStack_7b4;
  undefined4 local_7b0;
  undefined4 uStack_7ac;
  undefined4 uStack_7a8;
  undefined4 uStack_7a4;
  undefined4 local_7a0;
  undefined4 uStack_79c;
  undefined4 uStack_798;
  undefined4 uStack_794;
  undefined4 local_790;
  undefined4 uStack_78c;
  undefined4 uStack_788;
  undefined4 uStack_784;
  undefined2 local_780 [16];
  undefined4 local_760;
  undefined4 uStack_75c;
  undefined4 uStack_758;
  undefined4 uStack_754;
  undefined4 local_750;
  undefined4 uStack_74c;
  undefined4 uStack_748;
  undefined4 uStack_744;
  undefined4 local_740;
  undefined4 uStack_73c;
  undefined4 uStack_738;
  undefined4 uStack_734;
  undefined4 local_730;
  undefined4 uStack_72c;
  undefined4 uStack_728;
  undefined4 uStack_724;
  undefined2 local_720 [16];
  undefined4 local_700;
  undefined4 uStack_6fc;
  undefined4 uStack_6f8;
  undefined4 uStack_6f4;
  undefined4 local_6f0;
  undefined4 uStack_6ec;
  undefined4 uStack_6e8;
  undefined4 uStack_6e4;
  undefined4 local_6e0;
  undefined4 uStack_6dc;
  undefined4 uStack_6d8;
  undefined4 uStack_6d4;
  undefined4 local_6d0;
  undefined4 uStack_6cc;
  undefined4 uStack_6c8;
  undefined4 uStack_6c4;
  undefined2 local_6c0 [16];
  undefined4 local_6a0;
  undefined4 uStack_69c;
  undefined4 uStack_698;
  undefined4 uStack_694;
  undefined4 local_690;
  undefined4 uStack_68c;
  undefined4 uStack_688;
  undefined4 uStack_684;
  undefined4 local_680;
  undefined4 uStack_67c;
  undefined4 uStack_678;
  undefined4 uStack_674;
  undefined4 local_670;
  undefined4 uStack_66c;
  undefined4 uStack_668;
  undefined4 uStack_664;
  undefined2 local_660 [24];
  undefined1 auStack_630 [384];
  undefined1 auStack_4b0 [384];
  undefined1 auStack_330 [384];
  undefined1 auStack_1b0 [388];
  int local_2c;
  
  local_2c = DAT_018ddaf8;
  local_1024 = param_1;
  if ((local_780 <= param_5 || param_5 <= &local_7c0) &&
     ((&local_7c0 <= param_5 || (param_5 + 0x10 <= &local_7c0)))) {
    local_7c0 = *param_5;
    uStack_7bc = param_5[1];
    uStack_7b8 = param_5[2];
    uStack_7b4 = param_5[3];
    local_7b0 = param_5[4];
    uStack_7ac = param_5[5];
    uStack_7a8 = param_5[6];
    uStack_7a4 = param_5[7];
    local_7a0 = param_5[8];
    uStack_79c = param_5[9];
    uStack_798 = param_5[10];
    uStack_794 = param_5[0xb];
    local_790 = param_5[0xc];
    uStack_78c = param_5[0xd];
    uStack_788 = param_5[0xe];
    uStack_784 = param_5[0xf];
    if ((param_5 <= &local_760 || local_720 <= param_5) &&
       ((&local_760 <= param_5 || (param_5 + 0x10 <= &local_760)))) {
      local_760 = *param_5;
      uStack_75c = param_5[1];
      uStack_758 = param_5[2];
      uStack_754 = param_5[3];
      local_750 = param_5[4];
      uStack_74c = param_5[5];
      uStack_748 = param_5[6];
      uStack_744 = param_5[7];
      local_740 = param_5[8];
      uStack_73c = param_5[9];
      uStack_738 = param_5[10];
      uStack_734 = param_5[0xb];
      local_730 = param_5[0xc];
      uStack_72c = param_5[0xd];
      uStack_728 = param_5[0xe];
      uStack_724 = param_5[0xf];
      if ((local_6c0 <= param_5 || param_5 <= &local_700) &&
         ((&local_700 <= param_5 || (param_5 + 0x10 <= &local_700)))) {
        local_700 = *param_5;
        uStack_6fc = param_5[1];
        uStack_6f8 = param_5[2];
        uStack_6f4 = param_5[3];
        local_6f0 = param_5[4];
        uStack_6ec = param_5[5];
        uStack_6e8 = param_5[6];
        uStack_6e4 = param_5[7];
        local_6e0 = param_5[8];
        uStack_6dc = param_5[9];
        uStack_6d8 = param_5[10];
        uStack_6d4 = param_5[0xb];
        local_6d0 = param_5[0xc];
        uStack_6cc = param_5[0xd];
        uStack_6c8 = param_5[0xe];
        uStack_6c4 = param_5[0xf];
        if ((local_660 <= param_5 || param_5 <= &local_6a0) &&
           ((&local_6a0 <= param_5 || (param_5 + 0x10 <= &local_6a0)))) {
          local_6a0 = *param_5;
          uStack_69c = param_5[1];
          uStack_698 = param_5[2];
          uStack_694 = param_5[3];
          local_690 = param_5[4];
          uStack_68c = param_5[5];
          uStack_688 = param_5[6];
          uStack_684 = param_5[7];
          local_680 = param_5[8];
          uStack_67c = param_5[9];
          uStack_678 = param_5[10];
          uStack_674 = param_5[0xb];
          local_670 = param_5[0xc];
          uStack_66c = param_5[0xd];
          uStack_668 = param_5[0xe];
          uStack_664 = param_5[0xf];
          local_780[0] = param_6;
          local_6c0[0] = param_8;
          local_660[0] = param_9;
          local_720[0] = param_7;
          FUN_01757774(auStack_630,0x88);
          FUN_01757774(auStack_4b0,0x88);
          FUN_01757774(auStack_330,0x88);
          FUN_01757774(auStack_1b0,0x88);
          FUN_01757774(auStack_630,0x88);
          FUN_01757884(auStack_630,&local_7c0,0x42);
          FUN_01757774(auStack_4b0,0x88);
          FUN_01757884(auStack_4b0,&local_760,0x42);
          FUN_01757774(auStack_330,0x88);
          FUN_01757884(auStack_330,&local_700,0x42);
          FUN_01757774(auStack_1b0,0x88);
          FUN_01757884(auStack_1b0,&local_6a0,0x42);
          FUN_01757d10(auStack_12c0,auStack_630,0x2a8);
          FUN_01757d10(auStack_1000,auStack_4b0,0x2a8);
          FUN_01757d10(auStack_d40,auStack_330,0x2a8);
          FUN_01757d10(auStack_a80,auStack_1b0,0x2a8);
          FUN_01702e04(param_1,auStack_12c0);
          FUN_01702e04(param_2,auStack_1000);
          FUN_01702e04(param_3,auStack_d40);
          FUN_01702e04(param_4,auStack_a80);
          FUN_0177aaa0(auStack_12c0,0xb00);
          FUN_0177aaa0(&local_7c0,0x180);
          if (local_2c != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
            FUN_016d2b78();
          }
          return 0;
        }
      }
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0,0x1759454);
  (*pcVar1)();
}

