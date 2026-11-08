// FUN_00e182b0 @ 00e182b0 size=7996 calls_out=49 calls_in=0
// strings: internal error: entered unreachable code: unexpected stage | SetGloba | SetGloba | lDefaultError | lDefaultError | SetGloba

/* WARNING: Removing unreachable block (ram,0x00e19940) */
/* WARNING: Removing unreachable block (ram,0x00e18d20) */

undefined4 FUN_00e182b0(int param_1,undefined4 *param_2)

{
  byte bVar1;
  undefined1 uVar2;
  char cVar3;
  int iVar4;
  undefined1 *puVar5;
  byte *pbVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  code *pcVar12;
  byte *****pppppbVar13;
  byte *****pppppbVar14;
  uint uVar15;
  uint extraout_r2;
  uint uVar16;
  uint extraout_r2_00;
  undefined *puVar17;
  undefined4 *puVar18;
  int *piVar19;
  byte ****ppppbVar20;
  uint uVar21;
  int iVar22;
  byte *pbVar23;
  char *pcVar24;
  undefined4 uVar25;
  undefined4 *puVar26;
  undefined4 uVar27;
  byte *****pppppbVar28;
  byte *****pppppbVar29;
  byte *****pppppbVar30;
  bool bVar31;
  undefined8 uVar32;
  undefined4 local_1a4;
  undefined4 local_1a0;
  undefined1 *local_19c;
  undefined1 *local_198;
  undefined1 *local_190;
  undefined1 *local_18c;
  byte ****local_180;
  int *local_17c;
  undefined4 uStack_178;
  uint local_174;
  byte *****local_170;
  int *local_16c;
  byte *****local_90;
  byte *****local_8c;
  byte *****local_88;
  byte ****local_84;
  byte *****local_80;
  byte *****local_7c;
  byte *****local_78;
  byte *****local_74;
  undefined4 *local_70;
  byte *****local_6c;
  byte *****local_68;
  byte *****local_64;
  byte ****local_60;
  undefined4 local_5c;
  byte *****local_58;
  byte *****local_54;
  int *local_50;
  byte *****local_4c;
  byte *****local_48;
  byte *****local_44;
  byte ****local_40;
  byte *****local_3c;
  undefined *local_38;
  uint local_34;
  byte *****local_30;
  byte *****local_2c;
  
  if (*(int *)(param_1 + 0x10) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa478("internal error: entered unreachable code: unexpected stage",0x75,&DAT_018ace94);
  }
  uVar32 = thunk_FUN_016de0ee(0,0x40);
  iVar22 = (int)uVar32 + (int)((ulonglong)uVar32 >> 0x20);
  uVar25 = *(undefined4 *)(param_1 + 8);
  uVar27 = *(undefined4 *)(param_1 + 0xc);
  if (*(char *)(iVar22 + 0x38) != '\x01') {
    if (*(char *)(iVar22 + 0x38) == '\x02') {
      local_1a0 = 0;
      local_1a4 = 0;
      cVar3 = '\x02';
      goto LAB_00e18350;
    }
    FUN_015e8e6c(iVar22,FUN_01655ec4);
    *(undefined1 *)(iVar22 + 0x38) = 1;
  }
  local_1a0 = *(undefined4 *)(iVar22 + 0x18);
  local_1a4 = *(undefined4 *)(iVar22 + 0x1c);
  cVar3 = '\x01';
  *(undefined4 *)(iVar22 + 0x18) = uVar25;
  *(undefined4 *)(iVar22 + 0x1c) = uVar27;
LAB_00e18350:
  puVar8 = (undefined4 *)(param_1 + 0x18);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_1 + 0x50)) {
  case 0:
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 0x3c);
    *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_1 + 0x40);
    *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_1 + 0x44);
    *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_1 + 0x48);
    *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_1 + 0x4c);
    FUN_00e7be40(&local_180,*(undefined4 *)(param_1 + 0x2c));
    *puVar8 = local_180;
    *(int **)(param_1 + 0x1c) = local_17c;
    *(undefined4 *)(param_1 + 0x20) = uStack_178;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_0187995c);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_0187995c);
  case 3:
    goto switchD_00e18364_caseD_3;
  case 4:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_1 + 0x80)) {
    case 0:
      iVar4 = *(int *)(param_1 + 0x58);
      goto LAB_00e18908;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_018798fc);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_018798fc);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_1 + 0x7d)) {
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_01879aec);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_01879aec);
    case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)(param_1 + 0x6d)) {
      case 0:
        piVar19 = *(int **)(param_1 + 0x68);
        *(char *)(param_1 + 0x6c) = *(char *)(param_1 + 0x6e);
        if (*(char *)(param_1 + 0x6e) != '\0') goto LAB_00e18948;
        FUN_00715698();
        goto LAB_00e18948;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_00fb7ca0(&DAT_0187b2cc);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_00fb7cc0(&DAT_0187b2cc);
      case 3:
        goto switchD_00e1852c_caseD_3;
      case 4:
        goto switchD_00e1852c_caseD_4;
      case 5:
        puVar7 = *(undefined4 **)(param_1 + 0x70);
        puVar18 = *(undefined4 **)(param_1 + 0x74);
        goto LAB_00e18f70;
      }
    }
    piVar19 = *(int **)(param_1 + 0x78);
    uVar2 = 1;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_1 + 0x7c)) {
    case 0:
      goto switchD_00e184c8_caseD_0;
    case 1:
      uVar2 = 2;
      goto switchD_00e184c8_caseD_0;
    case 2:
      uVar2 = 3;
      goto switchD_00e184c8_caseD_0;
    case 3:
      uVar2 = 4;
      goto switchD_00e184c8_caseD_0;
    }
  case 5:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_1 + 0xbd)) {
    case 0:
      iVar4 = *(int *)(param_1 + 0xb4);
      puVar7 = *(undefined4 **)(param_1 + 0xb8);
      goto LAB_00e18cc0;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_0187992c);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_0187992c);
    case 3:
      pbVar23 = *(byte **)(param_1 + 0xc4);
      puVar7 = *(undefined4 **)(param_1 + 200);
      goto LAB_00e194b8;
    case 4:
      goto switchD_00e18404_caseD_4;
    case 5:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)(param_1 + 0xec)) {
      case 0:
        iVar4 = *(int *)(param_1 + 0xc0);
        goto LAB_00e1950c;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_00fb7ca0(&DAT_018798ec);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_00fb7cc0(&DAT_018798ec);
      }
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_1 + 0xe9)) {
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_01879afc);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_01879afc);
    case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)(param_1 + 0xd6)) {
      case 0:
        piVar19 = *(int **)(param_1 + 0xd0);
        *(undefined1 *)(param_1 + 0xd5) = *(undefined1 *)(param_1 + 0xd8);
        *(char *)(param_1 + 0xd4) = *(char *)(param_1 + 0xd7);
        if (*(char *)(param_1 + 0xd7) != '\0') goto LAB_00e19554;
        FUN_00715270();
        goto LAB_00e19554;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_00fb7ca0(&DAT_0187b29c);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_00fb7cc0(&DAT_0187b29c);
      case 3:
        goto switchD_00e185e8_caseD_3;
      case 4:
        goto switchD_00e185e8_caseD_4;
      case 5:
        puVar7 = *(undefined4 **)(param_1 + 0xdc);
        puVar18 = *(undefined4 **)(param_1 + 0xe0);
        goto LAB_00e19bfc;
      case 6:
        puVar7 = *(undefined4 **)(param_1 + 0xdc);
        puVar18 = *(undefined4 **)(param_1 + 0xe0);
        goto LAB_00e19ca4;
      }
    }
    piVar19 = *(int **)(param_1 + 0xe4);
    uVar2 = 1;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_1 + 0xe8)) {
    case 0:
      goto switchD_00e185a8_caseD_0;
    case 1:
      uVar2 = 2;
      goto switchD_00e185a8_caseD_0;
    case 2:
      uVar2 = 3;
      goto switchD_00e185a8_caseD_0;
    case 3:
      uVar2 = 4;
      goto switchD_00e185a8_caseD_0;
    }
  case 6:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_1 + 0x80)) {
    case 0:
      puVar7 = *(undefined4 **)(param_1 + 0x58);
      *(undefined4 **)(param_1 + 0x5c) = puVar7;
      goto LAB_00e1a310;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_0187c3d4);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_0187c3d4);
    case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)(param_1 + 0x7c)) {
      case 0:
        puVar7 = *(undefined4 **)(param_1 + 0x60);
        goto LAB_00e1a324;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_00fb7ca0(&DAT_0187c364);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_00fb7cc0(&DAT_0187c364);
      case 3:
        goto switchD_00e18468_caseD_3;
      }
    }
  }
LAB_00e188ac:
  *(undefined1 *)(param_1 + 0x68) = 0;
  *(int *)(param_1 + 0x58) = param_1 + 0x28;
switchD_00e18364_caseD_3:
  bVar1 = FUN_00e1af2c(param_1 + 0x58,param_2);
  if (bVar1 == 2) {
    uVar25 = 2;
    bVar31 = true;
    uVar2 = 3;
  }
  else {
    FUN_005bd080(param_1 + 0x58);
    if ((bVar1 & 1) == 0) {
      if (*(char *)(param_1 + 0x38) == '\0') {
        *(undefined1 *)(param_1 + 0xbd) = 0;
        iVar4 = param_1 + 0x28;
        *(int *)(param_1 + 0xb4) = iVar4;
        *(undefined4 **)(param_1 + 0xb8) = puVar8;
        puVar7 = puVar8;
LAB_00e18cc0:
        *(undefined1 *)(param_1 + 0xbc) = 0;
        *(int *)(param_1 + 0xa8) = iVar4;
        *(undefined4 **)(param_1 + 0xac) = puVar7;
        FUN_01656eb8(&local_180,puVar7,0xb4,0,0,&DAT_0187991c);
        FUN_016dd1aa(param_1 + 0x58,&local_180,0x50);
        *(int *)(param_1 + 0xb0) = param_1 + 0x58;
LAB_00e192b8:
        if (*(char *)(param_1 + 0xbc) == '\0') {
          puVar7 = (undefined4 *)(param_1 + 0xcc);
          *puVar7 = *(undefined4 *)(param_1 + 0xac);
          *(int *)(param_1 + 0xf8) = param_1 + 0xb0;
          *(undefined1 *)(param_1 + 0xf4) = 0;
          pbVar23 = (byte *)(param_1 + 0xc0);
          *pbVar23 = 0;
          *(byte **)(param_1 + 0xc4) = pbVar23;
          cVar3 = *(char *)(iVar22 + 0x38);
          *(undefined4 **)(param_1 + 200) = puVar7;
LAB_00e194b8:
          puVar18 = (undefined4 *)*param_2;
          if (cVar3 != '\x01') {
            if (cVar3 == '\x02') {
                    /* WARNING: Subroutine does not return */
              FUN_015f853c(&DAT_018ae900);
            }
            FUN_015e8e6c(iVar22,FUN_005bc49c);
            *(undefined1 *)(iVar22 + 0x38) = 1;
          }
          cVar3 = *(char *)(iVar22 + 0x30);
          bVar31 = cVar3 == '\x01';
          if (bVar31) {
            cVar3 = *(char *)(iVar22 + 0x31);
          }
          if (bVar31 && cVar3 == '\0') {
            uVar16 = 3;
            FUN_016455a4(*puVar18,puVar18[1]);
            goto LAB_00e1ab04;
          }
          if ((*(uint *)(iVar22 + 0x24) & 1) == 0) {
            uVar32 = FUN_0164e918();
            if ((uint)uVar32 < 2) {
              uVar32 = CONCAT44((int)((ulonglong)uVar32 >> 0x20),1);
            }
          }
          else {
            uVar32 = CONCAT44(*(undefined4 *)(iVar22 + 0x28),*(undefined4 *)(iVar22 + 0x2c));
          }
          uVar16 = (uint)((ulonglong)uVar32 >> 0x20);
          uVar15 = (uint)uVar32;
          uVar16 = uVar16 ^ uVar16 << 0x11;
          *(uint *)(iVar22 + 0x28) = uVar15;
          *(undefined4 *)(iVar22 + 0x24) = 1;
          puVar26 = puVar7 + 3;
          uVar16 = uVar15 >> 0x10 ^ uVar16 >> 7 ^ uVar15 ^ uVar16;
          *(uint *)(iVar22 + 0x2c) = uVar16;
          bVar1 = *pbVar23;
          uVar21 = (uint)bVar1;
          if ((int)(uVar16 + uVar15) < 0) {
            uVar15 = (uVar21 & 2) >> 1;
            if ((bVar1 & 2) == 0) {
              iVar4 = FUN_01657fc4(*(undefined4 *)puVar7[0xb],puVar18);
              bVar1 = 2;
              uVar16 = 2;
              if (iVar4 != 0) {
                uVar21 = (uint)*pbVar23;
                goto LAB_00e19ee4;
              }
            }
            else {
LAB_00e19ee4:
              if ((uVar21 & 1) != 0) goto LAB_00e1a908;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
              switch(*(undefined1 *)(puVar7 + 10)) {
              case 0:
                uVar25 = *puVar7;
                puVar7[1] = uVar25;
                while( true ) {
                  puVar7[2] = uVar25;
                  *(undefined1 *)(puVar7 + 9) = 0;
LAB_00e1a9d8:
                  *(undefined1 *)(puVar7 + 8) = 0;
                  puVar7[6] = 0;
                  puVar7[7] = 0;
                  puVar7[3] = uVar25;
                  puVar7[4] = 0;
switchD_00e19f94_caseD_3:
                  FUN_00e7d8dc(&local_40,puVar26,puVar18);
                  pppppbVar29 = local_3c;
                  ppppbVar20 = local_40;
                  if (local_40 == (byte ****)0x3 && local_3c == (byte *****)0x0) {
                    uVar16 = 3;
                    *(undefined1 *)(puVar7 + 9) = 3;
                    *(undefined1 *)(puVar7 + 10) = 3;
                    goto LAB_00e1ab04;
                  }
                  FUN_00e7c67c(puVar26);
                  if (puVar7[4] != 0) {
                    (**(code **)(puVar7[4] + 0xc))(puVar7[5]);
                  }
                  *(undefined1 *)(puVar7 + 9) = 1;
                  if (((uint)ppppbVar20 & 1) == 0) break;
                  uVar25 = puVar7[1];
                }
                break;
              case 1:
switchD_00e19ef8_caseD_1:
                    /* WARNING: Subroutine does not return */
                FUN_00fb7ca0(&DAT_0187c3d4);
              case 2:
switchD_00e19ef8_caseD_2:
                    /* WARNING: Subroutine does not return */
                FUN_00fb7cc0(&DAT_0187c3d4);
              case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
                switch(*(undefined1 *)(puVar7 + 9)) {
                case 0:
                  uVar25 = puVar7[2];
                  goto LAB_00e1a9d8;
                case 2:
switchD_00e19f94_caseD_2:
                    /* WARNING: Subroutine does not return */
                  FUN_00fb7cc0(&DAT_0187c364);
                case 3:
                  goto switchD_00e19f94_caseD_3;
                }
switchD_00e19f94_caseD_1:
                    /* WARNING: Subroutine does not return */
                FUN_00fb7ca0(&DAT_0187c364);
              }
LAB_00e1aa40:
              bVar1 = 1;
              *(undefined1 *)(puVar7 + 10) = 1;
              uVar16 = 0;
              if (ppppbVar20 != (byte ****)&SUB_00000002 || pppppbVar29 != (byte *****)0x0) {
                uVar16 = 1;
              }
            }
LAB_00e1aa54:
            *pbVar23 = *pbVar23 | bVar1;
          }
          else {
            uVar15 = uVar21 & 1;
            if ((bVar1 & 1) == 0) {
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
              switch(*(undefined1 *)(puVar7 + 10)) {
              case 0:
                uVar25 = *puVar7;
                puVar7[1] = uVar25;
                while( true ) {
                  puVar7[2] = uVar25;
                  *(undefined1 *)(puVar7 + 9) = 0;
LAB_00e1a858:
                  *(undefined1 *)(puVar7 + 8) = 0;
                  puVar7[6] = 0;
                  puVar7[7] = 0;
                  puVar7[3] = uVar25;
                  puVar7[4] = 0;
switchD_00e19f6c_caseD_3:
                  FUN_00e7d8dc(&local_40,puVar26,puVar18);
                  pppppbVar29 = local_3c;
                  ppppbVar20 = local_40;
                  if (local_40 == (byte ****)0x3 && local_3c == (byte *****)0x0) {
                    *(undefined1 *)(puVar7 + 9) = 3;
                    *(undefined1 *)(puVar7 + 10) = 3;
                    uVar21 = (uint)*pbVar23;
                    goto LAB_00e1a8a0;
                  }
                  FUN_00e7c67c(puVar26);
                  if (puVar7[4] != 0) {
                    (**(code **)(puVar7[4] + 0xc))(puVar7[5]);
                  }
                  *(undefined1 *)(puVar7 + 9) = 1;
                  if (((uint)ppppbVar20 & 1) == 0) break;
                  uVar25 = puVar7[1];
                }
                break;
              case 1:
                goto switchD_00e19ef8_caseD_1;
              case 2:
                goto switchD_00e19ef8_caseD_2;
              case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
                switch(*(undefined1 *)(puVar7 + 9)) {
                case 0:
                  uVar25 = puVar7[2];
                  goto LAB_00e1a858;
                case 2:
                  goto switchD_00e19f94_caseD_2;
                case 3:
                  goto switchD_00e19f6c_caseD_3;
                }
                goto switchD_00e19f94_caseD_1;
              }
              goto LAB_00e1aa40;
            }
LAB_00e1a8a0:
            if ((uVar21 & 2) == 0) {
              iVar4 = FUN_01657fc4(*(undefined4 *)puVar7[0xb],puVar18);
              bVar1 = 2;
              uVar16 = 2;
              if (iVar4 == 0) goto LAB_00e1aa54;
              uVar16 = 3;
              goto LAB_00e1ab04;
            }
LAB_00e1a908:
            uVar16 = 3;
            if (uVar15 != 1) goto LAB_00e1ab04;
          }
          cVar3 = *(char *)(param_1 + 0xf4);
          bVar31 = cVar3 == '\x03';
          if (bVar31) {
            cVar3 = *(char *)(param_1 + 0xf0);
          }
          if (bVar31 && cVar3 == '\x03') {
            FUN_00e7c67c(param_1 + 0xd8);
            if (*(int *)(param_1 + 0xdc) != 0) {
              (**(code **)(*(int *)(param_1 + 0xdc) + 0xc))(*(undefined4 *)(param_1 + 0xe0));
            }
          }
          iVar4 = uVar16 - 1;
          if (uVar16 == 0 || iVar4 == 0) {
            iVar4 = 0;
          }
          if (iVar4 == 0) {
            uVar21 = 2;
            if ((uVar16 & 1) != 0) goto LAB_00e1a72c;
          }
          else {
            if (iVar4 != 1) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa478("all branches are disabled and there is no else branch",0x6b,
                           &DAT_0187993c);
            }
            *(undefined1 *)(param_1 + 0xbc) = 1;
          }
          *(undefined1 *)(param_1 + 0xd0) = 0;
          *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_1 + 0xa8);
switchD_00e18404_caseD_4:
          bVar1 = FUN_00e1af2c(param_1 + 0xc0,param_2);
          if (bVar1 != 2) goto code_r0x00e1a6f4;
          uVar16 = 4;
          goto LAB_00e1ab04;
        }
        if (DAT_018d9130 < 4) {
          uVar16 = (uint)DAT_018da244;
          if (uVar16 - 1 < 2) {
LAB_00e192f0:
            if (uVar16 != 2) {
              puVar17 = &DAT_018ae394;
              DataMemoryBarrier(0xb);
              pcVar24 = s_SetGloba_00414c05;
              if ((DAT_018dd984 == 2) &&
                 (pcVar24 = (char *)DAT_018daa74, puVar17 = DAT_018daa78, DAT_018daa70 != 0)) {
                pcVar24 = (char *)((int)DAT_018daa74 +
                                  (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8);
              }
              iVar4 = (**(code **)(puVar17 + 0x14))(pcVar24);
              if (iVar4 == 0) goto LAB_00e194f8;
            }
            if ((byte *****)DAT_018da23c[8] == (byte *****)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_0187994c);
            }
            local_78 = (byte *****)&local_58;
            local_64 = (byte *****)DAT_018da23c[9];
            local_60 = DAT_018da23c[10];
            local_7c = (byte *****)&local_6c;
            local_4c = (byte *****)&local_7c;
            local_30 = (byte *****)&local_4c;
            local_5c = 0;
            local_48 = (byte *****)&DAT_00000001;
            local_74 = (byte *****)&DAT_018abb78;
            local_54 = (byte *****)0x6f;
            local_58 = (byte *****)&DAT_00358408;
            local_3c = (byte *****)0x0;
            local_40 = (byte ****)&DAT_00000001;
            DataMemoryBarrier(0xb);
            piVar19 = (int *)s_SetGloba_00414c05;
            puVar17 = &DAT_018ae394;
            if ((DAT_018dd984 == 2) &&
               (piVar19 = DAT_018daa74, puVar17 = DAT_018daa78, DAT_018daa70 != 0)) {
              piVar19 = (int *)((int)DAT_018daa74 +
                               (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8);
            }
            local_6c = (byte *****)DAT_018da23c[7];
            local_68 = (byte *****)DAT_018da23c[8];
            local_44 = DAT_018da23c + 7;
            local_2c = DAT_018da23c;
            iVar4 = (**(code **)(puVar17 + 0x28))(piVar19,&local_40);
            if (iVar4 != 0) {
              (**(code **)(puVar17 + 0x2c))(piVar19,&local_40);
            }
          }
          else if (uVar16 != 0) {
            uVar16 = FUN_0169ac90(&DAT_018da23c);
            uVar16 = uVar16 & 0xff;
            if (uVar16 != 0) goto LAB_00e192f0;
          }
        }
LAB_00e194f8:
        *(undefined1 *)(param_1 + 0xec) = 0;
        iVar4 = *(int *)(param_1 + 0xa8);
        *(int *)(param_1 + 0xc0) = iVar4;
LAB_00e1950c:
        piVar19 = (int *)(*(int *)(iVar4 + 0xc) + 8);
        uVar2 = 1;
        *(undefined2 *)(param_1 + 0xe8) = 0;
        *(int **)(param_1 + 0xe4) = piVar19;
switchD_00e185a8_caseD_0:
        *(undefined1 *)(param_1 + 0xd7) = uVar2;
        *(undefined1 *)(param_1 + 0xd4) = uVar2;
        *(undefined1 *)(param_1 + 0xd8) = 0;
        *(int **)(param_1 + 0xd0) = piVar19;
        *(undefined2 *)(param_1 + 0xd5) = 0;
LAB_00e19554:
        *(int *)(param_1 + 0xdc) = *piVar19 + 8;
        *(undefined4 *)(param_1 + 0xe0) = 0xffffffff;
switchD_00e185e8_caseD_3:
        pppppbVar29 = (byte *****)(param_1 + 0xdc);
        iVar4 = FUN_00e442f8(pppppbVar29,param_2);
        if (iVar4 == 0) {
          uVar2 = 3;
LAB_00e19dc0:
          local_190 = (undefined1 *)(param_1 + 0xd6);
          local_198 = (undefined1 *)(param_1 + 0xec);
          local_19c = (undefined1 *)(param_1 + 0xe9);
          uVar16 = 5;
          *local_190 = uVar2;
          *local_19c = 3;
          *local_198 = 3;
LAB_00e1ab04:
          local_18c = (undefined1 *)(param_1 + 0xbd);
          uVar25 = 2;
          bVar31 = true;
          *local_18c = (char)uVar16;
          uVar2 = 5;
          goto LAB_00e1ab18;
        }
        *(int *)(param_1 + 0xc4) = iVar4;
        if (*pppppbVar29 != (byte ****)0x0) {
          FUN_00e44660(*pppppbVar29,*(undefined4 *)(param_1 + 0xe0),1);
          iVar4 = *(int *)(param_1 + 0xc4);
        }
        ppppbVar20 = (byte ****)0x80000002;
        piVar19 = (int *)(iVar4 + 0x38);
        if (*piVar19 == 0) {
LAB_00e19d14:
          FUN_00e44900(iVar4);
        }
        else {
          *(int **)(param_1 + 200) = piVar19;
          *(int *)(param_1 + 0xdc) = *(int *)(*piVar19 + 0x14) + 8;
          *(undefined4 *)(param_1 + 0xe0) = 0xffffffff;
switchD_00e185e8_caseD_4:
          iVar4 = FUN_00e442f8(param_1 + 0xdc,param_2);
          if (iVar4 == 0) {
            uVar2 = 4;
            goto LAB_00e19dc0;
          }
          *(int *)(param_1 + 0xcc) = iVar4;
          uVar16 = 0;
          if (*(int *)(param_1 + 0xdc) != 0) {
            FUN_00e44660(*(int *)(param_1 + 0xdc),*(undefined4 *)(param_1 + 0xe0),1);
            iVar4 = *(int *)(param_1 + 0xcc);
            uVar16 = extraout_r2_00;
          }
          pppppbVar29 = *(byte ******)(iVar4 + 0x28);
          pppppbVar30 = (byte *****)(param_1 + 0xd4);
          pppppbVar28 = (byte *****)(uint)*(byte *)pppppbVar30;
          if (pppppbVar29 <= pppppbVar28) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa4a4(pppppbVar28,pppppbVar29,&DAT_0187e4f0);
          }
          pbVar23 = *(byte **)(iVar4 + 0x24);
          ppppbVar20 = (byte ****)0x80000001;
          if (pbVar23[(int)pppppbVar28] == 0) {
            pbVar6 = pbVar23;
            pppppbVar14 = pppppbVar29;
            do {
              pppppbVar13 = pppppbVar14;
              pppppbVar14 = pppppbVar13;
              if (pppppbVar13 != (byte *****)0x0) {
                uVar16 = (uint)*pbVar6;
                pppppbVar14 = (byte *****)((int)pppppbVar13 + -1);
                pbVar6 = pbVar6 + 1;
              }
            } while (pppppbVar13 != (byte *****)0x0 && uVar16 != 1);
            DataMemoryBarrier(0xb);
            if (DAT_018d7c7c == 0) {
              FUN_0077fa84(DAT_018d7d0c,pppppbVar28,1);
            }
            pbVar23[(int)pppppbVar28] = 1;
            do {
              if (pppppbVar29 == (byte *****)0x0) {
                pppppbVar29 = (byte *****)0x0;
                if (pppppbVar13 != (byte *****)0x0) goto LAB_00e19954;
LAB_00e19718:
                if (DAT_018d9130 < 3) {
                  uVar16 = (uint)DAT_018da2a4;
                  if (uVar16 - 1 < 2) {
LAB_00e19738:
                    pppppbVar29 = DAT_018da29c;
                    puVar17 = &DAT_018ae394;
                    if (uVar16 != 2) {
                      DataMemoryBarrier(0xb);
                      piVar19 = (int *)s_SetGloba_00414c05;
                      if ((DAT_018dd984 == 2) &&
                         (piVar19 = DAT_018daa74, puVar17 = DAT_018daa78, DAT_018daa70 != 0)) {
                        piVar19 = (int *)((int)DAT_018daa74 +
                                         (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8);
                      }
                      iVar4 = (**(code **)(puVar17 + 0x14))(piVar19,DAT_018da29c);
                      if (iVar4 == 0) goto LAB_00e19b04;
                    }
                    pppppbVar28 = DAT_018da29c + 7;
                    if ((byte *****)DAT_018da29c[8] == (byte *****)0x0) {
                    /* WARNING: Subroutine does not return */
                      FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_0187b2ac);
                    }
                    local_64 = (byte *****)DAT_018da29c[9];
                    local_60 = DAT_018da29c[10];
                    local_5c = 0;
                    local_6c = (byte *****)*pppppbVar28;
                    local_68 = (byte *****)DAT_018da29c[8];
                    FUN_005e72b0(&local_4c,*(int *)(param_1 + 0xcc) + 0x20,pppppbVar30);
                    local_80 = (byte *****)&local_7c;
                    local_54 = &local_84;
                    local_58 = (byte *****)&local_6c;
                    local_90 = (byte *****)&local_58;
                    local_70 = &DAT_006043a8;
                    pppppbVar29 = (byte *****)&DAT_018dd940;
                    local_2c = DAT_018da29c;
                    local_78 = (byte *****)&LAB_008d5ffc;
                    local_74 = (byte *****)&local_4c;
                    local_30 = (byte *****)&local_90;
                    local_8c = (byte *****)&DAT_00000001;
                    local_40 = (byte ****)&DAT_00000001;
                    local_84 = (byte ****)&DAT_0058e8a0;
                    local_50 = (int *)&DAT_018abb78;
                    local_3c = (byte *****)0x0;
                    DataMemoryBarrier(0xb);
                    piVar19 = (int *)s_SetGloba_00414c05;
                    puVar17 = &DAT_018ae394;
                    if ((DAT_018dd984 == 2) &&
                       (piVar19 = DAT_018daa74, puVar17 = DAT_018daa78, DAT_018daa70 != 0)) {
                      piVar19 = (int *)((int)DAT_018daa74 +
                                       (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8);
                    }
                    local_88 = pppppbVar28;
                    local_7c = pppppbVar30;
                    iVar4 = (**(code **)(puVar17 + 0x28))(piVar19,&local_40);
                    if (iVar4 != 0) {
                      (**(code **)(puVar17 + 0x2c))(piVar19,&local_40);
                    }
                    if (local_4c != (byte *****)0x0) {
                      thunk_FUN_016d3fb4(local_48);
                    }
                    ppppbVar20 = (byte ****)0x80000001;
                    goto LAB_00e19d08;
                  }
                  if (uVar16 != 0) {
                    uVar16 = FUN_0169ac90(&DAT_018da29c);
                    uVar16 = uVar16 & 0xff;
                    pppppbVar29 = (byte *****)0x18da26c;
                    if (uVar16 != 0) goto LAB_00e19738;
                  }
                }
LAB_00e19b04:
                ppppbVar20 = (byte ****)0x80000001;
                goto LAB_00e19d08;
              }
              bVar1 = *pbVar23;
              pppppbVar29 = (byte *****)((int)pppppbVar29 + -1);
              pbVar23 = pbVar23 + 1;
            } while (bVar1 != 1);
            if (pppppbVar13 != (byte *****)0x0) goto LAB_00e19718;
LAB_00e19954:
            if (DAT_018d9130 < 3) {
              uVar16 = (uint)DAT_018da2b0;
              if (1 < uVar16 - 1) {
                if (uVar16 != 0) {
                  uVar16 = FUN_0169ac90(&DAT_018da2a8);
                  uVar16 = uVar16 & 0xff;
                  if (uVar16 != 0) goto LAB_00e19978;
                }
                goto LAB_00e19b20;
              }
LAB_00e19978:
              if (uVar16 != 2) {
                puVar17 = &DAT_018ae394;
                DataMemoryBarrier(0xb);
                pcVar24 = s_SetGloba_00414c05;
                if ((DAT_018dd984 == 2) &&
                   (pcVar24 = (char *)DAT_018daa74, puVar17 = DAT_018daa78, DAT_018daa70 != 0)) {
                  pcVar24 = (char *)((int)DAT_018daa74 +
                                    (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8);
                }
                iVar4 = (**(code **)(puVar17 + 0x14))(pcVar24);
                if (iVar4 == 0) goto LAB_00e19b20;
              }
              if ((byte *****)DAT_018da2a8[8] == (byte *****)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_0187b2bc);
              }
              local_7c = (byte *****)&local_6c;
              local_64 = (byte *****)DAT_018da2a8[9];
              local_60 = DAT_018da2a8[10];
              local_78 = (byte *****)&local_90;
              local_4c = (byte *****)&local_7c;
              puVar17 = &DAT_018ae394;
              local_5c = 0;
              local_48 = (byte *****)&DAT_00000001;
              local_74 = (byte *****)&DAT_018abb78;
              local_8c = (byte *****)&local_58;
              local_90 = (byte *****)&DAT_00571bd5;
              local_3c = (byte *****)0x0;
              local_30 = (byte *****)&local_4c;
              local_54 = (byte *****)&LAB_008d5ffc;
              local_40 = (byte ****)&DAT_00000001;
              DataMemoryBarrier(0xb);
              pcVar24 = s_SetGloba_00414c05;
              if ((DAT_018dd984 == 2) &&
                 (pcVar24 = (char *)DAT_018daa74, puVar17 = DAT_018daa78, DAT_018daa70 != 0)) {
                pcVar24 = (char *)((int)DAT_018daa74 +
                                  (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8);
              }
              local_6c = (byte *****)DAT_018da2a8[7];
              local_68 = (byte *****)DAT_018da2a8[8];
              local_58 = pppppbVar30;
              local_44 = DAT_018da2a8 + 7;
              local_2c = DAT_018da2a8;
              iVar4 = (**(code **)(puVar17 + 0x28))(pcVar24,&local_40);
              if (iVar4 != 0) {
                (**(code **)(puVar17 + 0x2c))(pcVar24,&local_40);
              }
              cVar3 = *(char *)(param_1 + 0xd5);
            }
            else {
LAB_00e19b20:
              cVar3 = *(char *)(param_1 + 0xd5);
            }
            if (cVar3 != '\0') {
              local_34 = local_34 & 0xffffff00;
              local_40 = (byte ****)(**(int **)(param_1 + 200) + 8);
              puVar7 = (undefined4 *)thunk_FUN_016d4a50(0x10);
              if (puVar7 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_00600874(4,0x10);
              }
              puVar7[3] = local_34;
              puVar18 = &DAT_0187a9b4;
              *puVar7 = local_40;
              puVar7[1] = local_3c;
              puVar7[2] = local_38;
              *(undefined4 **)(param_1 + 0xdc) = puVar7;
              *(undefined4 **)(param_1 + 0xe0) = &DAT_0187a9b4;
LAB_00e19bfc:
              iVar4 = (*(code *)puVar18[3])(puVar7,param_2);
              if (iVar4 != 0) {
                uVar2 = 5;
                goto LAB_00e19dc0;
              }
              uVar25 = *(undefined4 *)(param_1 + 0xdc);
              puVar7 = *(undefined4 **)(param_1 + 0xe0);
              pcVar12 = (code *)*puVar7;
              if (pcVar12 != (code *)0x0) {
                (*pcVar12)(uVar25);
              }
              if (puVar7[1] != 0) {
                thunk_FUN_016d3fb4(uVar25);
              }
            }
            local_34 = CONCAT31((int3)(local_34 >> 8),(&UNK_0035947e)[*(byte *)(param_1 + 0xd4)]) &
                       0xffff00ff;
            local_38 = (undefined *)(**(int **)(param_1 + 200) + 8);
            puVar7 = (undefined4 *)thunk_FUN_016d4a50(0x10);
            if (puVar7 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_00600874(4,0x10);
            }
            puVar7[3] = local_34;
            puVar18 = &DAT_0187a954;
            *puVar7 = local_40;
            puVar7[1] = local_3c;
            puVar7[2] = local_38;
            *(undefined4 **)(param_1 + 0xdc) = puVar7;
            *(undefined4 **)(param_1 + 0xe0) = &DAT_0187a954;
LAB_00e19ca4:
            (*(code *)puVar18[3])(&local_40,puVar7,param_2);
            pppppbVar29 = local_3c;
            ppppbVar20 = local_40;
            if (local_40 == (byte ****)0x80000002) {
              uVar2 = 6;
              goto LAB_00e19dc0;
            }
            puVar7 = *(undefined4 **)(param_1 + 0xe0);
            uVar25 = *(undefined4 *)(param_1 + 0xdc);
            pcVar12 = (code *)*puVar7;
            if (pcVar12 != (code *)0x0) {
              (*pcVar12)(uVar25);
            }
            if (puVar7[1] != 0) {
              thunk_FUN_016d3fb4(uVar25);
            }
            if (ppppbVar20 != (byte ****)0x80000001) {
              iVar4 = *(int *)(param_1 + 0xcc);
              goto LAB_00e19d34;
            }
            ppppbVar20 = (byte ****)&DAT_80000004;
LAB_00e19d08:
            FUN_00e44900(*(undefined4 *)(param_1 + 0xcc));
            iVar4 = *(int *)(param_1 + 0xc4);
            goto LAB_00e19d14;
          }
LAB_00e19d34:
          FUN_00e44900(iVar4);
          FUN_00e44900(*(undefined4 *)(param_1 + 0xc4));
        }
        local_190 = (undefined1 *)(param_1 + 0xd6);
        local_198 = (undefined1 *)(param_1 + 0xec);
        local_19c = (undefined1 *)(param_1 + 0xe9);
        uVar21 = 1;
        *local_190 = 1;
        FUN_00de6d60(param_1 + 0xc4);
        *local_19c = 1;
        if (ppppbVar20 != (byte ****)&DAT_80000004) {
          puVar5 = (undefined1 *)0x3;
          if (&DAT_80000000 < ppppbVar20) {
            puVar5 = (undefined1 *)((int)ppppbVar20 + 0x7fffffff);
          }
          uVar21 = 0;
          if (puVar5 != (undefined1 *)0x1) {
            uVar21 = 2;
          }
          if (puVar5 == (undefined1 *)0x0) {
            uVar21 = 1;
          }
          if ((-0x7ffffffd < (int)ppppbVar20) && (ppppbVar20 != (byte ****)0x0)) {
            thunk_FUN_016d3fb4(pppppbVar29);
          }
        }
        *local_198 = 1;
        FUN_00a07b4c(param_1 + 0x58);
        goto LAB_00e1a734;
      }
      goto LAB_00e1a2f0;
    }
    if (*(char *)(param_1 + 0x38) == '\0') goto LAB_00e1a2f0;
    *(undefined1 *)(param_1 + 0x80) = 0;
    iVar4 = param_1 + 0x28;
    *(int *)(param_1 + 0x58) = iVar4;
LAB_00e18908:
    piVar19 = (int *)(*(int *)(iVar4 + 0xc) + 8);
    uVar2 = 1;
    *(undefined2 *)(param_1 + 0x7c) = 0;
    *(int **)(param_1 + 0x78) = piVar19;
switchD_00e184c8_caseD_0:
    *(undefined1 *)(param_1 + 0x6d) = 0;
    *(undefined1 *)(param_1 + 0x6e) = uVar2;
    *(int **)(param_1 + 0x68) = piVar19;
    *(undefined1 *)(param_1 + 0x6c) = uVar2;
LAB_00e18948:
    *(int *)(param_1 + 0x70) = *piVar19 + 8;
    *(undefined4 *)(param_1 + 0x74) = 0xffffffff;
switchD_00e1852c_caseD_3:
    piVar19 = (int *)(param_1 + 0x70);
    iVar4 = FUN_00e442f8(piVar19,param_2);
    if (iVar4 != 0) {
      *(int *)(param_1 + 0x5c) = iVar4;
      if (*piVar19 != 0) {
        FUN_00e44660(*piVar19,*(undefined4 *)(param_1 + 0x74),1);
        iVar4 = *(int *)(param_1 + 0x5c);
      }
      ppppbVar20 = (byte ****)0x80000002;
      piVar9 = (int *)(iVar4 + 0x38);
      if (*piVar9 == 0) {
LAB_00e18fdc:
        FUN_00e44900(iVar4);
      }
      else {
        *(int **)(param_1 + 0x60) = piVar9;
        *(int *)(param_1 + 0x70) = *(int *)(*piVar9 + 0x14) + 8;
        *(undefined4 *)(param_1 + 0x74) = 0xffffffff;
switchD_00e1852c_caseD_4:
        iVar4 = FUN_00e442f8(param_1 + 0x70,param_2);
        if (iVar4 == 0) {
          uVar2 = 4;
          goto LAB_00e190a4;
        }
        *(int *)(param_1 + 100) = iVar4;
        uVar16 = 0;
        if (*(int *)(param_1 + 0x70) != 0) {
          FUN_00e44660(*(int *)(param_1 + 0x70),*(undefined4 *)(param_1 + 0x74),1);
          iVar4 = *(int *)(param_1 + 100);
          uVar16 = extraout_r2;
        }
        piVar19 = *(int **)(iVar4 + 0x28);
        pppppbVar29 = (byte *****)(param_1 + 0x6c);
        piVar9 = (int *)(uint)*(byte *)pppppbVar29;
        if (piVar19 <= piVar9) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa4a4(piVar9,piVar19,&DAT_0187e4f0);
        }
        pbVar23 = *(byte **)(iVar4 + 0x24);
        ppppbVar20 = (byte ****)0x80000001;
        if (pbVar23[(int)piVar9] != 0) {
          pbVar6 = pbVar23;
          piVar11 = piVar19;
          do {
            piVar10 = piVar11;
            piVar11 = piVar10;
            if (piVar10 != (int *)0x0) {
              uVar16 = (uint)*pbVar6;
              piVar11 = (int *)((int)piVar10 + -1);
              pbVar6 = pbVar6 + 1;
            }
          } while (piVar10 != (int *)0x0 && uVar16 != 1);
          DataMemoryBarrier(0xb);
          if (DAT_018d7c7c == 0) {
            FUN_0077fa84(DAT_018d7d0c,piVar9,0);
          }
          pbVar23[(int)piVar9] = 0;
          do {
            if (piVar19 == (int *)0x0) {
              piVar19 = (int *)0x0;
              if (piVar10 != (int *)0x0) goto LAB_00e18d34;
              goto LAB_00e18aac;
            }
            bVar1 = *pbVar23;
            piVar19 = (int *)((int)piVar19 + -1);
            pbVar23 = pbVar23 + 1;
          } while (bVar1 != 1);
          if (piVar10 == (int *)0x0) {
LAB_00e18d34:
            if (DAT_018d9130 < 3) {
              uVar16 = (uint)DAT_018da2c8;
              if (uVar16 - 1 < 2) {
LAB_00e18d54:
                if (uVar16 != 2) {
                  puVar17 = &DAT_018ae394;
                  DataMemoryBarrier(0xb);
                  pcVar24 = s_SetGloba_00414c05;
                  if ((DAT_018dd984 == 2) &&
                     (pcVar24 = (char *)DAT_018daa74, puVar17 = DAT_018daa78, DAT_018daa70 != 0)) {
                    pcVar24 = (char *)((int)DAT_018daa74 +
                                      (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8);
                  }
                  iVar4 = (**(code **)(puVar17 + 0x14))(pcVar24);
                  if (iVar4 == 0) goto LAB_00e18f24;
                }
                if ((byte *****)DAT_018da2c0[8] == (byte *****)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_0187b2ec);
                }
                local_38 = (undefined *)DAT_018da2c0[9];
                local_68 = (byte *****)&local_58;
                local_6c = &local_40;
                local_34 = DAT_018da2c0[10];
                local_7c = (byte *****)&local_6c;
                local_30 = (byte *****)0x0;
                local_78 = (byte *****)&DAT_00000001;
                local_64 = (byte *****)&DAT_018abb78;
                local_54 = (byte *****)&local_4c;
                local_58 = (byte *****)&DAT_00587d2e;
                local_180 = (byte ****)0x1;
                local_170 = (byte *****)&local_7c;
                local_48 = (byte *****)&LAB_008d5ffc;
                local_17c = (int *)0x0;
                DataMemoryBarrier(0xb);
                piVar19 = (int *)s_SetGloba_00414c05;
                puVar17 = &DAT_018ae394;
                if ((DAT_018dd984 == 2) &&
                   (piVar19 = DAT_018daa74, puVar17 = DAT_018daa78, DAT_018daa70 != 0)) {
                  piVar19 = (int *)((int)DAT_018daa74 +
                                   (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8);
                }
                local_16c = DAT_018da2c0;
                local_74 = (byte *****)(DAT_018da2c0 + 7);
                local_4c = pppppbVar29;
                local_40 = (byte ****)DAT_018da2c0[7];
                local_3c = (byte *****)DAT_018da2c0[8];
                iVar4 = (**(code **)(puVar17 + 0x28))(piVar19,&local_180);
                if (iVar4 != 0) {
                  (**(code **)(puVar17 + 0x2c))(piVar19,&local_180);
                }
              }
              else if (uVar16 != 0) {
                uVar16 = FUN_0169ac90(&DAT_018da2c0);
                uVar16 = uVar16 & 0xff;
                if (uVar16 != 0) goto LAB_00e18d54;
              }
            }
LAB_00e18f24:
            local_174 = local_174 & 0xffffff00;
            local_180 = (byte ****)(**(int **)(param_1 + 0x60) + 8);
            puVar7 = (undefined4 *)thunk_FUN_016d4a50(0x10);
            if (puVar7 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_00600874(4,0x10);
            }
            *puVar7 = local_180;
            puVar7[1] = local_17c;
            puVar7[2] = uStack_178;
            puVar18 = &DAT_0187a974;
            puVar7[3] = local_174;
            *(undefined4 **)(param_1 + 0x70) = puVar7;
            *(undefined4 **)(param_1 + 0x74) = &DAT_0187a974;
LAB_00e18f70:
            (*(code *)puVar18[3])(&local_180,puVar7,param_2);
            piVar19 = local_17c;
            ppppbVar20 = local_180;
            if (local_180 == (byte ****)0x80000002) {
              uVar2 = 5;
              goto LAB_00e190a4;
            }
            puVar7 = *(undefined4 **)(param_1 + 0x74);
            uVar25 = *(undefined4 *)(param_1 + 0x70);
            pcVar12 = (code *)*puVar7;
            if (pcVar12 != (code *)0x0) {
              (*pcVar12)(uVar25);
            }
            if (puVar7[1] != 0) {
              thunk_FUN_016d3fb4(uVar25);
            }
            if (ppppbVar20 != (byte ****)0x80000001) {
              iVar4 = *(int *)(param_1 + 100);
              goto LAB_00e18fe8;
            }
            ppppbVar20 = (byte ****)&DAT_80000004;
          }
          else {
LAB_00e18aac:
            if (DAT_018d9130 < 3) {
              uVar16 = (uint)DAT_018da2bc;
              if (uVar16 - 1 < 2) {
LAB_00e18acc:
                piVar19 = DAT_018da2b4;
                if (uVar16 != 2) {
                  puVar17 = &DAT_018ae394;
                  DataMemoryBarrier(0xb);
                  pcVar24 = s_SetGloba_00414c05;
                  if ((DAT_018dd984 == 2) &&
                     (pcVar24 = (char *)DAT_018daa74, puVar17 = DAT_018daa78, DAT_018daa70 != 0)) {
                    pcVar24 = (char *)((int)DAT_018daa74 +
                                      (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8);
                  }
                  iVar4 = (**(code **)(puVar17 + 0x14))(pcVar24,DAT_018da2b4);
                  if (iVar4 == 0) goto LAB_00e18efc;
                }
                piVar9 = DAT_018da2b4 + 7;
                if ((byte *****)DAT_018da2b4[8] == (byte *****)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_0187b2dc);
                }
                local_38 = (undefined *)DAT_018da2b4[9];
                local_34 = DAT_018da2b4[10];
                local_30 = (byte *****)0x0;
                local_40 = (byte ****)*piVar9;
                local_3c = (byte *****)DAT_018da2b4[8];
                FUN_005e7098(&local_7c,*(int *)(param_1 + 100) + 0x20);
                local_8c = (byte *****)&local_6c;
                local_48 = (byte *****)&local_90;
                local_4c = &local_40;
                local_58 = (byte *****)&local_4c;
                local_60 = (byte ****)&DAT_006043a8;
                local_16c = DAT_018da2b4;
                local_90 = (byte *****)&DAT_0058aaba;
                local_170 = (byte *****)&local_58;
                local_54 = (byte *****)&DAT_00000001;
                local_68 = (byte *****)&LAB_008d5ffc;
                local_44 = (byte *****)&DAT_018abb78;
                local_17c = (int *)0x0;
                local_180 = (byte ****)0x1;
                DataMemoryBarrier(0xb);
                piVar19 = (int *)s_SetGloba_00414c05;
                puVar17 = &DAT_018ae394;
                if ((DAT_018dd984 == 2) &&
                   (piVar19 = DAT_018daa74, puVar17 = DAT_018daa78, DAT_018daa70 != 0)) {
                  piVar19 = (int *)((int)DAT_018daa74 +
                                   (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8);
                }
                local_6c = pppppbVar29;
                local_64 = (byte *****)&local_7c;
                local_50 = piVar9;
                iVar4 = (**(code **)(puVar17 + 0x28))(piVar19,&local_180);
                if (iVar4 != 0) {
                  (**(code **)(puVar17 + 0x2c))(piVar19,&local_180);
                }
                if (local_7c != (byte *****)0x0) {
                  thunk_FUN_016d3fb4(local_78);
                }
                ppppbVar20 = (byte ****)0x80000001;
                goto LAB_00e18fd0;
              }
              if (uVar16 != 0) {
                uVar16 = FUN_0169ac90(&DAT_018da2b4);
                uVar16 = uVar16 & 0xff;
                if (uVar16 != 0) goto LAB_00e18acc;
              }
            }
LAB_00e18efc:
            ppppbVar20 = (byte ****)0x80000001;
          }
LAB_00e18fd0:
          FUN_00e44900(*(undefined4 *)(param_1 + 100));
          iVar4 = *(int *)(param_1 + 0x5c);
          goto LAB_00e18fdc;
        }
LAB_00e18fe8:
        FUN_00e44900(iVar4);
        FUN_00e44900(*(undefined4 *)(param_1 + 0x5c));
      }
      local_18c = (undefined1 *)(param_1 + 0x80);
      local_190 = (undefined1 *)(param_1 + 0x7d);
      *(undefined1 *)(param_1 + 0x6d) = 1;
      FUN_00de6ba8(param_1 + 0x5c);
      *local_190 = 1;
      if (ppppbVar20 != (byte ****)&DAT_80000004) {
        puVar5 = (undefined1 *)0x3;
        if ((byte ****)0x80000000 < ppppbVar20) {
          puVar5 = (undefined1 *)((int)ppppbVar20 + 0x7fffffff);
        }
        uVar16 = 0;
        if (puVar5 != (undefined1 *)0x1) {
          uVar16 = 2;
        }
        if (puVar5 == (undefined1 *)0x0) {
          uVar16 = 1;
        }
        if ((-0x7ffffffd < (int)ppppbVar20) && (ppppbVar20 != (byte ****)0x0)) {
          thunk_FUN_016d3fb4(piVar19);
        }
        *local_18c = 1;
        if (uVar16 != 2) {
          if ((uVar16 & 1) != 0) {
            *(undefined1 *)(param_1 + 0x38) = 0;
          }
          goto LAB_00e1a2f0;
        }
        goto LAB_00e1a768;
      }
      *local_18c = 1;
      uVar2 = 0;
      goto LAB_00e1a760;
    }
    uVar2 = 3;
LAB_00e190a4:
    local_18c = (undefined1 *)(param_1 + 0x80);
    local_190 = (undefined1 *)(param_1 + 0x7d);
    uVar25 = 2;
    *(undefined1 *)(param_1 + 0x6d) = uVar2;
    bVar31 = true;
    *local_190 = 3;
    *local_18c = 3;
    uVar2 = 4;
  }
  goto LAB_00e1ab18;
code_r0x00e1a6f4:
  FUN_005bd080(param_1 + 0xc0);
  uVar21 = 0;
  if ((bVar1 & 1) != 0) goto LAB_00e1a72c;
  goto LAB_00e192b8;
code_r0x00e1a3a4:
  if ((DAT_018d9130 < 4) &&
     (((DAT_018da250 - 1 < 2 ||
       ((DAT_018da250 != 0 && (cVar3 = FUN_0169ac90(&DAT_018da248), cVar3 != '\0')))) &&
      (iVar4 = FUN_016949d8(DAT_018da248), iVar4 != 0)))) {
    if (*(int **)(DAT_018da248 + 0x20) == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_0187996c);
    }
    local_3c = (byte *****)&local_7c;
    uStack_178 = *(undefined4 *)(DAT_018da248 + 0x24);
    local_174 = *(uint *)(DAT_018da248 + 0x28);
    local_40 = (byte ****)&local_180;
    local_6c = &local_40;
    local_68 = (byte *****)&DAT_00000001;
    local_170 = (byte *****)0x0;
    local_38 = &DAT_018abb78;
    local_78 = (byte *****)&DAT_0000003f;
    local_7c = (byte *****)&DAT_0035843f;
    local_180 = *(byte *****)(DAT_018da248 + 0x1c);
    local_17c = *(int **)(DAT_018da248 + 0x20);
    local_64 = (byte *****)(DAT_018da248 + 0x1c);
    FUN_00e1ae5c(&local_6c);
  }
  FUN_00e7decc(puVar8);
  piVar19 = *(int **)(param_1 + 0x20);
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar19;
    bVar31 = (bool)hasExclusiveAccess(piVar19);
  } while (!bVar31);
  *piVar19 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0078205c(*(undefined4 *)(param_1 + 0x20));
  }
  FUN_00d66ffc(param_1 + 0x28);
  piVar19 = *(int **)(param_1 + 0x34);
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar19;
    bVar31 = (bool)hasExclusiveAccess(piVar19);
  } while (!bVar31);
  *piVar19 = iVar4 + -1;
  goto LAB_00e1a630;
LAB_00e1a72c:
  FUN_00a07b4c(param_1 + 0x58);
LAB_00e1a734:
  local_18c = (undefined1 *)(param_1 + 0xbd);
  *local_18c = 1;
  FUN_00de6c88(param_1 + 0x58);
  if (uVar21 != 2) {
    uVar2 = 1;
    if ((uVar21 & 1) != 0) {
LAB_00e1a760:
      *(undefined1 *)(param_1 + 0x38) = uVar2;
    }
LAB_00e1a2f0:
    *(undefined4 **)(param_1 + 0x58) = puVar8;
    *(undefined4 **)(param_1 + 0x5c) = puVar8;
    *(undefined1 *)(param_1 + 0x80) = 0;
    puVar7 = puVar8;
LAB_00e1a310:
    while( true ) {
      *(undefined4 **)(param_1 + 0x60) = puVar7;
      *(undefined1 *)(param_1 + 0x7c) = 0;
LAB_00e1a324:
      *(undefined1 *)(param_1 + 0x78) = 0;
      *(undefined4 *)(param_1 + 0x70) = 0;
      *(undefined4 *)(param_1 + 0x74) = 0;
      *(undefined4 **)(param_1 + 100) = puVar7;
      *(undefined4 *)(param_1 + 0x68) = 0;
switchD_00e18468_caseD_3:
      FUN_00e7d8dc(&local_180,param_1 + 100,*param_2);
      piVar19 = local_17c;
      ppppbVar20 = local_180;
      if (local_180 == (byte ****)0x3 && local_17c == (int *)0x0) {
        uVar25 = 2;
        *(undefined1 *)(param_1 + 0x7c) = 3;
        *(undefined1 *)(param_1 + 0x80) = 3;
        bVar31 = true;
        uVar2 = 6;
        goto LAB_00e1ab18;
      }
      FUN_00e7c67c(param_1 + 100);
      if (*(int *)(param_1 + 0x68) != 0) {
        (**(code **)(*(int *)(param_1 + 0x68) + 0xc))(*(undefined4 *)(param_1 + 0x6c));
      }
      *(undefined1 *)(param_1 + 0x7c) = 1;
      if (((uint)ppppbVar20 & 1) == 0) break;
      puVar7 = *(undefined4 **)(param_1 + 0x5c);
    }
    *(undefined1 *)(param_1 + 0x80) = 1;
    if (ppppbVar20 != (byte ****)0x2 || piVar19 != (int *)0x0) goto code_r0x00e1a3a4;
    goto LAB_00e188ac;
  }
LAB_00e1a768:
  FUN_00e7decc(puVar8);
  piVar19 = *(int **)(param_1 + 0x20);
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar19;
    bVar31 = (bool)hasExclusiveAccess(piVar19);
  } while (!bVar31);
  *piVar19 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0078205c(*(undefined4 *)(param_1 + 0x20));
  }
  FUN_00d66ffc(param_1 + 0x28);
  piVar19 = *(int **)(param_1 + 0x34);
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar19;
    bVar31 = (bool)hasExclusiveAccess(piVar19);
  } while (!bVar31);
  *piVar19 = iVar4 + -1;
LAB_00e1a630:
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0078d010(*(undefined4 *)(param_1 + 0x34));
  }
  bVar31 = false;
  uVar2 = 1;
  uVar25 = 1;
LAB_00e1ab18:
  *(undefined1 *)(param_1 + 0x50) = uVar2;
  if (*(char *)(iVar22 + 0x38) != '\x01') {
    if (*(char *)(iVar22 + 0x38) == '\x02') goto joined_r0x00e1ab38;
    FUN_015e8e6c(iVar22,FUN_01655ec4);
    *(undefined1 *)(iVar22 + 0x38) = 1;
  }
  *(undefined4 *)(iVar22 + 0x18) = local_1a0;
  *(undefined4 *)(iVar22 + 0x1c) = local_1a4;
joined_r0x00e1ab38:
  if (bVar31) {
    return uVar25;
  }
  local_180 = (byte ****)0x2;
  FUN_00e1ac5c(param_1,&local_180);
  return uVar25;
}

