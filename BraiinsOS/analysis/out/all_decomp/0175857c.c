// FUN_0175857c @ 0175857c size=2600 calls_out=5 calls_in=2
// strings: 

undefined8
FUN_0175857c(int param_1,int param_2,int param_3,int param_4,undefined4 *param_5,undefined1 param_6,
            undefined1 param_7,undefined1 param_8,undefined1 param_9)

{
  code *pcVar1;
  byte bVar2;
  uint uVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  byte *pbVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  byte bStack_a41;
  byte local_a40 [159];
  byte bStack_9a1;
  byte local_9a0 [159];
  byte bStack_901;
  byte local_900 [159];
  byte bStack_861;
  byte local_860 [160];
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
          local_720 = param_7;
          local_6c0 = param_8;
          local_670 = param_5[0xc];
          uStack_66c = param_5[0xd];
          uStack_668 = param_5[0xe];
          uStack_664 = param_5[0xf];
          local_780 = param_6;
          local_660 = param_9;
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
          FUN_01757d10(local_a40,auStack_630,0x88);
          FUN_01757d10(local_9a0,auStack_4b0,0x88);
          FUN_01757d10(local_900,auStack_330,0x88);
          FUN_01757d10(local_860,auStack_1b0,0x88);
          uVar9 = 0;
          pbVar7 = &bStack_a41;
          do {
            uVar8 = pbVar7[1] & 0xf;
            uVar10 = (uint)(pbVar7[1] >> 4);
            if (uVar8 == 0xf) {
              bVar11 = true;
            }
            else {
              *(uint *)(param_1 + uVar9 * 4) = 2 - uVar8 % 5;
              bVar12 = uVar9 != 0xff;
              uVar9 = uVar9 + 1;
              bVar11 = false;
              if (bVar12) {
                bVar11 = true;
              }
            }
            bVar12 = bVar11;
            if (uVar10 == 0xf) {
              bVar12 = false;
            }
            if (bVar12) {
              bVar11 = uVar9 == 0xff;
              *(uint *)(param_1 + uVar9 * 4) = 2 - uVar10 % 5;
              uVar9 = uVar9 + 1;
              if (local_a40 == pbVar7 + -0x86 || bVar11) goto LAB_01758980;
            }
            else {
              if (local_a40 == pbVar7 + -0x86) {
                bVar11 = false;
              }
              if (!bVar11) goto LAB_01758980;
            }
            pbVar7 = pbVar7 + 1;
          } while( true );
        }
      }
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0,0x1758fa0);
  (*pcVar1)();
LAB_01758980:
  uVar10 = 0;
  pbVar7 = &bStack_9a1;
  do {
    uVar5 = pbVar7[1] & 0xf;
    uVar8 = (uint)(pbVar7[1] >> 4);
    if (uVar5 == 0xf) {
      bVar11 = true;
    }
    else {
      *(uint *)(param_2 + uVar10 * 4) = 2 - uVar5 % 5;
      bVar12 = uVar10 != 0xff;
      uVar10 = uVar10 + 1;
      bVar11 = false;
      if (bVar12) {
        bVar11 = true;
      }
    }
    bVar12 = bVar11;
    if (uVar8 == 0xf) {
      bVar12 = false;
    }
    if (bVar12) {
      bVar11 = uVar10 == 0xff;
      *(uint *)(param_2 + uVar10 * 4) = 2 - uVar8 % 5;
      uVar10 = uVar10 + 1;
      if (local_a40 == pbVar7 + -0x126 || bVar11) break;
    }
    else {
      if (local_a40 == pbVar7 + -0x126) {
        bVar11 = false;
      }
      if (!bVar11) break;
    }
    pbVar7 = pbVar7 + 1;
  } while( true );
  uVar8 = 0;
  pbVar7 = &bStack_901;
  do {
    uVar6 = pbVar7[1] & 0xf;
    uVar5 = (uint)(pbVar7[1] >> 4);
    if (uVar6 == 0xf) {
      bVar11 = true;
    }
    else {
      *(uint *)(param_3 + uVar8 * 4) = 2 - uVar6 % 5;
      bVar12 = uVar8 != 0xff;
      uVar8 = uVar8 + 1;
      bVar11 = false;
      if (bVar12) {
        bVar11 = true;
      }
    }
    bVar12 = bVar11;
    if (uVar5 == 0xf) {
      bVar12 = false;
    }
    if (bVar12) {
      bVar11 = uVar8 == 0xff;
      *(uint *)(param_3 + uVar8 * 4) = 2 - uVar5 % 5;
      uVar8 = uVar8 + 1;
      if (local_a40 == pbVar7 + -0x1c6 || bVar11) break;
    }
    else {
      if (local_a40 == pbVar7 + -0x1c6) {
        bVar11 = false;
      }
      if (!bVar11) break;
    }
    pbVar7 = pbVar7 + 1;
  } while( true );
  uVar5 = 0;
  pbVar7 = &bStack_861;
LAB_01758b38:
  uVar3 = pbVar7[1] & 0xf;
  uVar6 = (uint)(pbVar7[1] >> 4);
  if (uVar3 == 0xf) {
    bVar11 = true;
  }
  else {
    *(uint *)(param_4 + uVar5 * 4) = 2 - uVar3 % 5;
    bVar12 = uVar5 != 0xff;
    uVar5 = uVar5 + 1;
    bVar11 = false;
    if (bVar12) {
      bVar11 = true;
    }
  }
  bVar12 = bVar11;
  if (uVar6 == 0xf) {
    bVar12 = false;
  }
  if (bVar12) {
    *(uint *)(param_4 + uVar5 * 4) = 2 - uVar6 % 5;
    if (local_a40 == pbVar7 + -0x266 || uVar5 == 0xff) {
      uVar5 = uVar5 + 1;
LAB_01758bac:
      if (uVar5 != 0x100 || (uVar8 != 0x100 || (uVar10 != 0x100 || uVar9 != 0x100))) {
        do {
          FUN_01757d10(local_a40,auStack_630,0x88);
          FUN_01757d10(local_9a0,auStack_4b0,0x88);
          FUN_01757d10(local_900,auStack_330,0x88);
          FUN_01757d10(local_860,auStack_1b0,0x88);
          if (uVar9 < 0x100) {
            pbVar7 = &bStack_a41;
            do {
              bVar2 = pbVar7[1];
              uVar3 = bVar2 & 0xf;
              uVar6 = (uint)(bVar2 >> 4);
              if (uVar3 == 0xf) {
                bVar11 = true;
              }
              else {
                *(uint *)(param_1 + uVar9 * 4) = 2 - uVar3 % 5;
                bVar12 = uVar9 != 0xff;
                uVar9 = uVar9 + 1;
                bVar11 = false;
                if (bVar12) {
                  bVar11 = true;
                }
              }
              if (uVar6 == 0xf) {
                bVar11 = false;
              }
              if (bVar11) {
                *(uint *)(param_1 + uVar9 * 4) = 2 - uVar6 % 5;
                uVar9 = uVar9 + 1;
              }
              pbVar4 = pbVar7 + -0x86;
              pbVar7 = pbVar7 + 1;
            } while (local_a40 != pbVar4 && uVar9 != 0x100);
            bVar11 = false;
            if (uVar9 != 0x100) {
              bVar11 = true;
            }
          }
          else {
            bVar11 = false;
          }
          if (uVar10 < 0x100) {
            pbVar7 = &bStack_9a1;
            do {
              bVar2 = pbVar7[1];
              uVar3 = bVar2 & 0xf;
              uVar6 = (uint)(bVar2 >> 4);
              if (uVar3 == 0xf) {
                bVar12 = true;
              }
              else {
                *(uint *)(param_2 + uVar10 * 4) = 2 - uVar3 % 5;
                bVar13 = uVar10 != 0xff;
                uVar10 = uVar10 + 1;
                bVar12 = false;
                if (bVar13) {
                  bVar12 = true;
                }
              }
              if (uVar6 == 0xf) {
                bVar12 = false;
              }
              if (bVar12) {
                *(uint *)(param_2 + uVar10 * 4) = 2 - uVar6 % 5;
                uVar10 = uVar10 + 1;
              }
              pbVar4 = pbVar7 + -0x126;
              pbVar7 = pbVar7 + 1;
            } while (local_a40 != pbVar4 && uVar10 != 0x100);
            bVar12 = uVar10 != 0x100;
            if (0xff < uVar8) goto LAB_01758f74;
LAB_01758d90:
            pbVar7 = &bStack_901;
            do {
              bVar2 = pbVar7[1];
              uVar3 = bVar2 & 0xf;
              uVar6 = (uint)(bVar2 >> 4);
              if (uVar3 == 0xf) {
                bVar13 = true;
              }
              else {
                *(uint *)(param_3 + uVar8 * 4) = 2 - uVar3 % 5;
                bVar15 = uVar8 != 0xff;
                uVar8 = uVar8 + 1;
                bVar13 = false;
                if (bVar15) {
                  bVar13 = true;
                }
              }
              if (uVar6 == 0xf) {
                bVar13 = false;
              }
              if (bVar13) {
                *(uint *)(param_3 + uVar8 * 4) = 2 - uVar6 % 5;
                uVar8 = uVar8 + 1;
              }
              bVar13 = uVar8 != 0x100;
              pbVar4 = pbVar7 + -0x1c6;
              pbVar7 = pbVar7 + 1;
            } while (local_a40 != pbVar4 && bVar13);
            if (0xff < uVar5) goto LAB_01758f80;
LAB_01758e44:
            pbVar7 = &bStack_861;
            do {
              bVar2 = pbVar7[1];
              uVar3 = bVar2 & 0xf;
              uVar6 = (uint)(bVar2 >> 4);
              if (uVar3 == 0xf) {
                bVar15 = true;
              }
              else {
                *(uint *)(param_4 + uVar5 * 4) = 2 - uVar3 % 5;
                bVar14 = uVar5 != 0xff;
                uVar5 = uVar5 + 1;
                bVar15 = false;
                if (bVar14) {
                  bVar15 = true;
                }
              }
              if (uVar6 == 0xf) {
                bVar15 = false;
              }
              if (bVar15) {
                *(uint *)(param_4 + uVar5 * 4) = 2 - uVar6 % 5;
                uVar5 = uVar5 + 1;
              }
              bVar15 = uVar5 != 0x100;
              pbVar4 = pbVar7 + -0x266;
              pbVar7 = pbVar7 + 1;
            } while (local_a40 != pbVar4 && bVar15);
          }
          else {
            bVar12 = false;
            if (uVar8 < 0x100) goto LAB_01758d90;
LAB_01758f74:
            bVar13 = false;
            if (uVar5 < 0x100) goto LAB_01758e44;
LAB_01758f80:
            bVar15 = false;
          }
        } while (bVar15 || (bVar13 || (bVar11 || bVar12)));
      }
      FUN_0177aaa0(local_a40,0x280);
      FUN_0177aaa0(&local_7c0,0x180);
      if (local_2c != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
        FUN_016d2b78();
      }
      return 0;
    }
    uVar5 = uVar5 + 1;
  }
  else {
    if (local_a40 == pbVar7 + -0x266) {
      bVar11 = false;
    }
    if (!bVar11) goto LAB_01758bac;
  }
  pbVar7 = pbVar7 + 1;
  goto LAB_01758b38;
}

