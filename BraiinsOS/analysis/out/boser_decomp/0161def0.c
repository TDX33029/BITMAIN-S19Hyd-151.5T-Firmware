// FUN_0161def0 @ 0161def0 size=3252 calls_out=19 calls_in=1
// strings: Invalid NLA for IFLA_AF_SPEC(AF_UNSPEC) | Invalid NLA for IFLA_AF_SPEC(AF_UNSPEC) | Invalid AF_INET NLA for IFLA_AF_SPEC(AF_UNSPEC) | IFLA_INET_CONF | Invalid NLA for IFLA_AF_SPEC(AF_UNSPEC) | Invalid AF_INET6 NLA for IFLA_AF_SPEC(AF_UNSPEC)

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0161def0(undefined4 *param_1,undefined4 param_2)

{
  char cVar1;
  short sVar2;
  ushort uVar3;
  undefined4 *puVar4;
  ushort *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  char *pcVar8;
  undefined4 ****ppppuVar9;
  undefined4 uVar10;
  int iVar11;
  undefined4 ***pppuVar12;
  undefined4 ***pppuVar13;
  undefined4 uVar14;
  undefined4 ***pppuVar15;
  undefined4 ***pppuVar16;
  undefined4 ***pppuVar17;
  undefined8 uVar18;
  undefined4 **local_4d4;
  undefined4 **local_4d0;
  undefined4 **local_4cc;
  undefined4 **local_4c8;
  undefined4 **local_4c4;
  undefined4 **local_4c0;
  undefined4 **local_4bc;
  undefined4 **local_4b8;
  undefined4 **local_4b4;
  undefined4 **local_4b0;
  undefined4 **local_4ac;
  undefined4 **local_4a8;
  undefined4 **local_4a4;
  undefined4 **local_4a0;
  undefined4 **local_49c;
  undefined4 **local_498;
  undefined4 **local_494;
  undefined4 **local_490;
  undefined4 **local_48c;
  undefined4 **local_488;
  undefined4 **local_484;
  undefined4 **local_480;
  undefined4 **local_47c;
  undefined4 **local_478;
  undefined4 **local_474;
  undefined4 **local_470;
  undefined4 **local_46c;
  undefined4 **local_468;
  undefined4 **local_464;
  undefined4 ***local_460;
  int local_458;
  int local_454;
  int local_450;
  undefined4 local_448;
  undefined4 local_444;
  undefined4 ***local_440;
  undefined4 ***pppuStack_43c;
  undefined4 ***pppuStack_438;
  undefined4 ***local_430;
  undefined4 uStack_42c;
  undefined4 uStack_428;
  undefined4 uStack_424;
  undefined4 ***local_420;
  undefined4 ***pppuStack_41c;
  undefined4 ***pppuStack_418;
  undefined4 ****local_410;
  undefined4 ***local_40c;
  undefined4 ***local_408;
  undefined4 ***pppuStack_404;
  undefined8 local_400;
  undefined4 ***local_3f8;
  undefined4 ***local_3f4;
  undefined4 ***local_3f0;
  undefined4 ***local_3ec;
  undefined1 auStack_3e8 [296];
  undefined4 ***local_2c0;
  undefined4 ***local_2bc;
  undefined4 ***local_2b8;
  undefined4 ***local_188;
  undefined4 ***local_184;
  undefined4 ***local_180;
  undefined4 ***pppuStack_17c;
  ushort local_60;
  char local_5e;
  undefined4 ***local_5c;
  undefined4 ***local_58;
  undefined4 ***local_54;
  undefined4 ***local_50;
  undefined4 local_4c;
  undefined4 ***local_48;
  undefined4 ***pppuStack_44;
  undefined4 ***pppuStack_40;
  undefined4 ***local_38;
  undefined4 ***local_34;
  undefined4 ***pppuStack_30;
  
  local_450 = 0;
  local_458 = 0;
  local_444 = 0;
  local_454 = 4;
  puVar4 = (undefined4 *)((uint)&local_2c0 | 4);
  puVar5 = (ushort *)((uint)&local_3f8 | 1);
  puVar6 = (undefined4 *)((uint)&local_430 | 4);
  local_448 = param_2;
  do {
    FUN_01623a48(&local_440,&local_448);
    if (local_440 == (undefined4 ***)&DAT_80000001) {
      param_1[1] = local_458;
      param_1[2] = local_454;
      param_1[3] = local_450;
      *param_1 = 0;
      return;
    }
    if (local_440 == (undefined4 ***)&DAT_80000000) {
      local_3f8 = local_440;
      local_3f4 = pppuStack_43c;
      local_3f0 = pppuStack_438;
    }
    else {
      local_2c0 = local_440;
      local_2bc = pppuStack_43c;
      local_2b8 = pppuStack_438;
      FUN_016403ac(&local_3f8,&local_2c0,"Invalid NLA for IFLA_AF_SPEC(AF_UNSPEC)",0x27);
    }
    pppuVar12 = local_3f0;
    pppuVar16 = local_3f4;
    if (local_3f8 != (undefined4 ***)&DAT_80000000) {
      param_1[1] = local_3f8;
      param_1[2] = local_3f4;
      *param_1 = 1;
      param_1[3] = local_3f0;
      goto LAB_0161e990;
    }
    sVar2 = FUN_01623bc0(local_3f4,local_3f0);
    if (sVar2 == 10) {
      uVar18 = FUN_01623bf0(pppuVar16,pppuVar12);
      local_400 = uVar18;
      FUN_01624310(&local_3f8,&local_400);
      if (local_3f8 == (undefined4 ***)&DAT_80000000) {
        local_188 = local_3f8;
        local_184 = local_3f4;
        local_180 = local_3f0;
      }
      else {
        local_2c0 = local_3f8;
        local_2bc = local_3f4;
        local_2b8 = local_3f0;
        FUN_016403ac(&local_188,&local_2c0,"Invalid NLA for IFLA_AF_SPEC(AF_UNSPEC)",0x27);
      }
      if (local_188 != (undefined4 ***)&DAT_80000000) {
        pppuVar16 = local_184;
        ppppuVar9 = (undefined4 ****)local_188;
        pppuVar12 = local_180;
LAB_0161e9e8:
        *param_1 = 1;
        param_1[1] = ppppuVar9;
        param_1[2] = pppuVar16;
        param_1[3] = pppuVar12;
LAB_0161e990:
        FUN_0161ecd8(&local_458);
        return;
      }
      iVar11 = 0;
      pppuVar16 = (undefined4 ***)&DAT_00000008;
      local_54 = (undefined4 ***)0x0;
      local_58 = (undefined4 ***)&DAT_00000008;
      local_5c = (undefined4 ***)0x0;
      local_4c = 0;
      local_50 = local_184;
      while( true ) {
        pppuVar12 = local_54;
        FUN_01623a48(&local_48,&local_50);
        if (local_48 == (undefined4 ***)&DAT_80000001) break;
        if (local_48 == (undefined4 ***)&DAT_80000000) {
          local_3f8 = local_48;
          local_3f4 = pppuStack_44;
          local_3f0 = pppuStack_40;
        }
        else {
          local_2c0 = local_48;
          local_2bc = pppuStack_44;
          local_2b8 = pppuStack_40;
          FUN_016403ac(&local_3f8,&local_2c0,"Invalid AF_INET6 NLA for IFLA_AF_SPEC(AF_UNSPEC)",0x30
                      );
        }
        pppuVar13 = local_3f4;
        pppuVar15 = local_3f0;
        pppuVar17 = local_3f8;
        if (local_3f8 != (undefined4 ***)&DAT_80000000) {
LAB_0161e8f4:
          FUN_016296c8(&local_5c);
          local_2c0 = pppuVar17;
          local_2bc = pppuVar13;
          local_2b8 = pppuVar15;
          FUN_016403ac(&local_40c,&local_2c0,"Invalid NLA for IFLA_AF_SPEC(AF_UNSPEC)",0x27);
          local_420 = local_40c;
          pppuStack_41c = local_408;
          local_3ec = pppuStack_404;
          goto LAB_0161e970;
        }
        FUN_01627814(&local_2c0,local_3f4,local_3f0);
        if ((char)local_2c0 == '\t') {
          local_38 = (undefined4 ***)*puVar4;
          local_34 = (undefined4 ***)puVar4[1];
          pppuStack_30 = (undefined4 ***)puVar4[2];
          FUN_016403ac((uint)&local_3f8 | 4,&local_38,
                       "Invalid AF_INET6 NLA for IFLA_AF_SPEC(AF_UNSPEC)",0x30);
LAB_0161e8e8:
          pppuVar13 = local_3f0;
          pppuVar15 = local_3ec;
          pppuVar17 = local_3f4;
          goto LAB_0161e8f4;
        }
        FUN_01bed4e2(&local_3f8,&local_2c0,0x138);
        pppuVar17 = local_3ec;
        pppuVar15 = local_3f0;
        pppuVar13 = local_3f4;
        cVar1 = (char)local_3f8;
        if ((char)local_3f8 == '\t') goto LAB_0161e8e8;
        local_5e = (char)puVar5[1];
        local_60 = *puVar5;
        FUN_01bed4e2(&local_188,auStack_3e8,0x128);
        if (pppuVar12 == local_5c) {
          FUN_0161d784(&local_5c);
          pppuVar16 = local_58;
        }
        pcVar8 = (char *)((int)pppuVar16 + iVar11);
        *pcVar8 = cVar1;
        *(ushort *)(pcVar8 + 1) = local_60;
        pcVar8[3] = local_5e;
        *(undefined4 ****)(pcVar8 + 4) = pppuVar13;
        *(undefined4 ****)(pcVar8 + 8) = pppuVar15;
        *(undefined4 ****)(pcVar8 + 0xc) = pppuVar17;
        FUN_01bed4e2(pcVar8 + 0x10,&local_188,0x128);
        local_54 = (undefined4 ***)((int)pppuVar12 + 1);
        iVar11 = iVar11 + 0x138;
      }
      local_40c = local_5c;
      local_408 = local_58;
      pppuStack_404 = pppuVar12;
      local_410 = (undefined4 ****)0x0;
      local_420 = local_5c;
      pppuStack_41c = local_58;
      pppuStack_418 = pppuVar12;
      *puVar6 = local_5c;
      puVar6[1] = local_58;
      puVar6[2] = pppuVar12;
      local_430 = (undefined4 ***)&DAT_80000001;
    }
    else if (sVar2 == 2) {
      uVar18 = FUN_01623bf0(pppuVar16,pppuVar12);
      local_400 = uVar18;
      FUN_01624310(&local_3f8,&local_400);
      if (local_3f8 == (undefined4 ***)&DAT_80000000) {
        local_410 = (undefined4 ****)local_3f8;
        local_40c = local_3f4;
        local_408 = local_3f0;
      }
      else {
        local_2c0 = local_3f8;
        local_2bc = local_3f4;
        local_2b8 = local_3f0;
        FUN_016403ac(&local_410,&local_2c0,"Invalid NLA for IFLA_AF_SPEC(AF_UNSPEC)",0x27);
      }
      if (local_410 != (undefined4 ****)&DAT_80000000) {
        pppuVar16 = local_40c;
        ppppuVar9 = local_410;
        pppuVar12 = local_408;
        goto LAB_0161e9e8;
      }
      local_460 = (undefined4 ***)&SUB_00000004;
      local_54 = (undefined4 ***)0x0;
      local_5c = (undefined4 ***)0x0;
      local_4c = 0;
      iVar11 = 0x84;
      local_58 = (undefined4 ***)&SUB_00000004;
      local_50 = local_40c;
      while( true ) {
        pppuVar16 = local_54;
        FUN_01623a48(&local_48,&local_50);
        if (local_48 == (undefined4 ***)&DAT_80000001) break;
        if (local_48 == (undefined4 ***)&DAT_80000000) {
          local_3f8 = local_48;
          local_3f4 = pppuStack_44;
          local_3f0 = pppuStack_40;
        }
        else {
          local_2c0 = local_48;
          local_2bc = pppuStack_44;
          local_2b8 = pppuStack_40;
          FUN_016403ac(&local_3f8,&local_2c0,"Invalid AF_INET NLA for IFLA_AF_SPEC(AF_UNSPEC)",0x2f)
          ;
        }
        pppuVar13 = local_3f0;
        pppuVar12 = local_3f4;
        pppuVar15 = local_3f8;
        if (local_3f8 != (undefined4 ***)&DAT_80000000) {
LAB_0161e938:
          FUN_016276b4(&local_5c);
          local_2c0 = pppuVar15;
          local_2bc = pppuVar12;
          local_2b8 = pppuVar13;
          FUN_016403ac(&local_184,&local_2c0,"Invalid NLA for IFLA_AF_SPEC(AF_UNSPEC)",0x27);
          local_420 = local_184;
          pppuStack_41c = local_180;
          local_3ec = pppuStack_17c;
LAB_0161e970:
          pppuVar16 = local_420;
          pppuVar12 = pppuStack_41c;
          pppuStack_418 = local_3ec;
          goto LAB_0161e980;
        }
        uVar18 = FUN_01623bf0(local_3f4,local_3f0);
        uVar3 = FUN_01623bc0(pppuVar12,pppuVar13);
        if (uVar3 == 1) {
          FUN_0161d058(&local_2c0,(int)uVar18,(int)((ulonglong)uVar18 >> 0x20),0x84,"IFLA_INET_CONF"
                       ,0xe);
          if (local_2b8 < &SUB_00000004) {
            uVar10 = 4;
            uVar14 = 0;
LAB_0161eb98:
                    /* WARNING: Subroutine does not return */
            FUN_012faff4(uVar14,uVar10,local_2b8,&DAT_01d061b8);
          }
          if (local_2b8 < &DAT_00000008) {
            uVar10 = 8;
            uVar14 = 4;
            goto LAB_0161eb98;
          }
          if (local_2b8 < &DAT_0000000c) {
            uVar10 = 0xc;
            uVar14 = 8;
            goto LAB_0161eb98;
          }
          if (local_2b8 < &DAT_00000010) {
            uVar10 = 0x10;
            uVar14 = 0xc;
            goto LAB_0161eb98;
          }
          if (local_2b8 < &DAT_00000014) {
            uVar10 = 0x14;
            uVar14 = 0x10;
            goto LAB_0161eb98;
          }
          if (local_2b8 < &DAT_00000018) {
            uVar10 = 0x18;
            uVar14 = 0x14;
            goto LAB_0161eb98;
          }
          if (local_2b8 < &DAT_0000001c) {
            uVar10 = 0x1c;
            uVar14 = 0x18;
            goto LAB_0161eb98;
          }
          if (local_2b8 < &DAT_00000020) {
            uVar10 = 0x20;
            uVar14 = 0x1c;
            goto LAB_0161eb98;
          }
          if (local_2b8 < &DAT_00000024) {
            uVar10 = 0x24;
            uVar14 = 0x20;
            goto LAB_0161eb98;
          }
          if (local_2b8 < &DAT_00000028) {
            uVar10 = 0x28;
            uVar14 = 0x24;
            goto LAB_0161eb98;
          }
          if (local_2b8 < &DAT_0000002c) {
            uVar10 = 0x2c;
            uVar14 = 0x28;
            goto LAB_0161eb98;
          }
          if (local_2b8 < &DAT_00000030) {
            uVar10 = 0x30;
            uVar14 = 0x2c;
            goto LAB_0161eb98;
          }
          if (local_2b8 < &DAT_00000034) {
            uVar10 = 0x34;
            uVar14 = 0x30;
            goto LAB_0161eb98;
          }
          if (local_2b8 < &DAT_00000038) {
            uVar10 = 0x38;
            uVar14 = 0x34;
            goto LAB_0161eb98;
          }
          if (local_2b8 < &DAT_0000003c) {
            uVar10 = 0x3c;
            uVar14 = 0x38;
            goto LAB_0161eb98;
          }
          if (local_2b8 < &DAT_00000040) {
            uVar10 = 0x40;
            uVar14 = 0x3c;
            goto LAB_0161eb98;
          }
          if (local_2b8 < &DAT_00000044) {
            uVar10 = 0x44;
            uVar14 = 0x40;
            goto LAB_0161eb98;
          }
          if (local_2b8 < &DAT_00000048) {
            uVar10 = 0x48;
            uVar14 = 0x44;
            goto LAB_0161eb98;
          }
          if (local_2b8 < &DAT_0000004c) {
            uVar10 = 0x4c;
            uVar14 = 0x48;
            goto LAB_0161eb98;
          }
          if (local_2b8 < &DAT_00000050) {
            uVar10 = 0x50;
            uVar14 = 0x4c;
            goto LAB_0161eb98;
          }
          if (local_2b8 < &DAT_00000054) {
            uVar10 = 0x54;
            uVar14 = 0x50;
            goto LAB_0161eb98;
          }
          if (local_2b8 < &DAT_00000058) {
            uVar10 = 0x58;
            uVar14 = 0x54;
            goto LAB_0161eb98;
          }
          if (local_2b8 < &DAT_0000005c) {
            uVar10 = 0x5c;
            uVar14 = 0x58;
            goto LAB_0161eb98;
          }
          if (local_2b8 < &DAT_00000060) {
            uVar10 = 0x60;
            uVar14 = 0x5c;
            goto LAB_0161eb98;
          }
          if (local_2b8 < &DAT_00000064) {
            uVar10 = 100;
            uVar14 = 0x60;
            goto LAB_0161eb98;
          }
          if (local_2b8 < &DAT_00000068) {
            uVar10 = 0x68;
            uVar14 = 100;
            goto LAB_0161eb98;
          }
          if (local_2b8 < &DAT_0000006c) {
            uVar10 = 0x6c;
            uVar14 = 0x68;
            goto LAB_0161eb98;
          }
          if (local_2b8 < &DAT_00000070) {
            uVar10 = 0x70;
            uVar14 = 0x6c;
            goto LAB_0161eb98;
          }
          if (local_2b8 < &DAT_00000074) {
            uVar10 = 0x74;
            uVar14 = 0x70;
            goto LAB_0161eb98;
          }
          if (local_2b8 < &DAT_00000078) {
            uVar10 = 0x78;
            uVar14 = 0x74;
            goto LAB_0161eb98;
          }
          if (local_2b8 < &DAT_0000007c) {
            uVar10 = 0x7c;
            uVar14 = 0x78;
            goto LAB_0161eb98;
          }
          if (local_2b8 < &DAT_00000080) {
            uVar10 = 0x80;
            uVar14 = 0x7c;
            goto LAB_0161eb98;
          }
          if (local_2b8 < &DAT_00000084) {
            uVar10 = 0x84;
            uVar14 = 0x80;
            goto LAB_0161eb98;
          }
          local_464 = local_2bc[4];
          local_468 = local_2bc[5];
          local_46c = local_2bc[6];
          local_470 = local_2bc[7];
          local_474 = local_2bc[8];
          local_478 = local_2bc[9];
          local_47c = local_2bc[10];
          local_480 = local_2bc[0xb];
          local_484 = local_2bc[0xc];
          local_488 = local_2bc[0xd];
          local_48c = local_2bc[0xe];
          local_490 = local_2bc[0xf];
          local_494 = local_2bc[0x10];
          local_498 = local_2bc[0x11];
          local_49c = local_2bc[0x12];
          local_4a0 = local_2bc[0x13];
          local_4a4 = local_2bc[0x14];
          local_4a8 = local_2bc[0x15];
          local_4ac = local_2bc[0x16];
          local_4b0 = local_2bc[0x17];
          local_4b4 = local_2bc[0x18];
          local_4b8 = local_2bc[0x19];
          local_4bc = local_2bc[0x1a];
          local_4c0 = local_2bc[0x1b];
          local_4c4 = local_2bc[0x1c];
          local_4c8 = local_2bc[0x1d];
          local_4cc = local_2bc[0x1e];
          local_4d0 = local_2bc[0x1f];
          local_4d4 = local_2bc[0x20];
          pppuVar17 = (undefined4 ***)*local_2bc;
          pppuVar12 = (undefined4 ***)local_2bc[1];
          pppuVar15 = (undefined4 ***)local_2bc[2];
          pppuVar13 = (undefined4 ***)local_2bc[3];
          FUN_0134bd64(local_2c0,local_2bc);
          uVar14 = 0;
        }
        else {
          local_60 = uVar3;
          FUN_01623ae4(&local_2c0,pppuVar12,pppuVar13);
          local_34 = (undefined4 ***)FUN_012fcf18;
          local_38 = (undefined4 ***)&local_60;
          FUN_00664898(&local_410,&DAT_0057f353,&local_38);
          local_38 = local_410;
          local_34 = local_40c;
          pppuStack_30 = local_408;
          FUN_0160f810(&local_3f8,&local_2c0,&local_38);
          if (local_3f8 == (undefined4 ***)&DAT_80000000) {
            pppuVar12 = local_3f0;
            pppuVar13 = local_3ec;
            pppuVar15 = local_3f4;
            goto LAB_0161e938;
          }
          uVar14 = 1;
          pppuVar12 = local_3f4;
          pppuVar13 = local_3ec;
          pppuVar15 = local_3f0;
          pppuVar17 = local_3f8;
        }
        if (pppuVar16 == local_5c) {
          FUN_0161d6c4(&local_5c);
          local_460 = local_58;
        }
        puVar7 = (undefined4 *)((int)local_460 + iVar11);
        *puVar7 = local_4d4;
        iVar11 = iVar11 + 0x88;
        puVar7[-1] = local_4d0;
        puVar7[-9] = local_4b0;
        puVar7[-8] = local_4b4;
        puVar7[-7] = local_4b8;
        puVar7[-6] = local_4bc;
        puVar7[-5] = local_4c0;
        puVar7[-4] = local_4c4;
        puVar7[-3] = local_4c8;
        puVar7[-2] = local_4cc;
        puVar7[-0x11] = local_490;
        puVar7[-0x10] = local_494;
        puVar7[-0xf] = local_498;
        puVar7[-0xe] = local_49c;
        puVar7[-0xd] = local_4a0;
        puVar7[-0xc] = local_4a4;
        puVar7[-0xb] = local_4a8;
        puVar7[-10] = local_4ac;
        puVar7[-0x19] = local_470;
        puVar7[-0x18] = local_474;
        puVar7[-0x17] = local_478;
        puVar7[-0x16] = local_47c;
        puVar7[-0x15] = local_480;
        puVar7[-0x14] = local_484;
        puVar7[-0x13] = local_488;
        puVar7[-0x12] = local_48c;
        puVar7[-0x1c] = local_464;
        puVar7[-0x1b] = local_468;
        puVar7[-0x20] = pppuVar17;
        puVar7[-0x21] = uVar14;
        puVar7[-0x1f] = pppuVar12;
        puVar7[-0x1e] = pppuVar15;
        puVar7[-0x1d] = pppuVar13;
        puVar7[-0x1a] = local_46c;
        local_54 = (undefined4 ***)((int)pppuVar16 + 1);
      }
      local_184 = local_5c;
      local_180 = local_58;
      pppuStack_17c = pppuVar16;
      local_188 = (undefined4 ***)0x0;
      local_420 = local_5c;
      pppuStack_41c = local_58;
      pppuStack_418 = pppuVar16;
      *puVar6 = local_5c;
      puVar6[1] = local_58;
      puVar6[2] = pppuVar16;
      local_430 = (undefined4 ***)&DAT_80000000;
    }
    else {
      local_48 = (undefined4 ***)CONCAT22(local_48._2_2_,sVar2);
      FUN_01623ae4(&local_2c0,pppuVar16,pppuVar12);
      local_40c = (undefined4 ***)FUN_012fcf18;
      local_410 = &local_48;
      FUN_00664898(&local_188,&DAT_0059a34f,&local_410);
      local_410 = (undefined4 ****)local_188;
      local_40c = local_184;
      local_408 = local_180;
      FUN_0160f810(&local_3f8,&local_2c0,&local_410);
      local_38 = local_3f4;
      local_34 = local_3f0;
      pppuStack_30 = local_3ec;
      if (local_3f8 == (undefined4 ***)&DAT_80000000) {
        pppuVar16 = local_3f4;
        pppuVar12 = local_3f0;
LAB_0161e980:
        param_1[1] = pppuVar16;
        param_1[2] = pppuVar12;
        param_1[3] = local_3ec;
        *param_1 = 1;
        goto LAB_0161e990;
      }
      *puVar6 = local_3f4;
      puVar6[1] = local_3f0;
      puVar6[2] = local_3ec;
      local_430 = local_3f8;
    }
    iVar11 = local_450;
    if (local_450 == local_458) {
      FUN_018fa978(&local_458);
    }
    puVar7 = (undefined4 *)(local_454 + iVar11 * 0x10);
    *puVar7 = local_430;
    puVar7[1] = uStack_42c;
    puVar7[2] = uStack_428;
    puVar7[3] = uStack_424;
    local_450 = iVar11 + 1;
  } while( true );
}

