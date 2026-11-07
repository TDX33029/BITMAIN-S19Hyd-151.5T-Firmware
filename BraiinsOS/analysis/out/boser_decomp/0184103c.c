// FUN_0184103c @ 0184103c size=7744 calls_out=52 calls_in=0
// strings: tunneling HTTPS over proxy | tunneling HTTPS over proxy | no host in url | no host in url

void FUN_0184103c(undefined8 *param_1,uint *param_2,undefined4 *param_3)

{
  code *pcVar1;
  byte bVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  uint ****ppppuVar5;
  undefined *puVar6;
  int *piVar7;
  uint *puVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  int iVar11;
  uint ***pppuVar12;
  uint ****ppppuVar13;
  uint ****ppppuVar14;
  uint ****ppppuVar15;
  uint ****ppppuVar16;
  uint *puVar17;
  char cVar18;
  undefined1 *puVar19;
  uint ****unaff_r7;
  uint ****unaff_r9;
  ushort uVar20;
  uint uVar21;
  char cVar22;
  uint uVar23;
  bool bVar24;
  undefined8 uVar25;
  longlong lVar26;
  uint ***local_3afc;
  uint ****local_3af8;
  undefined1 *local_3af4;
  uint ****local_3af0;
  uint *local_3ae4;
  undefined1 auStack_3ad8 [2216];
  uint *local_3230;
  undefined1 *local_322c;
  uint *local_3228;
  undefined1 *local_3224;
  char local_3220;
  undefined4 local_2938;
  uint ****local_2934;
  undefined4 local_2930;
  int *piStack_292c;
  uint ***local_2928 [16];
  undefined1 auStack_28e8 [72];
  uint local_28a0;
  uint uStack_289c;
  uint uStack_2898;
  uint uStack_2894;
  uint uStack_2890;
  uint local_288c;
  uint uStack_2888;
  uint uStack_2884;
  uint ****ppppuStack_2880;
  uint uStack_287c;
  uint ****ppppuStack_2878;
  uint local_2040;
  uint uStack_203c;
  uint uStack_2038;
  uint local_2034;
  uint uStack_2030;
  uint local_202c;
  uint uStack_2028;
  uint uStack_2024;
  uint ****ppppuStack_2020;
  uint uStack_201c;
  uint ****ppppuStack_2018;
  uint ***local_2010;
  uint uStack_200c;
  uint uStack_2008;
  uint local_2004;
  uint uStack_2000;
  uint uStack_1ffc;
  uint uStack_1ff8;
  uint ***local_1ff0;
  uint uStack_1fec;
  uint uStack_1fe8;
  uint uStack_1fe4;
  uint uStack_1fe0;
  uint ****local_1fd8 [4];
  undefined1 auStack_1fc8 [728];
  uint local_1cf0;
  uint uStack_1cec;
  uint uStack_1ce8;
  uint uStack_1ce4;
  uint uStack_1ce0;
  uint local_1cdc;
  uint uStack_1cd8;
  uint uStack_1cd4;
  uint ****ppppuStack_1cd0;
  uint uStack_1ccc;
  uint ****ppppuStack_1cc8;
  undefined4 local_1a18;
  undefined4 uStack_1a14;
  undefined4 uStack_1a10;
  undefined2 local_1a0c;
  undefined1 local_1a0a;
  uint ****local_1a08;
  uint ****local_1a04;
  uint ****local_1a00;
  int *piStack_19fc;
  uint ***local_19f8;
  uint *local_19f4;
  undefined8 local_19f0;
  uint ****local_19e8;
  uint ****ppppuStack_19e4;
  uint ****local_19e0;
  uint ****local_19dc;
  uint ****ppppuStack_19d8;
  uint ****ppppuStack_19d4;
  uint local_19d0;
  uint ****ppppuStack_19cc;
  uint ****local_1448;
  uint ****local_1444;
  uint ****local_1440;
  undefined1 *local_143c;
  uint local_1438;
  uint local_1434;
  undefined8 local_1430;
  uint ****local_1428;
  uint ****ppppuStack_1424;
  uint ****local_1420;
  uint ****local_141c;
  uint ****ppppuStack_1418;
  uint ****ppppuStack_1414;
  uint local_1410;
  undefined4 uStack_140c;
  uint ****local_e88;
  uint ****local_e84;
  uint ****local_e80;
  int *local_e7c;
  uint ***local_e78;
  uint *local_e74;
  undefined4 local_e70;
  undefined4 local_e6c;
  uint ****local_e68;
  uint ****local_e64;
  uint ****local_e60;
  uint ****local_e5c;
  uint ****ppppuStack_e58;
  uint ****ppppuStack_e54;
  uint local_e50;
  uint ****ppppuStack_e4c;
  uint ****local_8d0;
  uint ****local_8cc;
  uint ****ppppuStack_8c8;
  undefined1 *puStack_8c4;
  uint uStack_8c0;
  uint local_8bc;
  undefined4 local_8b8;
  undefined4 local_8b4;
  uint ****local_8b0;
  uint ****local_8ac;
  uint ****local_8a8;
  uint ****local_8a4;
  uint ****ppppuStack_8a0;
  uint ****ppppuStack_89c;
  uint local_898;
  undefined4 uStack_894;
  uint ****local_318;
  uint ****local_314;
  uint ****local_310;
  int *local_30c;
  uint ***local_308 [185];
  
  local_3ae4 = param_2 + 0x27c;
  uVar20 = (ushort)&local_1440;
  ppppuVar5 = (uint ****)&local_1448;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_2[0x22e]) {
  case '\0':
    FUN_01bed4e2(auStack_3ad8,param_2 + 4,0x8a8);
    unaff_r7 = (uint ****)param_2[2];
    if (unaff_r7 != (uint ****)&DAT_3b9aca00) {
      uVar21 = *param_2;
      uVar23 = param_2[1];
      FUN_019ac130(&local_1448,1);
      puVar19 = (undefined1 *)((int)local_1448 + uVar21);
      ppppuVar5 = (uint ****)((int)local_1444 + CARRY4((uint)local_1448,uVar21) + uVar23);
      ppppuVar16 = (uint ****)&DAT_3b9ac9ff;
      if ((int)uVar23 < 0 ==
          (int)(((uint)local_1444 ^ (uint)ppppuVar5) & ~((uint)local_1444 ^ uVar23)) < 0) {
        unaff_r7 = (uint ****)((int)local_1440 + (int)unaff_r7);
        if (&DAT_3b9aca00 <= unaff_r7) {
          bVar24 = (undefined1 *)0xfffffffe < puVar19;
          puVar19 = puVar19 + 1;
          ppppuVar16 = (uint ****)((int)ppppuVar5 + (uint)bVar24);
          if ((int)(((uint)ppppuVar5 ^ (uint)ppppuVar16) & ~(uint)ppppuVar5) < 0) goto LAB_018412c4;
          unaff_r7 = unaff_r7 + -250000000;
          ppppuVar5 = ppppuVar16;
        }
        uVar25 = FUN_019ef7f4(&DAT_01d1e970);
        uVar9 = (undefined4)((ulonglong)uVar25 >> 0x20);
        FUN_019dc4f8(&local_1448,(int)uVar25,uVar9,uVar9,puVar19,ppppuVar5,unaff_r7,&DAT_01d1e970);
      }
      else {
LAB_018412c4:
        ppppuVar5 = ppppuVar16;
        FUN_019e6e14(&local_1448);
      }
      FUN_01bed4e2(auStack_28e8,auStack_3ad8,0x8a8);
      FUN_01bed4e2(&local_2938,&local_1448,0x50);
      FUN_01bed4e2(&local_3230,&local_2938,0x8f8);
      FUN_01bed4e2(param_2 + 0x230,&local_3230,0x8f8);
      unaff_r9 = (uint ****)&local_1448;
      goto switchD_01841084_caseD_3;
    }
    FUN_01bed4e2(param_2 + 0x230,param_2 + 4,0x8a8);
    break;
  case '\x01':
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01d1e980);
  case '\x02':
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01d1e980);
  case '\x03':
switchD_01841084_caseD_3:
    bVar2 = FUN_019ec70c();
    uVar20 = (ushort)(bVar2 == 2 | bVar2);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0x2f6]) {
    case '\0':
      *(undefined4 *)((int)param_2 + 0xbd9) = 0;
      *(undefined2 *)((int)param_2 + 0xbda) = 0x101;
      param_2[0x2f7] = 0;
      *(undefined1 *)(param_2 + 0x2f8) = 1;
      FUN_01bed4e2(param_2 + 0x27e,param_2 + 0x26c,0x48);
      ppppuVar16 = (uint ****)(param_2 + 0x2e5);
      *ppppuVar16 = (uint ***)param_2[0x2da];
      param_2[0x2e6] = param_2[0x2db];
      param_2[0x2e7] = param_2[0x2dc];
      param_2[0x2e8] = param_2[0x2dd];
      param_2[0x2e9] = param_2[0x2de];
      param_2[0x2ea] = param_2[0x2df];
      param_2[0x2eb] = param_2[0x2e0];
      param_2[0x2ec] = param_2[0x2e1];
      param_2[0x2ed] = param_2[0x2e2];
      param_2[0x2ee] = param_2[0x2e3];
      param_2[0x2ef] = param_2[0x2e4];
      ppppuVar14 = (uint ****)(param_2 + 0x290);
      FUN_01bed4e2(ppppuVar14,param_2 + 0x244,0xa0);
      if (3 < DAT_01d51b00) {
        local_1444 = (uint ****)&LAB_01857d08;
        local_143c = &LAB_0141556c;
        local_2938 = (uint ****)&DAT_005696f8;
        local_2934 = (uint ****)&DAT_00000010;
        local_2930 = (uint ****)&DAT_005696f8;
        local_2928[0] = (uint ***)&DAT_01d1e9a0;
        piStack_292c = (int *)&DAT_00000010;
        local_1448 = ppppuVar14;
        local_1440 = ppppuVar16;
        FUN_015fb650(&DAT_0059d7c1,&local_1448,4,&local_2938);
      }
      FUN_017970c4(&local_2040,param_2 + 0x2ac);
      *(undefined1 *)((int)param_2 + 0xbdf) = 1;
      if ((char)param_2[0x2a4] == '\x02') {
        if (param_2[0x2a6] == 0x80000001) {
          puVar8 = param_2 + 0x2a7;
          goto LAB_018417a8;
        }
        *(undefined1 *)(param_2 + 0x2f4) = 2;
      }
      else {
        puVar8 = param_2 + 0x2a0;
LAB_018417a8:
        (**(code **)*puVar8)(&local_2938,puVar8 + 3,puVar8[1],puVar8[2]);
        local_2928[0] = (uint ***)CONCAT31(local_2928[0]._1_3_,(char)puVar8[4]);
        param_2[0x2f0] = (uint)local_2938;
        param_2[0x2f1] = (uint)local_2934;
        param_2[0x2f2] = (uint)local_2930;
        param_2[0x2f3] = (uint)piStack_292c;
        param_2[0x2f4] = (uint)local_2928[0];
      }
      local_3af8 = (uint ****)(param_2 + 0x2f0);
      local_3afc = *ppppuVar14;
      uVar21 = param_2[0x291];
      *(undefined1 *)((int)param_2 + 0xbde) = 1;
      param_2[0x2f5] = (uint)(param_2 + 0x28c);
      if (((char)param_2[0x2e5] == '\0') ||
         (iVar11 = FUN_014146a0(ppppuVar16,&DAT_00570360), iVar11 == 0)) {
        *(undefined2 *)((int)param_2 + 0xbda) = 0;
        *(undefined1 *)(param_2 + 0x2f8) = 0;
        FUN_01bed4e2(&local_2938,param_2 + 0x27e,0x48);
        *(undefined1 *)((int)param_2 + 0xbdf) = 0;
        unaff_r9 = (uint ****)&DAT_00000001;
        local_28a0 = local_2040;
        uStack_289c = uStack_203c;
        uStack_2898 = uStack_2038;
        uStack_2894 = local_2034;
        uStack_2890 = uStack_2030;
        local_288c = local_202c;
        uStack_2888 = uStack_2028;
        uStack_2884 = uStack_2024;
        ppppuStack_2880 = ppppuStack_2020;
        uStack_287c = uStack_201c;
        ppppuStack_2878 = ppppuStack_2018;
        FUN_01bed4e2(&local_1448,&local_2938,0x128);
        FUN_01bed4e2(param_2 + 0x2fa,&local_1448,0x128);
        *(undefined2 *)(param_2 + 0x344) = 1;
        ppppuVar5 = ppppuStack_2020;
        unaff_r7 = ppppuStack_2018;
        goto switchD_018415b0_caseD_5;
      }
      if (4 < DAT_01d51b00) {
        local_2938 = (uint ****)&DAT_005696f8;
        local_2934 = (uint ****)&DAT_00000010;
        piStack_292c = (int *)&DAT_00000010;
        local_2930 = (uint ****)&DAT_005696f8;
        local_2928[0] = (uint ***)&DAT_01d1e9b0;
        FUN_015fb650("tunneling HTTPS over proxy",0x35,5,&local_2938);
      }
      ppppuVar5 = (uint ****)param_2[0x289];
      do {
        pppuVar12 = *ppppuVar5;
        bVar24 = (bool)hasExclusiveAccess(ppppuVar5);
      } while (!bVar24);
      *ppppuVar5 = (uint ***)((int)pppuVar12 + 1);
      local_1430 = CONCAT44(local_1430._4_4_,(undefined4)local_1430);
      local_19f0 = CONCAT44(local_19f0._4_4_,(undefined4)local_19f0);
      if ((int)pppuVar12 < 0) goto LAB_01842f3c;
      ppppuVar13 = (uint ****)param_2[0x28a];
      do {
        pppuVar12 = *ppppuVar13;
        bVar24 = (bool)hasExclusiveAccess(ppppuVar13);
      } while (!bVar24);
      *ppppuVar13 = (uint ***)((int)pppuVar12 + 1);
      local_1430 = CONCAT44(local_1430._4_4_,(undefined4)local_1430);
      local_19f0 = CONCAT44(local_19f0._4_4_,(undefined4)local_19f0);
      if ((int)pppuVar12 < 0) goto LAB_01842f3c;
      ppppuVar15 = (uint ****)param_2[0x28b];
      piVar7 = (int *)param_2[0x28d];
      do {
        iVar11 = *piVar7;
        bVar24 = (bool)hasExclusiveAccess(piVar7);
      } while (!bVar24);
      *piVar7 = iVar11 + 1;
      local_1430 = CONCAT44(local_1430._4_4_,(undefined4)local_1430);
      local_19f0 = CONCAT44(local_19f0._4_4_,(undefined4)local_19f0);
      if (iVar11 < 0) goto LAB_01842f3c;
      local_2938 = ppppuVar5;
      local_2934 = ppppuVar13;
      local_2930 = ppppuVar15;
      piStack_292c = piVar7;
      FUN_01823d18(&local_2010,&local_2938);
      *(undefined1 *)((int)param_2 + 0xbdf) = 0;
      unaff_r9 = (uint ****)(param_2 + 0x2b8);
      *unaff_r9 = (uint ***)0x3;
      param_2[0x2b9] = 0;
      param_2[0x2c8] = (uint)local_2010;
      param_2[0x2c9] = uStack_200c;
      param_2[0x2ca] = uStack_2008;
      param_2[0x2cb] = local_2004;
      param_2[0x2cc] = uStack_2000;
      param_2[0x2cd] = uStack_1ffc;
      param_2[0x2ce] = uStack_1ff8;
      param_2[0x2cf] = local_2040;
      param_2[0x2d0] = uStack_203c;
      param_2[0x2d1] = uStack_2038;
      param_2[0x2d2] = local_2034;
      param_2[0x2d3] = uStack_2030;
      param_2[0x2d4] = local_202c;
      param_2[0x2d5] = uStack_2028;
      param_2[0x2d6] = uStack_2024;
      param_2[0x2d7] = (uint)ppppuStack_2020;
      param_2[0x2d8] = uStack_201c;
      param_2[0x2d9] = (uint)ppppuStack_2018;
      *(undefined1 *)((int)param_2 + 0xbdd) = 1;
      ppppuVar5 = ppppuStack_2020;
      unaff_r7 = ppppuStack_2018;
      if ((char)param_2[0x2f4] != '\x02') {
        *(undefined1 *)((int)param_2 + 0xbde) = 0;
        local_1ff0 = *local_3af8;
        uStack_1fec = param_2[0x2f1];
        uStack_1fe8 = param_2[0x2f2];
        uStack_1fe4 = param_2[0x2f3];
        uStack_1fe0 = param_2[0x2f4];
        unaff_r7 = (uint ****)&local_2938;
        *(undefined1 *)((int)param_2 + 0xbdd) = 0;
        FUN_01bed4e2(unaff_r7,unaff_r9,0x88);
        FUN_0182cc98(&local_1448,unaff_r7,&local_1ff0);
        *(undefined1 *)((int)param_2 + 0xbdd) = 1;
        FUN_01bed4e2(unaff_r9,&local_1448,0x88);
        ppppuVar5 = local_3af8;
      }
      if (local_3afc != (uint ***)0x3 || uVar21 != 0) {
        *(undefined1 *)((int)param_2 + 0xbdd) = 0;
        FUN_01bed4e2(&local_2938,unaff_r9,0x88);
        uVar21 = param_2[0x29e];
        uVar25 = FUN_01ac635c(param_2[0x296],param_2[0x297]);
        FUN_0187b658(&local_318,param_2[0x299],param_2[0x29a]);
        unaff_r7 = (uint ****)&local_e88;
        piVar7 = (int *)0x1841f8c;
        FUN_017260a4(unaff_r7,param_2[0x29c],param_2[0x29d]);
        ppppuVar5 = local_e84;
        if (*ppppuVar14 == (uint ***)0x0) {
          local_1a08 = (uint ****)0x0;
        }
        else if (*ppppuVar14 == (uint ***)0x2) {
          local_1a08 = (uint ****)0x2;
          piVar7 = (int *)param_2[0x293];
          local_3af8 = (uint ****)param_2[0x292];
          local_3afc = (uint ***)param_2[0x294];
          local_3ae4 = (uint *)param_2[0x295];
        }
        else {
          local_1a08 = (uint ****)&DAT_00000001;
        }
        local_19d0 = CONCAT22(local_19d0._2_2_,(short)uVar21);
        local_19e8 = local_318;
        ppppuStack_19e4 = local_314;
        local_19e0 = local_310;
        local_19dc = local_e88;
        ppppuStack_19d8 = local_e84;
        ppppuStack_19d4 = local_e80;
        local_1a00 = local_3af8;
        local_19f8 = local_3afc;
        local_19f4 = local_3ae4;
        local_1a04 = (uint ****)0x0;
        piStack_19fc = piVar7;
        local_19f0 = uVar25;
        FUN_0182c2a4(&local_1448,&local_2938);
        *(undefined1 *)((int)param_2 + 0xbdd) = 1;
        FUN_01bed4e2(unaff_r9,&local_1448,0x88);
      }
      if ((char)param_2[0x288] != '\x02') {
        *(undefined1 *)(param_2 + 0x2f8) = 0;
        local_2938 = (uint ****)param_2[0x284];
        local_2934 = (uint ****)param_2[0x285];
        local_2930 = (uint ****)param_2[0x286];
        piStack_292c = (int *)param_2[0x287];
        local_2928[0] = (uint ***)param_2[0x288];
        local_e88 = (uint ****)0x0;
        local_e84 = (uint ****)0x0;
        local_e70 = 2;
        local_e50 = local_e50 & 0xffff0000;
        local_e6c = 0;
        local_e68 = (uint ****)0x0;
        local_e64 = (uint ****)&SUB_00000004;
        ppppuStack_e54 = (uint ****)0x0;
        ppppuStack_e58 = (uint ****)&SUB_00000004;
        local_e60 = (uint ****)0x0;
        local_e5c = (uint ****)0x0;
        local_1a08 = (uint ****)0x0;
        local_1a04 = (uint ****)0x46;
        local_1a00 = (uint ****)0x0;
        piStack_19fc = (int *)0x0;
        FUN_0141d310(&local_1448,&local_e88,&local_1a08,&local_2938);
        if ((char)local_1438 != '\x02') {
          (*(code *)local_1448[4])(&local_143c,local_1444,local_1440);
        }
        *(undefined1 *)((int)param_2 + 0xbdd) = 0;
        FUN_01bed4e2(&local_2938,unaff_r9,0x88);
        ppppuVar5 = ppppuStack_e58;
        local_1a08 = local_e88;
        local_1a04 = local_e84;
        local_1a00 = local_e80;
        piStack_19fc = local_e7c;
        local_19f8 = local_e78;
        local_19f4 = local_e74;
        local_19f0._0_4_ = local_e70;
        local_19f0._4_4_ = local_e6c;
        local_19e8 = local_e68;
        ppppuStack_19e4 = local_e64;
        local_19e0 = local_e60;
        local_19dc = local_e5c;
        ppppuStack_19d8 = ppppuStack_e58;
        ppppuStack_19d4 = ppppuStack_e54;
        local_19d0 = local_e50;
        ppppuStack_19cc = ppppuStack_e4c;
        FUN_0182c2a4(&local_1448,&local_2938);
        *(undefined1 *)((int)param_2 + 0xbdd) = 1;
        FUN_01bed4e2(unaff_r9,&local_1448,0x88);
        unaff_r7 = ppppuStack_e4c;
      }
      FUN_017970c4(&local_2938,ppppuVar16);
      uVar21 = FUN_0182ce28(unaff_r9,&local_2938);
      param_2[0x2fa] = uVar21;
      puVar6 = &DAT_01d1e344;
      param_2[0x2fb] = (uint)&DAT_01d1e344;
      break;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01d1e9c0);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01d1e9c0);
    case '\x03':
      uVar21 = param_2[0x2fa];
      puVar6 = (undefined *)param_2[0x2fb];
      break;
    case '\x04':
      goto LAB_01841734;
    case '\x05':
switchD_018415b0_caseD_5:
      uVar3 = SUB41(unaff_r7,0);
      FUN_01832ffc(&local_2938,param_2 + 0x2fa,param_3);
      uVar25 = CONCAT44(local_2934,local_2938);
      cVar22 = local_2930._1_1_;
      if (local_2930._1_1_ == '\x03') {
        uVar4 = 5;
        goto LAB_018428b0;
      }
      uVar20 = local_2930._2_2_;
      uVar3 = SUB41(local_2930,0);
      FUN_0182f884(param_2 + 0x2fa);
      if ((char)param_2[0x2f4] != '\x02') {
        (**(code **)(param_2[0x2f0] + 0x10))(param_2 + 0x2f3,param_2[0x2f1],param_2[0x2f2]);
      }
      *(undefined2 *)((int)param_2 + 0xbde) = 0;
      FUN_0182ff70(param_2 + 0x290);
      FUN_01435814(param_2 + 0x2e5);
      *(undefined2 *)((int)param_2 + 0xbda) = 0;
      goto LAB_01842af0;
    }
    (**(code **)(puVar6 + 0xc))(&local_2938,uVar21,param_3);
    ppppuVar16 = local_2938;
    if (local_2938 == (uint ****)&SUB_00000004) {
      uVar4 = 3;
LAB_018428ac:
      uVar3 = SUB41(unaff_r7,0);
LAB_018428b0:
      uVar25 = CONCAT44(unaff_r9,ppppuVar5);
      *(undefined1 *)(param_2 + 0x2f6) = uVar4;
      iVar11 = FUN_019ee264(bVar2 == 2 | bVar2 & 1,param_2 + 0x230,*param_3);
      if (iVar11 != 0) {
        uVar3 = 3;
        *(undefined1 *)((int)param_1 + 9) = 3;
        goto LAB_01842b44;
      }
      cVar22 = '\x03';
    }
    else {
      puVar10 = (undefined4 *)((uint)&local_2938 | 4);
      local_1a18 = *puVar10;
      uStack_1a14 = puVar10[1];
      uStack_1a10 = puVar10[2];
      FUN_01bed4e2(&local_1cf0,local_2928,0x2d8);
      FUN_017ce5f0(param_2[0x2fa],param_2[0x2fb]);
      if (ppppuVar16 == (uint ****)&DAT_00000003) {
        uVar9 = FUN_0183a478(&local_1a18);
        cVar22 = '\x02';
        uVar25 = CONCAT44(&DAT_01d1e5e0,uVar9);
      }
      else {
        FUN_01bed4e2(auStack_1fc8,&local_1cf0,0x2d8);
        puVar10 = (undefined4 *)((uint)local_1fd8 | 4);
        uVar9 = 1;
        *puVar10 = local_1a18;
        puVar10[1] = uStack_1a14;
        puVar10[2] = uStack_1a10;
        local_1fd8[0] = ppppuVar16;
        *(undefined1 *)((int)param_2 + 0xbd9) = 1;
        if (param_2[0x2e9] == 0) {
LAB_018429cc:
          ppppuVar5 = (uint ****)&DAT_0000000e;
          iVar11 = thunk_FUN_01be5118(0xe);
          if (iVar11 == 0) {
LAB_018429bc:
                    /* WARNING: Subroutine does not return */
            FUN_00664620(uVar9,ppppuVar5);
          }
          FUN_01bed4e2(iVar11,"no host in url",0xe);
          puVar10 = (undefined4 *)thunk_FUN_01be5118(0xc);
          if (puVar10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0066439c(4,0xc);
          }
          cVar22 = '\x02';
          *puVar10 = 0xe;
          puVar10[1] = iVar11;
          uVar25 = CONCAT44(&DAT_01d1e4a4,puVar10);
          puVar10[2] = 0xe;
        }
        else {
          lVar26 = FUN_01415984(param_2[0x2e8]);
          ppppuVar5 = (uint ****)((ulonglong)lVar26 >> 0x20);
          iVar11 = (int)lVar26;
          if (iVar11 == 0) goto LAB_018429cc;
          uVar9 = 0;
          if (lVar26 < 0) goto LAB_018429bc;
          if (ppppuVar5 == (uint ****)0x0) {
            uVar21 = 1;
            FUN_01bed4e2(1,iVar11,0);
            ppppuVar16 = (uint ****)0x0;
            ppppuVar14 = (uint ****)&DAT_00000001;
            param_2[0x2fa] = 0;
            param_2[0x2fb] = 1;
            param_2[0x2fc] = 0;
          }
          else {
            uVar9 = 1;
            uVar21 = FUN_01298504(ppppuVar5,1);
            if (uVar21 == 0) goto LAB_018429bc;
            FUN_01bed4e2(uVar21,iVar11,ppppuVar5);
            param_2[0x2fa] = (uint)ppppuVar5;
            param_2[0x2fb] = uVar21;
            param_2[0x2fc] = (uint)ppppuVar5;
            ppppuVar14 = (uint ****)FUN_01298504(ppppuVar5,1);
            ppppuVar16 = ppppuVar5;
            if (ppppuVar14 == (uint ****)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_00664620(1,ppppuVar5);
            }
          }
          FUN_01bed4e2(ppppuVar14,uVar21,ppppuVar5);
          local_1448 = ppppuVar16;
          local_1444 = ppppuVar14;
          local_1440 = ppppuVar5;
          FUN_01938bd0(&local_2938,&local_1448);
          ppppuVar5 = local_2930;
          if ((char)local_2938 == '\x02') {
            iVar11 = thunk_FUN_01be5118(0x13);
            if (iVar11 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00664620(1,0x13);
            }
            FUN_01bed4e2(iVar11,&DAT_0050d758,0x13);
            puVar10 = (undefined4 *)thunk_FUN_01be5118(0xc);
            if (puVar10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_0066439c(4,0xc);
            }
            *puVar10 = 0x13;
            puVar10[1] = iVar11;
            uVar25 = CONCAT44(&DAT_01d1e4a4,puVar10);
            puVar10[2] = 0x13;
LAB_01841894:
            cVar22 = '\x02';
          }
          else {
            local_1a0a = local_2938._3_1_;
            *(undefined1 *)(param_2 + 0x2f7) = 1;
            piVar7 = *(int **)param_2[0x2f5];
            local_1a0c = local_2938._1_2_;
            do {
              iVar11 = *piVar7;
              bVar24 = (bool)hasExclusiveAccess(piVar7);
            } while (!bVar24);
            *piVar7 = iVar11 + 1;
            local_1430 = CONCAT44(local_1430._4_4_,(undefined4)local_1430);
            if (iVar11 < 0) goto LAB_01842f3c;
            param_2[0x2fd] = (uint)piVar7;
            *(undefined1 *)(param_2 + 0x2f7) = 0;
            local_30c = piStack_292c;
            local_308[0] = local_2928[0];
            local_314 = local_2934;
            local_318 = local_2938;
            local_310 = local_2930;
            *(undefined1 *)((int)param_2 + 0xbd9) = 0;
            FUN_01bed4e2(&local_e88,local_1fd8,0x2e8);
            FUN_0182a294(&local_2938,piVar7,&local_318,&local_e88);
            FUN_01bed4e2(&local_1448,&local_2938,0x5c0);
            FUN_01bed4e2(param_2 + 0x2fe,&local_1448,0x5c0);
LAB_01841734:
            unaff_r7 = (uint ****)&local_2938;
            FUN_0182b950(unaff_r7,param_2 + 0x2fe,param_3);
            ppppuVar13 = local_2930;
            ppppuVar14 = local_2934;
            ppppuVar16 = local_2938;
            if (local_2938 == (uint ****)&DAT_00000003) {
              uVar4 = 4;
              goto LAB_018428ac;
            }
            if (local_2938 == (uint ****)0x2) {
              FUN_01bed4e2(&local_318,&local_2930,0x2f0);
              ppppuVar13 = local_314;
              ppppuVar14 = local_318;
              FUN_0182c114(&local_310);
            }
            else {
              FUN_01bed4e2(&local_e88,&piStack_292c,0x5b4);
            }
            FUN_01bed4e2(&local_8d0,&local_e88,0x5b4);
            FUN_0182c044(param_2 + 0x2fe);
            if (ppppuVar16 == (uint ****)0x2) {
              local_2938 = ppppuVar14;
              local_2934 = ppppuVar13;
              uVar25 = FUN_0142322c(&local_2938);
              piVar7 = (int *)param_2[0x2fd];
              DataMemoryBarrier(0xb);
              do {
                iVar11 = *piVar7;
                bVar24 = (bool)hasExclusiveAccess(piVar7);
              } while (!bVar24);
              *piVar7 = iVar11 + -1;
              if (iVar11 == 1) {
                DataMemoryBarrier(0xb);
                FUN_018fa168(param_2[0x2fd]);
              }
              goto LAB_01841894;
            }
            FUN_01bed4e2(&piStack_19fc,&local_8d0,0x5b4);
            piVar7 = (int *)param_2[0x2fd];
            local_1a08 = ppppuVar16;
            DataMemoryBarrier(0xb);
            do {
              iVar11 = *piVar7;
              bVar24 = (bool)hasExclusiveAccess(piVar7);
            } while (!bVar24);
            *piVar7 = iVar11 + -1;
            local_1a04 = ppppuVar14;
            local_1a00 = ppppuVar13;
            if (iVar11 == 1) {
              DataMemoryBarrier(0xb);
              FUN_018fa168(param_2[0x2fd]);
            }
            FUN_01bed4e2(&local_2938,&local_1a08,0x5c0);
            uVar25 = FUN_0183dbc0((char)param_2[0x28f],&local_2938);
            cVar22 = '\0';
          }
          *(undefined1 *)(param_2 + 0x2f7) = 0;
          FUN_019bb7e0(param_2[0x2fa],param_2[0x2fb]);
        }
        if (*(char *)((int)param_2 + 0xbd9) != '\0') {
          FUN_0182c114(local_1fd8);
        }
      }
      *(undefined1 *)((int)param_2 + 0xbd9) = 0;
      FUN_0182cde0(param_2 + 0x2b8);
      *(undefined1 *)((int)param_2 + 0xbdf) = 0;
      *(undefined2 *)((int)param_2 + 0xbdd) = 0;
      FUN_0182ff70(param_2 + 0x290);
      FUN_01435814(param_2 + 0x2e5);
      FUN_0182a8d4(param_2 + 0x289);
      piVar7 = (int *)param_2[0x28e];
      DataMemoryBarrier(0xb);
      do {
        iVar11 = *piVar7;
        bVar24 = (bool)hasExclusiveAccess(piVar7);
      } while (!bVar24);
      *piVar7 = iVar11 + -1;
      if (iVar11 == 1) {
        DataMemoryBarrier(0xb);
        FUN_01853618(param_2[0x28e]);
      }
      piVar7 = (int *)param_2[0x282];
      uVar3 = 0;
      *(undefined1 *)((int)param_2 + 0xbdb) = 0;
      if (piVar7 != (int *)0x0) {
        DataMemoryBarrier(0xb);
        do {
          iVar11 = *piVar7;
          bVar24 = (bool)hasExclusiveAccess(piVar7);
        } while (!bVar24);
        *piVar7 = iVar11 + -1;
        if (iVar11 == 1) {
          DataMemoryBarrier(0xb);
          FUN_0070451c(param_2[0x282],param_2[0x283]);
        }
      }
      *(undefined2 *)((int)param_2 + 0xbda) = 0;
LAB_01842af0:
      *(undefined1 *)(param_2 + 0x2f6) = 1;
      *(undefined1 *)(param_2 + 0x2f8) = 0;
    }
    FUN_01840398(param_2 + 0x230);
    cVar18 = '\x02';
    if (cVar22 == '\x03') {
      uVar25 = 0x1d1e7ec00000001;
    }
    else {
      cVar18 = '\x02';
      if (cVar22 != '\x02') {
        cVar18 = cVar22;
      }
    }
    goto LAB_01842b2c;
  }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_2[0x2e2]) {
  case '\0':
    *(undefined4 *)((int)param_2 + 0xb89) = 0;
    *(undefined2 *)((int)param_2 + 0xb8a) = 0x101;
    param_2[0x2e3] = 0;
    *(undefined1 *)(param_2 + 0x2e4) = 1;
    FUN_01bed4e2(param_2 + 0x26a,param_2 + 600,0x48);
    puVar8 = param_2 + 0x2d1;
    *puVar8 = param_2[0x2c6];
    param_2[0x2d2] = param_2[0x2c7];
    param_2[0x2d3] = param_2[0x2c8];
    param_2[0x2d4] = param_2[0x2c9];
    param_2[0x2d5] = param_2[0x2ca];
    param_2[0x2d6] = param_2[0x2cb];
    param_2[0x2d7] = param_2[0x2cc];
    param_2[0x2d8] = param_2[0x2cd];
    param_2[0x2d9] = param_2[0x2ce];
    param_2[0x2da] = param_2[0x2cf];
    param_2[0x2db] = param_2[0x2d0];
    FUN_01bed4e2(local_3ae4,param_2 + 0x230,0xa0);
    if (3 < DAT_01d51b00) {
      local_3224 = &LAB_0141556c;
      local_322c = &LAB_01857d08;
      local_2938 = (uint ****)&DAT_005696f8;
      local_2934 = (uint ****)&DAT_00000010;
      local_2930 = (uint ****)&DAT_005696f8;
      local_2928[0] = (uint ***)&DAT_01d1e9a0;
      piStack_292c = (int *)&DAT_00000010;
      local_3230 = local_3ae4;
      local_3228 = puVar8;
      FUN_015fb650(&DAT_0059d7c1,&local_3230,4,&local_2938);
    }
    FUN_017970c4(&local_1cf0,param_2 + 0x298);
    *(undefined1 *)((int)param_2 + 0xb8f) = 1;
    if ((char)param_2[0x290] == '\x02') {
      if (param_2[0x292] == 0x80000001) {
        puVar17 = param_2 + 0x293;
        goto LAB_01841360;
      }
      *(undefined1 *)(param_2 + 0x2e0) = 2;
    }
    else {
      puVar17 = param_2 + 0x28c;
LAB_01841360:
      (**(code **)*puVar17)(&local_2938,puVar17 + 3,puVar17[1],puVar17[2]);
      local_2928[0] = (uint ***)CONCAT31(local_2928[0]._1_3_,(char)puVar17[4]);
      param_2[0x2dc] = (uint)local_2938;
      param_2[0x2dd] = (uint)local_2934;
      param_2[0x2de] = (uint)local_2930;
      param_2[0x2df] = (uint)piStack_292c;
      param_2[0x2e0] = (uint)local_2928[0];
    }
    local_3af0 = (uint ****)(param_2 + 0x2dc);
    *(undefined1 *)((int)param_2 + 0xb8e) = 1;
    param_2[0x2e1] = (uint)(param_2 + 0x278);
    local_3af8 = (uint ****)*local_3ae4;
    local_3af4 = (undefined1 *)param_2[0x27d];
    if (((char)param_2[0x2d1] == '\0') || (iVar11 = FUN_014146a0(puVar8,&DAT_00570360), iVar11 == 0)
       ) {
      *(undefined2 *)((int)param_2 + 0xb8a) = 0;
      *(undefined1 *)(param_2 + 0x2e4) = 0;
      FUN_01bed4e2(&local_2938,param_2 + 0x26a,0x48);
      *(undefined1 *)((int)param_2 + 0xb8f) = 0;
      local_28a0 = local_1cf0;
      uStack_289c = uStack_1cec;
      uStack_2898 = uStack_1ce8;
      uStack_2894 = uStack_1ce4;
      uStack_2890 = uStack_1ce0;
      local_288c = local_1cdc;
      uStack_2888 = uStack_1cd8;
      uStack_2884 = uStack_1cd4;
      ppppuStack_2880 = ppppuStack_1cd0;
      uStack_287c = uStack_1ccc;
      ppppuStack_2878 = ppppuStack_1cc8;
      FUN_01bed4e2(&local_3230,&local_2938,0x128);
      FUN_01bed4e2(param_2 + 0x2e6,&local_3230,0x128);
      *(undefined2 *)(param_2 + 0x330) = 1;
      goto switchD_018410f8_caseD_5;
    }
    if (4 < DAT_01d51b00) {
      local_2938 = (uint ****)&DAT_005696f8;
      local_2934 = (uint ****)&DAT_00000010;
      piStack_292c = (int *)&DAT_00000010;
      local_2930 = (uint ****)&DAT_005696f8;
      local_2928[0] = (uint ***)&DAT_01d1e9b0;
      FUN_015fb650("tunneling HTTPS over proxy",0x35,5,&local_2938);
    }
    ppppuVar5 = (uint ****)param_2[0x275];
    do {
      pppuVar12 = *ppppuVar5;
      bVar24 = (bool)hasExclusiveAccess(ppppuVar5);
    } while (!bVar24);
    *ppppuVar5 = (uint ***)((int)pppuVar12 + 1);
    local_1430 = CONCAT44(local_1430._4_4_,(undefined4)local_1430);
    local_19f0 = CONCAT44(local_19f0._4_4_,(undefined4)local_19f0);
    if ((int)pppuVar12 < 0) goto LAB_01842f3c;
    ppppuVar16 = (uint ****)param_2[0x276];
    do {
      pppuVar12 = *ppppuVar16;
      bVar24 = (bool)hasExclusiveAccess(ppppuVar16);
    } while (!bVar24);
    *ppppuVar16 = (uint ***)((int)pppuVar12 + 1);
    local_1430 = CONCAT44(local_1430._4_4_,(undefined4)local_1430);
    local_19f0 = CONCAT44(local_19f0._4_4_,(undefined4)local_19f0);
    if ((int)pppuVar12 < 0) goto LAB_01842f3c;
    ppppuVar14 = (uint ****)param_2[0x277];
    piVar7 = (int *)param_2[0x279];
    do {
      iVar11 = *piVar7;
      bVar24 = (bool)hasExclusiveAccess(piVar7);
    } while (!bVar24);
    *piVar7 = iVar11 + 1;
    local_1430 = CONCAT44(local_1430._4_4_,(undefined4)local_1430);
    local_19f0 = CONCAT44(local_19f0._4_4_,(undefined4)local_19f0);
    if (iVar11 < 0) goto LAB_01842f3c;
    local_2938 = ppppuVar5;
    local_2934 = ppppuVar16;
    local_2930 = ppppuVar14;
    piStack_292c = piVar7;
    FUN_01823d18(&local_2040,&local_2938);
    *(undefined1 *)((int)param_2 + 0xb8f) = 0;
    puVar17 = param_2 + 0x2a4;
    *puVar17 = 3;
    param_2[0x2a5] = 0;
    param_2[0x2b4] = local_2040;
    param_2[0x2b5] = uStack_203c;
    param_2[0x2b6] = uStack_2038;
    param_2[0x2b7] = local_2034;
    param_2[0x2b8] = uStack_2030;
    param_2[0x2b9] = local_202c;
    param_2[0x2ba] = uStack_2028;
    param_2[699] = local_1cf0;
    param_2[700] = uStack_1cec;
    param_2[0x2bd] = uStack_1ce8;
    param_2[0x2be] = uStack_1ce4;
    param_2[0x2bf] = uStack_1ce0;
    param_2[0x2c0] = local_1cdc;
    param_2[0x2c1] = uStack_1cd8;
    param_2[0x2c2] = uStack_1cd4;
    param_2[0x2c3] = (uint)ppppuStack_1cd0;
    param_2[0x2c4] = uStack_1ccc;
    param_2[0x2c5] = (uint)ppppuStack_1cc8;
    *(undefined1 *)((int)param_2 + 0xb8d) = 1;
    if ((char)param_2[0x2e0] != '\x02') {
      *(undefined1 *)((int)param_2 + 0xb8e) = 0;
      local_2010 = *local_3af0;
      uStack_200c = param_2[0x2dd];
      uStack_2008 = param_2[0x2de];
      local_2004 = param_2[0x2df];
      uStack_2000 = param_2[0x2e0];
      *(undefined1 *)((int)param_2 + 0xb8d) = 0;
      FUN_01bed4e2(&local_2938,puVar17,0x88);
      FUN_0182cc98(&local_3230,&local_2938,&local_2010);
      *(undefined1 *)((int)param_2 + 0xb8d) = 1;
      FUN_01bed4e2(puVar17,&local_3230,0x88);
    }
    if (local_3af8 != (uint ****)0x3 || local_3af4 != (undefined1 *)0x0) {
      *(undefined1 *)((int)param_2 + 0xb8d) = 0;
      FUN_01bed4e2(&local_2938,puVar17,0x88);
      uVar21 = param_2[0x28a];
      uVar25 = FUN_01ac635c(param_2[0x282],param_2[0x283]);
      FUN_0187b658(&local_e88,param_2[0x285],param_2[0x286]);
      FUN_017260a4(&local_8d0,param_2[0x288],param_2[0x289]);
      if (*local_3ae4 == 0) {
        local_1448 = (uint ****)0x0;
      }
      else if (*local_3ae4 == 2) {
        local_3af0 = (uint ****)param_2[0x27e];
        local_3af4 = (undefined1 *)param_2[0x27f];
        local_3af8 = (uint ****)param_2[0x280];
        local_3afc = (uint ***)param_2[0x281];
        local_1448 = (uint ****)0x2;
      }
      else {
        local_1448 = (uint ****)&DAT_00000001;
      }
      local_1410 = CONCAT22(local_1410._2_2_,(short)uVar21);
      local_1428 = local_e88;
      ppppuStack_1424 = local_e84;
      local_1420 = local_e80;
      local_141c = local_8d0;
      ppppuStack_1418 = local_8cc;
      ppppuStack_1414 = ppppuStack_8c8;
      local_1440 = local_3af0;
      local_143c = local_3af4;
      local_1438 = (uint)local_3af8;
      local_1434 = (uint)local_3afc;
      local_1444 = (uint ****)0x0;
      local_1430 = uVar25;
      FUN_0182c2a4(&local_3230,&local_2938,&local_1448);
      *(undefined1 *)((int)param_2 + 0xb8d) = 1;
      FUN_01bed4e2(puVar17,&local_3230,0x88);
    }
    if ((char)param_2[0x274] != '\x02') {
      *(undefined1 *)(param_2 + 0x2e4) = 0;
      local_2938 = (uint ****)param_2[0x270];
      local_2934 = (uint ****)param_2[0x271];
      local_2930 = (uint ****)param_2[0x272];
      piStack_292c = (int *)param_2[0x273];
      local_2928[0] = (uint ***)param_2[0x274];
      local_8d0 = (uint ****)0x0;
      local_8cc = (uint ****)0x0;
      local_898 = local_898 & 0xffff0000;
      local_8b8 = 2;
      local_8b4 = 0;
      local_8b0 = (uint ****)0x0;
      local_8ac = (uint ****)&SUB_00000004;
      ppppuStack_89c = (uint ****)0x0;
      ppppuStack_8a0 = (uint ****)&SUB_00000004;
      local_8a8 = (uint ****)0x0;
      local_8a4 = (uint ****)0x0;
      local_1448 = (uint ****)0x0;
      local_1444 = (uint ****)0x46;
      local_1440 = (uint ****)0x0;
      local_143c = (undefined1 *)0x0;
      FUN_0141d310(&local_3230,&local_8d0,&local_1448);
      if (local_3220 != '\x02') {
        (*(code *)local_3230[4])(&local_3224,local_322c,local_3228);
      }
      *(undefined1 *)((int)param_2 + 0xb8d) = 0;
      FUN_01bed4e2(&local_2938,puVar17,0x88);
      local_1448 = local_8d0;
      local_1444 = local_8cc;
      local_1440 = ppppuStack_8c8;
      local_143c = puStack_8c4;
      local_1438 = uStack_8c0;
      local_1434 = local_8bc;
      local_1430._0_4_ = local_8b8;
      local_1430._4_4_ = local_8b4;
      local_1428 = local_8b0;
      ppppuStack_1424 = local_8ac;
      local_1420 = local_8a8;
      local_141c = local_8a4;
      ppppuStack_1418 = ppppuStack_8a0;
      ppppuStack_1414 = ppppuStack_89c;
      local_1410 = local_898;
      uStack_140c = uStack_894;
      FUN_0182c2a4(&local_3230,&local_2938,&local_1448);
      *(undefined1 *)((int)param_2 + 0xb8d) = 1;
      FUN_01bed4e2(puVar17,&local_3230,0x88);
    }
    FUN_017970c4(&local_2938,puVar8);
    uVar21 = FUN_0182ce28(puVar17,&local_2938);
    param_2[0x2e6] = uVar21;
    puVar6 = &DAT_01d1e344;
    param_2[0x2e7] = (uint)&DAT_01d1e344;
    break;
  case '\x01':
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01d1e9c0);
  case '\x02':
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01d1e9c0);
  case '\x03':
    uVar21 = param_2[0x2e6];
    puVar6 = (undefined *)param_2[0x2e7];
    break;
  case '\x04':
    uVar20 = 0;
    goto LAB_018412e4;
  case '\x05':
switchD_018410f8_caseD_5:
    FUN_018407a0(&local_2938,param_2 + 0x2e6,param_3);
    uVar25 = CONCAT44(local_2934,local_2938);
    cVar18 = local_2930._1_1_;
    if (local_2930._1_1_ == '\x03') {
      uVar3 = 5;
      goto LAB_01842360;
    }
    uVar20 = local_2930._2_2_;
    uVar3 = SUB41(local_2930,0);
    FUN_0182f884(param_2 + 0x2e6);
    if ((char)param_2[0x2e0] != '\x02') {
      (**(code **)(param_2[0x2dc] + 0x10))(param_2 + 0x2df,param_2[0x2dd],param_2[0x2de]);
    }
    *(undefined2 *)((int)param_2 + 0xb8e) = 0;
    FUN_0182ff70(local_3ae4);
    FUN_01435814(param_2 + 0x2d1);
    *(undefined2 *)((int)param_2 + 0xb8a) = 0;
    goto LAB_01842568;
  }
  (**(code **)(puVar6 + 0xc))(&local_2938,uVar21,param_3);
  ppppuVar5 = local_2938;
  if (local_2938 == (uint ****)&SUB_00000004) {
    uVar3 = 3;
LAB_01842360:
    *(undefined1 *)(param_2 + 0x2e2) = uVar3;
    *(undefined1 *)((int)param_1 + 9) = 3;
    uVar3 = 4;
    goto LAB_01842b44;
  }
  puVar8 = (uint *)((uint)&local_2938 | 4);
  local_1ff0 = (uint ***)*puVar8;
  uStack_1fec = puVar8[1];
  uStack_1fe8 = puVar8[2];
  FUN_01bed4e2(local_1fd8,local_2928,0x2d8);
  FUN_017ce5f0(param_2[0x2e6],param_2[0x2e7]);
  if (ppppuVar5 == (uint ****)&DAT_00000003) {
    uVar9 = FUN_0183a478(&local_1ff0);
    cVar18 = '\x02';
    uVar25 = CONCAT44(&DAT_01d1e5e0,uVar9);
  }
  else {
    FUN_01bed4e2(local_308,local_1fd8,0x2d8);
    puVar8 = (uint *)((uint)&local_318 | 4);
    uVar9 = 1;
    *puVar8 = (uint)local_1ff0;
    puVar8[1] = uStack_1fec;
    puVar8[2] = uStack_1fe8;
    *(undefined1 *)((int)param_2 + 0xb89) = 1;
    local_318 = ppppuVar5;
    if (param_2[0x2d5] == 0) {
LAB_01842448:
      puVar8 = (uint *)&DAT_0000000e;
      iVar11 = thunk_FUN_01be5118(0xe);
      if (iVar11 == 0) {
LAB_01842434:
                    /* WARNING: Subroutine does not return */
        FUN_00664620(uVar9,puVar8);
      }
      FUN_01bed4e2(iVar11,"no host in url",0xe);
      puVar10 = (undefined4 *)thunk_FUN_01be5118(0xc);
      if (puVar10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(4,0xc);
      }
      *puVar10 = 0xe;
      puVar10[1] = iVar11;
      uVar25 = CONCAT44(&DAT_01d1e944,puVar10);
      puVar10[2] = 0xe;
      cVar18 = '\x02';
    }
    else {
      lVar26 = FUN_01415984(param_2[0x2d4]);
      puVar8 = (uint *)((ulonglong)lVar26 >> 0x20);
      if ((int)lVar26 == 0) goto LAB_01842448;
      if (lVar26 < 0) {
        uVar9 = 0;
        goto LAB_01842434;
      }
      puVar19 = (undefined1 *)0x1;
      uVar21 = 1;
      puVar17 = (uint *)0x0;
      if (puVar8 != (uint *)0x0) {
        uVar9 = 1;
        uVar21 = FUN_01298504(puVar8,1);
        if (uVar21 == 0) goto LAB_01842434;
        puVar17 = puVar8;
      }
      FUN_01bed4e2(uVar21,(int)lVar26,puVar8);
      param_2[0x2e6] = (uint)puVar17;
      param_2[0x2e7] = uVar21;
      param_2[0x2e8] = (uint)puVar8;
      puVar17 = (uint *)0x0;
      if (puVar8 != (uint *)0x0) {
        puVar19 = (undefined1 *)FUN_01298504(puVar8,1);
        if (puVar19 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00664620(1,puVar8);
        }
        puVar17 = puVar8;
      }
      FUN_01bed4e2(puVar19,uVar21,puVar8);
      local_3230 = puVar17;
      local_322c = puVar19;
      local_3228 = puVar8;
      FUN_01938bd0(&local_2938,&local_3230);
      uVar20 = (ushort)((uint)local_2938 & 0xff);
      if (((uint)local_2938 & 0xff) == 2) {
        uVar9 = FUN_0183b94c(&DAT_0050d758,0x13);
        uVar25 = CONCAT44(&DAT_01d1e944,uVar9);
LAB_0184143c:
        cVar18 = '\x02';
      }
      else {
        local_1a0a = local_2938._3_1_;
        *(undefined1 *)(param_2 + 0x2e3) = 1;
        local_1a0c = local_2938._1_2_;
        piVar7 = *(int **)param_2[0x2e1];
        do {
          iVar11 = *piVar7;
          bVar24 = (bool)hasExclusiveAccess(piVar7);
        } while (!bVar24);
        *piVar7 = iVar11 + 1;
        local_19f0 = CONCAT44(local_19f0._4_4_,(undefined4)local_19f0);
        if (iVar11 < 0) {
LAB_01842f3c:
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xfdee,0x1842f3c);
          (*pcVar1)();
        }
        *(undefined1 *)(param_2 + 0x2e3) = 0;
        *(undefined1 *)((int)param_2 + 0xb89) = 0;
        local_e78 = local_2928[0];
        local_e84 = local_2934;
        param_2[0x2e9] = (uint)piVar7;
        local_e88 = local_2938;
        local_e80 = local_2930;
        local_e7c = piStack_292c;
        FUN_01bed4e2(&local_8d0,&local_318,0x2e8);
        FUN_0182a294(&local_2938,piVar7,&local_e88,&local_8d0);
        FUN_01bed4e2(&local_3230,&local_2938,0x5c0);
        FUN_01bed4e2(param_2 + 0x2ea,&local_3230,0x5c0);
LAB_018412e4:
        FUN_0182b950(&local_2938,param_2 + 0x2ea,param_3);
        ppppuVar14 = local_2930;
        ppppuVar16 = local_2934;
        ppppuVar5 = local_2938;
        if (local_2938 == (uint ****)&DAT_00000003) {
          uVar3 = 4;
          goto LAB_01842360;
        }
        if (local_2938 == (uint ****)0x2) {
          FUN_01bed4e2(&local_e88,&local_2930,0x2f0);
          ppppuVar14 = local_e84;
          ppppuVar16 = local_e88;
          FUN_0183cf38(&local_e80);
        }
        else {
          FUN_01bed4e2(&local_8d0,&piStack_292c,0x5b4);
        }
        FUN_01bed4e2(&local_1a08,&local_8d0,0x5b4);
        FUN_018403cc(param_2 + 0x2ea);
        if (ppppuVar5 == (uint ****)0x2) {
          local_2938 = ppppuVar16;
          local_2934 = ppppuVar14;
          uVar25 = FUN_0142322c(&local_2938);
          piVar7 = (int *)param_2[0x2e9];
          DataMemoryBarrier(0xb);
          do {
            iVar11 = *piVar7;
            bVar24 = (bool)hasExclusiveAccess(piVar7);
          } while (!bVar24);
          *piVar7 = iVar11 + -1;
          if (iVar11 == 1) {
            DataMemoryBarrier(0xb);
            FUN_018fa168(param_2[0x2e9]);
          }
          goto LAB_0184143c;
        }
        FUN_01bed4e2(&local_143c,&local_1a08,0x5b4);
        piVar7 = (int *)param_2[0x2e9];
        local_1448 = ppppuVar5;
        DataMemoryBarrier(0xb);
        do {
          iVar11 = *piVar7;
          bVar24 = (bool)hasExclusiveAccess(piVar7);
        } while (!bVar24);
        *piVar7 = iVar11 + -1;
        local_1444 = ppppuVar16;
        local_1440 = ppppuVar14;
        if (iVar11 == 1) {
          DataMemoryBarrier(0xb);
          FUN_018fa168(param_2[0x2e9]);
        }
        FUN_01bed4e2(&local_2938,&local_1448,0x5c0);
        uVar25 = FUN_0183dbc0((char)param_2[0x27b],&local_2938);
        cVar18 = '\0';
      }
      *(undefined1 *)(param_2 + 0x2e3) = 0;
      FUN_019bb7e0(param_2[0x2e6],param_2[0x2e7]);
    }
    if (*(char *)((int)param_2 + 0xb89) != '\0') {
      FUN_0183cf38(&local_318);
    }
  }
  *(undefined1 *)((int)param_2 + 0xb89) = 0;
  FUN_017558f4(param_2 + 0x2a4);
  *(undefined1 *)((int)param_2 + 0xb8f) = 0;
  *(undefined2 *)((int)param_2 + 0xb8d) = 0;
  FUN_0182ff70(local_3ae4);
  FUN_01435814(param_2 + 0x2d1);
  FUN_0182a8d4(param_2 + 0x275);
  piVar7 = (int *)param_2[0x27a];
  DataMemoryBarrier(0xb);
  do {
    iVar11 = *piVar7;
    bVar24 = (bool)hasExclusiveAccess(piVar7);
  } while (!bVar24);
  *piVar7 = iVar11 + -1;
  if (iVar11 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01853618(param_2[0x27a]);
  }
  piVar7 = (int *)param_2[0x26e];
  uVar3 = 0;
  *(undefined1 *)((int)param_2 + 0xb8b) = 0;
  if (piVar7 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar11 = *piVar7;
      bVar24 = (bool)hasExclusiveAccess(piVar7);
    } while (!bVar24);
    *piVar7 = iVar11 + -1;
    if (iVar11 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0070451c(param_2[0x26e],param_2[0x26f]);
    }
  }
  *(undefined2 *)((int)param_2 + 0xb8a) = 0;
LAB_01842568:
  *(undefined1 *)(param_2 + 0x2e2) = 1;
  *(undefined1 *)(param_2 + 0x2e4) = 0;
  FUN_0183ffc0(param_2 + 0x230);
LAB_01842b2c:
  *param_1 = uVar25;
  *(ushort *)((int)param_1 + 10) = uVar20;
  *(char *)((int)param_1 + 9) = cVar18;
  *(undefined1 *)(param_1 + 1) = uVar3;
  uVar3 = 1;
LAB_01842b44:
  *(undefined1 *)(param_2 + 0x22e) = uVar3;
  return;
}

