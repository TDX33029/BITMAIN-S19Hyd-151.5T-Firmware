// FUN_010c6058 @ 010c6058 size=3700 calls_out=21 calls_in=1
// strings: socks4 | socks5 | socks4a | socks5h | base64 is always valid HeaderValue

void FUN_010c6058(undefined4 *param_1)

{
  byte bVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  undefined1 uVar4;
  undefined4 *puVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  char *pcVar11;
  code *pcVar12;
  bool bVar13;
  undefined4 uVar14;
  char cVar15;
  undefined4 *puVar16;
  undefined1 uVar17;
  undefined1 *puVar18;
  bool bVar19;
  undefined4 uVar20;
  undefined4 *puVar21;
  undefined4 *puVar22;
  bool bVar23;
  uint uVar24;
  uint uVar25;
  undefined4 *puVar26;
  undefined4 *puVar27;
  bool bVar28;
  undefined1 local_570;
  undefined1 local_56c;
  undefined1 local_568;
  undefined4 *local_55c;
  undefined4 *local_558;
  undefined4 *local_550;
  undefined1 local_544 [4];
  undefined4 *local_540;
  undefined4 *local_53c;
  undefined4 *local_538;
  undefined4 *local_534;
  undefined1 auStack_530 [24];
  undefined4 local_518;
  undefined4 *puStack_514;
  undefined4 *local_510;
  undefined4 uStack_50c;
  undefined4 uStack_508;
  undefined4 local_504;
  undefined4 local_500;
  undefined4 uStack_4fc;
  undefined4 uStack_4f8;
  undefined4 uStack_4f4;
  int iStack_4f0;
  undefined4 *local_4e8;
  undefined4 *local_4e4;
  undefined4 *local_4e0;
  undefined4 *local_4dc;
  undefined4 *local_4d8;
  undefined4 local_4d4;
  undefined4 local_4d0;
  undefined4 *local_4cc;
  undefined4 *local_4c8;
  undefined4 uStack_4c4;
  undefined4 *local_4c0;
  undefined4 *local_4bc;
  undefined4 local_4b8;
  undefined4 *local_4b4;
  undefined4 *local_4b0;
  undefined1 local_4ac;
  undefined1 uStack_4ab;
  undefined2 uStack_4aa;
  undefined1 local_4a8;
  undefined1 uStack_4a7;
  undefined1 uStack_4a6;
  undefined1 uStack_4a5;
  undefined2 local_4a4;
  undefined2 uStack_4a2;
  undefined4 local_4a0;
  undefined4 uStack_49c;
  undefined4 uStack_498;
  undefined4 uStack_494;
  int iStack_490;
  undefined4 **local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined *local_ac;
  undefined2 uStack_a8;
  undefined1 local_a6;
  undefined1 local_a5;
  undefined4 local_a0;
  undefined4 *local_9c;
  undefined4 *local_98;
  undefined1 local_94;
  undefined1 uStack_93;
  undefined2 uStack_92;
  undefined2 local_90;
  undefined2 uStack_8e;
  undefined2 local_8c;
  undefined2 uStack_8a;
  undefined4 *local_68;
  undefined4 *local_64;
  undefined4 *local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 *local_54;
  undefined4 *local_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int iStack_30;
  
  FUN_00f5eea8(&local_58);
  FUN_010a3200(&local_4b8,&local_58);
  uVar24 = (uint)local_4b8 & 0xff;
  if (uVar24 == 3) {
    *param_1 = 0x80000002;
    return;
  }
  FUN_016dd1aa((uint3 *)((uint)local_544 | 1),(uint)&local_4b8 | 1,0x2b);
  local_518 = (undefined4 *)CONCAT31(local_518._1_3_,3);
  local_4e8 = (undefined4 *)&DAT_80000000;
  local_544[0] = (char)local_4b8;
  local_500 = 0;
  local_510 = (undefined4 *)0x0;
  local_4b8 = local_518;
  local_4b4 = puStack_514;
  local_4b0 = (undefined4 *)0x0;
  local_4ac = (undefined1)uStack_50c;
  uStack_4ab = (undefined1)((uint)uStack_50c >> 8);
  uStack_4aa = (undefined2)((uint)uStack_50c >> 0x10);
  local_4a8 = (undefined1)uStack_508;
  uStack_4a7 = (undefined1)((uint)uStack_508 >> 8);
  uStack_4a6 = (undefined1)((uint)uStack_508 >> 0x10);
  uStack_4a5 = (undefined1)((uint)uStack_508 >> 0x18);
  uVar6 = 1;
  local_4a4 = (undefined2)local_504;
  uStack_4a2 = (undefined2)((uint)local_504 >> 0x10);
  local_4a0 = 0;
  uStack_49c = uStack_4fc;
  uStack_498 = uStack_4f8;
  uStack_494 = uStack_4f4;
  iStack_490 = iStack_4f0;
  bVar28 = true;
  uVar25 = 0;
  puVar8 = (undefined4 *)0x0;
  if (uVar24 == 0) {
LAB_010c620c:
    FUN_010ca804(&local_58,&local_4b8,uVar6 | uVar25,puVar8);
    iVar7 = iStack_30;
    puVar22 = local_534;
    puVar8 = local_538;
    local_518 = local_58;
    puStack_514 = local_54;
    local_510 = local_50;
    uStack_50c = local_4c;
    uStack_508 = uStack_48;
    local_504 = local_44;
    local_500 = uStack_40;
    uStack_4fc = uStack_3c;
    uStack_4f8 = uStack_38;
    uStack_4f4 = uStack_34;
    iStack_4f0 = iStack_30;
    if (local_534 == (undefined4 *)0x0) {
      *param_1 = 0x80000002;
      uVar24 = 2;
      if ((int)local_4e8 < 0) {
        uVar24 = (uint)local_4e8 ^ 0x80000000;
      }
      if (uVar24 != 0) {
        if (uVar24 == 1) {
          (*(code *)local_4e4[4])(&local_4d8,local_4e0,local_4dc);
        }
        else {
          if (local_4e8 != (undefined4 *)0x0) {
            thunk_FUN_016d3fb4(local_4e4);
          }
          if (local_4dc != (undefined4 *)0x0) {
            thunk_FUN_016d3fb4(local_4d8);
          }
        }
      }
      FUN_010c7664(&local_518);
      goto LAB_010c6600;
    }
    local_4ac = 0;
    uStack_4ab = 0;
    uStack_4aa = 0;
    local_4a8 = SUB41(local_534,0);
    uStack_4a7 = (undefined1)((uint)local_534 >> 8);
    uStack_4a6 = (undefined1)((uint)local_534 >> 0x10);
    uStack_4a5 = (undefined1)((uint)local_534 >> 0x18);
    local_4b0 = local_534;
    local_4b4 = local_538;
    local_4a0._0_1_ = 1;
    local_4b8 = (undefined4 *)&DAT_00000040;
    local_4a4 = 0x40;
    uStack_4a2 = 0;
    FUN_0062a644(&local_58,&local_4b8);
    puVar5 = local_50;
    puVar16 = local_54;
    if (local_58 == (undefined4 **)0x0 || puVar8 == (undefined4 *)0x0) {
      local_58 = (undefined4 **)local_518;
      local_54 = puStack_514;
      local_50 = local_510;
      local_4c = uStack_50c;
      uStack_48 = uStack_508;
      local_44 = local_504;
      uStack_40 = local_500;
      uStack_3c = uStack_4fc;
      uStack_38 = uStack_4f8;
      uStack_34 = uStack_4f4;
      iStack_30 = iStack_4f0;
      (*(code *)*local_53c)(&local_4b8,auStack_530,local_538,local_534);
      uVar24 = (uint)&local_58 | 1;
      uStack_4c4 = CONCAT22(uStack_4aa,CONCAT11(uStack_4ab,local_4ac));
      cVar15 = (char)local_58;
      local_4d0 = local_4b8;
      local_4cc = local_4b4;
      local_4c8 = local_4b0;
      FUN_016dd1aa(&local_98,uVar24,0x2b);
      local_5c = uStack_4c4;
      local_60 = local_4c8;
      local_64 = local_4cc;
      local_68 = local_4d0;
      if (cVar15 == '\x04') {
        cVar15 = '\x04';
        (*(code *)local_4d0[4])(&local_5c,local_4cc,local_4c8);
      }
      else {
        uVar25 = (uint)&local_4b8 | 1;
        FUN_016dd1aa(uVar25,uVar24,0x2b);
        local_4b8 = (undefined4 *)CONCAT31(local_4b8._1_3_,cVar15);
        if (local_4b0 != (undefined4 *)0x0) {
          (*(code *)local_4b0[4])
                    (&local_4a4,CONCAT22(uStack_4aa,CONCAT11(uStack_4ab,local_4ac)),
                     CONCAT13(uStack_4a5,CONCAT12(uStack_4a6,CONCAT11(uStack_4a7,local_4a8))));
          cVar15 = (char)local_4b8;
        }
        local_4b0 = local_4d0;
        local_4ac = SUB41(local_4cc,0);
        uStack_4ab = (undefined1)((uint)local_4cc >> 8);
        uStack_4aa = (undefined2)((uint)local_4cc >> 0x10);
        local_4a8 = SUB41(local_4c8,0);
        uStack_4a7 = (undefined1)((uint)local_4c8 >> 8);
        uStack_4a6 = (undefined1)((uint)local_4c8 >> 0x10);
        uStack_4a5 = (undefined1)((uint)local_4c8 >> 0x18);
        local_4a4 = (undefined2)uStack_4c4;
        uStack_4a2 = (undefined2)((uint)uStack_4c4 >> 0x10);
        FUN_016dd1aa(&local_98,uVar25,0x2b);
      }
      FUN_016dd1aa((uint)&local_518 | 1,&local_98,0x2b);
      local_518 = (undefined4 *)CONCAT31(local_518._1_3_,cVar15);
    }
    else {
      puVar26 = (undefined4 *)&DAT_00000001;
      local_4ac = 0;
      uStack_4ab = 0;
      uStack_4aa = 0;
      local_4a8 = SUB41(local_54,0);
      uStack_4a7 = (undefined1)((uint)local_54 >> 8);
      uStack_4a6 = (undefined1)((uint)local_54 >> 0x10);
      uStack_4a5 = (undefined1)((uint)local_54 >> 0x18);
      local_4b0 = local_54;
      local_4b4 = puVar8;
      local_4a0 = CONCAT31(local_4a0._1_3_,1);
      local_4b8 = (undefined4 *)&DAT_0000003a;
      local_4a4 = 0x3a;
      uStack_4a2 = 0;
      FUN_0062a644(&local_58,&local_4b8);
      if (local_58 == (undefined4 **)0x0) {
        puVar18 = (undefined1 *)0x0;
      }
      else {
        iVar7 = (int)puVar16 - (int)local_50;
        puVar18 = (undefined1 *)((int)puVar8 + (int)local_50);
        puVar16 = local_54;
      }
      FUN_012873cc(&local_68,puVar8,(undefined1 *)((int)puVar8 + (int)puVar16));
      if (puVar18 == (undefined1 *)0x0) {
        local_550 = (undefined4 *)0x80000001;
        if (!bVar28) goto LAB_010c683c;
LAB_010c6668:
        local_4bc = local_60;
        local_55c = local_64;
        local_4c0 = local_64;
        puVar16 = (undefined4 *)0x0;
        if (local_550 != (undefined4 *)0x80000001) {
          puVar16 = local_558;
        }
        puVar9 = (undefined4 *)thunk_FUN_016d4a50(6);
        if (puVar9 == (undefined4 *)0x0) {
          puVar9 = (undefined4 *)&DAT_00000006;
          uVar20 = 1;
LAB_010c6860:
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(uVar20,puVar9);
        }
        local_98 = (undefined4 *)&DAT_00000006;
        local_94 = SUB41(puVar9,0);
        uStack_93 = (undefined1)((uint)puVar9 >> 8);
        uStack_92 = (undefined2)((uint)puVar9 >> 0x10);
        *(undefined2 *)(puVar9 + 1) = 0x2063;
        *puVar9 = 0x69736142;
        local_90 = 6;
        uStack_8e = 0;
        uStack_a8 = 0;
        local_a6 = 0;
        FUN_016dd606(&local_4b8,0,0x400);
        local_ac = &DAT_00408a19;
        local_b8 = &local_98;
        local_58 = &local_4c0;
        local_a5 = 0;
        local_b0 = 0;
        local_b4 = 0;
        local_54 = &DAT_0157d360;
        FUN_010cc36c(&local_4d0,&local_4b8,&DAT_005873a4,&local_58);
        puVar9 = local_4cc;
        if ((4 < ((uint)local_4d0 & 0xff)) || (((uint)local_4d0 & 0xff) == 3)) {
          uVar20 = *local_4cc;
          puVar27 = (undefined4 *)local_4cc[1];
          pcVar12 = (code *)*puVar27;
          if (pcVar12 != (code *)0x0) {
            (*pcVar12)(uVar20);
          }
          if (puVar27[1] != 0) {
            thunk_FUN_016d3fb4(uVar20);
          }
          thunk_FUN_016d3fb4(puVar9);
        }
        if (puVar16 != (undefined4 *)0x0) {
          local_58 = (undefined4 **)&local_a0;
          local_54 = &DAT_0157d360;
          local_a0 = puVar16;
          local_9c = puVar26;
          FUN_010cc36c(&local_4d0,&local_4b8,&DAT_00590e71,&local_58);
          puVar16 = local_4cc;
          if ((4 < ((uint)local_4d0 & 0xff)) || (((uint)local_4d0 & 0xff) == 3)) {
            uVar20 = *local_4cc;
            puVar26 = (undefined4 *)local_4cc[1];
            pcVar12 = (code *)*puVar26;
            if (pcVar12 != (code *)0x0) {
              (*pcVar12)(uVar20);
            }
            if (puVar26[1] != 0) {
              thunk_FUN_016d3fb4(uVar20);
            }
            thunk_FUN_016d3fb4(puVar16);
          }
        }
        FUN_010ccef8(&local_4b8);
        if (CONCAT22(uStack_8e,local_90) == 0) {
          local_50 = (undefined4 *)0x0;
          local_54 = (undefined4 *)0x1;
          local_58 = (undefined4 **)0x0;
          FUN_00f5ef18(&local_4b8,&local_58);
        }
        else {
          iVar7 = 0;
          do {
            bVar1 = *(byte *)(CONCAT22(uStack_92,CONCAT11(uStack_93,local_94)) + iVar7);
            if (bVar1 < 0x20) {
              if (bVar1 != 9) {
LAB_010c67f0:
                local_4a8 = 2;
                    /* WARNING: Subroutine does not return */
                FUN_00fb74f8("base64 is always valid HeaderValue",0x22,&local_a0,&DAT_018a62f4,
                             &DAT_0188507c);
              }
            }
            else if (bVar1 == 0x7f) goto LAB_010c67f0;
            iVar7 = iVar7 + 1;
          } while (CONCAT22(uStack_8e,local_90) != iVar7);
          FUN_00f5eea8(&local_4b8);
        }
        local_4c = CONCAT22(uStack_4aa,CONCAT11(uStack_4ab,local_4ac));
        local_58 = (undefined4 **)local_4b8;
        local_54 = local_4b4;
        local_50 = local_4b0;
        local_4d0._0_3_ = CONCAT12(uStack_4a5,CONCAT11(uStack_4a6,uStack_4a7));
        if (local_98 != (undefined4 *)0x0) {
          thunk_FUN_016d3fb4(CONCAT22(uStack_92,CONCAT11(uStack_93,local_94)));
        }
        local_4b8 = local_58;
        local_4b4 = local_54;
        local_4b0 = local_50;
        local_4ac = (undefined1)local_4c;
        uStack_4ab = (undefined1)((uint)local_4c >> 8);
        uStack_4aa = (undefined2)((uint)local_4c >> 0x10);
        uVar24 = 2;
        if ((int)local_4e8 < 0) {
          uVar24 = (uint)local_4e8 ^ 0x80000000;
        }
        local_a0._0_3_ = SUB43(local_4d0,0);
        if (uVar24 != 0) {
          if (uVar24 == 1) {
            (*(code *)local_4e4[4])(&local_4d8,local_4e0,local_4dc);
          }
          else {
            if (local_4e8 != (undefined4 *)0x0) {
              thunk_FUN_016d3fb4(local_4e4);
            }
            if (local_4dc != (undefined4 *)0x0) {
              thunk_FUN_016d3fb4(local_4d8);
            }
          }
        }
        local_4e4 = local_4b8;
        local_4e0 = local_4b4;
        local_4dc = local_4b0;
        local_4e8 = (undefined4 *)0x80000001;
        local_4d4 = (undefined4 *)CONCAT13(local_a0._2_1_,CONCAT21((undefined2)local_a0,1));
        local_4d8 = (undefined4 *)CONCAT22(uStack_4aa,CONCAT11(uStack_4ab,local_4ac));
      }
      else {
        FUN_012873cc(&local_4b8,puVar18,puVar18 + iVar7);
        local_550 = local_4b8;
        local_558 = local_4b4;
        puVar26 = local_4b0;
        if (bVar28) goto LAB_010c6668;
LAB_010c683c:
        puVar9 = local_60;
        puVar16 = local_64;
        local_55c = local_64;
        puVar27 = local_64;
        puVar21 = local_68;
        if (local_68 == (undefined4 *)&DAT_80000000) {
          if ((int)local_60 < 0) {
            uVar20 = 0;
            goto LAB_010c6860;
          }
          if (local_60 == (undefined4 *)0x0) {
            puVar27 = (undefined4 *)&DAT_00000001;
            puVar21 = (undefined4 *)0x0;
          }
          else {
            puVar27 = (undefined4 *)thunk_FUN_016d4a50(local_60);
            if (puVar27 == (undefined4 *)0x0) {
              uVar20 = 1;
              goto LAB_010c6860;
            }
            puVar21 = puVar9;
          }
          FUN_016dd1aa(puVar27,puVar16,puVar9);
        }
        if (local_550 == (undefined4 *)0x80000001) {
          puVar10 = (undefined4 *)&DAT_00000001;
          puVar26 = (undefined4 *)0x0;
          puVar16 = (undefined4 *)0x0;
        }
        else if (local_550 == (undefined4 *)&DAT_80000000) {
          uVar20 = 0;
          if ((int)puVar26 < 0) {
LAB_010c6a98:
                    /* WARNING: Subroutine does not return */
            FUN_00600af4(uVar20,puVar26);
          }
          if (puVar26 == (undefined4 *)0x0) {
            puVar10 = (undefined4 *)&DAT_00000001;
            puVar16 = (undefined4 *)0x0;
          }
          else {
            puVar10 = (undefined4 *)thunk_FUN_016d4a50(puVar26,puVar26);
            puVar16 = puVar26;
            if (puVar10 == (undefined4 *)0x0) {
              uVar20 = 1;
              goto LAB_010c6a98;
            }
          }
          FUN_016dd1aa(puVar10,local_558,puVar26);
        }
        else {
          puVar16 = local_550;
          puVar10 = local_558;
        }
        uVar24 = 2;
        if ((int)local_4e8 < 0) {
          uVar24 = (uint)local_4e8 ^ 0x80000000;
        }
        if (uVar24 != 0) {
          if (uVar24 == 1) {
            (*(code *)local_4e4[4])(&local_4d8,local_4e0,local_4dc);
          }
          else {
            if (local_4e8 != (undefined4 *)0x0) {
              thunk_FUN_016d3fb4(local_4e4);
            }
            if (local_4dc != (undefined4 *)0x0) {
              thunk_FUN_016d3fb4(local_4d8);
            }
          }
        }
        local_4e0 = puVar9;
        local_4e8 = puVar21;
        local_4e4 = puVar27;
        local_4dc = puVar16;
        local_4d8 = puVar10;
        local_4d4 = puVar26;
      }
      uVar24 = (uint)&local_518 | 3;
      local_570 = (char)local_518;
      uVar25 = (uint)local_518 & 0xff;
      local_568 = local_518._1_1_;
      local_56c = local_518._2_1_;
      uVar17 = local_518._2_1_;
      FUN_016dd1aa(&local_58,uVar24,0x29);
      if (uVar25 == 4) {
        local_570 = 4;
      }
      else {
        puVar22 = (undefined4 *)((int)puVar22 - (int)puVar5);
        FUN_016dd1aa((uint)&local_4b8 | 3,uVar24,0x29);
        local_4b8 = (undefined4 *)
                    CONCAT31(CONCAT21(CONCAT11(local_4b8._3_1_,local_56c),local_568),local_570);
        if (puVar22 == (undefined4 *)0x0) {
          local_56c = 9;
        }
        else {
          uVar25 = 0;
          bVar19 = false;
          bVar23 = false;
          bVar13 = false;
          puVar18 = (undefined1 *)((int)puVar8 + (int)puVar5);
          bVar1 = 0;
          puVar8 = (undefined4 *)0x0;
          puVar16 = local_550;
          do {
            uVar6 = (uint)(byte)puVar18[(int)puVar8];
            switch(""[uVar6]) {
            case '#':
            case '/':
            case '?':
              goto LAB_010c6de8;
            case '$':
            case '%':
            case '&':
            case '\'':
            case '(':
            case ')':
            case '*':
            case '+':
            case ',':
            case '-':
            case '.':
            case '0':
            case '1':
            case '2':
            case '3':
            case '4':
            case '5':
            case '6':
            case '7':
            case '8':
            case '9':
            case ';':
            case '<':
            case '=':
            case '>':
            case 'A':
            case 'B':
            case 'C':
            case 'D':
            case 'E':
            case 'F':
            case 'G':
            case 'H':
            case 'I':
            case 'J':
            case 'K':
            case 'L':
            case 'M':
            case 'N':
            case 'O':
            case 'P':
            case 'Q':
            case 'R':
            case 'S':
            case 'T':
            case 'U':
            case 'V':
            case 'W':
            case 'X':
            case 'Y':
            case 'Z':
            case '\\':
              break;
            case ':':
              if (7 < uVar25) {
LAB_010c6e30:
                local_56c = 2;
                goto LAB_010c6e60;
              }
              uVar25 = uVar25 + 1;
              break;
            case '@':
              bVar1 = 1;
              puVar16 = puVar8;
              goto LAB_010c6c4c;
            case '[':
              if (bVar13 || bVar19) goto LAB_010c6e30;
              bVar19 = true;
              bVar13 = false;
              break;
            case ']':
              if ((bool)(~bVar19 & 1) || bVar23) goto LAB_010c6e30;
              bVar23 = true;
LAB_010c6c4c:
              bVar13 = false;
              uVar25 = 0;
              break;
            default:
              if ((""[uVar6] == '\0') && (bVar13 = true, uVar6 != 0x25)) {
                local_56c = 0;
                goto LAB_010c6e60;
              }
            }
            puVar8 = (undefined4 *)((int)puVar8 + 1);
          } while (puVar22 != puVar8);
          puVar8 = puVar22;
LAB_010c6de8:
          local_56c = 2;
          if ((!(bool)(bVar23 ^ bVar19)) && (uVar25 < 2)) {
            if (puVar8 == (undefined4 *)0x0) {
              puVar8 = (undefined4 *)0x0;
            }
            else if ((bool)(bVar1 & (int)puVar16 - (int)puVar8 == -1)) goto LAB_010c6e60;
            if (!bVar13) {
              local_56c = 0;
            }
            if (!bVar13 && puVar8 == puVar22) {
              FUN_00f5eea8(&local_98,puVar18,puVar22);
              uVar4 = uStack_93;
              uVar2 = local_94;
              puVar8 = local_98;
              local_4d0 = (undefined4 *)CONCAT22(local_90,uStack_92);
              local_4cc = (undefined4 *)CONCAT22(local_8c,uStack_8e);
              local_4c8 = (undefined4 *)CONCAT22(local_4c8._2_2_,uStack_8a);
              local_56c = local_94;
              if (local_98 != (undefined4 *)0x0) {
                local_90 = uStack_8a;
                local_94 = (undefined1)uStack_8e;
                uStack_93 = (undefined1)((ushort)uStack_8e >> 8);
                uStack_92 = local_8c;
                local_98 = local_4d0;
                local_56c = uVar17;
                if (local_4b0 != (undefined4 *)0x0) {
                  (*(code *)local_4b0[4])
                            (&local_4a4,CONCAT22(uStack_4aa,CONCAT11(uStack_4ab,local_4ac)),
                             CONCAT13(uStack_4a5,CONCAT12(uStack_4a6,CONCAT11(uStack_4a7,local_4a8))
                                     ));
                  local_570 = SUB41(local_4b8,0);
                  local_568 = (undefined1)((uint)local_4b8 >> 8);
                  local_56c = (undefined1)((uint)local_4b8 >> 0x10);
                }
                uStack_4aa = SUB42(local_98,0);
                local_4a8 = (undefined1)((uint)local_98 >> 0x10);
                uStack_4a7 = (undefined1)((uint)local_98 >> 0x18);
                uStack_4a6 = local_94;
                uStack_4a5 = uStack_93;
                local_4a4 = uStack_92;
                uStack_4a2 = local_90;
                uStack_4ab = uVar4;
                local_4ac = uVar2;
                local_4b0 = puVar8;
                FUN_016dd1aa(&local_58,(uint)&local_4b8 | 3,0x29);
                goto LAB_010c6e70;
              }
            }
          }
        }
LAB_010c6e60:
        FUN_010ca53c(&local_4b8);
        local_570 = 4;
        local_568 = 2;
      }
LAB_010c6e70:
      FUN_016dd1aa(uVar24,&local_58,0x29);
      local_518 = (undefined4 *)
                  CONCAT31(CONCAT21(CONCAT11(local_518._3_1_,local_56c),local_568),local_570);
      if (bVar28) {
        if ((-0x7fffffff < (int)local_550) && (local_550 != (undefined4 *)0x0)) {
          thunk_FUN_016d3fb4(local_558);
        }
        if (((uint)local_68 & 0x7fffffff) != 0) {
          thunk_FUN_016d3fb4(local_55c);
        }
      }
    }
    local_4b8 = local_518;
    local_4b4 = puStack_514;
    local_4b0 = local_510;
    local_4ac = (undefined1)uStack_50c;
    uStack_4ab = (undefined1)((uint)uStack_50c >> 8);
    uStack_4aa = (undefined2)((uint)uStack_50c >> 0x10);
    local_4a8 = (undefined1)uStack_508;
    uStack_4a7 = (undefined1)((uint)uStack_508 >> 8);
    uStack_4a6 = (undefined1)((uint)uStack_508 >> 0x10);
    uStack_4a5 = (undefined1)((uint)uStack_508 >> 0x18);
    local_4a4 = (undefined2)local_504;
    uStack_4a2 = (undefined2)((uint)local_504 >> 0x10);
    local_4a0 = local_500;
    uStack_49c = uStack_4fc;
    uStack_498 = uStack_4f8;
    uStack_494 = uStack_4f4;
    iStack_490 = iStack_4f0;
    FUN_010ca624(&local_58,&local_4b8,&DAT_00418645);
    local_518 = local_58;
    puVar8 = local_518;
    puStack_514 = local_54;
    local_510 = local_50;
    uStack_50c = local_4c;
    uStack_508 = uStack_48;
    local_504 = local_44;
    local_500 = uStack_40;
    uStack_4fc = uStack_3c;
    uStack_4f8 = uStack_38;
    uStack_4f4 = uStack_34;
    iStack_4f0 = iStack_30;
    local_518._0_1_ = (char)local_58;
    cVar15 = (char)local_518;
    bVar28 = (char)local_518 != '\x04';
    local_518 = puVar8;
    if (bVar28) {
      local_518._1_1_ = (undefined1)((uint)local_58 >> 8);
      uVar17 = local_518._1_1_;
      local_518._2_1_ = (undefined1)((uint)local_58 >> 0x10);
      uVar2 = local_518._2_1_;
      FUN_016dd1aa((uint)&local_58 | 3,(uint)&local_518 | 3,0x29);
      local_58 = (undefined4 **)CONCAT31(CONCAT21(CONCAT11(local_58._3_1_,uVar2),uVar17),cVar15);
      FUN_010a2fe8(&local_4b8,&local_58);
      cVar15 = (char)local_4b8;
      if ((char)local_4b8 != '\x03') {
        uVar3 = local_4b8._1_2_;
        FUN_016dd1aa(&local_98,(uint)&local_4b8 | 3,0x29);
        *(undefined2 *)((int)param_1 + 0x19) = uVar3;
        FUN_016dd1aa((int)param_1 + 0x1b,&local_98,0x29);
        *param_1 = local_4e8;
        param_1[1] = local_4e4;
        param_1[2] = local_4e0;
        param_1[3] = local_4dc;
        param_1[4] = local_4d8;
        param_1[5] = local_4d4;
        *(char *)(param_1 + 6) = cVar15;
        goto LAB_010c6600;
      }
    }
    *param_1 = 0x80000002;
  }
  else {
    if (uVar24 == 1) {
      uVar25 = (uint)*(uint3 *)((uint)local_544 | 1) << 8;
      uVar6 = 1;
      puVar8 = local_540;
      goto LAB_010c620c;
    }
    uVar20 = local_540[1];
    if (local_540[2] == 7) {
      iVar7 = thunk_FUN_016dd50a(uVar20,"socks4a",7);
      if (iVar7 != 0) {
        uVar14 = 7;
        pcVar11 = "socks5h";
LAB_010c61a0:
        iVar7 = thunk_FUN_016dd50a(uVar20,pcVar11,uVar14);
        if (iVar7 != 0) goto LAB_010c61ac;
      }
LAB_010c61c8:
      puVar8 = (undefined4 *)FUN_01495428();
      (**(code **)*local_540)(&local_98,local_540 + 3,local_540[1],local_540[2]);
      uVar25 = 0;
      bVar28 = false;
      *puVar8 = local_98;
      puVar8[1] = CONCAT22(uStack_92,CONCAT11(uStack_93,local_94));
      puVar8[2] = CONCAT22(uStack_8e,local_90);
      puVar8[3] = CONCAT22(uStack_8a,local_8c);
      uVar6 = 2;
      goto LAB_010c620c;
    }
    if (local_540[2] == 6) {
      iVar7 = thunk_FUN_016dd50a(uVar20,"socks4",6);
      if (iVar7 != 0) {
        uVar14 = 6;
        pcVar11 = "socks5";
        goto LAB_010c61a0;
      }
      goto LAB_010c61c8;
    }
LAB_010c61ac:
    *param_1 = 0x80000002;
    FUN_010c7664(&local_4b8);
  }
  uVar24 = 2;
  if ((int)local_4e8 < 0) {
    uVar24 = (uint)local_4e8 ^ 0x80000000;
  }
  if (uVar24 != 0) {
    if (uVar24 == 1) {
      (*(code *)local_4e4[4])(&local_4d8,local_4e0,local_4dc);
    }
    else {
      if (local_4e8 != (undefined4 *)0x0) {
        thunk_FUN_016d3fb4(local_4e4);
      }
      if (local_4dc != (undefined4 *)0x0) {
        thunk_FUN_016d3fb4(local_4d8);
      }
    }
  }
LAB_010c6600:
  FUN_0145d5e0(local_544);
  return;
}

