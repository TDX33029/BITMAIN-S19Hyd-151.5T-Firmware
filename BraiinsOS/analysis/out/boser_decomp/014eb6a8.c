// FUN_014eb6a8 @ 014eb6a8 size=10060 calls_out=37 calls_in=1
// strings: bos_version | bos_version | is_silentfield index 0 <= i < 1field index 0 <= i < 19field index 0 <= i < 5field index 0 <= i < 7field index 0 <= i < 2a sequence | description | assets | description

/* WARNING (jumptable): Heritage AFTER dead removal. Revisit: 0xffffcca8 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_014eb6a8(undefined4 *param_1,int param_2,uint *param_3)

{
  undefined4 *puVar1;
  uint *******pppppppuVar2;
  uint *******pppppppuVar3;
  uint *******pppppppuVar4;
  undefined1 uVar5;
  uint *******pppppppuVar6;
  uint *******pppppppuVar7;
  uint uVar8;
  uint *******pppppppuVar9;
  undefined4 uVar10;
  uint *******pppppppuVar11;
  uint *******extraout_r1;
  uint *******extraout_r1_00;
  undefined4 *puVar12;
  undefined4 *puVar13;
  uint *puVar14;
  uint ******ppppppuVar15;
  undefined2 uVar16;
  uint *******pppppppuVar17;
  uint uVar18;
  uint ******ppppppuVar19;
  byte bVar20;
  uint *******pppppppuVar21;
  undefined4 uVar22;
  uint uVar23;
  byte bVar24;
  char cVar25;
  uint *******pppppppuVar26;
  undefined1 *puVar27;
  uint *******pppppppuVar28;
  bool bVar29;
  ulonglong uVar30;
  uint *******local_563c;
  uint *******local_5638;
  uint local_562c;
  uint *******local_5628;
  uint *******local_5624;
  uint *******local_5620;
  uint *******local_561c;
  uint *******local_5618;
  uint *******local_5614;
  uint *******local_5610;
  uint *******local_560c;
  uint *******local_5608;
  uint local_5604;
  uint *******local_5600;
  uint local_55fc;
  uint *******local_55f4;
  uint *******local_55f0;
  uint *******local_55ec;
  uint *******local_55e4;
  uint *******local_55dc;
  uint *******local_55d4;
  uint *******local_55d0;
  uint *******pppppppuStack_55cc;
  undefined1 local_55c8;
  uint *******local_55c0;
  uint *******local_55bc;
  uint *******local_55b8;
  uint *******local_55b4;
  undefined1 auStack_4650 [376];
  uint *******local_44d8;
  uint *******pppppppuStack_44d4;
  uint local_44cc;
  uint local_44c8;
  uint local_44c4;
  int iStack_44c0;
  undefined4 uStack_44bc;
  uint *******local_44b8;
  uint *******pppppppuStack_44b4;
  uint *******pppppppuStack_44b0;
  uint *******pppppppuStack_44ac;
  undefined4 *local_44a8;
  undefined4 *local_44a4;
  uint local_44a0;
  undefined4 *local_449c;
  undefined4 local_4498;
  uint *******local_4490;
  uint *******local_448c;
  uint *******local_4488;
  uint *******pppppppuStack_4484;
  uint *******local_4480;
  uint *******local_447c;
  undefined1 auStack_4478 [3624];
  undefined1 auStack_3650 [16];
  uint *******local_3640;
  uint *******local_363c;
  uint *******local_3638;
  uint *******local_3634;
  uint *******local_3630;
  uint *******pppppppuStack_362c;
  undefined1 local_3628;
  char local_3627;
  undefined2 uStack_3626;
  uint *******local_3624;
  byte local_3620;
  uint *******local_3394;
  uint *******local_3390;
  uint *******local_338c;
  uint *******local_3388;
  uint *******local_3384;
  uint *******pppppppuStack_3380;
  undefined1 local_337c;
  char local_337b;
  undefined2 local_337a;
  uint *******local_3378;
  byte local_3374;
  byte local_3373;
  uint *******local_3370;
  uint *******local_336c;
  undefined1 local_3368;
  uint *******local_3360;
  uint *******local_335c;
  uint *******local_3358;
  uint *******local_3354;
  uint *******local_3350;
  uint *******local_334c;
  undefined1 auStack_3348 [4328];
  uint *******local_2260;
  uint *******local_225c;
  uint *******local_2258;
  uint *******local_2254;
  undefined1 auStack_1250 [216];
  undefined4 local_1178;
  uint *******local_1174;
  uint *******local_1170;
  undefined1 local_116c [2];
  undefined2 uStack_116a;
  undefined1 auStack_250 [456];
  uint *******local_88;
  uint *******pppppppuStack_84;
  undefined1 local_80;
  uint *local_7c;
  uint *local_78;
  uint local_74;
  uint *local_70;
  int local_6c;
  uint *******local_68;
  uint *******local_64;
  uint *******local_60;
  uint *******local_5c;
  uint *******local_58;
  uint *******pppppppuStack_54;
  uint *******pppppppuStack_50;
  uint *******pppppppuStack_4c;
  undefined4 *local_48;
  undefined4 *local_44;
  uint *******local_40;
  undefined4 *local_3c;
  undefined4 local_38;
  undefined1 auStack_29 [5];
  
  pppppppuVar21 = (uint *******)(local_116c + 1);
  if (param_2 != 0) {
    uVar18 = *param_3;
    uVar8 = 0x15;
    if ((int)uVar18 < 0) {
      uVar8 = uVar18 ^ 0x80000000;
    }
    if (uVar8 == 0x14) {
      local_44c4 = param_3[1];
      local_44cc = param_3[2];
      iStack_44c0 = local_44cc + param_3[3] * 0x10;
      uStack_44bc = 0;
      local_44c8 = local_44cc;
      FUN_014cad74(&local_1178,&local_44cc);
      pppppppuVar21 = local_1178;
      cVar25 = local_116c[1];
      if (local_116c[1] == '\x03') goto LAB_014ec2f8;
      local_68 = local_1174;
      local_64 = local_1170;
      uVar16 = uStack_116a;
      local_60 = (uint *******)CONCAT31(local_60._1_3_,local_116c[0]);
      if (local_116c[1] == '\x02') {
        uVar10 = 0;
LAB_014ede68:
        pppppppuVar21 = (uint *******)FUN_014dee0c(uVar10,&DAT_01cf9fe4,&DAT_01d064b8);
      }
      else {
        FUN_014cae14(&local_1178,&local_44cc);
        if ((char)local_1178 == '\0') {
          bVar20 = local_1178._1_1_;
          if (local_1178._1_1_ == 2) {
            uVar10 = 1;
            goto LAB_014ede68;
          }
          FUN_014cae14(&local_1178,&local_44cc);
          if ((char)local_1178 == '\x01') goto LAB_014ec2f4;
          bVar24 = local_1178._1_1_;
          if (local_1178._1_1_ == 2) {
            uVar10 = 2;
            goto LAB_014ede68;
          }
          uVar30 = FUN_014caeb4(&local_44cc);
          pppppppuVar26 = (uint *******)(uVar30 >> 0x20);
          if ((uVar30 & 1) == 0) {
            if (pppppppuVar26 == (uint *******)0x0) {
              uVar10 = 3;
              goto LAB_014ede68;
            }
            FUN_014d62d0(&local_1178,&local_44cc);
            pppppppuVar9 = local_1174;
            pppppppuVar17 = local_1178;
            local_55e4 = pppppppuVar26;
            local_561c._0_2_ = uVar16;
            if (local_1178 == (uint *******)&DAT_00000003) {
              pppppppuVar21 = local_1174;
            }
            else if (local_1178 == (uint *******)0x2) {
              pppppppuVar21 = (uint *******)FUN_014dee0c(4,&DAT_01cf9fe4,&DAT_01d064b8);
              local_561c._0_2_ = uVar16;
            }
            else {
              local_2258 = local_1170;
              local_2254 = _local_116c;
              local_225c = local_1174;
              local_2260 = local_1178;
              FUN_014ca8dc(&local_1178,&local_44cc);
              pppppppuVar28 = local_1170;
              pppppppuVar3 = local_1174;
              pppppppuVar2 = local_1178;
              if (local_1178 == (uint *******)&DAT_80000001) {
                pppppppuVar11 = local_1174;
              }
              else {
                local_55dc = local_1178;
                if (local_1178 == (uint *******)&DAT_80000000) {
                  pppppppuVar11 = (uint *******)FUN_014dee0c(5,&DAT_01cf9fe4,&DAT_01d064b8);
                }
                else {
                  local_5628 = local_1170;
                  local_5618 = local_1174;
                  FUN_014d636c(&local_1178,&local_44cc);
                  pppppppuVar11 = local_1174;
                  pppppppuVar4 = local_1178;
                  if (local_1178 != (uint *******)&DAT_00000006) {
                    local_55f0 = local_1174;
                    FUN_01bed4e2(&local_3350,&local_1170,0x10e4);
                    local_55d4 = pppppppuVar4;
                    if (pppppppuVar4 != (uint *******)&DAT_00000005) {
                      FUN_01bed4e2(&local_55c0,&local_3350,0x10e4);
                      pppppppuVar7 = local_64;
                      pppppppuVar6 = local_68;
                      local_44d8 = local_2258;
                      pppppppuStack_44d4 = local_2254;
                      local_55d0 = local_68;
                      pppppppuStack_55cc = local_64;
                      uVar5 = local_60._0_1_;
                      local_55c8 = local_60._0_1_;
                      local_4488 = local_2258;
                      pppppppuStack_4484 = local_2254;
                      local_4480 = pppppppuVar4;
                      local_4490 = pppppppuVar17;
                      local_448c = pppppppuVar9;
                      local_447c = pppppppuVar11;
                      FUN_01bed4e2(auStack_4478,&local_55c0,0x10e4);
                      local_3394 = pppppppuVar2;
                      local_3390 = pppppppuVar3;
                      local_338c = pppppppuVar28;
                      local_3388 = pppppppuVar21;
                      local_3384 = pppppppuVar6;
                      pppppppuStack_3380 = pppppppuVar7;
                      local_337a = uVar16;
                      local_3373 = bVar24;
                      local_3374 = bVar20;
                      local_337b = cVar25;
                      local_337c = uVar5;
                      local_3378 = pppppppuVar26;
                      pppppppuVar26 = (uint *******)FUN_014ca838(&local_44cc);
                      local_561c._0_2_ = uVar16;
                      if (pppppppuVar26 != (uint *******)0x0) {
                        FUN_014c9fd4(&local_4490);
                        local_561c._0_2_ = uVar16;
LAB_014ed1e8:
                        pppppppuVar17 = (uint *******)0x2;
                        pppppppuVar9 = pppppppuVar26;
                      }
                      goto LAB_014ec66c;
                    }
                    pppppppuVar11 = (uint *******)FUN_014dee0c(6,&DAT_01cf9fe4,&DAT_01d064b8);
                  }
                  FUN_019bb7e0(pppppppuVar2,pppppppuVar3);
                }
              }
              pppppppuVar21 = pppppppuVar11;
              if (pppppppuVar17 != (uint *******)0x0) {
                FUN_01960c70(&local_225c);
              }
            }
          }
          else {
            pppppppuVar21 = pppppppuVar26;
          }
        }
        else {
LAB_014ec2f4:
          pppppppuVar21 = local_1174;
        }
      }
LAB_014ec2f8:
      FUN_014deb6c(&local_44cc);
      pppppppuVar17 = (uint *******)0x2;
      bVar24 = 0;
      bVar20 = 0;
      pppppppuVar9 = pppppppuVar21;
    }
    else {
      if (uVar8 != 0x15) {
        pppppppuVar9 = (uint *******)FUN_014c8278(param_3,auStack_29,&DAT_01cf9d74);
        goto LAB_014ec690;
      }
      local_44a8 = (undefined4 *)param_3[1];
      local_44b8 = (uint *******)0x80000015;
      local_55e4 = (uint *******)0x0;
      local_4498 = 0;
      local_44a4 = local_44a8;
      local_44a0 = uVar18;
      local_449c = local_44a8 + param_3[2] * 8;
      local_5608 = (uint *******)0x2;
      local_3350 = (uint *******)&DAT_00000005;
      puVar12 = (undefined4 *)((uint)&local_68 | 4);
      puVar13 = (undefined4 *)((uint)&local_44b8 | 4);
      local_55d4 = (uint *******)((uint)&local_2260 | 4);
      puVar27 = auStack_3650;
      local_3360 = (uint *******)0x2;
      pppppppuVar26 = (uint *******)&local_3360;
      uVar8 = (uint)pppppppuVar26 | 4;
      local_55dc = (uint *******)&DAT_80000000;
      local_560c = local_335c;
      local_5614 = local_3358;
      local_5610 = local_3354;
      local_5600 = (uint *******)0x2;
      local_55fc = 2;
      local_55f4 = (uint *******)0x2;
      local_55f0 = (uint *******)0x2;
LAB_014eb814:
      puVar1 = local_44a4;
      bVar29 = local_44a4 == local_449c;
      pppppppuVar21 = pppppppuVar26;
      if (!bVar29) {
        puVar27 = auStack_4650;
        pppppppuVar21 = (uint *******)*local_44a4;
        local_44a4 = local_44a4 + 8;
      }
      if (bVar29 || pppppppuVar21 == (uint *******)0x80000015) goto switchD_014eb9fc_caseD_7;
      *(int *)(puVar27 + 0x1b8) = *(int *)(puVar27 + 0x1b8) + 1;
      local_2260 = pppppppuVar21;
      ppppppuVar15 = (uint ******)puVar1[2];
      ppppppuVar19 = (uint ******)puVar1[3];
      *local_55d4 = (uint ******)puVar1[1];
      local_55d4[1] = ppppppuVar15;
      local_55d4[2] = ppppppuVar19;
      local_1178 = (uint *******)puVar1[4];
      local_1174 = (uint *******)puVar1[5];
      local_1170 = (uint *******)puVar1[6];
      _local_116c = (uint *******)puVar1[7];
      if (*(int *)(puVar27 + 0x198) != -0x7fffffeb) {
        FUN_014c81b0(&local_44b8);
      }
      pppppppuVar26 = local_2258;
      pppppppuVar17 = local_225c;
      local_44b8 = local_1178;
      pppppppuStack_44b4 = local_1174;
      pppppppuStack_44b0 = local_1170;
      pppppppuStack_44ac = _local_116c;
      uVar23 = 0x15;
      if ((int)pppppppuVar21 < 0) {
        uVar23 = (uint)pppppppuVar21 ^ 0x80000000;
      }
      pppppppuVar21 = local_2254;
      switch(uVar23) {
      case 1:
        pppppppuVar26 = (uint *******)((uint)local_225c & 0xff);
        pppppppuVar21 = (uint *******)0x0;
      case 4:
        FUN_014f1320(&local_1178,&switchD_014eb8c4::switchdataD_014eb8c8,pppppppuVar26,pppppppuVar21
                    );
        goto LAB_014eb9b4;
      default:
        local_1174 = (uint *******)FUN_014c8278(&local_2260,auStack_29,&DAT_01cf9ef4);
        local_1178 = (uint *******)CONCAT31(local_1178._1_3_,1);
        goto LAB_014eb9d4;
      case 0xc:
        FUN_014f3c28(&local_1178,local_2258,local_2254);
        goto LAB_014eb99c;
      case 0xd:
        FUN_014f3c28(&local_1178,local_225c,local_2258);
        break;
      case 0xe:
        FUN_014f0df0(&local_1178,local_2258,local_2254);
LAB_014eb99c:
        FUN_019bb7e0(pppppppuVar17,pppppppuVar26);
LAB_014eb9b4:
        if ((uVar23 | 2) != 0xe) break;
        goto LAB_014eb9d4;
      case 0xf:
        FUN_014f0df0(&local_1178,local_225c,local_2258);
      }
      FUN_014c81b0(&local_2260);
LAB_014eb9d4:
      pppppppuVar17 = local_44b8;
      pppppppuVar21 = (uint *******)&local_44b8;
      if ((char)local_1178 == '\0') {
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch((uint)local_1178 >> 8 & 0xff) {
        case 0:
          if (local_55f0 != (uint *******)0x2) {
            local_3360 = local_5608;
            local_335c = local_560c;
            local_2260 = (uint *******)0x4a5803;
            local_225c = (uint *******)&DAT_0000000b;
            local_1178 = (uint *******)&local_2260;
            local_1174 = (uint *******)&DAT_0132b6a0;
            pppppppuVar9 = (uint *******)FUN_019676ac(&DAT_005ab34f,&local_1178);
            break;
          }
          FUN_014cabf4(&local_1178,pppppppuVar21);
          local_55f0 = (uint *******)((uint)_local_116c >> 8 & 0xff);
          local_563c = local_1178;
          if (local_55f0 == (uint *******)0x2) {
            local_3360 = local_5608;
            local_335c = local_560c;
            pppppppuVar9 = local_1178;
            goto LAB_014ed228;
          }
          local_3370 = local_1174;
          local_336c = local_1170;
          local_561c = (uint *******)((uint)_local_116c >> 0x10);
          local_3368 = local_116c[0];
LAB_014ebc48:
          puVar27 = auStack_4650;
          goto LAB_014eb814;
        case 1:
          if (local_55f4 == (uint *******)0x2) {
            FUN_014cac54(&local_1178,pppppppuVar21);
            if ((char)local_1178 != '\0') goto LAB_014ed20c;
            local_55f4 = (uint *******)((uint)local_1178 >> 8 & 0xff);
            goto LAB_014ebc48;
          }
          local_3360 = local_5608;
          local_335c = local_560c;
          local_2260 = (uint *******)&DAT_00570d28;
          local_225c = (uint *******)&DAT_00000008;
          local_1178 = (uint *******)&local_2260;
          local_1174 = (uint *******)&DAT_0132b6a0;
          pppppppuVar9 = (uint *******)FUN_019676ac(&DAT_005ab34f,&local_1178);
          break;
        case 2:
          if (local_55fc == 2) {
            FUN_014cac54(&local_1178,pppppppuVar21);
            if ((char)local_1178 != '\0') goto LAB_014ed20c;
            local_55fc = (uint)local_1178 >> 8 & 0xff;
            goto LAB_014ebc48;
          }
          local_3360 = local_5608;
          local_335c = local_560c;
          local_2260 = (uint *******)0x4a580e;
          local_225c = (uint *******)&DAT_00000009;
          local_1178 = (uint *******)&local_2260;
          local_1174 = (uint *******)&DAT_0132b6a0;
          pppppppuVar9 = (uint *******)FUN_019676ac(&DAT_005ab34f,&local_1178);
          break;
        case 3:
          if (local_55e4 == (uint *******)0x0) {
            uVar30 = FUN_014cacb4(pppppppuVar21);
            pppppppuVar9 = (uint *******)(uVar30 >> 0x20);
            local_55e4 = pppppppuVar9;
            if ((uVar30 & 1) == 0) goto LAB_014ebc48;
            goto LAB_014ed220;
          }
          local_3360 = local_5608;
          local_335c = local_560c;
          local_2260 = (uint *******)0x4a5613;
          local_225c = (uint *******)&DAT_0000000c;
          local_1178 = (uint *******)&local_2260;
          local_1174 = (uint *******)&DAT_0132b6a0;
          pppppppuVar9 = (uint *******)FUN_019676ac(&DAT_005ab34f,&local_1178);
          break;
        case 4:
          if (local_5600 == (uint *******)0x2) {
            FUN_014d6270(&local_1178,pppppppuVar21);
            if (local_1178 != (uint *******)0x2) {
              local_5600 = local_1178;
              local_5614 = local_1170;
              local_5610 = _local_116c;
              local_560c = local_1174;
              local_5608 = local_1178;
              goto LAB_014ebc48;
            }
            local_3360 = local_5608;
            local_335c = local_560c;
            pppppppuVar9 = local_1174;
            goto LAB_014ed228;
          }
          local_3360 = local_5608;
          local_335c = local_560c;
          local_2260 = (uint *******)&DAT_00568498;
          local_225c = (uint *******)&DAT_00000010;
          local_1178 = (uint *******)&local_2260;
          local_1174 = (uint *******)&DAT_0132b6a0;
          pppppppuVar9 = (uint *******)FUN_019676ac(&DAT_005ab34f,&local_1178);
          break;
        case 5:
          if (local_55dc == (uint *******)&DAT_80000000) {
            FUN_014cad14(&local_1178,pppppppuVar21);
            local_55dc = local_1178;
            if (local_1178 != (uint *******)&DAT_80000000) {
              local_5628 = local_1170;
              local_5618 = local_1174;
              goto LAB_014ebc48;
            }
            bVar29 = true;
            pppppppuVar26 = (uint *******)&DAT_80000000;
            uVar23 = 1;
            local_3360 = local_5608;
            local_335c = local_560c;
            pppppppuVar9 = local_1174;
            goto LAB_014ec604;
          }
          local_3360 = local_5608;
          local_335c = local_560c;
          local_2260 = (uint *******)0x520c30;
          local_225c = (uint *******)&DAT_0000000b;
          local_1178 = (uint *******)&local_2260;
          local_1174 = (uint *******)&DAT_0132b6a0;
          pppppppuVar9 = (uint *******)FUN_019676ac(&DAT_005ab34f,&local_1178);
          break;
        case 6:
          if (local_3350 == (uint *******)&DAT_00000005) {
            local_44b8 = (uint *******)0x80000015;
            if (pppppppuVar17 == (uint *******)0x80000015) {
              local_3360 = local_5608;
              local_335c = local_560c;
                    /* WARNING: Subroutine does not return */
              FUN_0130739c("MapAccess::next_value called before next_keymap with a single keystring or mapstruct Assets with 4 elementsstruct Assets with 1 elementstruct Assets with 16 elementsstruct Assets with 19 elements"
                           ,0x2c,&DAT_01cfa02c);
            }
            uVar10 = puVar13[1];
            uVar22 = puVar13[2];
            *puVar12 = *puVar13;
            puVar12[1] = uVar10;
            puVar12[2] = uVar22;
            local_68 = pppppppuVar17;
            FUN_014d21a0(&local_1178,&local_68);
            pppppppuVar26 = local_1174;
            pppppppuVar21 = local_1178;
            if (local_1178 == (uint *******)&DAT_00000005) goto LAB_014ed20c;
            FUN_01bed4e2(&local_2260,&local_1170,0x10e4);
            if (local_3350 != (uint *******)&DAT_00000005) {
              FUN_014ca02c(&local_3350);
            }
            local_3350 = pppppppuVar21;
            local_334c = pppppppuVar26;
            FUN_01bed4e2(auStack_3348,&local_2260,0x10e4);
            goto LAB_014ebc48;
          }
          local_3360 = local_5608;
          local_335c = local_560c;
          local_2260 = (uint *******)0x4a561f;
          local_225c = (uint *******)&DAT_00000006;
          local_1178 = (uint *******)&local_2260;
          local_1174 = (uint *******)&DAT_0132b6a0;
          pppppppuVar9 = (uint *******)FUN_019676ac(&DAT_005ab34f,&local_1178);
          break;
        case 7:
switchD_014eb9fc_caseD_7:
          local_3358 = local_5614;
          local_3354 = local_5610;
          local_3360 = local_5608;
          local_335c = local_560c;
          if (local_55f0 == (uint *******)0x2) {
            FUN_014f8be0(&local_1178,"bos_version");
            pppppppuVar26 = (uint *******)((uint)_local_116c >> 8 & 0xff);
            pppppppuVar9 = local_1178;
            if (pppppppuVar26 == (uint *******)0x2) break;
            local_88 = local_1174;
            pppppppuStack_84 = local_1170;
            local_561c._0_2_ = (undefined2)((uint)_local_116c >> 0x10);
            local_80 = local_116c[0];
            pppppppuVar21 = local_1178;
          }
          else {
            local_88 = local_3370;
            pppppppuStack_84 = local_336c;
            local_80 = local_3368;
            pppppppuVar21 = local_563c;
            pppppppuVar26 = local_55f0;
          }
          pppppppuVar3 = local_334c;
          pppppppuVar2 = local_3350;
          cVar25 = (char)pppppppuVar26;
          if (local_55f4 == (uint *******)0x2) {
            local_2260 = (uint *******)&DAT_00570d28;
            local_225c = (uint *******)&DAT_00000008;
            local_1178 = (uint *******)&local_2260;
            local_1174 = (uint *******)&DAT_0132b6a0;
            pppppppuVar9 = (uint *******)FUN_019676ac(&DAT_0057cd64,&local_1178);
          }
          else if (local_55fc == 2) {
            local_2260 = (uint *******)0x4a580e;
            local_225c = (uint *******)&DAT_00000009;
            local_1178 = (uint *******)&local_2260;
            local_1174 = (uint *******)&DAT_0132b6a0;
            pppppppuVar9 = (uint *******)FUN_019676ac(&DAT_0057cd64,&local_1178);
          }
          else {
            if (local_55e4 != (uint *******)0x0) {
              if (local_5600 == (uint *******)0x2) {
                local_1178 = (uint *******)0x0;
              }
              else {
                local_1178 = local_3360;
                local_1174 = local_335c;
                local_1170 = local_3358;
                _local_116c = local_3354;
              }
              uVar23 = (uint)(local_5600 == (uint *******)0x2);
              bVar29 = local_55dc == (uint *******)&DAT_80000000;
              if (local_55dc == (uint *******)&DAT_80000000) {
                local_68 = (uint *******)0x520c30;
                local_64 = (uint *******)&DAT_0000000b;
                local_2260 = (uint *******)&local_68;
                local_225c = (uint *******)&DAT_0132b6a0;
                pppppppuVar9 = (uint *******)FUN_019676ac(&DAT_0057cd64,&local_2260);
              }
              else {
                local_55d4 = local_3350;
                if (local_3350 != (uint *******)&DAT_00000005) {
                  local_55f0 = local_334c;
                  FUN_01bed4e2(&local_55c0,auStack_3348,0x10e4);
                  uVar5 = local_80;
                  pppppppuVar28 = pppppppuStack_84;
                  pppppppuVar26 = local_88;
                  pppppppuVar9 = local_1174;
                  pppppppuVar17 = local_1178;
                  local_44d8 = local_1170;
                  pppppppuStack_44d4 = _local_116c;
                  local_55d0 = local_88;
                  pppppppuStack_55cc = pppppppuStack_84;
                  local_55c8 = local_80;
                  bVar24 = (byte)local_55fc & 1;
                  bVar20 = (byte)local_55f4 & 1;
                  if (local_1178 == (uint *******)0x2) goto LAB_014ec65c;
                  local_4490 = local_1178;
                  local_4488 = local_1170;
                  pppppppuStack_4484 = _local_116c;
                  local_448c = local_1174;
                  local_4480 = pppppppuVar2;
                  local_447c = pppppppuVar3;
                  FUN_01bed4e2(auStack_4478,&local_55c0,0x10e4);
                  local_3394 = local_55dc;
                  local_3390 = local_5618;
                  local_338c = local_5628;
                  local_3384 = pppppppuVar26;
                  pppppppuStack_3380 = pppppppuVar28;
                  local_3378 = local_55e4;
                  local_337a = local_561c._0_2_;
                  local_337c = uVar5;
                  local_3388 = pppppppuVar21;
                  local_337b = cVar25;
                  local_3374 = bVar20;
                  local_3373 = bVar24;
                  pppppppuVar26 = (uint *******)FUN_014c9cac(&local_44b8);
                  if (pppppppuVar26 == (uint *******)0x0) goto LAB_014ec66c;
                  FUN_014c9fd4(&local_4490);
                  goto LAB_014ed1e8;
                }
                local_68 = (uint *******)0x4a561f;
                local_64 = (uint *******)&DAT_00000006;
                local_2260 = (uint *******)&local_68;
                local_225c = (uint *******)&DAT_0132b6a0;
                pppppppuVar9 = (uint *******)FUN_019676ac(&DAT_0057cd64,&local_2260);
                FUN_019bb7e0(local_55dc,local_5618);
              }
              pppppppuVar21 = (uint *******)&local_1178;
              if (local_1178 != (uint *******)0x0) {
                FUN_01960c70((uint)&local_1178 | 4);
              }
              goto LAB_014ec600;
            }
            FUN_014dbcc0();
            pppppppuVar9 = extraout_r1_00;
          }
        }
        bVar29 = true;
        uVar23 = 1;
        pppppppuVar21 = (uint *******)&local_44b8;
        goto LAB_014ec600;
      }
LAB_014ed20c:
      pppppppuVar9 = local_1174;
LAB_014ed220:
      local_3360 = local_5608;
      local_335c = local_560c;
LAB_014ed228:
      bVar29 = true;
      uVar23 = 1;
LAB_014ec600:
      pppppppuVar26 = local_55dc;
LAB_014ec604:
      if (local_3350 != (uint *******)&DAT_00000005) {
        FUN_014ca02c(&local_3350);
      }
      if ((bool)(bVar29 & pppppppuVar26 != (uint *******)&DAT_80000000)) {
        FUN_019bb7e0(pppppppuVar26,local_5618);
      }
      if ((uVar23 & (uint)local_3360 & 0xff) != 0) {
        FUN_01960c70(uVar8);
      }
      bVar24 = 0;
      bVar20 = 0;
      cVar25 = '\0';
LAB_014ec65c:
      pppppppuVar17 = (uint *******)0x2;
      FUN_014c9c60(&local_44b8);
    }
LAB_014ec66c:
    if ((0x7fffffff < uVar18) && ((undefined1 *)(uVar18 & 0xfffffffe) != &DAT_80000014)) {
      FUN_014c81b0(param_3);
    }
    if (pppppppuVar17 != (uint *******)0x2) {
      *param_1 = pppppppuVar17;
      param_1[1] = pppppppuVar9;
      param_1[2] = local_44d8;
      param_1[3] = pppppppuStack_44d4;
      param_1[4] = local_55d4;
      param_1[5] = local_55f0;
      FUN_01bed4e2(param_1 + 6,&local_55c0,0x10e4);
      param_1[0x43f] = local_55dc;
      param_1[0x440] = local_5618;
      param_1[0x441] = local_5628;
      param_1[0x442] = pppppppuVar21;
      param_1[0x443] = local_55d0;
      param_1[0x444] = pppppppuStack_55cc;
      param_1[0x446] = local_55e4;
      *(byte *)((int)param_1 + 0x111d) = bVar24;
      *(byte *)(param_1 + 0x447) = bVar20;
      *(undefined2 *)((int)param_1 + 0x1116) = local_561c._0_2_;
      *(char *)((int)param_1 + 0x1115) = cVar25;
      *(undefined1 *)(param_1 + 0x445) = local_55c8;
      return;
    }
LAB_014ec690:
    *param_1 = 3;
    param_1[1] = pppppppuVar9;
    return;
  }
  pppppppuVar26 = (uint *******)*param_3;
  uVar8 = 0x15;
  if ((int)pppppppuVar26 < 0) {
    uVar8 = (uint)pppppppuVar26 ^ 0x80000000;
  }
  if (uVar8 == 0x14) {
    local_74 = param_3[1];
    local_7c = (uint *)param_3[2];
    local_70 = local_7c + param_3[3] * 4;
    local_6c = 0;
    local_78 = local_7c;
    FUN_014cad74(&local_1178,&local_7c);
    pppppppuVar21 = local_1178;
    local_5600._0_1_ = local_116c[1];
    local_55f4 = local_1178;
    local_55ec = pppppppuVar26;
    if (local_116c[1] == '\x03') goto LAB_014ec764;
    local_3360 = local_1174;
    local_335c = local_1170;
    uVar16 = uStack_116a;
    local_3358 = (uint *******)CONCAT31(local_3358._1_3_,local_116c[0]);
    if (local_116c[1] == '\x02') {
      uVar10 = 0;
LAB_014eda90:
      local_55f4 = (uint *******)FUN_014dee0c(uVar10,&DAT_01cf9fdc,&DAT_01d064b8);
      goto LAB_014ec764;
    }
    FUN_014cae14(&local_1178,&local_7c);
    if ((char)local_1178 != '\0') {
      pppppppuVar17 = local_1174;
LAB_014ec760:
      local_55f4 = pppppppuVar17;
      goto LAB_014ec764;
    }
    bVar20 = local_1178._1_1_;
    if (local_1178._1_1_ == 2) {
      uVar10 = 1;
      goto LAB_014eda90;
    }
    uVar30 = FUN_014caeb4(&local_7c);
    pppppppuVar17 = (uint *******)(uVar30 >> 0x20);
    local_55f0 = pppppppuVar17;
    if ((uVar30 & 1) != 0) goto LAB_014ec760;
    if (pppppppuVar17 == (uint *******)0x0) {
      uVar10 = 2;
      goto LAB_014eda90;
    }
    FUN_014d62d0(&local_1178,&local_7c);
    local_55d4 = local_1174;
    pppppppuVar9 = local_1178;
    local_562c._0_2_ = uVar16;
    if (local_1178 == (uint *******)&DAT_00000003) {
      local_55f4 = local_1174;
    }
    else if (local_1178 == (uint *******)0x2) {
      local_55f4 = (uint *******)FUN_014dee0c(3,&DAT_01cf9fdc,&DAT_01d064b8);
    }
    else {
      local_60 = local_1170;
      local_68 = local_1178;
      local_64 = local_1174;
      local_5c = _local_116c;
      FUN_014ca8dc(&local_1178,&local_7c);
      pppppppuVar3 = local_1170;
      pppppppuVar2 = local_1174;
      local_55ec = local_1178;
      if (local_1178 == (uint *******)&DAT_80000001) {
        local_55f4 = local_1174;
        local_55ec = pppppppuVar26;
      }
      else if (local_1178 == (uint *******)&DAT_80000000) {
        local_55f4 = (uint *******)FUN_014dee0c(4,&DAT_01cf9fdc,&DAT_01d064b8);
        local_55ec = pppppppuVar26;
      }
      else {
        local_5610 = local_1174;
        puVar14 = local_78;
        if (local_78 == local_70) {
LAB_014ecde4:
          local_78 = puVar14;
          pppppppuVar28 = (uint *******)FUN_014dee0c(5,&DAT_01cf9fdc,&DAT_01d064b8);
        }
        else {
          pppppppuVar28 = (uint *******)*local_78;
          puVar14 = local_78 + 4;
          if (pppppppuVar28 == (uint *******)0x80000015) goto LAB_014ecde4;
          local_5638 = local_1170;
          uVar8 = local_78[2];
          uVar18 = local_78[3];
          puVar14 = (uint *)((uint)&local_55c0 | 4);
          *puVar14 = local_78[1];
          puVar14[1] = uVar8;
          puVar14[2] = uVar18;
          local_6c = local_6c + 1;
          local_55c0 = pppppppuVar28;
          local_78 = local_78 + 4;
          FUN_014cb034(&local_1178);
          pppppppuVar28 = local_1174;
          pppppppuVar11 = local_1178;
          if (local_1178 != (uint *******)&DAT_00000005) {
            local_5614 = local_1174;
            FUN_01bed4e2(&local_2260,&local_1170,0xe38);
            FUN_01bed4e2(&local_3350,&local_2260,0xe38);
            FUN_01bed4e2(&local_1178,&local_3350,0xe38);
            local_3370 = local_60;
            local_336c = local_5c;
            local_88 = local_3360;
            pppppppuStack_84 = local_335c;
            local_80 = local_3358._0_1_;
            local_4480 = pppppppuVar11;
            local_447c = pppppppuVar28;
            local_4488 = local_60;
            pppppppuStack_4484 = local_5c;
            local_4490 = pppppppuVar9;
            local_448c = local_55d4;
            local_55e4 = pppppppuVar11;
            FUN_01bed4e2(auStack_4478,&local_1178,0xe38);
            local_3640 = local_55ec;
            local_363c = pppppppuVar2;
            local_3638 = pppppppuVar3;
            local_3634 = pppppppuVar21;
            local_3630 = local_88;
            pppppppuStack_362c = pppppppuStack_84;
            local_3628 = local_80;
            uStack_3626 = uVar16;
            local_3627 = (char)local_5600;
            local_3620 = bVar20;
            local_3624 = pppppppuVar17;
            pppppppuVar21 = (uint *******)FUN_014ca838(&local_7c);
            local_562c._0_2_ = uVar16;
            if (pppppppuVar21 != (uint *******)0x0) {
              FUN_014c9f7c(&local_4490);
              local_562c._0_2_ = uVar16;
LAB_014ecedc:
              pppppppuVar9 = (uint *******)0x2;
              local_55d4 = pppppppuVar21;
            }
            goto LAB_014ec8e4;
          }
        }
        FUN_019bb7e0(local_55ec,pppppppuVar2);
        local_55ec = (uint *******)&pppppppuStack_84;
        local_55f4 = pppppppuVar28;
      }
      if (pppppppuVar9 != (uint *******)0x0) {
        FUN_01960c70(&local_64);
      }
    }
LAB_014ec764:
    FUN_014deb6c(&local_7c);
    pppppppuVar9 = (uint *******)0x2;
    bVar20 = 0;
    local_55d4 = local_55f4;
    goto LAB_014ec8e4;
  }
  if (uVar8 == 0x15) {
    local_55f0 = (uint *******)0x0;
    local_55ec = (uint *******)&DAT_80000000;
    local_58 = (uint *******)0x80000015;
    local_5628 = (uint *******)&DAT_00000005;
    puVar12 = (undefined4 *)((uint)&local_2260 | 4);
    puVar27 = auStack_1250;
    local_5618 = (uint *******)0x2;
    puVar13 = (undefined4 *)((uint)&local_58 | 4);
    local_561c = local_55bc;
    local_5624 = local_55b8;
    local_5620 = local_55b4;
    local_5608 = (uint *******)0x2;
    local_44 = (undefined4 *)param_3[1];
    local_55e4 = (uint *******)&DAT_00000005;
    local_40 = pppppppuVar26;
    local_38 = 0;
    local_48 = local_44;
    local_3c = local_44 + param_3[2] * 8;
    local_55c0 = (uint *******)0x2;
    local_5604 = 2;
    local_5600 = (uint *******)0x2;
    do {
      puVar1 = local_44;
      bVar29 = local_44 == local_3c;
      if (!bVar29) {
        pppppppuVar21 = (uint *******)*local_44;
        puVar27 = auStack_250;
        local_44 = local_44 + 8;
      }
      if (bVar29 || pppppppuVar21 == (uint *******)0x80000015) goto switchD_014ebfa0_caseD_6;
      *(int *)(puVar27 + 0x218) = *(int *)(puVar27 + 0x218) + 1;
      local_2260 = pppppppuVar21;
      uVar10 = puVar1[2];
      uVar22 = puVar1[3];
      *puVar12 = puVar1[1];
      puVar12[1] = uVar10;
      puVar12[2] = uVar22;
      local_1178 = (uint *******)puVar1[4];
      local_1174 = (uint *******)puVar1[5];
      local_1170 = (uint *******)puVar1[6];
      _local_116c = (uint *******)puVar1[7];
      if (*(int *)(puVar27 + 0x1f8) != -0x7fffffeb) {
        FUN_014c81b0(&local_58);
      }
      pppppppuVar9 = local_2258;
      pppppppuVar17 = local_225c;
      local_58 = local_1178;
      pppppppuStack_54 = local_1174;
      pppppppuStack_50 = local_1170;
      pppppppuStack_4c = _local_116c;
      uVar8 = 0x15;
      if ((int)pppppppuVar21 < 0) {
        uVar8 = (uint)pppppppuVar21 ^ 0x80000000;
      }
      pppppppuVar21 = local_2254;
      switch(uVar8) {
      case 1:
        pppppppuVar9 = (uint *******)((uint)local_225c & 0xff);
        pppppppuVar21 = (uint *******)0x0;
      case 4:
        FUN_014e8710(&local_1178,&switchD_014ebe68::switchdataD_014ebe6c,pppppppuVar9,pppppppuVar21)
        ;
        goto LAB_014ebf58;
      default:
        local_1174 = (uint *******)FUN_014c8278(&local_2260,auStack_29,&DAT_01cf9eb4);
        local_1178 = (uint *******)CONCAT31(local_1178._1_3_,1);
        goto LAB_014ebf70;
      case 0xc:
        FUN_014eeb94(&local_1178,local_2258,local_2254);
        goto LAB_014ebf3c;
      case 0xd:
        FUN_014eeb94(&local_1178,local_225c,local_2258);
        break;
      case 0xe:
        FUN_014e692c(&local_1178,local_2258,local_2254);
LAB_014ebf3c:
        FUN_019bb7e0(pppppppuVar17,pppppppuVar9);
LAB_014ebf58:
        if ((uVar8 | 2) != 0xe) break;
        goto LAB_014ebf70;
      case 0xf:
        FUN_014e692c(&local_1178,local_225c,local_2258);
      }
      FUN_014c81b0(&local_2260);
LAB_014ebf70:
      pppppppuVar21 = local_58;
      if ((char)local_1178 != '\0') {
LAB_014ed498:
        local_55bc = local_561c;
        local_55c0 = local_5618;
        local_3350 = local_5628;
        local_334c = local_5614;
        local_55d4 = local_1174;
        goto LAB_014ec880;
      }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch((uint)local_1178 >> 8 & 0xff) {
      case 0:
        if (local_5600 != (uint *******)0x2) {
          local_55bc = local_561c;
          local_55c0 = local_5618;
          local_3350 = local_5628;
          local_334c = local_5614;
          local_2260 = (uint *******)0x4a5803;
          local_225c = (uint *******)&DAT_0000000b;
          local_1178 = (uint *******)&local_2260;
          local_1174 = (uint *******)&DAT_0132b6a0;
          local_55d4 = (uint *******)FUN_019676ac(&DAT_005ab34f,&local_1178);
          goto LAB_014ec880;
        }
        FUN_014cabf4(&local_1178,&local_58);
        local_5600 = (uint *******)((uint)_local_116c >> 8 & 0xff);
        local_55f4 = local_1178;
        if (local_5600 == (uint *******)0x2) {
          local_55d4 = local_1178;
          goto LAB_014ed3f4;
        }
        puVar27 = auStack_3650;
        local_3360 = local_1174;
        local_335c = local_1170;
        local_562c = (uint)_local_116c >> 0x10;
        local_3358 = (uint *******)CONCAT31(local_3358._1_3_,local_116c[0]);
        break;
      case 1:
        if (local_5604 != 2) {
          local_55bc = local_561c;
          local_55c0 = local_5618;
          local_3350 = local_5628;
          local_334c = local_5614;
          local_2260 = (uint *******)&DAT_00570d28;
          local_225c = (uint *******)&DAT_00000008;
          local_1178 = (uint *******)&local_2260;
          local_1174 = (uint *******)&DAT_0132b6a0;
          local_55d4 = (uint *******)FUN_019676ac(&DAT_005ab34f,&local_1178);
          goto LAB_014ec880;
        }
        FUN_014cac54(&local_1178,&local_58);
        if ((char)local_1178 != '\0') goto LAB_014ed498;
        local_5604 = (uint)local_1178 >> 8 & 0xff;
        puVar27 = auStack_250;
        break;
      case 2:
        if (local_55f0 != (uint *******)0x0) {
          local_55bc = local_561c;
          local_55c0 = local_5618;
          local_3350 = local_5628;
          local_334c = local_5614;
          local_2260 = (uint *******)0x4a5613;
          local_225c = (uint *******)&DAT_0000000c;
          local_1178 = (uint *******)&local_2260;
          local_1174 = (uint *******)&DAT_0132b6a0;
          local_55d4 = (uint *******)FUN_019676ac(&DAT_005ab34f,&local_1178);
          goto LAB_014ec880;
        }
        uVar30 = FUN_014cacb4(&local_58);
        local_55f0 = (uint *******)(uVar30 >> 0x20);
        puVar27 = auStack_250;
        if ((uVar30 & 1) != 0) goto LAB_014ed3b0;
        break;
      case 3:
        if (local_5608 != (uint *******)0x2) {
          local_55bc = local_561c;
          local_55c0 = local_5618;
          local_3350 = local_5628;
          local_334c = local_5614;
          local_2260 = (uint *******)&DAT_00568498;
          local_225c = (uint *******)&DAT_00000010;
          local_1178 = (uint *******)&local_2260;
          local_1174 = (uint *******)&DAT_0132b6a0;
          local_55d4 = (uint *******)FUN_019676ac(&DAT_005ab34f,&local_1178);
          goto LAB_014ec880;
        }
        FUN_014d6270(&local_1178,&local_58);
        if (local_1178 == (uint *******)0x2) {
          local_55bc = local_561c;
          local_55c0 = local_5618;
          local_3350 = local_5628;
          local_334c = local_5614;
          local_55d4 = local_1174;
          goto LAB_014ec880;
        }
        local_5608 = local_1178;
        local_5624 = local_1170;
        local_5620 = _local_116c;
        local_561c = local_1174;
        local_5618 = local_1178;
        puVar27 = auStack_250;
        break;
      case 4:
        if (local_55ec != (uint *******)&DAT_80000000) {
          local_55bc = local_561c;
          local_55c0 = local_5618;
          local_3350 = local_5628;
          local_334c = local_5614;
          local_2260 = (uint *******)0x520c30;
          local_225c = (uint *******)&DAT_0000000b;
          local_1178 = (uint *******)&local_2260;
          local_1174 = (uint *******)&DAT_0132b6a0;
          local_55d4 = (uint *******)FUN_019676ac(&DAT_005ab34f,&local_1178);
          goto LAB_014ec880;
        }
        FUN_014cad14(&local_1178,&local_58);
        local_55ec = local_1178;
        if (local_1178 == (uint *******)&DAT_80000000) {
          local_55bc = local_561c;
          local_55c0 = local_5618;
          local_3350 = local_5628;
          local_334c = local_5614;
          local_55ec = (uint *******)&DAT_80000000;
          local_55d4 = local_1174;
          goto LAB_014ec880;
        }
        local_5638 = local_1170;
        local_5610 = local_1174;
        puVar27 = auStack_250;
        break;
      case 5:
        if (local_55e4 != (uint *******)&DAT_00000005) {
          local_55bc = local_561c;
          local_55c0 = local_5618;
          local_3350 = local_5628;
          local_334c = local_5614;
          local_2260 = (uint *******)0x4a561f;
          local_225c = (uint *******)&DAT_00000006;
          local_1178 = (uint *******)&local_2260;
          local_1174 = (uint *******)&DAT_0132b6a0;
          local_55d4 = (uint *******)FUN_019676ac(&DAT_005ab34f,&local_1178);
          pppppppuVar21 = (uint *******)&DAT_00000001;
          bVar29 = true;
          goto LAB_014ec894;
        }
        local_58 = (uint *******)0x80000015;
        if (pppppppuVar21 == (uint *******)0x80000015) {
          local_55bc = local_561c;
          local_55c0 = local_5618;
          local_3350 = local_5628;
          local_334c = local_5614;
                    /* WARNING: Subroutine does not return */
          FUN_0130739c("MapAccess::next_value called before next_keymap with a single keystring or mapstruct Assets with 4 elementsstruct Assets with 1 elementstruct Assets with 16 elementsstruct Assets with 19 elements"
                       ,0x2c,&DAT_01cfa02c);
        }
        uVar10 = puVar13[1];
        uVar22 = puVar13[2];
        *puVar12 = *puVar13;
        puVar12[1] = uVar10;
        puVar12[2] = uVar22;
        local_2260 = pppppppuVar21;
        local_55e4 = (uint *******)&DAT_00000005;
        FUN_014cb034(&local_1178,&local_2260);
        pppppppuVar21 = local_1178;
        local_5614 = local_1174;
        if (local_1178 == (uint *******)&DAT_00000005) {
          pppppppuVar21 = (uint *******)&DAT_00000001;
          bVar29 = true;
          local_55bc = local_561c;
          local_55c0 = local_5618;
          local_3350 = local_5628;
          local_55d4 = local_1174;
          goto LAB_014ec89c;
        }
        FUN_01bed4e2(auStack_3348,&local_1170,0xe38);
        local_55e4 = pppppppuVar21;
        local_5628 = pppppppuVar21;
        puVar27 = auStack_250;
        break;
      case 6:
switchD_014ebfa0_caseD_6:
        local_55b8 = local_5624;
        local_55b4 = local_5620;
        local_55bc = local_561c;
        local_55c0 = local_5618;
        local_3350 = local_5628;
        local_334c = local_5614;
        if (local_5600 == (uint *******)0x2) {
          FUN_014f8be0(&local_1178,"bos_version");
          local_5600._0_1_ = (char)((uint)_local_116c >> 8);
          local_55d4 = local_1178;
          if (((uint)_local_116c >> 8 & 0xff) == 2) goto LAB_014ec880;
          local_55f4 = local_1178;
          local_68 = local_1174;
          local_64 = local_1170;
          local_562c._0_2_ = (undefined2)((uint)_local_116c >> 0x10);
          local_60 = (uint *******)CONCAT31(local_60._1_3_,local_116c[0]);
        }
        else {
          local_68 = local_3360;
          local_64 = local_335c;
          local_60 = (uint *******)CONCAT31(local_60._1_3_,local_3358._0_1_);
        }
        if (local_5604 == 2) {
          local_2260 = (uint *******)&DAT_00570d28;
          local_225c = (uint *******)&DAT_00000008;
          local_1178 = (uint *******)&local_2260;
          local_1174 = (uint *******)&DAT_0132b6a0;
          local_55d4 = (uint *******)FUN_019676ac(&DAT_0057cd64,&local_1178);
          goto LAB_014ec880;
        }
        if (local_55f0 == (uint *******)0x0) {
          FUN_014dbcc0();
          local_55d4 = extraout_r1;
          goto LAB_014ec880;
        }
        if (local_5608 == (uint *******)0x2) {
          local_2260 = (uint *******)0x0;
        }
        else {
          local_2260 = local_55c0;
          local_225c = local_55bc;
          local_2258 = local_55b8;
          local_2254 = local_55b4;
        }
        pppppppuVar21 = (uint *******)(uint)(local_5608 == (uint *******)0x2);
        bVar29 = local_55ec == (uint *******)&DAT_80000000;
        if (local_55ec == (uint *******)&DAT_80000000) {
          local_88 = (uint *******)0x520c30;
          pppppppuStack_84 = (uint *******)&DAT_0000000b;
          local_1178 = (uint *******)&local_88;
          local_1174 = (uint *******)&DAT_0132b6a0;
          local_55d4 = (uint *******)FUN_019676ac(&DAT_0057cd64,&local_1178);
        }
        else {
          if (local_55e4 != (uint *******)&DAT_00000005) {
            FUN_01bed4e2(&local_1178,auStack_3348,0xe38);
            local_55d4 = local_225c;
            pppppppuVar9 = local_2260;
            local_3370 = local_2258;
            local_336c = local_2254;
            local_88 = local_68;
            pppppppuStack_84 = local_64;
            local_80 = local_60._0_1_;
            bVar20 = (byte)local_5604 & 1;
            if (local_2260 == (uint *******)0x2) goto LAB_014ec8d4;
            local_4488 = local_2258;
            pppppppuStack_4484 = local_2254;
            local_4490 = local_2260;
            local_448c = local_225c;
            local_4480 = local_55e4;
            local_447c = local_5614;
            FUN_01bed4e2(auStack_4478,&local_1178,0xe38);
            local_3640 = local_55ec;
            local_363c = local_5610;
            local_3638 = local_5638;
            local_3634 = local_55f4;
            local_3630 = local_88;
            pppppppuStack_362c = pppppppuStack_84;
            local_3628 = local_80;
            uStack_3626 = (undefined2)local_562c;
            local_3624 = local_55f0;
            local_3627 = (char)local_5600;
            local_3620 = bVar20;
            pppppppuVar21 = (uint *******)FUN_014c9cac(&local_58);
            if (pppppppuVar21 == (uint *******)0x0) goto LAB_014ec8e4;
            FUN_014c9f7c(&local_4490);
            goto LAB_014ecedc;
          }
          local_88 = (uint *******)0x4a561f;
          pppppppuStack_84 = (uint *******)&DAT_00000006;
          local_1178 = (uint *******)&local_88;
          local_1174 = (uint *******)&DAT_0132b6a0;
          local_55d4 = (uint *******)FUN_019676ac(&DAT_0057cd64,&local_1178);
          FUN_019bb7e0(local_55ec,local_5610);
        }
        if (local_2260 != (uint *******)0x0) {
          FUN_01960c70(puVar12);
        }
        goto LAB_014ec884;
      }
      pppppppuVar21 = (uint *******)&pppppppuStack_84;
    } while( true );
  }
  local_55d4 = (uint *******)FUN_014c8278(param_3,auStack_29,&DAT_01cf9d84);
  goto LAB_014ec908;
LAB_014ed3b0:
  local_55d4 = local_55f0;
LAB_014ed3f4:
  local_334c = local_5614;
  local_3350 = local_5628;
  local_55bc = local_561c;
  local_55c0 = local_5618;
LAB_014ec880:
  bVar29 = true;
  pppppppuVar21 = (uint *******)&DAT_00000001;
LAB_014ec884:
  if (local_55e4 != (uint *******)&DAT_00000005) {
LAB_014ec894:
    FUN_014ca4c4(&local_3350);
  }
LAB_014ec89c:
  if (bVar29 && local_55ec != (uint *******)&DAT_80000000) {
    FUN_019bb7e0(local_55ec,local_5610);
  }
  if (((uint)pppppppuVar21 & (uint)local_55c0 & 0xff) != 0) {
    FUN_01960c70((uint)&local_55c0 | 4);
  }
  bVar20 = 0;
  local_5600._0_1_ = '\0';
  local_55ec = pppppppuVar21;
LAB_014ec8d4:
  pppppppuVar9 = (uint *******)0x2;
  FUN_014c9c60(&local_58);
LAB_014ec8e4:
  if (((uint *******)0x7fffffff < pppppppuVar26) &&
     ((undefined1 *)((uint)pppppppuVar26 & 0xfffffffe) != &DAT_80000014)) {
    FUN_014c81b0(param_3);
  }
  if (pppppppuVar9 != (uint *******)0x2) {
    param_1[3] = local_3370;
    param_1[4] = local_336c;
    param_1[1] = pppppppuVar9;
    param_1[5] = local_55e4;
    param_1[6] = local_5614;
    param_1[2] = local_55d4;
    FUN_01bed4e2(param_1 + 7,&local_1178,0xe38);
    param_1[0x396] = local_5610;
    param_1[0x397] = local_5638;
    param_1[0x398] = local_55f4;
    param_1[0x395] = local_55ec;
    param_1[0x399] = local_88;
    param_1[0x39a] = pppppppuStack_84;
    *(undefined2 *)((int)param_1 + 0xe6e) = (undefined2)local_562c;
    *(undefined1 *)(param_1 + 0x39b) = local_80;
    uVar10 = 2;
    *(char *)((int)param_1 + 0xe6d) = (char)local_5600;
    *(byte *)(param_1 + 0x39d) = bVar20;
    param_1[0x39c] = local_55f0;
    goto LAB_014ec9b4;
  }
LAB_014ec908:
  uVar10 = 3;
  param_1[1] = local_55d4;
LAB_014ec9b4:
  *param_1 = uVar10;
  return;
}

