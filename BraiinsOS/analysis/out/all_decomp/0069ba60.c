// FUN_0069ba60 @ 0069ba60 size=10760 calls_out=33 calls_in=1
// strings: close | 050150250350450550650750850951051151251351451551651751851952052152252352452552652752852953053153253353453553653753853954054154254354454554654754854955055155255355455555655755855956056156256356456556656756856957057157257357457557657757857958058158258358458558658758858959059159259359459559659759859960060160260360460560660760860961061161261361461561661761861962062162262362462562662762862963063163263363463563663763863964064164264364464564664764864965065165265365465565665765865966066166266366466566666766866967067167267367467567667767867968068168268368468568668768868969069169269369469569669769869970070170270370470570670770870971071171271371471571671771871972072172272372472572672772872973073173273373473573673773873974074174274374474574674774874975075175275375475575675775875976076176276376476576676776876977077177277377477577677777877978078178278378478578678778878979079179279379479579679779879980080180280380480580680780880981081181281381481581681781881982082182282382482582 | <none> | close | transfer-encoding:  | HTTP/1.1 200 OK 

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0069ba60(int *param_1,int *param_2,undefined4 ***param_3,int param_4,uint param_5,
                 int *param_6)

{
  char cVar1;
  char cVar2;
  ushort uVar3;
  byte bVar4;
  bool bVar5;
  undefined3 uVar6;
  byte *pbVar7;
  int *piVar8;
  undefined4 *puVar9;
  char *pcVar10;
  undefined4 *puVar12;
  undefined4 *puVar11;
  uint *puVar13;
  int *piVar14;
  uint uVar15;
  undefined4 uVar16;
  byte *pbVar17;
  code *pcVar18;
  int extraout_r1;
  byte bVar19;
  int *piVar20;
  int iVar21;
  uint uVar22;
  int *extraout_r2;
  int iVar23;
  uint uVar24;
  byte bVar25;
  int iVar26;
  uint uVar27;
  int iVar28;
  uint uVar29;
  uint ****ppppuVar30;
  byte *pbVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  char *pcVar36;
  uint ***pppuVar37;
  uint ***pppuVar38;
  uint uVar39;
  bool bVar40;
  bool bVar41;
  bool bVar42;
  undefined8 uVar43;
  ulonglong uVar44;
  int *local_1e0;
  uint local_1dc;
  undefined4 *local_1d8;
  int local_1d4;
  undefined4 ***local_1ac;
  int local_1a8;
  uint local_1a0;
  uint local_19c;
  int local_184;
  int *local_180;
  byte *local_174;
  int local_170;
  int iStack_16c;
  int iStack_168;
  int iStack_164;
  int iStack_160;
  undefined4 local_158;
  undefined3 uStack_154;
  uint ***local_150;
  int local_14c;
  int *local_148;
  int *local_144;
  int *local_140;
  byte *local_13c;
  undefined1 local_138;
  byte local_137;
  char local_136;
  undefined4 ****local_130;
  undefined1 *local_12c;
  int *local_128;
  int *local_124;
  int local_120;
  int local_11c;
  int local_118;
  int local_114;
  int local_110;
  int local_10c;
  int local_108;
  int local_104;
  int local_100;
  int local_fc;
  uint local_f8;
  undefined4 *puStack_f4;
  undefined4 local_f0;
  undefined3 uStack_ec;
  uint ***local_e8;
  byte *local_e4;
  uint local_e0;
  int *local_dc;
  uint ***local_d8;
  byte *pbStack_d4;
  int local_d0;
  undefined4 *local_cc;
  int local_c8;
  int local_c4;
  uint local_c0;
  uint local_bc;
  uint local_b8;
  uint uStack_b4;
  uint local_b0;
  int *local_ac;
  uint local_a8;
  uint local_a4;
  int iStack_a0;
  uint local_9c;
  int *local_98;
  uint ***local_90;
  byte *pbStack_8c;
  uint uStack_88;
  int *piStack_84;
  uint ***pppuStack_80;
  uint local_78;
  uint uStack_74;
  uint uStack_70;
  uint local_6c;
  uint ***local_68;
  byte *local_64;
  uint local_60;
  int *piStack_5c;
  uint ***pppuStack_58;
  undefined2 uStack_52;
  uint ***local_50;
  byte *local_4c;
  uint local_48;
  int *local_44;
  undefined4 local_40;
  byte *pbStack_3c;
  uint uStack_38;
  int *piStack_34;
  uint ***pppuStack_30;
  
  uVar44 = CONCAT44(param_6,param_5);
  cVar1 = (char)param_1[0x3e];
  if (cVar1 == '\x01') {
    local_124 = (int *)0x0;
    local_128 = (int *)0x0;
    local_12c = (undefined1 *)0x14;
    local_130 = (undefined4 ****)0x0;
    iVar26 = FUN_0069ed4c(param_2,&local_130);
    if ((iVar26 == 0) ||
       (iVar26 = FUN_010c0ac8(*(undefined4 *)(iVar26 + 4),*(undefined4 *)(iVar26 + 8)), iVar26 == 0)
       ) {
      if (*(char *)((int)param_2 + 0x46) == '\x02') {
        if (*(char *)((int)param_1 + 0xf7) != '\x02') {
          local_ac = (int *)0x14;
          local_a4 = 0;
          local_a8 = 0;
          local_b0 = 0;
          local_40 = (uint ***)((uint)local_40 & 0xffffff00);
          local_44 = (int *)0x0;
          local_50 = (uint ***)&DAT_01858684;
          local_4c = (byte *)0x408248;
          local_48 = 10;
          FUN_006a3500(&local_130,param_2,&local_b0,&local_50);
          if ((char)local_120 == '\x03') goto LAB_0069e3dc;
          local_150 = (uint ***)local_130;
          local_14c = (int)local_12c;
          local_148 = local_128;
          local_144 = local_124;
          local_140 = (int *)local_120;
          if ((char)local_120 != '\x02') {
            (*(code *)local_130[4])(&local_144,local_12c,local_128);
          }
        }
      }
      else if (*(char *)((int)param_2 + 0x46) == '\x01') {
        *(undefined1 *)((int)param_1 + 0xf7) = 2;
      }
    }
    *(undefined1 *)((int)param_2 + 0x46) = 1;
  }
  else {
    bVar40 = cVar1 == '\x02';
    if (bVar40) {
      cVar1 = *(char *)((int)param_1 + 0xf7);
    }
    if (bVar40 && cVar1 == '\x02') {
      local_ac = (int *)0x14;
      local_a4 = 0;
      local_a8 = 0;
      local_b0 = 0;
      local_40 = (uint ***)((uint)local_40 & 0xffffff00);
      local_44 = (int *)0x0;
      local_50 = (uint ***)&DAT_01858684;
      local_4c = (byte *)0x408271;
      local_48 = 5;
      FUN_006a3500(&local_130,param_2,&local_b0,&local_50);
      if ((char)local_120 == '\x03') {
LAB_0069e3dc:
                    /* WARNING: Subroutine does not return */
        FUN_00fb74f8(&DAT_0040929f,0x17,&local_68,&DAT_018a62e4,&DAT_018a6184);
      }
      local_150 = (uint ***)local_130;
      local_14c = (int)local_12c;
      local_148 = local_128;
      local_144 = local_124;
      local_140 = (int *)local_120;
      if ((char)local_120 != '\x02') {
        (*(code *)local_130[4])(&local_144,local_12c,local_128);
      }
    }
  }
  pbVar31 = (byte *)(param_1 + 0x34);
  local_144 = param_6;
  cVar1 = *(char *)((int)param_1 + 0xf1);
  uVar15 = (uint)*(ushort *)(param_2 + 0x11);
  local_138 = *(char *)((int)param_1 + 0xf7) != '\x02';
  bVar25 = *(byte *)((int)param_1 + 0xf3);
  local_174 = (byte *)(uint)bVar25;
  local_148 = (int *)param_5;
  bVar19 = true;
  local_1ac = param_3;
  local_1a8 = param_4;
  local_150 = param_3;
  local_14c = param_4;
  local_140 = param_2;
  local_13c = pbVar31;
  local_137 = bVar25;
  local_136 = cVar1;
  if (uVar15 == 0x65) {
LAB_0069bcf4:
    pbVar7 = (byte *)0x0;
LAB_0069bcf8:
    local_19c = 0;
  }
  else {
    if (((*pbVar31 == 0xb) || (99 < uVar15 - 200)) || (*pbVar31 != 7)) {
      if (99 < uVar15 - 100) {
        bVar19 = *(char *)((int)param_1 + 0xf7) == '\x02';
        goto LAB_0069bcf4;
      }
      FUN_00a517d8(param_2);
      iVar26 = param_2[0x10];
      if (iVar26 != 0) {
        FUN_010cdcec(iVar26);
        thunk_FUN_016d3fb4(iVar26);
      }
      local_14c = 0;
      param_2[9] = 4;
      param_2[0xc] = 4;
      *(undefined2 *)(param_2 + 0x11) = 500;
      local_1ac = (undefined4 ***)0x2;
      *param_2 = 0;
      param_2[1] = 0;
      *(undefined1 *)((int)param_2 + 0x46) = 2;
      param_2[0x10] = 0;
      *(undefined2 *)(param_2 + 0xe) = 0;
      param_2[6] = 2;
      param_2[7] = 0;
      param_2[8] = 0;
      param_2[10] = 0;
      param_2[0xb] = 0;
      param_2[0xd] = 0;
      local_150 = (undefined4 ***)0x2;
      pbVar7 = (byte *)thunk_FUN_016d4a50(0xc);
      if (pbVar7 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,0xc);
      }
      pbVar7[8] = 1;
      pbVar7[9] = 5;
      local_1a8 = 0;
      pbVar7[0] = 0;
      pbVar7[1] = 0;
      pbVar7[2] = 0;
      pbVar7[3] = 0;
      goto LAB_0069bcf8;
    }
    local_19c = 1;
    pbVar7 = (byte *)0x0;
    bVar19 = true;
  }
  piVar14 = param_1 + 0x4a;
  uVar15 = param_1[0x4c];
  iVar26 = 0x1e;
  piVar20 = (int *)((param_2[0xd] + param_2[10]) * 0x1e + 0x1e);
  if ((int *)(param_1[0x4a] - uVar15) < piVar20) {
    FUN_010bf6b0(piVar14,uVar15,piVar20,1,1);
    iVar26 = extraout_r1;
    piVar20 = extraout_r2;
  }
  iVar28 = 0;
  piVar8 = (int *)param_2[0x10];
  if (piVar8 != (int *)0x0) {
    iVar26 = piVar8[3];
  }
  if (piVar8 != (int *)0x0 && iVar26 != 0) {
    iVar26 = *piVar8;
    uVar39 = piVar8[1];
    piVar20 = (int *)(uVar39 & 0xd97eca2d);
    local_184 = 0;
    while( true ) {
      uVar32 = *(uint *)(iVar26 + (int)piVar20);
      local_180 = (int *)(uVar32 & 0x80808080);
      uVar29 = ((uint)local_180 ^ 0x80808080) & (uVar32 ^ 0x6c6c6c6c) + 0xfefefeff;
      while (uVar29 != 0) {
        uVar27 = (int)piVar20 +
                 ((uint)LZCOUNT(uVar29 << 0x18 | (uVar29 >> 8 & 0xff) << 0x10 |
                                (uVar29 >> 0x10 & 0xff) << 8 | uVar29 >> 0x18) >> 3) & uVar39;
        piVar8 = (int *)(iVar26 + -0x18 + uVar27 * -0x18);
        uVar29 = uVar29 - 1 & uVar29;
        if ((*piVar8 == -0x16bfcb0 && piVar8[2] == -0x268135d3) &&
            (piVar8[1] == -0x41c67f70 && piVar8[3] == -0xc091cde)) {
          iVar26 = iVar26 + uVar27 * -0x18;
          uVar43 = (**(code **)(*(int *)(iVar26 + -4) + 0x14))(*(undefined4 *)(iVar26 + -8));
          iVar28 = (int)uVar43;
          (**(code **)((int)((ulonglong)uVar43 >> 0x20) + 0xc))(&local_130,iVar28);
          piVar20 = (int *)((uint)local_124 ^ 0xf3f6e322);
          if ((local_130 != (undefined4 ****)0xfe940350 || local_128 != (int *)0xd97eca2d) ||
              (local_12c != (undefined1 *)0xbe398090 || piVar20 != (int *)0x0)) {
            iVar28 = 0;
          }
          goto LAB_0069bed4;
        }
      }
      iVar28 = 0;
      if (((uint)local_180 & uVar32 << 1) != 0) break;
      local_184 = local_184 + 4;
      piVar20 = (int *)((int)piVar20 + local_184 & uVar39);
    }
  }
LAB_0069bed4:
  cVar2 = *(char *)((int)param_2 + 0x46);
  if (cVar2 == '\x02') {
    bVar40 = iVar28 == 0;
    if (bVar40) {
      piVar20 = param_2;
    }
    iVar26 = param_1[0x4c];
    if (bVar40) {
      piVar20 = (int *)(uint)*(ushort *)(piVar20 + 0x11);
    }
    if (!bVar40 || piVar20 != (int *)&DAT_000000c8) {
      if ((uint)(param_1[0x4a] - iVar26) < 9) {
        FUN_010bf6b0(piVar14,iVar26,9,1,1);
        goto LAB_0069e330;
      }
      goto LAB_0069bf54;
    }
    if ((uint)(param_1[0x4a] - iVar26) < 0x11) {
      FUN_010bf6b0(piVar14,iVar26,0x11,1,1);
      iVar26 = param_1[0x4c];
    }
    iVar28 = 0x11;
    FUN_016dd1aa(param_1[0x4b] + iVar26,"HTTP/1.1 200 OK\r\n",0x11);
  }
  else {
    if (cVar2 == '\x01') {
      iVar26 = param_1[0x4c];
      if ((uint)(param_1[0x4a] - iVar26) < 9) {
        FUN_010bf6b0(piVar14,iVar26,9,1,1);
        iVar26 = param_1[0x4c];
      }
      puVar9 = (undefined4 *)(param_1[0x4b] + iVar26);
      *puVar9 = 0x50545448;
      *(undefined1 *)(puVar9 + 2) = 0x20;
      uVar16 = 0x302e312f;
    }
    else {
      if (cVar2 != '\x03') {
        local_50 = (uint ***)CONCAT31(local_50._1_3_,cVar2);
        local_130 = &local_50;
        local_12c = &LAB_010a60dc;
                    /* WARNING: Subroutine does not return */
        FUN_00faa478(&DAT_005941b2,&local_130,&DAT_01884798);
      }
      iVar26 = param_1[0x4c];
      if ((uint)(param_1[0x4a] - iVar26) < 9) {
        FUN_010bf6b0(piVar14,iVar26,9,1,1);
LAB_0069e330:
        iVar26 = param_1[0x4c];
      }
LAB_0069bf54:
      puVar9 = (undefined4 *)(param_1[0x4b] + iVar26);
      *puVar9 = 0x50545448;
      *(undefined1 *)(puVar9 + 2) = 0x20;
      uVar16 = 0x312e312f;
    }
    puVar9[1] = uVar16;
    uVar3 = *(ushort *)(param_2 + 0x11);
    iVar26 = param_1[0x4c] + 9;
    param_1[0x4c] = iVar26;
    if ((uint)(param_1[0x4a] - iVar26) < 3) {
      FUN_010bf6b0(piVar14,iVar26,3,1,1);
      iVar26 = param_1[0x4c];
    }
    iVar21 = param_1[0x4b];
    iVar23 = (uVar3 - 100 & 0xffff) * 2 + (uVar3 - 100 & 0xffff);
    cVar2 = "builder errorerror sending requesterror following redirectHTTP status server errorHTTP status client error100101102103104105106107108109110111112113114115116117118119120121122123124125126127128129130131132133134135136137138139140141142143144145146147148149150151152153154155156157158159160161162163164165166167168169170171172173174175176177178179180181182183184185186187188189190191192193194195196197198199200201202203204205206207208209210211212213214215216217218219220221222223224225226227228229230231232233234235236237238239240241242243244245246247248249250251252253254255256257258259260261262263264265266267268269270271272273274275276277278279280281282283284285286287288289290291292293294295296297298299300301302303304305306307308309310311312313314315316317318319320321322323324325326327328329330331332333334335336337338339340341342343344345346347348349350351352353354355356357358359360361362363364365366367368369370371372373374375376377378379380381382383384385386387388389390391392393394395396397398399400401402403404405406407408409410411412413414415416417418419420421422423424425426427428429430431432433434435436437438439440441442443444445446447448449450451452453454455456457458459460461462463464465466467468469470471472473474475476477478479480481482483484485486487488489490491492493494495496497498499"
            [iVar23 + 0x6c];
    *(undefined2 *)(iVar21 + iVar26) =
         *(undefined2 *)
          (
          "builder errorerror sending requesterror following redirectHTTP status server errorHTTP status client error100101102103104105106107108109110111112113114115116117118119120121122123124125126127128129130131132133134135136137138139140141142143144145146147148149150151152153154155156157158159160161162163164165166167168169170171172173174175176177178179180181182183184185186187188189190191192193194195196197198199200201202203204205206207208209210211212213214215216217218219220221222223224225226227228229230231232233234235236237238239240241242243244245246247248249250251252253254255256257258259260261262263264265266267268269270271272273274275276277278279280281282283284285286287288289290291292293294295296297298299300301302303304305306307308309310311312313314315316317318319320321322323324325326327328329330331332333334335336337338339340341342343344345346347348349350351352353354355356357358359360361362363364365366367368369370371372373374375376377378379380381382383384385386387388389390391392393394395396397398399400401402403404405406407408409410411412413414415416417418419420421422423424425426427428429430431432433434435436437438439440441442443444445446447448449450451452453454455456457458459460461462463464465466467468469470471472473474475476477478479480481482483484485486487488489490491492493494495496497498499"
          + iVar23 + 0x6a);
    *(char *)((undefined2 *)(iVar21 + iVar26) + 1) = cVar2;
    iVar26 = param_1[0x4c] + 3;
    param_1[0x4c] = iVar26;
    if (param_1[0x4a] == iVar26) {
      FUN_010bf6b0(piVar14,iVar26,1,1,1);
      iVar26 = param_1[0x4c];
    }
    *(undefined1 *)(param_1[0x4b] + iVar26) = 0x20;
    iVar26 = param_1[0x4c] + 1;
    param_1[0x4c] = iVar26;
    if (iVar28 == 0) {
      uVar43 = FUN_010a4a80((short)param_2[0x11]);
      uVar39 = (uint)((ulonglong)uVar43 >> 0x20);
      pcVar10 = (char *)uVar43;
      if (pcVar10 == (char *)0x0) {
        uVar39 = 6;
      }
      if ((uint)(*piVar14 - iVar26) < uVar39) {
        FUN_010bf6b0(piVar14,iVar26,uVar39,1,1);
        iVar26 = param_1[0x4c];
      }
      iVar28 = param_1[0x4b];
      pcVar36 = "<none>";
      if (pcVar10 != (char *)0x0) {
        pcVar36 = pcVar10;
      }
    }
    else {
      pcVar36 = *(char **)(iVar28 + 4);
      uVar39 = *(uint *)(iVar28 + 8);
      if ((uint)(*piVar14 - iVar26) < uVar39) {
        FUN_010bf6b0(piVar14,iVar26,uVar39,1,1);
        iVar26 = param_1[0x4c];
      }
      iVar28 = param_1[0x4b];
    }
    FUN_016dd1aa(iVar28 + iVar26,pcVar36,uVar39);
    iVar26 = param_1[0x4c] + uVar39;
    param_1[0x4c] = iVar26;
    if ((uint)(param_1[0x4a] - iVar26) < 2) {
      FUN_010bf6b0(piVar14,iVar26,2,1,1);
      iVar26 = param_1[0x4c];
    }
    iVar28 = 2;
    *(undefined2 *)(param_1[0x4b] + iVar26) = 0xa0d;
  }
  ppppuVar30 = (uint ****)0x0;
  param_1[0x4c] = param_1[0x4c] + iVar28;
  piVar8 = (int *)param_2[0x10];
  param_2[0x10] = 0;
  piVar20 = param_2;
  if (piVar8 != (int *)0x0) {
    piVar20 = (int *)piVar8[3];
  }
  if (piVar8 != (int *)0x0 && piVar20 != (int *)0x0) {
    iVar26 = *piVar8;
    uVar29 = piVar8[1];
    uVar39 = uVar29 & 0xb5b9404;
    local_184 = 0;
    while( true ) {
      uVar27 = *(uint *)(iVar26 + uVar39);
      local_180 = (int *)(uVar27 & 0x80808080);
      uVar32 = ((uint)local_180 ^ 0x80808080) & (uVar27 ^ 0x5050505) + 0xfefefeff;
      while (uVar32 != 0) {
        uVar33 = uVar39 + ((uint)LZCOUNT(uVar32 << 0x18 | (uVar32 >> 8 & 0xff) << 0x10 |
                                         (uVar32 >> 0x10 & 0xff) << 8 | uVar32 >> 0x18) >> 3) &
                 uVar29;
        piVar20 = (int *)(iVar26 + -0x18 + uVar33 * -0x18);
        uVar32 = uVar32 - 1 & uVar32;
        if ((*piVar20 == -0xe82c6b && piVar20[2] == 0xb5b9404) &&
            (piVar20[1] == -0x283c9909 && piVar20[3] == 0x4048f489)) {
          iVar26 = iVar26 + uVar33 * -0x18;
          uVar43 = (**(code **)(*(int *)(iVar26 + -4) + 0x14))(*(undefined4 *)(iVar26 + -8));
          ppppuVar30 = (uint ****)uVar43;
          (**(code **)((int)((ulonglong)uVar43 >> 0x20) + 0xc))(&local_50,ppppuVar30);
          if ((local_50 != (uint ***)0xff17d395 || local_48 != 0xb5b9404) ||
              (local_4c != (byte *)0xd7c366f7 || local_44 != (int *)0x4048f489)) {
            ppppuVar30 = (uint ****)0x0;
          }
          goto LAB_0069c2a0;
        }
      }
      ppppuVar30 = (uint ****)0x0;
      if (((uint)local_180 & uVar27 << 1) != 0) break;
      local_184 = local_184 + 4;
      uVar39 = uVar39 + local_184 & uVar29;
    }
  }
LAB_0069c2a0:
  bVar25 = ppppuVar30 == (uint ****)0x0 & bVar25;
  if (bVar25 == 0) {
    if (ppppuVar30 == (uint ****)0x0) {
      local_e8 = (uint ***)0x1;
      local_d0 = -0x80000000;
      local_dc = (int *)0x0;
      local_e0 = 0;
      puVar9 = (undefined4 *)param_2[6];
      iVar26 = param_2[7];
      local_d8 = (uint ***)((uint)local_d8 & 0xffffff00);
      local_c4 = 0;
      if (iVar26 != 0) {
        puVar11 = puVar9;
        do {
          puVar12 = puVar11 + 1;
          *puVar11 = 0xffff;
          puVar11 = puVar12;
        } while (puVar12 != puVar9 + iVar26);
      }
      uVar39 = 0;
      uVar32 = param_2[10];
      iVar26 = param_2[9];
      uVar29 = 0;
      param_2[10] = 0;
      local_a8 = 0;
      local_b0 = 0;
      bVar40 = false;
      local_1a0 = 0;
      bVar5 = false;
      bVar42 = false;
      local_a4 = uVar32;
      iStack_a0 = iVar26;
      local_9c = uVar32;
      local_98 = param_2 + 0xb;
LAB_0069c410:
      if ((uVar29 & 1) == 0) {
        if (uVar39 != uVar32) {
          uVar29 = uVar39 + 1;
          if (uVar32 <= uVar39) {
            local_b0 = 0;
            local_ac = (int *)local_174;
            local_a8 = uVar29;
                    /* WARNING: Subroutine does not return */
            FUN_00faa4a4(uVar39,uVar32,&DAT_018847a8);
          }
          puVar13 = (uint *)(iVar26 + uVar39 * 0x34);
          piVar20 = (int *)*puVar13;
          bVar41 = ((uint)piVar20 & 1) != 0;
          if (bVar41) {
            piVar20 = (int *)puVar13[1];
          }
          if (bVar41) {
            local_174 = (byte *)piVar20;
          }
          local_78 = puVar13[8];
          uStack_74 = puVar13[9];
          uStack_70 = puVar13[10];
          local_6c = puVar13[0xb];
          local_90 = (uint ***)puVar13[3];
          pbStack_8c = (byte *)puVar13[4];
          uStack_88 = puVar13[5];
          piStack_84 = (int *)puVar13[6];
          pppuStack_80 = (uint ***)puVar13[7];
          uVar39 = 0;
          if (local_c4 != 0) {
            uVar39 = local_c0;
          }
          local_68 = local_90;
          local_64 = pbStack_8c;
          local_60 = uStack_88;
          piStack_5c = piStack_84;
          pppuStack_58 = pppuStack_80;
          if (local_c4 != 0 && uVar39 != 0) {
            (**(code **)(uVar39 + 0x10))(&uStack_b4,local_bc,local_b8);
          }
          local_c0 = local_78;
          local_bc = uStack_74;
          local_b8 = uStack_70;
          uStack_b4 = local_6c;
          local_c4 = 1;
          if (bVar5) {
            iVar28 = param_1[0x4c];
            if ((local_1a0 & 1) == 0) {
              if ((uint)(param_1[0x4a] - iVar28) < 2) {
                FUN_010bf6b0(piVar14,iVar28,2,1,1);
                iVar28 = param_1[0x4c];
              }
              *(undefined2 *)(param_1[0x4b] + iVar28) = 0xa0d;
              iVar28 = 2;
            }
            else {
              if ((uint)(param_1[0x4a] - iVar28) < 0xb) {
                FUN_010bf6b0(piVar14,iVar28,0xb,1,1);
                iVar28 = param_1[0x4c];
              }
              puVar9 = (undefined4 *)(param_1[0x4b] + iVar28);
              *puVar9 = 0x6863202c;
              *(undefined4 *)((int)puVar9 + 7) = 0xa0d6465;
              puVar9[1] = 0x656b6e75;
              iVar28 = 0xb;
            }
            param_1[0x4c] = param_1[0x4c] + iVar28;
            bVar5 = false;
            uVar39 = (uint)bVar41;
            pbVar17 = local_174;
            uVar27 = local_b0;
            piVar20 = local_ac;
            uVar33 = local_a8;
            goto joined_r0x0069c718;
          }
          bVar5 = false;
          uVar39 = uVar29;
          uVar29 = (uint)bVar41;
          uVar27 = local_b0;
          piVar20 = local_ac;
          uVar33 = local_a8;
          goto joined_r0x0069c5b0;
        }
        local_b0 = 0;
        local_ac = (int *)local_174;
        local_a8 = uVar32;
        FUN_010b27f4(&local_b0);
        if (bVar5) {
          iVar26 = param_1[0x4c];
          if ((local_1a0 & 1) == 0) {
            if ((uint)(param_1[0x4a] - iVar26) < 2) {
              FUN_010bf6b0(piVar14,iVar26,2,1,1);
              iVar26 = param_1[0x4c];
            }
            *(undefined2 *)(param_1[0x4b] + iVar26) = 0xa0d;
            iVar26 = 2;
          }
          else {
            if ((uint)(param_1[0x4a] - iVar26) < 0xb) {
              FUN_010bf6b0(piVar14,iVar26,0xb,1,1);
              iVar26 = param_1[0x4c];
            }
            puVar9 = (undefined4 *)(param_1[0x4b] + iVar26);
            *puVar9 = 0x6863202c;
            *(undefined4 *)((int)puVar9 + 7) = 0xa0d6465;
            puVar9[1] = 0x656b6e75;
            iVar26 = 0xb;
          }
          param_1[0x4c] = param_1[0x4c] + iVar26;
        }
        piVar20 = (int *)0x1;
        if (local_19c != 0) goto LAB_0069d80c;
        if (local_1ac == (undefined4 ***)0x2 && local_1a8 == 0) {
LAB_0069d40c:
          pppuVar37 = (uint ***)0x1;
          uVar15 = (uint)*(ushort *)(param_2 + 0x11);
          if ((((uVar15 - 100 < 100) || ((uVar15 - 200 < 100 && (*pbVar31 == 7)))) ||
              (uVar15 == 0xcc)) || (uVar15 == 0x130)) {
LAB_0069d784:
            uVar29 = 0;
            pppuVar37 = (uint ***)0x1;
            piVar20 = (int *)0x0;
            goto LAB_0069d788;
          }
          piVar20 = (int *)0x0;
          uVar29 = 0;
          if (*pbVar31 == 5) goto LAB_0069d788;
          iVar26 = param_1[0x4c];
          if ((uint)(param_1[0x4a] - iVar26) < 0x13) {
            FUN_010bf6b0(piVar14,iVar26,0x13,1,1);
            iVar26 = param_1[0x4c];
          }
          iVar28 = 0x13;
          FUN_016dd1aa(param_1[0x4b] + iVar26,"content-length: 0\r\n",0x13);
          pppuVar37 = (uint ***)0x1;
          param_6 = (int *)0x0;
          param_5 = 0;
        }
        else if (((uint)local_1ac & 1) == 0) {
          if (param_5 == 0 && param_6 == (int *)0x0) goto LAB_0069d40c;
          uVar29 = 0;
          pppuVar37 = (uint ***)0x1;
          uVar15 = (uint)*(ushort *)(param_2 + 0x11);
          if (((uVar15 - 100 < 100) || ((uVar15 - 200 < 100 && (*pbVar31 == 7)))) ||
             (uVar15 == 0xcc)) goto LAB_0069d784;
          piVar20 = (int *)0x0;
          if (uVar15 == 0x130) goto LAB_0069d788;
          iVar26 = param_1[0x4c];
          if ((uint)(param_1[0x4a] - iVar26) < 0x10) {
            FUN_010bf6b0(piVar14,iVar26,0x10,1,1);
            iVar26 = param_1[0x4c];
          }
          puVar9 = (undefined4 *)(param_1[0x4b] + iVar26);
          *puVar9 = 0x746e6f63;
          iVar26 = 0x14;
          puVar9[3] = 0x203a6874;
          puVar9[2] = 0x676e656c;
          puVar9[1] = 0x2d746e65;
          iVar28 = param_1[0x4c] + 0x10;
          param_1[0x4c] = iVar28;
          if (param_6 != (int *)0x0 || param_6 < (int *)(uint)(9999 < param_5)) {
            iVar21 = 0;
            do {
              iVar26 = iVar21;
              iVar23 = (int)(uVar44 >> 0x20);
              uVar29 = (uint)uVar44;
              uVar44 = FUN_01846088(uVar29,iVar23,10000,0);
              uVar39 = uVar29 + (int)uVar44 * -10000;
              uVar15 = (uint)((short)((uVar39 & 0xffff) >> 2) * 0x147b) >> 0x11;
              *(undefined2 *)((int)&local_40 + iVar26) = *(undefined2 *)(&DAT_0040f4ca + uVar15 * 2)
              ;
              *(undefined2 *)((int)&local_40 + iVar26 + 2) =
                   *(undefined2 *)(&DAT_0040f4ca + (uVar39 + uVar15 * -100 & 0xffff) * 2);
              iVar21 = iVar26 + -4;
            } while ((uint)(uVar29 < 100000000) <= (uint)-iVar23);
            iVar26 = iVar26 + 0x10;
          }
          uVar15 = (uint)uVar44;
          if ((uint)(uVar15 < 100) <= (uint)-(int)(uVar44 >> 0x20)) {
            uVar39 = (uint)((short)((uVar15 & 0xffff) >> 2) * 0x147b) >> 0x11;
            *(undefined2 *)((int)&uStack_52 + iVar26) =
                 *(undefined2 *)(&DAT_0040f4ca + (uVar15 + uVar39 * -100 & 0xffff) * 2);
            uVar44 = (ulonglong)uVar39;
            iVar26 = iVar26 + -2;
          }
          uVar15 = (uint)(uVar44 >> 0x20);
          if (uVar15 == 0 && (9 < (uint)uVar44) <= uVar15) {
            iVar21 = iVar26 + -1;
            *(byte *)((int)&uStack_52 + iVar26 + 1) = (byte)uVar44 | 0x30;
          }
          else {
            iVar21 = iVar26 + -2;
            *(undefined2 *)((int)&uStack_52 + iVar26) =
                 *(undefined2 *)(&DAT_0040f4ca + (uint)uVar44 * 2);
          }
          uVar15 = 0x14 - iVar21;
          if ((uint)(*piVar14 - iVar28) < uVar15) {
            FUN_010bf6b0(piVar14,iVar28,uVar15,1,1);
            iVar28 = param_1[0x4c];
          }
          FUN_016dd1aa(param_1[0x4b] + iVar28,(int)&local_50 + iVar21,uVar15);
          iVar26 = param_1[0x4c] + uVar15;
          param_1[0x4c] = iVar26;
          if ((uint)(param_1[0x4a] - iVar26) < 2) {
            FUN_010bf6b0(piVar14,iVar26,2,1,1);
            iVar26 = param_1[0x4c];
          }
          pppuVar37 = (uint ***)0x1;
          iVar28 = 2;
          *(undefined2 *)(param_1[0x4b] + iVar26) = 0xa0d;
        }
        else {
          pppuVar37 = (uint ***)0x2;
          bVar40 = *(char *)((int)param_2 + 0x46) != '\x01';
          if (bVar40) {
            local_1ac = (undefined4 ***)(uint)*pbVar31;
          }
          if (!bVar40 || local_1ac == (undefined4 ***)0x5) goto LAB_0069d788;
          uVar15 = (uint)*(ushort *)(param_2 + 0x11);
          if (local_1ac == (undefined4 ***)0x7) {
            if (uVar15 - 100 < 200) goto LAB_0069d788;
          }
          else if (uVar15 - 100 < 100) goto LAB_0069d788;
          if ((uVar15 == 0xcc) || (uVar15 == 0x130)) goto LAB_0069d788;
          iVar26 = param_1[0x4c];
          if ((uint)(param_1[0x4a] - iVar26) < 0x1c) {
            FUN_010bf6b0(piVar14,iVar26,0x1c,1,1);
            iVar26 = param_1[0x4c];
          }
          iVar28 = 0x1c;
          FUN_016dd1aa(param_1[0x4b] + iVar26,"transfer-encoding: chunked\r\n",0x1c);
          pppuVar37 = (uint ***)0x0;
          param_6 = piVar20;
          param_5 = uVar29;
        }
        param_1[0x4c] = param_1[0x4c] + iVar28;
        piVar20 = param_6;
        uVar29 = param_5;
LAB_0069d788:
        if ((local_e8 == (uint ***)0x0) && (local_e4 != &DAT_80000000)) {
          iVar26 = (int)local_dc + 1;
          puVar9 = (undefined4 *)(local_e0 + 8);
          while (iVar26 = iVar26 + -1, iVar26 != 0) {
            (**(code **)(puVar9[-2] + 0x10))(puVar9 + 1,puVar9[-1],*puVar9);
            puVar9 = puVar9 + 5;
          }
          if (local_e4 != (byte *)0x0) {
            thunk_FUN_016d3fb4(local_e0);
          }
        }
        local_e4 = &DAT_80000000;
        local_d8 = (uint ***)((uint)local_d8 & 0xffffff00);
        local_e8 = pppuVar37;
        local_e0 = uVar29;
        local_dc = piVar20;
LAB_0069d80c:
        if (*pbVar31 == 5) {
LAB_0069d84c:
          if ((local_e8 == (uint ***)0x0) && (local_e4 != &DAT_80000000)) {
            iVar26 = (int)local_dc + 1;
            puVar9 = (undefined4 *)(local_e0 + 8);
            while (iVar26 = iVar26 + -1, iVar26 != 0) {
              (**(code **)(puVar9[-2] + 0x10))(puVar9 + 1,puVar9[-1],*puVar9);
              puVar9 = puVar9 + 5;
            }
            if (local_e4 != (byte *)0x0) {
              thunk_FUN_016d3fb4(local_e0);
            }
          }
          local_d8 = (uint ***)((uint)local_d8 & 0xffffff00);
          local_e0 = 0;
          local_dc = (int *)0x0;
          local_e8 = (uint ***)0x1;
        }
        else {
          uVar15 = (uint)*(ushort *)(param_2 + 0x11);
          if (*pbVar31 != 7) {
            if (99 < uVar15 - 100) goto LAB_0069d840;
            goto LAB_0069d84c;
          }
          if (uVar15 - 100 < 200) goto LAB_0069d84c;
LAB_0069d840:
          if (uVar15 == 0x130 || uVar15 == 0xcc) goto LAB_0069d84c;
        }
        iVar26 = param_1[0x4c];
        if ((bVar42) || (cVar1 == '\0')) {
          if ((uint)(param_1[0x4a] - iVar26) < 2) {
            FUN_010bf6b0(piVar14,iVar26,2,1,1);
            iVar26 = param_1[0x4c];
          }
          *(undefined2 *)(param_1[0x4b] + iVar26) = 0xa0d;
          iVar26 = 2;
        }
        else {
          if ((uint)(param_1[0x4a] - iVar26) < 0x25) {
            FUN_010bf6b0(piVar14,iVar26,0x25,1,1);
            iVar26 = param_1[0x4c];
            if ((uint)(param_1[0x4a] - iVar26) < 6) {
              FUN_010bf6b0(piVar14,iVar26,6,1,1);
              iVar26 = param_1[0x4c];
            }
          }
          iVar28 = param_1[0x4b];
          *(undefined4 *)(iVar28 + iVar26) = 0x65746164;
          *(undefined2 *)((undefined4 *)(iVar28 + iVar26) + 1) = 0x203a;
          param_1[0x4c] = param_1[0x4c] + 6;
          FUN_010bda48(piVar14);
          iVar26 = param_1[0x4c];
          if ((uint)(param_1[0x4a] - iVar26) < 4) {
            FUN_010bf6b0(piVar14,iVar26,4,1,1);
            iVar26 = param_1[0x4c];
          }
          *(undefined4 *)(param_1[0x4b] + iVar26) = 0xa0d0a0d;
          iVar26 = 4;
        }
        iVar28 = local_d0;
        param_1[0x4c] = param_1[0x4c] + iVar26;
        bVar42 = local_e8 != (uint ***)0x0;
        bVar40 = local_d0 == -0x80000000;
        if (!bVar42 && !bVar40) {
          FUN_010bcad8(&local_50,&local_e8,&local_d0);
          local_e8 = local_50;
          local_e4 = local_4c;
          local_e0 = local_48;
          local_dc = local_44;
          local_d8 = local_40;
          pbStack_d4 = pbStack_3c;
        }
        local_180 = local_dc;
        uVar15 = local_e0;
        pbVar31 = local_e4;
        pppuVar37 = local_e8;
        local_174 = local_e4;
        uVar39 = 0;
        if (local_c4 != 0) {
          uVar39 = local_c0;
        }
        if (local_c4 != 0 && uVar39 != 0) {
          (**(code **)(uVar39 + 0x10))(&uStack_b4,local_bc,local_b8);
        }
        puVar9 = local_cc;
        if ((bVar42 || bVar40) && !bVar40) {
          iVar21 = 0;
          iVar26 = local_c8 + 1;
          while (iVar26 = iVar26 + -1, iVar26 != 0) {
            piVar20 = (int *)((int)puVar9 + iVar21);
            iVar21 = iVar21 + 0x14;
            (**(code **)(*piVar20 + 0x10))(piVar20 + 3,piVar20[1],piVar20[2]);
          }
          if (iVar28 != 0) {
            thunk_FUN_016d3fb4(puVar9);
          }
        }
        bVar25 = 0;
        if (pppuVar37 == (uint ***)0x3) goto LAB_0069da98;
        bVar19 = bVar19 & 1;
        local_f0 = CONCAT13(pbStack_d4._0_1_,local_d8._1_3_);
        uStack_ec = (undefined3)((uint)pbStack_d4 >> 8);
        piVar20 = local_180;
        goto joined_r0x0069db9c;
      }
      FUN_010b1bc4(&local_50,iVar26,uVar32,param_2 + 0xb,local_174);
      uVar29 = uVar39;
      uVar39 = local_48;
      pbVar17 = local_174;
      uVar27 = local_b0;
      piVar20 = local_ac;
      uVar33 = local_a8;
      local_90 = local_40;
      pbStack_8c = pbStack_3c;
      uStack_88 = uStack_38;
      piStack_84 = piStack_34;
      pppuStack_80 = pppuStack_30;
      local_68 = local_40;
      local_64 = pbStack_3c;
      local_60 = uStack_38;
      piStack_5c = piStack_34;
      pppuStack_58 = pppuStack_30;
      if ((local_48 & 1) != 0) {
        uVar39 = local_48;
        pbVar17 = (byte *)local_44;
      }
joined_r0x0069c718:
      local_ac = (int *)pbVar17;
      local_b0 = uVar39;
      local_a8 = uVar29;
      uVar39 = local_a8;
      uVar29 = local_b0;
      local_174 = (byte *)local_ac;
      if (local_c4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00fb74b8("current header name",0x13,&DAT_018846f0);
      }
joined_r0x0069c5b0:
      local_a8 = uVar33;
      local_ac = piVar20;
      local_b0 = uVar27;
      uVar43 = CONCAT44(local_b8,local_bc);
      if (local_c0 != 0) goto LAB_0069c748;
      switch(local_bc & 0xff) {
      case 0x14:
        bVar25 = bVar19 & 1;
        local_b0 = uVar29;
        local_ac = (int *)local_174;
        local_a8 = uVar39;
        bVar19 = 1;
        if (bVar25 == 0) {
          bVar19 = FUN_010c09a8(local_64,local_60);
        }
        iVar28 = param_1[0x4c];
        if (bVar5) {
          if ((uint)(param_1[0x4a] - iVar28) < 2) {
            FUN_010bf6b0(piVar14,iVar28,2,1,1);
            iVar28 = param_1[0x4c];
          }
          uVar27 = local_60;
          pbVar17 = local_64;
          *(undefined2 *)(param_1[0x4b] + iVar28) = 0x202c;
          iVar28 = param_1[0x4c] + 2;
          param_1[0x4c] = iVar28;
          if ((uint)(param_1[0x4a] - iVar28) < local_60) {
            FUN_010bf6b0(piVar14,iVar28,local_60,1,1);
            goto LAB_0069d0bc;
          }
        }
        else {
          if ((uint)(param_1[0x4a] - iVar28) < 0xc) {
            FUN_010bf6b0(piVar14,iVar28,0xc,1,1);
            iVar28 = param_1[0x4c];
          }
          uVar27 = local_60;
          pbVar17 = local_64;
          puVar9 = (undefined4 *)(param_1[0x4b] + iVar28);
          *puVar9 = 0x6e6e6f63;
          puVar9[2] = 0x203a6e6f;
          puVar9[1] = 0x69746365;
          iVar28 = param_1[0x4c] + 0xc;
          param_1[0x4c] = iVar28;
          if ((uint)(param_1[0x4a] - iVar28) < local_60) {
            FUN_010bf6b0(piVar14,iVar28,local_60,1,1);
LAB_0069d0bc:
            iVar28 = param_1[0x4c];
          }
        }
        FUN_016dd1aa(param_1[0x4b] + iVar28,pbVar17,uVar27);
LAB_0069ce68:
        param_1[0x4c] = param_1[0x4c] + uVar27;
LAB_0069ce74:
        bVar5 = true;
        break;
      default:
        goto switchD_0069c5cc_caseD_15;
      case 0x18:
        if ((~local_19c & 1) == 0 && !bVar5) {
          uVar16 = 0xc;
          if (uVar15 <= (uint)param_1[0x4c]) {
            param_1[0x4c] = uVar15;
          }
          local_b0 = uVar29;
          local_ac = (int *)local_174;
          local_a8 = uVar39;
          local_174 = (byte *)thunk_FUN_016d4a50(0xc);
          if (local_174 == (byte *)0x0) {
LAB_0069e468:
                    /* WARNING: Subroutine does not return */
            FUN_00600874(4,uVar16);
          }
          local_174[8] = 1;
          local_174[9] = 4;
          local_174[0] = 0;
          local_174[1] = 0;
          local_174[2] = 0;
          local_174[3] = 0;
        }
        else {
          if (local_1ac == (undefined4 ***)0x2 && local_1a8 == 0) {
            if (*pbVar31 != 5) {
              local_b0 = uVar29;
              local_ac = (int *)local_174;
              local_a8 = uVar39;
              break;
            }
            local_19c = 1;
            goto switchD_0069c5cc_caseD_15;
          }
          if (((uint)local_1ac & 1) == 0) {
            local_b0 = uVar29;
            local_ac = (int *)local_174;
            local_a8 = uVar39;
            if (!bVar5) {
              if (local_e8 == (uint ***)0x0) {
                if (local_e4 != &DAT_80000000) {
                  FUN_010bbd58(local_e0,local_dc);
                  if (local_e4 != (byte *)0x0) {
                    thunk_FUN_016d3fb4(local_e0);
                  }
                }
              }
              iVar28 = param_1[0x4c];
              local_e0 = param_5;
              local_dc = param_6;
              local_e8 = (uint ***)0x1;
              local_d8 = (uint ***)((uint)local_d8 & 0xffffff00);
              if ((uint)(param_1[0x4a] - iVar28) < 0x10) {
                FUN_010bf6b0(piVar14,iVar28,0x10,1,1);
                iVar28 = param_1[0x4c];
              }
              uVar27 = local_60;
              pbVar17 = local_64;
              puVar9 = (undefined4 *)(param_1[0x4b] + iVar28);
              *puVar9 = 0x746e6f63;
              puVar9[3] = 0x203a6874;
              puVar9[2] = 0x676e656c;
              puVar9[1] = 0x2d746e65;
              iVar28 = param_1[0x4c] + 0x10;
              param_1[0x4c] = iVar28;
              if ((uint)(param_1[0x4a] - iVar28) < local_60) {
                FUN_010bf6b0(piVar14,iVar28,local_60,1,1);
                goto LAB_0069d100;
              }
              goto LAB_0069cb74;
            }
            goto LAB_0069ce74;
          }
          if (local_60 != 0) {
            uVar33 = 0;
            piVar20 = (int *)0x0;
            uVar27 = local_60;
            pbVar17 = local_64;
            while (uVar27 != 0) {
              uVar22 = *pbVar17 - 0x30 & 0xff;
              if (9 < uVar22) goto LAB_0069df7c;
              uVar24 = (uint)((ulonglong)uVar33 * 10);
              uVar33 = (uint)((ulonglong)uVar33 * 10 >> 0x20);
              uVar34 = (uint)(ZEXT48(piVar20) * 10);
              uVar35 = uVar33 + uVar34;
              if ((int)(ZEXT48(piVar20) * 10 >> 0x20) != 0 || CARRY4(uVar33,uVar34))
              goto LAB_0069df7c;
              uVar33 = uVar24 + uVar22;
              uVar27 = uVar27 - 1;
              piVar20 = (int *)(uVar35 + CARRY4(uVar24,uVar22));
              pbVar17 = pbVar17 + 1;
              if (CARRY4(uVar35,(uint)CARRY4(uVar24,uVar22))) goto LAB_0069df7c;
            }
            if (!bVar40) {
              local_b0 = uVar29;
              local_ac = (int *)local_174;
              local_a8 = uVar39;
              if (local_e8 == (uint ***)0x0) {
                if (local_e4 != &DAT_80000000) {
                  FUN_010bbd58(local_e0,local_dc);
                  if (local_e4 != (byte *)0x0) {
                    thunk_FUN_016d3fb4(local_e0);
                  }
                }
              }
              iVar28 = param_1[0x4c];
              local_e8 = (uint ***)0x1;
              local_d8 = (uint ***)((uint)local_d8 & 0xffffff00);
              local_e0 = uVar33;
              local_dc = piVar20;
              if ((uint)(param_1[0x4a] - iVar28) < 0x10) {
                FUN_010bf6b0(piVar14,iVar28,0x10,1,1);
                iVar28 = param_1[0x4c];
              }
              uVar27 = local_60;
              pbVar17 = local_64;
              puVar9 = (undefined4 *)(param_1[0x4b] + iVar28);
              *puVar9 = 0x746e6f63;
              puVar9[3] = 0x203a6874;
              puVar9[2] = 0x676e656c;
              puVar9[1] = 0x2d746e65;
              iVar28 = param_1[0x4c] + 0x10;
              param_1[0x4c] = iVar28;
              if ((uint)(param_1[0x4a] - iVar28) < local_60) {
                FUN_010bf6b0(piVar14,iVar28,local_60,1,1);
                iVar28 = param_1[0x4c];
              }
              FUN_016dd1aa(param_1[0x4b] + iVar28,pbVar17,uVar27);
              bVar40 = true;
              local_1e0 = piVar20;
              local_1dc = uVar33;
LAB_0069ce64:
              local_19c = 1;
              goto LAB_0069ce68;
            }
            bVar40 = true;
            local_b0 = uVar29;
            local_ac = (int *)local_174;
            local_a8 = uVar39;
            if (local_1dc == uVar33 && local_1e0 == piVar20) break;
          }
LAB_0069df7c:
          if (uVar15 <= (uint)param_1[0x4c]) {
            param_1[0x4c] = uVar15;
          }
          local_b0 = uVar29;
          local_ac = (int *)local_174;
          local_a8 = uVar39;
          local_174 = (byte *)FUN_010beca8();
        }
        (*(code *)local_68[4])(&piStack_5c,local_64,local_60);
        FUN_010b27f4(&local_b0);
        uVar15 = 0;
        if (local_c4 != 0) {
          uVar15 = local_c0;
        }
        if (local_c4 != 0 && uVar15 != 0) {
          (**(code **)(uVar15 + 0x10))(&uStack_b4,local_bc,local_b8);
        }
        if (local_d0 != -0x80000000) {
          iVar26 = local_1d4 + 1;
          puVar9 = local_1d8 + 2;
          while (iVar26 = iVar26 + -1, iVar26 != 0) {
            (**(code **)(puVar9[-2] + 0x10))(puVar9 + 1,puVar9[-1],*puVar9);
            puVar9 = puVar9 + 5;
          }
          if (local_d0 != 0) {
            thunk_FUN_016d3fb4(local_cc);
          }
        }
        bVar25 = 0;
        if ((local_e8 == (uint ***)0x0) && (local_e4 != &DAT_80000000)) {
          iVar26 = (int)local_dc + 1;
          puVar9 = (undefined4 *)(local_e0 + 8);
          while (iVar26 = iVar26 + -1, iVar26 != 0) {
            (**(code **)(puVar9[-2] + 0x10))(puVar9 + 1,puVar9[-1],*puVar9);
            puVar9 = puVar9 + 5;
          }
          if (local_e4 != (byte *)0x0) {
            thunk_FUN_016d3fb4(local_e0);
          }
        }
        goto LAB_0069da98;
      case 0x20:
        bVar42 = true;
switchD_0069c5cc_caseD_15:
        uVar43 = FUN_010a84b4();
LAB_0069c748:
        uVar27 = (uint)((ulonglong)uVar43 >> 0x20);
        iVar28 = param_1[0x4c];
        if ((uint)(param_1[0x4a] - iVar28) < uVar27) {
          FUN_010bf6b0(piVar14,iVar28,uVar27,1,1);
          iVar28 = param_1[0x4c];
        }
        FUN_016dd1aa(param_1[0x4b] + iVar28,(int)uVar43,uVar27);
        iVar28 = param_1[0x4c] + uVar27;
        param_1[0x4c] = iVar28;
        if ((uint)(param_1[0x4a] - iVar28) < 2) {
          FUN_010bf6b0(piVar14,iVar28,2,1,1);
          iVar28 = param_1[0x4c];
        }
        uVar27 = local_60;
        pbVar17 = local_64;
        *(undefined2 *)(param_1[0x4b] + iVar28) = 0x203a;
        iVar28 = param_1[0x4c] + 2;
        param_1[0x4c] = iVar28;
        if ((uint)(param_1[0x4a] - iVar28) < local_60) {
          FUN_010bf6b0(piVar14,iVar28,local_60,1,1);
          iVar28 = param_1[0x4c];
        }
        FUN_016dd1aa(param_1[0x4b] + iVar28,pbVar17,uVar27);
        iVar28 = param_1[0x4c] + uVar27;
        param_1[0x4c] = iVar28;
        if ((uint)(param_1[0x4a] - iVar28) < 2) {
          FUN_010bf6b0(piVar14,iVar28,2,1,1);
          iVar28 = param_1[0x4c];
        }
        *(undefined2 *)(param_1[0x4b] + iVar28) = 0xa0d;
        param_1[0x4c] = param_1[0x4c] + 2;
        (*(code *)local_68[4])(&piStack_5c,local_64,local_60);
        goto LAB_0069c410;
      case 0x44:
        local_b0 = uVar29;
        local_ac = (int *)local_174;
        local_a8 = uVar39;
        if (*(char *)((int)param_2 + 0x46) == '\x01') break;
        if (*pbVar31 == 5) break;
        uVar27 = (uint)*(ushort *)(param_2 + 0x11);
        if (*pbVar31 != 7) {
          if (99 < uVar27 - 100) goto LAB_0069cbcc;
          break;
        }
        if (uVar27 - 100 < 200) break;
LAB_0069cbcc:
        if (uVar27 == 0xcc || uVar27 == 0x130) break;
        iVar28 = param_1[0x4c];
        if (bVar5) {
          if ((uint)(param_1[0x4a] - iVar28) < 2) {
            FUN_010bf6b0(piVar14,iVar28,2,1,1);
            iVar28 = param_1[0x4c];
          }
          uVar27 = local_60;
          pbVar17 = local_64;
          *(undefined2 *)(param_1[0x4b] + iVar28) = 0x202c;
          iVar28 = param_1[0x4c] + 2;
          param_1[0x4c] = iVar28;
          if ((uint)(param_1[0x4a] - iVar28) < local_60) {
            FUN_010bf6b0(piVar14,iVar28,local_60,1,1);
            goto LAB_0069d1a8;
          }
        }
        else {
          if ((uint)(param_1[0x4a] - iVar28) < 9) {
            FUN_010bf6b0(piVar14,iVar28,9,1,1);
            iVar28 = param_1[0x4c];
          }
          uVar27 = local_60;
          pbVar17 = local_64;
          puVar9 = (undefined4 *)(param_1[0x4b] + iVar28);
          *puVar9 = 0x69617274;
          *(undefined1 *)(puVar9 + 2) = 0x20;
          puVar9[1] = 0x3a72656c;
          iVar28 = param_1[0x4c] + 9;
          param_1[0x4c] = iVar28;
          if ((uint)(param_1[0x4a] - iVar28) < local_60) {
            FUN_010bf6b0(piVar14,iVar28,local_60,1,1);
LAB_0069d1a8:
            iVar28 = param_1[0x4c];
          }
        }
        FUN_016dd1aa(param_1[0x4b] + iVar28,pbVar17,uVar27);
        param_1[0x4c] = param_1[0x4c] + uVar27;
        if (local_d0 != -0x80000000) goto LAB_0069d1f4;
        uVar16 = 0x14;
        local_1d8 = (undefined4 *)thunk_FUN_016d4a50(0x14);
        if (local_1d8 == (undefined4 *)0x0) goto LAB_0069e468;
        *local_1d8 = local_68;
        local_1d8[1] = local_64;
        local_1d8[2] = local_60;
        local_1d8[3] = piStack_5c;
        local_1d8[4] = pppuStack_58;
        local_c8 = 1;
        local_1d4 = 1;
        local_d0 = 1;
        bVar5 = true;
        local_cc = local_1d8;
        goto LAB_0069c410;
      case 0x45:
        if ((~local_19c & 1) == 0 && !bVar5) goto LAB_0069df7c;
        local_b0 = uVar29;
        local_ac = (int *)local_174;
        local_a8 = uVar39;
        if (*(char *)((int)param_2 + 0x46) != '\x01') {
          if (*pbVar31 != 5) {
            uVar27 = (uint)*(ushort *)(param_2 + 0x11);
            if (*pbVar31 == 7) {
              if (199 < uVar27 - 100) goto LAB_0069cc54;
            }
            else if (99 < uVar27 - 100) {
LAB_0069cc54:
              if (uVar27 != 0xcc && uVar27 != 0x130) {
                local_1a0 = FUN_010c0690(local_64,local_60);
                local_1a0 = local_1a0 ^ 1;
                if (bVar5) {
                  iVar28 = param_1[0x4c];
                  if ((uint)(param_1[0x4a] - iVar28) < 2) {
                    FUN_010bf6b0(piVar14,iVar28,2,1,1);
                    iVar28 = param_1[0x4c];
                  }
                  uVar27 = local_60;
                  pbVar17 = local_64;
                  *(undefined2 *)(param_1[0x4b] + iVar28) = 0x202c;
                  iVar28 = param_1[0x4c] + 2;
                  param_1[0x4c] = iVar28;
                  if ((uint)(param_1[0x4a] - iVar28) < local_60) {
                    FUN_010bf6b0(piVar14,iVar28,local_60,1,1);
                    goto LAB_0069d100;
                  }
                }
                else {
                  if (((local_e8 == (uint ***)0x0) && (local_e4 != &DAT_80000000)) &&
                     (FUN_010bbd58(local_e0,local_dc), local_e4 != (byte *)0x0)) {
                    thunk_FUN_016d3fb4(local_e0);
                  }
                  iVar28 = param_1[0x4c];
                  local_d8 = (uint ***)((uint)local_d8 & 0xffffff00);
                  local_e4 = &DAT_80000000;
                  local_e8 = (uint ***)0x0;
                  if ((uint)(param_1[0x4a] - iVar28) < 0x13) {
                    FUN_010bf6b0(piVar14,iVar28,0x13,1,1);
                    iVar28 = param_1[0x4c];
                  }
                  FUN_016dd1aa(param_1[0x4b] + iVar28,"transfer-encoding: ",0x13);
                  uVar27 = local_60;
                  pbVar17 = local_64;
                  iVar28 = param_1[0x4c] + 0x13;
                  param_1[0x4c] = iVar28;
                  if ((uint)(param_1[0x4a] - iVar28) < local_60) {
                    FUN_010bf6b0(piVar14,iVar28,local_60,1,1);
LAB_0069d100:
                    iVar28 = param_1[0x4c];
                  }
                }
LAB_0069cb74:
                FUN_016dd1aa(param_1[0x4b] + iVar28,pbVar17,uVar27);
                goto LAB_0069ce64;
              }
            }
          }
        }
      }
      (*(code *)local_68[4])(&piStack_5c,local_64,local_60);
      goto LAB_0069c410;
    }
  }
  else {
    ppppuVar30 = (uint ****)&local_130;
    local_12c = (undefined1 *)0x0;
    local_130 = (undefined4 ****)0x0;
    local_f8 = local_f8 & 0xffff0000;
    local_fc = 0;
    local_104 = 0;
    local_108 = 0;
    local_110 = 0;
    local_114 = 0;
    local_100 = 4;
    local_10c = 4;
    local_118 = 2;
  }
  FUN_010ae0bc(&local_50,&local_150,piVar14,bVar19,uVar15,local_19c,ppppuVar30);
  local_174 = local_4c;
  if (local_50 == (uint ***)0x3) {
LAB_0069da98:
    if (piVar8 != (int *)0x0) {
      FUN_010cdcec(piVar8);
      thunk_FUN_016d3fb4(piVar8);
    }
    if (bVar25 != 0) {
      FUN_010ab744(&local_130);
    }
    if (pbVar7 != (byte *)0x0) {
      iVar26 = *(int *)pbVar7;
      if (iVar26 != 0) {
        puVar9 = *(undefined4 **)(pbVar7 + 4);
        pcVar18 = (code *)*puVar9;
        if (pcVar18 != (code *)0x0) {
          (*pcVar18)(iVar26);
        }
        if (puVar9[1] != 0) {
          thunk_FUN_016d3fb4(iVar26);
        }
      }
      thunk_FUN_016d3fb4(pbVar7);
    }
    piVar20 = (int *)param_1[0x39];
  }
  else {
    bVar19 = (byte)local_40;
    local_f0 = CONCAT13(pbStack_3c._0_1_,local_40._1_3_);
    uStack_ec = (undefined3)((uint)pbStack_3c >> 8);
    uVar15 = local_48;
    piVar20 = local_44;
    pbVar31 = local_4c;
    pppuVar37 = local_50;
joined_r0x0069db9c:
    bVar4 = (byte)local_180;
    local_174 = pbVar31;
    uVar6 = uStack_ec;
    pppuVar38 = pppuVar37;
    uVar16 = local_f0;
    if (pbVar7 != (byte *)0x0) {
      pppuVar38 = (uint ***)0x3;
      local_174 = pbVar7;
      uVar6 = uStack_154;
      uVar16 = local_158;
      bVar19 = bVar4;
      if ((pppuVar37 == (uint ***)0x0) && (pbVar31 != &DAT_80000000)) {
        iVar26 = (int)piVar20 + 1;
        piVar20 = (int *)0x0;
        while (iVar26 = iVar26 + -1, iVar26 != 0) {
          piVar14 = (int *)(uVar15 + (int)piVar20);
          piVar20 = piVar20 + 5;
          (**(code **)(*piVar14 + 0x10))(piVar14 + 3,piVar14[1],piVar14[2]);
        }
        uVar6 = uStack_154;
        uVar16 = local_158;
        if (pbVar31 != (byte *)0x0) {
          thunk_FUN_016d3fb4(uVar15);
          uVar6 = uStack_154;
          uVar16 = local_158;
        }
      }
    }
    local_158 = uVar16;
    uStack_154 = uVar6;
    if (piVar8 != (int *)0x0) {
      FUN_010cdcec(piVar8);
      thunk_FUN_016d3fb4(piVar8);
    }
    if (bVar25 != 0) {
      FUN_010ab744(&local_130);
    }
    if (pppuVar38 != (uint ***)0x3) {
      pbStack_3c = (byte *)CONCAT31(uStack_154,local_158._3_1_);
      local_40._1_3_ = (undefined3)local_158;
      local_40 = (uint ***)CONCAT31(local_40._1_3_,bVar19);
      local_130 = (undefined4 ****)*param_2;
      local_12c = (undefined1 *)param_2[1];
      local_128 = (int *)param_2[2];
      local_124 = (int *)param_2[3];
      local_120 = param_2[4];
      local_11c = param_2[5];
      local_118 = param_2[6];
      local_114 = param_2[7];
      local_110 = param_2[8];
      local_10c = param_2[9];
      local_108 = param_2[10];
      local_104 = param_2[0xb];
      local_100 = param_2[0xc];
      local_fc = param_2[0xd];
      local_f8 = param_2[0xe];
      puStack_f4 = (undefined4 *)param_2[0xf];
      local_50 = pppuVar38;
      local_4c = local_174;
      local_48 = uVar15;
      local_44 = piVar20;
      if (*param_1 != 3 || param_1[1] != 0) {
        FUN_01015c1c(param_1);
      }
      puVar9 = puStack_f4;
      *param_1 = (int)local_130;
      param_1[1] = (int)local_12c;
      param_1[2] = (int)local_128;
      param_1[3] = (int)local_124;
      param_1[4] = local_120;
      param_1[5] = local_11c;
      param_1[6] = local_118;
      param_1[7] = local_114;
      param_1[8] = local_110;
      param_1[9] = local_10c;
      param_1[10] = local_108;
      param_1[0xb] = local_104;
      param_1[0xc] = local_100;
      param_1[0xd] = local_fc;
      param_1[0xe] = local_f8;
      param_1[0xf] = (int)puStack_f4;
      if (param_2[0x10] == 0) {
LAB_0069ddac:
        iVar26 = 0;
        piVar20 = (int *)param_1[0x32];
      }
      else {
        uVar43 = FUN_00753304(param_2[0x10],&DAT_00563e20);
        if ((int)uVar43 == 0) goto LAB_0069ddac;
        uVar43 = (**(code **)((int)((ulonglong)uVar43 >> 0x20) + 0x1c))();
        puVar9 = (undefined4 *)((ulonglong)uVar43 >> 0x20);
        piVar14 = (int *)uVar43;
        (*(code *)puVar9[3])(&local_130,piVar14);
        piVar20 = (int *)0x0;
        if ((local_130 == (undefined4 ****)0x60a8a0cf && local_128 == (int *)0x9fe9e80) &&
            (local_12c == (undefined1 *)0x94dd391d && local_124 == (int *)0xbc9d95a8)) {
          piVar20 = piVar14;
        }
        if ((local_130 != (undefined4 ****)0x60a8a0cf || local_128 != (int *)0x9fe9e80) ||
            (local_12c != (undefined1 *)0x94dd391d || local_124 != (int *)0xbc9d95a8)) {
          if ((code *)*puVar9 != (code *)0x0) {
            (*(code *)*puVar9)(piVar14);
          }
          if (puVar9[1] != 0) {
            thunk_FUN_016d3fb4(piVar14);
          }
        }
        if (piVar20 == (int *)0x0) goto LAB_0069ddac;
        iVar26 = *piVar14;
        puVar9 = (undefined4 *)piVar14[1];
        thunk_FUN_016d3fb4(piVar20);
        piVar20 = (int *)param_1[0x32];
      }
      if (piVar20 != (int *)0x0) {
        DataMemoryBarrier(0xb);
        do {
          iVar28 = *piVar20;
          bVar40 = (bool)hasExclusiveAccess(piVar20);
        } while (!bVar40);
        *piVar20 = iVar28 + -1;
        if (iVar28 == 1) {
          DataMemoryBarrier(0xb);
          FUN_015614d8(param_1[0x32],param_1[0x33]);
        }
      }
      param_1[0x32] = iVar26;
      piVar20 = (int *)((uint)&local_50 | 4);
      param_1[0x33] = (int)puVar9;
      local_170 = *piVar20;
      iStack_16c = piVar20[1];
      iStack_168 = piVar20[2];
      iStack_164 = piVar20[3];
      iStack_160 = piVar20[4];
      iVar26 = param_2[0x10];
      goto joined_r0x0069de0c;
    }
    piVar20 = (int *)param_1[0x39];
  }
  if (piVar20 == (int *)0x0) {
    iVar26 = param_1[0x24];
    param_1[0x39] = (int)local_174;
  }
  else {
    iVar26 = *piVar20;
    if (iVar26 != 0) {
      puVar9 = (undefined4 *)piVar20[1];
      pcVar18 = (code *)*puVar9;
      if (pcVar18 != (code *)0x0) {
        (*pcVar18)(iVar26);
      }
      if (puVar9[1] != 0) {
        thunk_FUN_016d3fb4(iVar26);
      }
    }
    thunk_FUN_016d3fb4(piVar20);
    iVar26 = param_1[0x24];
    param_1[0x39] = (int)local_174;
  }
  if ((iVar26 == 0) && (param_1[0x25] != -0x80000000)) {
    iVar26 = param_1[0x27] + 1;
    puVar9 = (undefined4 *)(param_1[0x26] + 8);
    while (iVar26 = iVar26 + -1, iVar26 != 0) {
      (**(code **)(puVar9[-2] + 0x10))(puVar9 + 1,puVar9[-1],*puVar9);
      puVar9 = puVar9 + 5;
    }
    if (param_1[0x25] != 0) {
      thunk_FUN_016d3fb4(param_1[0x26]);
    }
  }
  pppuVar38 = (uint ***)0x3;
  param_1[0x24] = 6;
  FUN_01015c1c(param_2);
  iVar26 = param_2[0x10];
joined_r0x0069de0c:
  if (iVar26 != 0) {
    FUN_0148eea4(iVar26);
    thunk_FUN_016d3fb4(iVar26);
  }
  if (pppuVar38 == (uint ***)0x3) {
    return;
  }
  piVar14 = (int *)((uint)&local_130 | 4);
  *piVar14 = local_170;
  piVar14[1] = iStack_16c;
  piVar14[2] = iStack_168;
  piVar14[3] = iStack_164;
  piVar14[4] = iStack_160;
  piVar20 = &local_170;
  if (pppuVar38 == (uint ***)0x1) {
    piVar20 = local_124;
    piVar14 = local_128;
  }
  local_130 = (undefined4 ****)pppuVar38;
  if (!(pppuVar38 == (uint ***)0x1 && (piVar14 == (int *)0x0 && piVar20 == (int *)0x0))) {
    if ((param_1[0x24] == 0) && (param_1[0x25] != -0x80000000)) {
      iVar26 = param_1[0x27] + 1;
      puVar9 = (undefined4 *)(param_1[0x26] + 8);
      while (iVar26 = iVar26 + -1, iVar26 != 0) {
        (**(code **)(puVar9[-2] + 0x10))(puVar9 + 1,puVar9[-1],*puVar9);
        puVar9 = puVar9 + 5;
      }
      if (param_1[0x25] != 0) {
        thunk_FUN_016d3fb4(param_1[0x26]);
      }
    }
    param_1[0x24] = (int)pppuVar38;
    param_1[0x25] = local_170;
    param_1[0x26] = iStack_16c;
    param_1[0x27] = iStack_168;
    param_1[0x28] = iStack_164;
    param_1[0x29] = iStack_160;
    return;
  }
  iVar26 = 5;
  if ((char)local_120 != '\0') {
    iVar26 = 6;
  }
  if (((param_1[0x24] == 0) && (param_1[0x25] != -0x80000000)) &&
     (FUN_007bae88(param_1[0x26],param_1[0x27]), param_1[0x25] != 0)) {
    thunk_FUN_016d3fb4(param_1[0x26]);
    param_1[0x24] = iVar26;
    return;
  }
  param_1[0x24] = iVar26;
  return;
LAB_0069d1f4:
  local_50 = local_68;
  local_4c = local_64;
  local_48 = local_60;
  local_44 = piStack_5c;
  local_40 = pppuStack_58;
  if (local_1d4 == local_d0) {
    FUN_010bf5f0(&local_d0);
    local_1d8 = local_cc;
  }
  local_c8 = local_1d4 + 1;
  puVar9 = local_1d8 + local_1d4 * 5;
  *puVar9 = local_50;
  puVar9[1] = local_4c;
  puVar9[2] = local_48;
  puVar9[3] = local_44;
  puVar9[4] = local_40;
  bVar5 = true;
  local_1d4 = local_c8;
  goto LAB_0069c410;
}

