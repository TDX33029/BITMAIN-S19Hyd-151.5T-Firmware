// FUN_01759464 @ 01759464 size=2272 calls_out=5 calls_in=1
// strings: 

undefined8
FUN_01759464(int param_1,int param_2,int param_3,int param_4,undefined4 *param_5,undefined1 param_6,
            undefined1 param_7,undefined1 param_8,undefined1 param_9)

{
  code *pcVar1;
  byte bVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  byte bStack_c41;
  byte local_c40 [287];
  byte bStack_b21;
  byte local_b20 [287];
  byte bStack_a01;
  byte local_a00 [287];
  byte bStack_8e1;
  byte local_8e0 [288];
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
  undefined1 local_780;
  undefined1 local_77f;
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
  undefined1 local_720;
  undefined1 local_71f;
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
  undefined1 local_6c0;
  undefined1 local_6bf;
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
  undefined1 local_660;
  undefined1 local_65f;
  undefined1 auStack_630 [384];
  undefined1 auStack_4b0 [384];
  undefined1 auStack_330 [384];
  undefined1 auStack_1b0 [388];
  int local_2c;
  
  local_2c = DAT_018ddaf8;
  if ((&local_780 <= param_5 || param_5 <= &local_7c0) &&
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
    if ((&local_720 <= param_5 || param_5 <= &local_760) &&
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
      if ((&local_6c0 <= param_5 || param_5 <= &local_700) &&
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
        if ((&local_660 <= param_5 || param_5 <= &local_6a0) &&
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
          local_720 = param_7;
          local_780 = param_6;
          local_660 = param_9;
          local_6c0 = param_8;
          local_77f = 0;
          local_71f = 0;
          local_6bf = 0;
          local_65f = 0;
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
          FUN_01757d10(local_c40,auStack_630,0x110);
          FUN_01757d10(local_b20,auStack_4b0,0x110);
          FUN_01757d10(local_a00,auStack_330,0x110);
          FUN_01757d10(local_8e0,auStack_1b0,0x110);
          uVar10 = 0;
          pbVar3 = &bStack_c41;
          do {
            uVar4 = pbVar3[1] & 0xf;
            uVar11 = (uint)(pbVar3[1] >> 4);
            if (uVar4 < 9) {
              *(uint *)(param_1 + uVar10 * 4) = 4 - uVar4;
              bVar12 = uVar10 != 0xff;
              uVar10 = uVar10 + 1;
              bVar13 = false;
              if (bVar12) {
                bVar13 = true;
              }
            }
            else {
              bVar13 = true;
            }
            bVar12 = bVar13;
            if (8 < uVar11) {
              bVar12 = false;
            }
            if (bVar12) {
              *(uint *)(param_1 + uVar10 * 4) = 4 - uVar11;
              bVar13 = uVar10 == 0xff;
              uVar10 = uVar10 + 1;
              if (local_c40 == pbVar3 + -0x10e || bVar13) goto LAB_01759848;
            }
            else {
              if (local_c40 == pbVar3 + -0x10e) {
                bVar13 = false;
              }
              if (!bVar13) goto LAB_01759848;
            }
            pbVar3 = pbVar3 + 1;
          } while( true );
        }
      }
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0,0x1759d40);
  (*pcVar1)();
LAB_01759848:
  uVar11 = 0;
  pbVar3 = &bStack_b21;
  do {
    uVar5 = pbVar3[1] & 0xf;
    uVar4 = (uint)(pbVar3[1] >> 4);
    if (uVar5 < 9) {
      *(uint *)(param_2 + uVar11 * 4) = 4 - uVar5;
      bVar12 = uVar11 != 0xff;
      uVar11 = uVar11 + 1;
      bVar13 = false;
      if (bVar12) {
        bVar13 = true;
      }
    }
    else {
      bVar13 = true;
    }
    bVar12 = bVar13;
    if (8 < uVar4) {
      bVar12 = false;
    }
    if (bVar12) {
      *(uint *)(param_2 + uVar11 * 4) = 4 - uVar4;
      bVar13 = uVar11 == 0xff;
      uVar11 = uVar11 + 1;
      if (local_c40 == pbVar3 + -0x22e || bVar13) break;
    }
    else {
      if (local_c40 == pbVar3 + -0x22e) {
        bVar13 = false;
      }
      if (!bVar13) break;
    }
    pbVar3 = pbVar3 + 1;
  } while( true );
  uVar4 = 0;
  pbVar3 = &bStack_a01;
  do {
    uVar6 = pbVar3[1] & 0xf;
    uVar5 = (uint)(pbVar3[1] >> 4);
    if (uVar6 < 9) {
      *(uint *)(param_3 + uVar4 * 4) = 4 - uVar6;
      bVar12 = uVar4 != 0xff;
      uVar4 = uVar4 + 1;
      bVar13 = false;
      if (bVar12) {
        bVar13 = true;
      }
    }
    else {
      bVar13 = true;
    }
    bVar12 = bVar13;
    if (8 < uVar5) {
      bVar12 = false;
    }
    if (bVar12) {
      *(uint *)(param_3 + uVar4 * 4) = 4 - uVar5;
      bVar13 = uVar4 == 0xff;
      uVar4 = uVar4 + 1;
      if (local_c40 == pbVar3 + -0x34e || bVar13) break;
    }
    else {
      if (local_c40 == pbVar3 + -0x34e) {
        bVar13 = false;
      }
      if (!bVar13) break;
    }
    pbVar3 = pbVar3 + 1;
  } while( true );
  pbVar3 = &bStack_8e1;
  uVar5 = 0;
  do {
    uVar7 = pbVar3[1] & 0xf;
    uVar6 = (uint)(pbVar3[1] >> 4);
    bVar13 = 8 < uVar7;
    uVar9 = uVar5;
    if (!bVar13) {
      *(uint *)(param_4 + uVar5 * 4) = 4 - uVar7;
      uVar9 = uVar5 + 1;
    }
    if (uVar6 < 9 && (bVar13 || uVar5 != 0xff)) {
      *(uint *)(param_4 + uVar9 * 4) = 4 - uVar6;
      bVar13 = uVar9 == 0xff;
      uVar9 = uVar9 + 1;
      if (local_c40 == pbVar3 + -0x46e || bVar13) break;
    }
    else if (local_c40 == pbVar3 + -0x46e || !bVar13 && uVar5 == 0xff) break;
    pbVar3 = pbVar3 + 1;
    uVar5 = uVar9;
  } while( true );
  if (uVar9 != 0x100 || (uVar4 != 0x100 || (uVar11 != 0x100 || uVar10 != 0x100))) {
    do {
      FUN_01757d10(local_c40,auStack_630,0x88);
      FUN_01757d10(local_b20,auStack_4b0,0x88);
      FUN_01757d10(local_a00,auStack_330,0x88);
      FUN_01757d10(local_8e0,auStack_1b0,0x88);
      if (uVar10 < 0x100) {
        pbVar3 = &bStack_c41;
        do {
          bVar2 = pbVar3[1];
          uVar6 = bVar2 & 0xf;
          uVar5 = (uint)(bVar2 >> 4);
          if (uVar6 < 9) {
            *(uint *)(param_1 + uVar10 * 4) = 4 - uVar6;
            bVar12 = uVar10 != 0xff;
            uVar10 = uVar10 + 1;
            bVar13 = false;
            if (bVar12) {
              bVar13 = true;
            }
          }
          else {
            bVar13 = true;
          }
          if (8 < uVar5) {
            bVar13 = false;
          }
          if (bVar13) {
            *(uint *)(param_1 + uVar10 * 4) = 4 - uVar5;
            uVar10 = uVar10 + 1;
          }
          pbVar8 = pbVar3 + -0x86;
          bVar13 = uVar10 != 0x100;
          pbVar3 = pbVar3 + 1;
        } while (local_c40 != pbVar8 && bVar13);
        if (uVar11 < 0x100) goto LAB_01759b1c;
LAB_01759d34:
        bVar12 = false;
      }
      else {
        bVar13 = false;
        if (0xff < uVar11) goto LAB_01759d34;
LAB_01759b1c:
        pbVar3 = &bStack_b21;
        do {
          bVar2 = pbVar3[1];
          uVar6 = bVar2 & 0xf;
          uVar5 = (uint)(bVar2 >> 4);
          if (uVar6 < 9) {
            *(uint *)(param_2 + uVar11 * 4) = 4 - uVar6;
            bVar14 = uVar11 != 0xff;
            uVar11 = uVar11 + 1;
            bVar12 = false;
            if (bVar14) {
              bVar12 = true;
            }
          }
          else {
            bVar12 = true;
          }
          if (8 < uVar5) {
            bVar12 = false;
          }
          if (bVar12) {
            *(uint *)(param_2 + uVar11 * 4) = 4 - uVar5;
            uVar11 = uVar11 + 1;
          }
          bVar12 = uVar11 != 0x100;
          pbVar8 = pbVar3 + -0x1a6;
          pbVar3 = pbVar3 + 1;
        } while (local_c40 != pbVar8 && bVar12);
      }
      if (uVar4 < 0x100) {
        pbVar3 = &bStack_a01;
        do {
          bVar2 = pbVar3[1];
          uVar6 = bVar2 & 0xf;
          uVar5 = (uint)(bVar2 >> 4);
          if (uVar6 < 9) {
            *(uint *)(param_3 + uVar4 * 4) = 4 - uVar6;
            bVar15 = uVar4 != 0xff;
            uVar4 = uVar4 + 1;
            bVar14 = false;
            if (bVar15) {
              bVar14 = true;
            }
          }
          else {
            bVar14 = true;
          }
          if (8 < uVar5) {
            bVar14 = false;
          }
          if (bVar14) {
            *(uint *)(param_3 + uVar4 * 4) = 4 - uVar5;
            uVar4 = uVar4 + 1;
          }
          bVar14 = uVar4 != 0x100;
          pbVar8 = pbVar3 + -0x2c6;
          pbVar3 = pbVar3 + 1;
        } while (local_c40 != pbVar8 && bVar14);
      }
      else {
        bVar14 = false;
      }
      if (uVar9 < 0x100) {
        pbVar3 = &bStack_8e1;
        do {
          bVar2 = pbVar3[1];
          uVar6 = bVar2 & 0xf;
          uVar5 = (uint)(bVar2 >> 4);
          if (uVar6 < 9) {
            *(uint *)(param_4 + uVar9 * 4) = 4 - uVar6;
            bVar16 = uVar9 != 0xff;
            uVar9 = uVar9 + 1;
            bVar15 = false;
            if (bVar16) {
              bVar15 = true;
            }
          }
          else {
            bVar15 = true;
          }
          if (8 < uVar5) {
            bVar15 = false;
          }
          pbVar8 = pbVar3 + -0x3e6;
          if (bVar15) {
            *(uint *)(param_4 + uVar9 * 4) = 4 - uVar5;
            uVar9 = uVar9 + 1;
          }
          bVar15 = uVar9 != 0x100;
          pbVar3 = pbVar3 + 1;
        } while (local_c40 != pbVar8 && bVar15);
      }
      else {
        bVar15 = false;
      }
    } while (bVar15 || (bVar14 || (bVar13 || bVar12)));
  }
  FUN_0177aaa0(local_c40,0x480);
  FUN_0177aaa0(&local_7c0,0x180);
  if (local_2c != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78();
  }
  return 0;
}

