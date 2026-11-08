// FUN_01141430 @ 01141430 size=4392 calls_out=15 calls_in=2
// strings: 

/* WARNING: Removing unreachable block (ram,0x011422d8) */
/* WARNING: Removing unreachable block (ram,0x01142218) */
/* WARNING: Removing unreachable block (ram,0x01142308) */
/* WARNING: Removing unreachable block (ram,0x01142388) */
/* WARNING: Removing unreachable block (ram,0x01141ebc) */
/* WARNING: Removing unreachable block (ram,0x0114187c) */
/* WARNING: Removing unreachable block (ram,0x01141a58) */
/* WARNING: Removing unreachable block (ram,0x01141960) */
/* WARNING: Removing unreachable block (ram,0x0114192c) */
/* WARNING: Removing unreachable block (ram,0x011418c4) */
/* WARNING: Removing unreachable block (ram,0x01141cc0) */
/* WARNING: Removing unreachable block (ram,0x0114254c) */
/* WARNING: Removing unreachable block (ram,0x01142280) */
/* WARNING: Removing unreachable block (ram,0x01142344) */
/* WARNING: Removing unreachable block (ram,0x011422b4) */
/* WARNING: Removing unreachable block (ram,0x01142248) */
/* WARNING: Removing unreachable block (ram,0x011418f8) */

void FUN_01141430(char *param_1,int param_2)

{
  code *pcVar1;
  byte bVar2;
  undefined1 uVar3;
  short sVar4;
  ushort uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  ushort *puVar9;
  uint uVar10;
  uint *puVar11;
  uint *puVar12;
  int *piVar13;
  char cVar14;
  uint uVar15;
  uint local_44;
  int local_40;
  uint local_3c;
  char local_38;
  undefined2 local_37;
  char local_35;
  int local_34;
  undefined8 local_30;
  undefined1 local_28 [4];
  
  bVar2 = *(byte *)(param_2 + 0x10);
  uVar8 = (uint)bVar2;
  uVar15 = (uint)*(byte *)(param_2 + 0x11);
  *(undefined1 *)(param_2 + 0x10) = 1;
  piVar13 = (int *)(param_1 + 4);
  uVar10 = uVar8;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar2) {
  case 0:
  case 0xc0:
  case 0xc2:
  case 0xc3:
  case 0xca:
  case 0xcb:
  case 0xcc:
  case 0xcd:
  case 0xce:
  case 0xcf:
  case 0xd0:
  case 0xd1:
  case 0xd2:
  case 0xd3:
  case 0xe0:
    goto switchD_0114145c_caseD_0;
  case 1:
    if (*(int *)(param_2 + 0xc) == 0) {
      cVar14 = '\0';
      goto LAB_01141c98;
    }
    uVar7 = *(int *)(param_2 + 0xc) - 1;
    puVar11 = (uint *)(*(byte **)(param_2 + 8) + 1);
    bVar2 = **(byte **)(param_2 + 8);
    *(uint **)(param_2 + 8) = puVar11;
    *(uint *)(param_2 + 0xc) = uVar7;
    uVar8 = (uint)bVar2;
    uVar10 = 0;
    uVar15 = uVar8;
    if (0x7fffffff < (uint)(int)(char)bVar2) {
      if (uVar8 < 0x90) {
        uVar15 = uVar8 & 0xf;
        goto switchD_0114145c_caseD_80;
      }
      if (uVar8 < 0xa0) {
        uVar15 = uVar8 & 0xf;
        break;
      }
      if (uVar8 < 0xc0) {
        uVar15 = uVar8 & 0x1f;
        goto LAB_01141fb0;
      }
      uVar10 = uVar8;
      switch(uVar8) {
      case 0xc0:
      case 0xc2:
      case 0xc3:
      case 0xca:
      case 0xcb:
      case 0xcc:
      case 0xcd:
      case 0xce:
      case 0xcf:
      case 0xd0:
      case 0xd1:
      case 0xd2:
      case 0xd3:
        break;
      case 0xc1:
        goto switchD_0114145c_caseD_c1;
      case 0xc4:
        goto switchD_01141d2c_caseD_c4;
      case 0xc5:
        goto switchD_01141d2c_caseD_c5;
      case 0xc6:
        goto switchD_01141d2c_caseD_c6;
      case 199:
      case 200:
      case 0xc9:
      case 0xd4:
      case 0xd5:
      case 0xd6:
      case 0xd7:
      case 0xd8:
        goto switchD_0114145c_caseD_c7;
      case 0xd9:
        goto switchD_01141d2c_caseD_d9;
      case 0xda:
        goto joined_r0x01141a30;
      case 0xdb:
        goto joined_r0x0114189c;
      case 0xdc:
        goto switchD_01141d2c_caseD_dc;
      case 0xdd:
        goto switchD_01141d2c_caseD_dd;
      case 0xde:
        goto switchD_01141d2c_caseD_de;
      case 0xdf:
        goto switchD_01141d2c_caseD_df;
      default:
        uVar10 = 0xe0;
      }
    }
switchD_0114145c_caseD_0:
    cVar14 = (char)uVar15;
    switch(uVar10) {
    case 0xc0:
      local_38 = '\a';
      FUN_0113e12c(param_1,&DAT_0057fedd,local_28 + 0xc);
      return;
    case 0xc2:
    case 0xc3:
      local_37 = CONCAT11(local_37._1_1_,uVar10 == 0xc3);
      local_38 = '\0';
      FUN_0113e12c(param_1,&DAT_0057fedd,local_28 + 0xc);
      return;
    case 0xca:
      uVar10 = *(uint *)(param_2 + 0xc);
      puVar11 = *(uint **)(param_2 + 8);
      if (uVar10 < 4) {
        *(uint *)(param_2 + 8) = (int)puVar11 + uVar10;
        *(undefined4 *)(param_2 + 0xc) = 0;
        param_1[4] = '\x02';
        param_1[5] = '\0';
        param_1[6] = '\0';
        param_1[7] = '\0';
        *param_1 = '\x01';
        *(undefined **)(param_1 + 8) = &DAT_018aab20;
        return;
      }
      uVar15 = *puVar11;
      *(uint **)(param_2 + 8) = puVar11 + 1;
      *(uint *)(param_2 + 0xc) = uVar10 - 4;
      local_30 = (double)(float)(uVar15 << 0x18 | (uVar15 >> 8 & 0xff) << 0x10 |
                                 (uVar15 >> 0x10 & 0xff) << 8 | uVar15 >> 0x18);
      local_38 = '\x03';
      FUN_0113e12c(param_1,&DAT_0057fedd,local_28 + 0xc);
      return;
    case 0xcb:
      puVar11 = *(uint **)(param_2 + 8);
      uVar10 = *(uint *)(param_2 + 0xc);
      if (7 < uVar10) {
        uVar8 = *puVar11;
        uVar15 = puVar11[1];
        *(uint **)(param_2 + 8) = puVar11 + 2;
        *(uint *)(param_2 + 0xc) = uVar10 - 8;
        local_30 = (double)CONCAT44(uVar8 << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 |
                                    (uVar8 >> 0x10 & 0xff) << 8 | uVar8 >> 0x18,
                                    uVar15 << 0x18 | (uVar15 >> 8 & 0xff) << 0x10 |
                                    (uVar15 >> 0x10 & 0xff) << 8 | uVar15 >> 0x18);
        local_38 = '\x03';
        FUN_0113e12c(param_1,&DAT_0057fedd,local_28 + 0xc);
        return;
      }
      *(uint *)(param_2 + 8) = (int)puVar11 + uVar10;
      *(undefined4 *)(param_2 + 0xc) = 0;
      break;
    case 0xcc:
      if (*(int *)(param_2 + 0xc) != 0) {
        uVar3 = **(undefined1 **)(param_2 + 8);
        *(undefined1 **)(param_2 + 8) = *(undefined1 **)(param_2 + 8) + 1;
        *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + -1;
        FUN_01151664(param_1,uVar3);
        return;
      }
      break;
    case 0xcd:
      uVar10 = *(uint *)(param_2 + 0xc);
      puVar9 = *(ushort **)(param_2 + 8);
      if (1 < uVar10) {
        uVar5 = *puVar9;
        *(ushort **)(param_2 + 8) = puVar9 + 1;
        *(uint *)(param_2 + 0xc) = uVar10 - 2;
        local_38 = '\x01';
        local_30 = (double)(ulonglong)((uVar5 & 0xff) << 8 | (uint)(uVar5 >> 8));
        FUN_0113e12c(param_1,&DAT_0057fedd,local_28 + 0xc);
        return;
      }
      *(uint *)(param_2 + 8) = (int)puVar9 + uVar10;
      *(undefined4 *)(param_2 + 0xc) = 0;
      break;
    case 0xce:
      uVar10 = *(uint *)(param_2 + 0xc);
      puVar11 = *(uint **)(param_2 + 8);
      if (3 < uVar10) {
        uVar15 = *puVar11;
        *(uint **)(param_2 + 8) = puVar11 + 1;
        *(uint *)(param_2 + 0xc) = uVar10 - 4;
        local_38 = '\x01';
        local_30 = (double)(ulonglong)
                           (uVar15 << 0x18 | (uVar15 >> 8 & 0xff) << 0x10 |
                            (uVar15 >> 0x10 & 0xff) << 8 | uVar15 >> 0x18);
        FUN_0113e12c(param_1,&DAT_0057fedd,local_28 + 0xc);
        return;
      }
      *(uint *)(param_2 + 8) = (int)puVar11 + uVar10;
      *(undefined4 *)(param_2 + 0xc) = 0;
      break;
    case 0xcf:
      puVar11 = *(uint **)(param_2 + 8);
      uVar10 = *(uint *)(param_2 + 0xc);
      if (7 < uVar10) {
        uVar8 = *puVar11;
        uVar15 = puVar11[1];
        *(uint **)(param_2 + 8) = puVar11 + 2;
        *(uint *)(param_2 + 0xc) = uVar10 - 8;
        local_38 = '\x01';
        local_30 = (double)CONCAT44(uVar8 << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 |
                                    (uVar8 >> 0x10 & 0xff) << 8 | uVar8 >> 0x18,
                                    uVar15 << 0x18 | (uVar15 >> 8 & 0xff) << 0x10 |
                                    (uVar15 >> 0x10 & 0xff) << 8 | uVar15 >> 0x18);
        FUN_0113e12c(param_1,&DAT_0057fedd,local_28 + 0xc);
        return;
      }
      *(uint *)(param_2 + 8) = (int)puVar11 + uVar10;
      *(undefined4 *)(param_2 + 0xc) = 0;
      break;
    case 0xd0:
      if (*(int *)(param_2 + 0xc) != 0) {
        cVar14 = **(char **)(param_2 + 8);
        *(char **)(param_2 + 8) = *(char **)(param_2 + 8) + 1;
        *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + -1;
        goto LAB_011515dc;
      }
      break;
    case 0xd1:
      uVar10 = *(uint *)(param_2 + 0xc);
      puVar9 = *(ushort **)(param_2 + 8);
      if (1 < uVar10) {
        uVar5 = *puVar9;
        *(ushort **)(param_2 + 8) = puVar9 + 1;
        *(uint *)(param_2 + 0xc) = uVar10 - 2;
        local_30 = (double)(longlong)(int)(short)(uVar5 << 8 | uVar5 >> 8);
        local_38 = '\x02';
        FUN_0113e12c(param_1,&DAT_0057fedd,local_28 + 0xc);
        return;
      }
      *(uint *)(param_2 + 8) = (int)puVar9 + uVar10;
      *(undefined4 *)(param_2 + 0xc) = 0;
      break;
    case 0xd2:
      uVar10 = *(uint *)(param_2 + 0xc);
      puVar11 = *(uint **)(param_2 + 8);
      if (3 < uVar10) {
        uVar15 = *puVar11;
        *(uint **)(param_2 + 8) = puVar11 + 1;
        *(uint *)(param_2 + 0xc) = uVar10 - 4;
        local_38 = '\x02';
        local_30 = (double)(longlong)
                           (int)(uVar15 << 0x18 | (uVar15 >> 8 & 0xff) << 0x10 |
                                 (uVar15 >> 0x10 & 0xff) << 8 | uVar15 >> 0x18);
        FUN_0113e12c(param_1,&DAT_0057fedd,local_28 + 0xc);
        return;
      }
      *(uint *)(param_2 + 8) = (int)puVar11 + uVar10;
      *(undefined4 *)(param_2 + 0xc) = 0;
      break;
    case 0xd3:
      puVar11 = *(uint **)(param_2 + 8);
      uVar10 = *(uint *)(param_2 + 0xc);
      if (7 < uVar10) {
        uVar8 = *puVar11;
        uVar15 = puVar11[1];
        *(uint **)(param_2 + 8) = puVar11 + 2;
        *(uint *)(param_2 + 0xc) = uVar10 - 8;
        local_38 = '\x02';
        local_30 = (double)CONCAT44(uVar8 << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 |
                                    (uVar8 >> 0x10 & 0xff) << 8 | uVar8 >> 0x18,
                                    uVar15 << 0x18 | (uVar15 >> 8 & 0xff) << 0x10 |
                                    (uVar15 >> 0x10 & 0xff) << 8 | uVar15 >> 0x18);
        FUN_0113e12c(param_1,&DAT_0057fedd,local_28 + 0xc);
        return;
      }
      *(uint *)(param_2 + 8) = (int)puVar11 + uVar10;
      *(undefined4 *)(param_2 + 0xc) = 0;
      break;
    case 0xe0:
LAB_011515dc:
      local_30 = (double)(longlong)(int)cVar14;
      local_38 = '\x02';
      FUN_0113e12c(param_1,&DAT_0057fedd,local_28 + 0xc);
      return;
    default:
      if (uVar10 == 0) {
        FUN_01151664(param_1,uVar15);
        return;
      }
    case 0xc1:
    case 0xc4:
    case 0xc5:
    case 0xc6:
    case 199:
    case 200:
    case 0xc9:
    case 0xd4:
    case 0xd5:
    case 0xd6:
    case 0xd7:
    case 0xd8:
    case 0xd9:
    case 0xda:
    case 0xdb:
    case 0xdc:
    case 0xdd:
    case 0xde:
    case 0xdf:
      param_1[2] = cVar14;
      param_1[1] = (char)uVar10;
      *param_1 = '\x02';
      return;
    }
    *param_1 = '\x01';
    param_1[4] = '\x02';
    param_1[5] = '\0';
    param_1[6] = '\0';
    param_1[7] = '\0';
    *(undefined **)(param_1 + 8) = &DAT_018aab20;
    return;
  default:
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x114208c);
    (*pcVar1)();
  case 0x80:
    goto switchD_0114145c_caseD_80;
  case 0x90:
    break;
  case 0xa0:
  case 0xd9:
  case 0xda:
  case 0xdb:
    if (0xd9 < uVar8) {
      if (uVar8 != 0xda) {
        if (uVar8 != 0xdb) goto switchD_0114145c_caseD_c1;
        puVar11 = *(uint **)(param_2 + 8);
        uVar7 = *(uint *)(param_2 + 0xc);
joined_r0x0114189c:
        if (3 < uVar7) {
          uVar10 = *puVar11;
          uVar7 = uVar7 - 4;
          *(uint **)(param_2 + 8) = puVar11 + 1;
          *(uint *)(param_2 + 0xc) = uVar7;
          uVar15 = uVar10 << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 | (uVar10 >> 0x10 & 0xff) << 8 |
                   uVar10 >> 0x18;
          goto LAB_01141fb0;
        }
        *(uint *)(param_2 + 8) = (int)puVar11 + uVar7;
        *(undefined4 *)(param_2 + 0xc) = 0;
        goto LAB_01141ed0;
      }
      puVar11 = *(uint **)(param_2 + 8);
      uVar7 = *(uint *)(param_2 + 0xc);
joined_r0x01141a30:
      if (1 < uVar7) {
        uVar10 = *puVar11;
        uVar7 = uVar7 - 2;
        *(ushort **)(param_2 + 8) = (ushort *)((int)puVar11 + 2);
        *(uint *)(param_2 + 0xc) = uVar7;
        uVar15 = ((ushort)uVar10 & 0xff) << 8 | (uint)(ushort)((ushort)uVar10 >> 8);
        goto LAB_01141fb0;
      }
      *(uint *)(param_2 + 8) = (int)puVar11 + uVar7;
      *(undefined4 *)(param_2 + 0xc) = 0;
      goto LAB_01141ed0;
    }
    if (uVar8 == 0xa0) {
      uVar7 = *(uint *)(param_2 + 0xc);
      goto LAB_01141fb0;
    }
    if (uVar8 != 0xd9) goto switchD_0114145c_caseD_c1;
    uVar7 = *(uint *)(param_2 + 0xc);
switchD_01141d2c_caseD_d9:
    if (uVar7 != 0) {
      uVar7 = uVar7 - 1;
      uVar15 = (uint)**(byte **)(param_2 + 8);
      *(byte **)(param_2 + 8) = *(byte **)(param_2 + 8) + 1;
      *(uint *)(param_2 + 0xc) = uVar7;
LAB_01141fb0:
      if (uVar7 < uVar15) {
        param_1[4] = '\x01';
        param_1[5] = '%';
        param_1[6] = '\0';
        param_1[7] = '\0';
        *(uint *)(param_1 + 8) = uVar15;
        *param_1 = '\x01';
        return;
      }
      iVar6 = *(int *)(param_2 + 8);
      *(uint *)(param_2 + 8) = iVar6 + uVar15;
      *(uint *)(param_2 + 0xc) = uVar7 - uVar15;
      FUN_00fab1e0(&local_44,iVar6,uVar15);
      if (local_44 != 1) {
        FUN_011520d4(param_1,local_40,local_3c);
        return;
      }
      FUN_01152068(&local_38,iVar6,uVar15);
      if (local_38 == '\t') {
        *piVar13 = local_34;
        *(undefined4 *)(param_1 + 8) = (undefined4)local_30;
        *(undefined4 *)(param_1 + 0xc) = local_30._4_4_;
        *param_1 = '\t';
        return;
      }
      *piVar13 = local_40;
      *(uint *)(param_1 + 8) = local_3c;
      *param_1 = '\a';
      FUN_0113e870(&local_38);
      return;
    }
    goto LAB_01141ed0;
  case 0xc1:
switchD_0114145c_caseD_c1:
    param_1[0] = '\x02';
    param_1[1] = -0x3f;
    return;
  case 0xc4:
  case 0xc5:
  case 0xc6:
    uVar7 = *(uint *)(param_2 + 0xc);
    if (uVar8 != 0xc4) {
      if (uVar8 == 0xc6) {
        puVar11 = *(uint **)(param_2 + 8);
switchD_01141d2c_caseD_c6:
        if (3 < uVar7) {
          puVar12 = puVar11 + 1;
          uVar10 = *puVar11;
          uVar7 = uVar7 - 4;
          *(uint **)(param_2 + 8) = puVar12;
          *(uint *)(param_2 + 0xc) = uVar7;
          uVar10 = uVar10 << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 | (uVar10 >> 0x10 & 0xff) << 8 |
                   uVar10 >> 0x18;
          goto LAB_01141e4c;
        }
        *(uint *)(param_2 + 8) = (int)puVar11 + uVar7;
        *(undefined4 *)(param_2 + 0xc) = 0;
        goto LAB_01141ed0;
      }
      puVar11 = *(uint **)(param_2 + 8);
switchD_01141d2c_caseD_c5:
      if (1 < uVar7) {
        puVar12 = (uint *)((int)puVar11 + 2);
        uVar10 = *puVar11;
        uVar7 = uVar7 - 2;
        *(uint **)(param_2 + 8) = puVar12;
        *(uint *)(param_2 + 0xc) = uVar7;
        uVar10 = ((ushort)uVar10 & 0xff) << 8 | (uint)(ushort)((ushort)uVar10 >> 8);
        goto LAB_01141e4c;
      }
      *(uint *)(param_2 + 8) = (int)puVar11 + uVar7;
      *(undefined4 *)(param_2 + 0xc) = 0;
      goto LAB_01141ed0;
    }
switchD_01141d2c_caseD_c4:
    if (uVar7 != 0) {
      uVar7 = uVar7 - 1;
      puVar12 = (uint *)(*(byte **)(param_2 + 8) + 1);
      uVar10 = (uint)**(byte **)(param_2 + 8);
      *(uint **)(param_2 + 8) = puVar12;
      *(uint *)(param_2 + 0xc) = uVar7;
LAB_01141e4c:
      if (uVar7 < uVar10) {
        param_1[4] = '\x01';
        param_1[5] = '%';
        param_1[6] = '\0';
        param_1[7] = '\0';
        *(uint *)(param_1 + 8) = uVar10;
        *param_1 = '\x01';
        return;
      }
      *(byte **)(param_2 + 8) = (byte *)((int)puVar12 + uVar10);
      *(uint *)(param_2 + 0xc) = uVar7 - uVar10;
      if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(0,uVar10);
      }
      if (uVar10 == 0) {
        iVar6 = 1;
        uVar10 = 0;
      }
      else {
        iVar6 = thunk_FUN_016d4a50(uVar10);
        if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(1,uVar10);
        }
      }
      FUN_016dd1aa(iVar6,puVar12,uVar10);
      *(uint *)(param_1 + 4) = uVar10;
      *(int *)(param_1 + 8) = iVar6;
      *(uint *)(param_1 + 0xc) = uVar10;
      *param_1 = '\t';
      return;
    }
LAB_01141ed0:
    *(undefined **)(param_1 + 8) = &DAT_018aab20;
    *(undefined4 *)(param_1 + 0xc) = (undefined4)local_30;
    param_1[4] = '\x02';
    param_1[5] = '\0';
    param_1[6] = '\0';
    param_1[7] = '\0';
    *param_1 = '\x01';
    return;
  case 199:
  case 200:
  case 0xc9:
  case 0xd4:
  case 0xd5:
  case 0xd6:
  case 0xd7:
  case 0xd8:
switchD_0114145c_caseD_c7:
    FUN_0113e67c(&local_38,param_2,uVar8,uVar15);
    if (local_38 != '\t') {
      param_1[3] = local_35;
      *(undefined2 *)(param_1 + 1) = local_37;
      *(undefined4 *)(param_1 + 8) = (undefined4)local_30;
      *(undefined4 *)(param_1 + 0xc) = local_30._4_4_;
      *(int *)(param_1 + 4) = local_34;
      *param_1 = local_38;
      return;
    }
    sVar4 = *(short *)(param_2 + 0x12);
    *(short *)(param_2 + 0x12) = sVar4 + -1;
    if (sVar4 == 1) goto LAB_01141de4;
    FUN_01151568(param_1);
    goto LAB_01141f00;
  case 0xdc:
    puVar11 = *(uint **)(param_2 + 8);
    uVar7 = *(uint *)(param_2 + 0xc);
switchD_01141d2c_caseD_dc:
    if (uVar7 < 2) {
      *(uint *)(param_2 + 8) = (int)puVar11 + uVar7;
      *(undefined4 *)(param_2 + 0xc) = 0;
LAB_011419d4:
      cVar14 = '\x01';
LAB_01141c98:
      *param_1 = cVar14;
      *piVar13 = 2;
      *(undefined **)(param_1 + 8) = &DAT_018aab20;
      return;
    }
    uVar10 = *puVar11;
    *(ushort **)(param_2 + 8) = (ushort *)((int)puVar11 + 2);
    *(uint *)(param_2 + 0xc) = uVar7 - 2;
    uVar15 = ((ushort)uVar10 & 0xff) << 8 | (uint)(ushort)((ushort)uVar10 >> 8);
    break;
  case 0xdd:
    puVar11 = *(uint **)(param_2 + 8);
    uVar7 = *(uint *)(param_2 + 0xc);
switchD_01141d2c_caseD_dd:
    if (uVar7 < 4) {
      *(uint *)(param_2 + 8) = (int)puVar11 + uVar7;
      *(undefined4 *)(param_2 + 0xc) = 0;
      goto LAB_01141ed0;
    }
    uVar10 = *puVar11;
    *(uint **)(param_2 + 8) = puVar11 + 1;
    *(uint *)(param_2 + 0xc) = uVar7 - 4;
    uVar15 = uVar10 << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 | (uVar10 >> 0x10 & 0xff) << 8 |
             uVar10 >> 0x18;
    break;
  case 0xde:
    puVar11 = *(uint **)(param_2 + 8);
    uVar7 = *(uint *)(param_2 + 0xc);
switchD_01141d2c_caseD_de:
    if (uVar7 < 2) {
      *(uint *)(param_2 + 8) = (int)puVar11 + uVar7;
      *(undefined4 *)(param_2 + 0xc) = 0;
      goto LAB_011419d4;
    }
    uVar10 = *puVar11;
    *(ushort **)(param_2 + 8) = (ushort *)((int)puVar11 + 2);
    *(uint *)(param_2 + 0xc) = uVar7 - 2;
    uVar15 = ((ushort)uVar10 & 0xff) << 8 | (uint)(ushort)((ushort)uVar10 >> 8);
    goto switchD_0114145c_caseD_80;
  case 0xdf:
    puVar11 = *(uint **)(param_2 + 8);
    uVar7 = *(uint *)(param_2 + 0xc);
switchD_01141d2c_caseD_df:
    if (uVar7 < 4) {
      *(uint *)(param_2 + 8) = (int)puVar11 + uVar7;
      *(undefined4 *)(param_2 + 0xc) = 0;
      goto LAB_01141ed0;
    }
    uVar10 = *puVar11;
    *(uint **)(param_2 + 8) = puVar11 + 1;
    *(uint *)(param_2 + 0xc) = uVar7 - 4;
    uVar15 = uVar10 << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 | (uVar10 >> 0x10 & 0xff) << 8 |
             uVar10 >> 0x18;
switchD_0114145c_caseD_80:
    sVar4 = *(short *)(param_2 + 0x12);
    *(short *)(param_2 + 0x12) = sVar4 + -1;
    if (sVar4 != 1) {
      FUN_01151968(&local_38);
      if (local_38 != '\t') {
        param_1[3] = local_35;
        *(undefined2 *)(param_1 + 1) = local_37;
        *(int *)(param_1 + 4) = local_34;
        *(undefined4 *)(param_1 + 8) = (undefined4)local_30;
        *(undefined4 *)(param_1 + 0xc) = local_30._4_4_;
        *param_1 = local_38;
        return;
      }
      if (uVar15 == 0) {
        *(undefined4 *)(param_1 + 8) = (undefined4)local_30;
        *(int *)(param_1 + 4) = local_34;
        *(undefined4 *)(param_1 + 0xc) = local_30._4_4_;
        *param_1 = '\t';
      }
      else {
        param_1[4] = '\0';
        param_1[5] = '\0';
        param_1[6] = '\0';
        param_1[7] = '\0';
        *param_1 = '\x04';
        if (local_34 != 0) {
          thunk_FUN_016d3fb4();
        }
      }
LAB_01141f00:
      *(short *)(param_2 + 0x12) = *(short *)(param_2 + 0x12) + 1;
      return;
    }
    goto LAB_01141de4;
  }
  sVar4 = *(short *)(param_2 + 0x12);
  *(short *)(param_2 + 0x12) = sVar4 + -1;
  if (sVar4 != 1) {
    uVar10 = uVar15;
    if (0xfff < uVar15) {
      uVar10 = 0x1000;
    }
    if (uVar15 == 0) {
      uVar15 = 0;
      local_40 = 1;
      local_44 = 0;
    }
    else {
      iVar6 = thunk_FUN_016d4a50(uVar10);
      if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,uVar10);
      }
      local_3c = 0;
      local_44 = uVar10;
      local_40 = iVar6;
      do {
        uVar10 = local_3c;
        FUN_0113d96c(&local_38,param_2);
        cVar14 = (char)local_37;
        if (local_38 != '\t') {
          if (local_44 != 0) {
            thunk_FUN_016d3fb4(iVar6);
          }
          *(int *)(param_1 + 4) = local_34;
          *(undefined4 *)(param_1 + 8) = (undefined4)local_30;
          *(undefined4 *)(param_1 + 0xc) = local_30._4_4_;
          param_1[3] = local_35;
          param_1[2] = local_37._1_1_;
          param_1[1] = (char)local_37;
          *param_1 = local_38;
          return;
        }
        if (uVar10 == local_44) {
          FUN_006029c0(&local_44);
          iVar6 = local_40;
        }
        *(char *)(iVar6 + uVar10) = cVar14;
        local_3c = uVar10 + 1;
      } while (uVar15 != local_3c);
    }
    *(uint *)(param_1 + 4) = local_44;
    *(int *)(param_1 + 8) = local_40;
    *(uint *)(param_1 + 0xc) = uVar15;
    sVar4 = *(short *)(param_2 + 0x12);
    *param_1 = '\t';
    *(short *)(param_2 + 0x12) = sVar4 + 1;
    return;
  }
LAB_01141de4:
  *param_1 = '\b';
  return;
}

