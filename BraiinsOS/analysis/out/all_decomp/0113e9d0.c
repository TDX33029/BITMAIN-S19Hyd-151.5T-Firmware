// FUN_0113e9d0 @ 0113e9d0 size=2380 calls_out=3 calls_in=2
// strings: 

/* WARNING: Removing unreachable block (ram,0x0113f36c) */
/* WARNING: Removing unreachable block (ram,0x0113f454) */
/* WARNING: Removing unreachable block (ram,0x0113f374) */
/* WARNING: Removing unreachable block (ram,0x0113f394) */
/* WARNING: Removing unreachable block (ram,0x0113f464) */
/* WARNING: Removing unreachable block (ram,0x0113eefc) */
/* WARNING: Removing unreachable block (ram,0x0113eec8) */
/* WARNING: Removing unreachable block (ram,0x0113ee60) */
/* WARNING: Removing unreachable block (ram,0x0113f220) */
/* WARNING: Removing unreachable block (ram,0x0113ee14) */
/* WARNING: Removing unreachable block (ram,0x0113f4c4) */
/* WARNING: Removing unreachable block (ram,0x0113ee94) */

void FUN_0113e9d0(char *param_1,int param_2)

{
  code *pcVar1;
  byte bVar2;
  short sVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined *puVar8;
  char *pcVar9;
  undefined *puVar10;
  uint *puVar11;
  uint *puVar12;
  uint uVar13;
  byte bVar14;
  uint uVar15;
  char local_30;
  char local_2f;
  undefined1 uStack_2e;
  char cStack_2d;
  undefined2 uStack_2c;
  undefined2 uStack_2a;
  undefined2 local_28;
  undefined2 uStack_26;
  undefined2 local_24;
  undefined2 uStack_22;
  
  bVar2 = *(byte *)(param_2 + 0x10);
  uVar6 = (uint)bVar2;
  bVar14 = *(byte *)(param_2 + 0x11);
  uVar15 = (uint)bVar14;
  *(undefined1 *)(param_2 + 0x10) = 1;
  pcVar9 = param_1 + 4;
  uVar4 = uVar6;
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
    goto switchD_0113e9f8_caseD_0;
  case 1:
    if (*(int *)(param_2 + 0xc) == 0) {
      *param_1 = '\0';
      pcVar9[0] = '\x02';
      pcVar9[1] = '\0';
      pcVar9[2] = '\0';
      pcVar9[3] = '\0';
      *(undefined **)(param_1 + 8) = &DAT_018aab20;
      return;
    }
    uVar13 = *(int *)(param_2 + 0xc) - 1;
    puVar11 = (uint *)(*(byte **)(param_2 + 8) + 1);
    bVar14 = **(byte **)(param_2 + 8);
    *(uint **)(param_2 + 8) = puVar11;
    *(uint *)(param_2 + 0xc) = uVar13;
    uVar6 = (uint)bVar14;
    uVar4 = 0;
    if (0x7fffffff < (uint)(int)(char)bVar14) {
      if (uVar6 < 0x90) {
        uVar15 = uVar6 & 0xf;
        goto switchD_0113e9f8_caseD_80;
      }
      if (uVar6 < 0xa0) {
        uVar15 = uVar6 & 0xf;
        break;
      }
      if (uVar6 < 0xc0) {
        uVar15 = uVar6 & 0x1f;
        goto LAB_0113f560;
      }
      uVar4 = uVar6;
      uVar15 = uVar6;
      switch(uVar6) {
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
        goto switchD_0113e9f8_caseD_c1;
      case 0xc4:
        goto switchD_0113f290_caseD_c4;
      case 0xc5:
        goto switchD_0113f290_caseD_c5;
      case 0xc6:
        goto switchD_0113f290_caseD_c6;
      case 199:
      case 200:
      case 0xc9:
      case 0xd4:
      case 0xd5:
      case 0xd6:
      case 0xd7:
      case 0xd8:
        goto switchD_0113e9f8_caseD_c7;
      case 0xd9:
        goto switchD_0113f290_caseD_d9;
      case 0xda:
        goto joined_r0x0113efd8;
      case 0xdb:
        goto joined_r0x0113ee34;
      case 0xdc:
        goto switchD_0113f290_caseD_dc;
      case 0xdd:
        goto switchD_0113f290_caseD_dd;
      case 0xde:
        goto switchD_0113f290_caseD_de;
      case 0xdf:
        goto switchD_0113f290_caseD_df;
      default:
        uVar4 = 0xe0;
      }
    }
switchD_0113e9f8_caseD_0:
    switch(uVar4) {
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
switchD_0113f614_caseD_c1:
      param_1[2] = bVar14;
      param_1[1] = (char)uVar4;
      *param_1 = '\x02';
      return;
    case 0xca:
      iVar5 = *(int *)(param_2 + 8);
      uVar4 = *(uint *)(param_2 + 0xc);
      if (uVar4 < 4) {
        *(uint *)(param_2 + 8) = iVar5 + uVar4;
        *(undefined4 *)(param_2 + 0xc) = 0;
        param_1[4] = '\x02';
        param_1[5] = '\0';
        param_1[6] = '\0';
        param_1[7] = '\0';
        *param_1 = '\x01';
        *(undefined **)(param_1 + 8) = &DAT_018aab20;
        return;
      }
LAB_0113f7b8:
      *(int *)(param_2 + 8) = iVar5 + 4;
      *(uint *)(param_2 + 0xc) = uVar4 - 4;
      *param_1 = '\t';
      return;
    case 0xcb:
    case 0xcf:
    case 0xd3:
      iVar5 = *(int *)(param_2 + 8);
      uVar4 = *(uint *)(param_2 + 0xc);
      if (7 < uVar4) {
        *(int *)(param_2 + 8) = iVar5 + 8;
        *(uint *)(param_2 + 0xc) = uVar4 - 8;
        *param_1 = '\t';
        return;
      }
      break;
    case 0xcc:
    case 0xd0:
      if (*(int *)(param_2 + 0xc) != 0) {
        *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 1;
        *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + -1;
        *param_1 = '\t';
        return;
      }
      goto code_r0x0113f730;
    case 0xcd:
    case 0xd1:
      iVar5 = *(int *)(param_2 + 8);
      uVar4 = *(uint *)(param_2 + 0xc);
      if (1 < uVar4) {
        *(int *)(param_2 + 8) = iVar5 + 2;
        *(uint *)(param_2 + 0xc) = uVar4 - 2;
        *param_1 = '\t';
        return;
      }
      break;
    case 0xce:
    case 0xd2:
      iVar5 = *(int *)(param_2 + 8);
      uVar4 = *(uint *)(param_2 + 0xc);
      if (3 < uVar4) goto LAB_0113f7b8;
      break;
    default:
      if (uVar4 != 0) goto switchD_0113f614_caseD_c1;
    case 0xc0:
    case 0xc2:
    case 0xc3:
    case 0xe0:
      *param_1 = '\t';
      return;
    }
    *(uint *)(param_2 + 8) = iVar5 + uVar4;
    *(undefined4 *)(param_2 + 0xc) = 0;
code_r0x0113f730:
    *param_1 = '\x01';
    param_1[4] = '\x02';
    param_1[5] = '\0';
    param_1[6] = '\0';
    param_1[7] = '\0';
    *(undefined **)(param_1 + 8) = &DAT_018aab20;
    return;
  default:
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x113f5b0);
    (*pcVar1)();
  case 0x80:
    goto switchD_0113e9f8_caseD_80;
  case 0x90:
    break;
  case 0xa0:
  case 0xd9:
  case 0xda:
  case 0xdb:
    if (0xd9 < uVar6) {
      if (uVar6 != 0xda) {
        if (uVar6 != 0xdb) goto switchD_0113e9f8_caseD_c1;
        puVar11 = *(uint **)(param_2 + 8);
        uVar13 = *(uint *)(param_2 + 0xc);
joined_r0x0113ee34:
        if (uVar13 < 4) {
          *(uint *)(param_2 + 8) = (int)puVar11 + uVar13;
          *(undefined4 *)(param_2 + 0xc) = 0;
          goto LAB_0113f230;
        }
        uVar13 = uVar13 - 4;
        uVar4 = *puVar11;
        *(uint **)(param_2 + 8) = puVar11 + 1;
        *(uint *)(param_2 + 0xc) = uVar13;
        uVar15 = uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 | (uVar4 >> 0x10 & 0xff) << 8 |
                 uVar4 >> 0x18;
        goto LAB_0113f560;
      }
      puVar11 = *(uint **)(param_2 + 8);
      uVar13 = *(uint *)(param_2 + 0xc);
joined_r0x0113efd8:
      if (uVar13 < 2) {
        *(uint *)(param_2 + 8) = (int)puVar11 + uVar13;
        *(undefined4 *)(param_2 + 0xc) = 0;
        goto LAB_0113f230;
      }
      uVar4 = *puVar11;
      uVar13 = uVar13 - 2;
      *(ushort **)(param_2 + 8) = (ushort *)((int)puVar11 + 2);
      *(uint *)(param_2 + 0xc) = uVar13;
      uVar15 = ((ushort)uVar4 & 0xff) << 8 | (uint)(ushort)((ushort)uVar4 >> 8);
      goto LAB_0113f560;
    }
    if (uVar6 == 0xa0) {
      uVar13 = *(uint *)(param_2 + 0xc);
      goto LAB_0113f560;
    }
    if (uVar6 != 0xd9) goto switchD_0113e9f8_caseD_c1;
    uVar13 = *(uint *)(param_2 + 0xc);
switchD_0113f290_caseD_d9:
    if (uVar13 == 0) {
LAB_0113f230:
      param_1[4] = '\x02';
      param_1[5] = '\0';
      param_1[6] = '\0';
      param_1[7] = '\0';
      *(undefined **)(param_1 + 8) = &DAT_018aab20;
      *(uint *)(param_1 + 0xc) = CONCAT22(uStack_26,local_28);
      *param_1 = '\x01';
      return;
    }
    uVar13 = uVar13 - 1;
    uVar15 = (uint)**(byte **)(param_2 + 8);
    *(byte **)(param_2 + 8) = *(byte **)(param_2 + 8) + 1;
    *(uint *)(param_2 + 0xc) = uVar13;
LAB_0113f560:
    if (uVar13 < uVar15) {
      param_1[4] = '\x01';
      param_1[5] = '%';
      param_1[6] = '\0';
      param_1[7] = '\0';
      *(uint *)(param_1 + 8) = uVar15;
      *param_1 = '\x01';
      return;
    }
    iVar5 = *(int *)(param_2 + 8);
    *(uint *)(param_2 + 8) = iVar5 + uVar15;
    *(uint *)(param_2 + 0xc) = uVar13 - uVar15;
    FUN_00fab1e0(&local_30,iVar5,uVar15);
    *param_1 = '\t';
    return;
  case 0xc1:
switchD_0113e9f8_caseD_c1:
    param_1[0] = '\x02';
    param_1[1] = -0x3f;
    return;
  case 0xc4:
  case 0xc5:
  case 0xc6:
    uVar13 = *(uint *)(param_2 + 0xc);
    if (uVar6 != 0xc4) {
      if (uVar6 == 0xc6) {
        puVar11 = *(uint **)(param_2 + 8);
switchD_0113f290_caseD_c6:
        if (3 < uVar13) {
          puVar12 = puVar11 + 1;
          uVar4 = *puVar11;
          uVar13 = uVar13 - 4;
          *(uint **)(param_2 + 8) = puVar12;
          *(uint *)(param_2 + 0xc) = uVar13;
          uVar4 = uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 | (uVar4 >> 0x10 & 0xff) << 8 |
                  uVar4 >> 0x18;
          goto LAB_0113f434;
        }
        *(uint *)(param_2 + 8) = (int)puVar11 + uVar13;
        *(undefined4 *)(param_2 + 0xc) = 0;
        goto LAB_0113f4f0;
      }
      puVar11 = *(uint **)(param_2 + 8);
switchD_0113f290_caseD_c5:
      if (1 < uVar13) {
        puVar12 = (uint *)((int)puVar11 + 2);
        uVar4 = *puVar11;
        uVar13 = uVar13 - 2;
        *(uint **)(param_2 + 8) = puVar12;
        *(uint *)(param_2 + 0xc) = uVar13;
        uVar4 = ((ushort)uVar4 & 0xff) << 8 | (uint)(ushort)((ushort)uVar4 >> 8);
        goto LAB_0113f434;
      }
      *(uint *)(param_2 + 8) = (int)puVar11 + uVar13;
      *(undefined4 *)(param_2 + 0xc) = 0;
      goto LAB_0113f4f0;
    }
switchD_0113f290_caseD_c4:
    if (uVar13 != 0) {
      uVar13 = uVar13 - 1;
      puVar12 = (uint *)(*(byte **)(param_2 + 8) + 1);
      uVar4 = (uint)**(byte **)(param_2 + 8);
      *(uint **)(param_2 + 8) = puVar12;
      *(uint *)(param_2 + 0xc) = uVar13;
LAB_0113f434:
      if (uVar13 < uVar4) {
        param_1[4] = '\x01';
        param_1[5] = '%';
        param_1[6] = '\0';
        param_1[7] = '\0';
        *(uint *)(param_1 + 8) = uVar4;
        *param_1 = '\x01';
        return;
      }
      *(byte **)(param_2 + 8) = (byte *)((int)puVar12 + uVar4);
      *(uint *)(param_2 + 0xc) = uVar13 - uVar4;
      *param_1 = '\t';
      return;
    }
LAB_0113f4f0:
    *(undefined **)(param_1 + 8) = &DAT_018aab20;
    *(uint *)(param_1 + 0xc) = CONCAT22(uStack_26,local_28);
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
switchD_0113e9f8_caseD_c7:
    FUN_0113e67c(&local_30,param_2,uVar6,uVar15);
    if (local_30 != '\t') {
      *(uint *)(param_1 + 8) = CONCAT22(uStack_26,local_28);
      param_1[3] = cStack_2d;
      *(ushort *)(param_1 + 1) = CONCAT11(uStack_2e,local_2f);
      *(uint *)(param_1 + 0xc) = CONCAT22(uStack_22,local_24);
      *(uint *)(param_1 + 4) = CONCAT22(uStack_2a,uStack_2c);
      *param_1 = local_30;
      return;
    }
    sVar3 = *(short *)(param_2 + 0x12);
    puVar8 = (undefined *)CONCAT22(uStack_2a,uStack_2c);
    *(short *)(param_2 + 0x12) = sVar3 + -1;
    if (sVar3 == 1) {
      *param_1 = '\b';
      return;
    }
    uVar7 = 2;
    if (*(int *)(param_2 + 0xc) == 0) {
      puVar8 = &DAT_018aab20;
    }
    else {
      puVar10 = (undefined *)(*(int *)(param_2 + 0xc) + -1);
      iVar5 = *(int *)(param_2 + 8) + 1;
      uVar7 = 0x2501;
      *(int *)(param_2 + 8) = iVar5;
      *(undefined **)(param_2 + 0xc) = puVar10;
      if (puVar8 <= puVar10) {
        *(undefined **)(param_2 + 8) = puVar8 + iVar5;
        *(int *)(param_2 + 0xc) = (int)puVar10 - (int)puVar8;
        *(short *)(param_2 + 0x12) = sVar3;
        *param_1 = '\t';
        return;
      }
    }
    *(undefined4 *)(param_1 + 4) = uVar7;
    *(undefined **)(param_1 + 8) = puVar8;
    *(short *)(param_2 + 0x12) = sVar3;
    *param_1 = '\x01';
    return;
  case 0xdc:
    puVar11 = *(uint **)(param_2 + 8);
    uVar13 = *(uint *)(param_2 + 0xc);
switchD_0113f290_caseD_dc:
    if (uVar13 < 2) {
      *(uint *)(param_2 + 8) = (int)puVar11 + uVar13;
      *(undefined4 *)(param_2 + 0xc) = 0;
LAB_0113ef6c:
      *param_1 = '\x01';
      pcVar9[0] = '\x02';
      pcVar9[1] = '\0';
      pcVar9[2] = '\0';
      pcVar9[3] = '\0';
      *(undefined **)(param_1 + 8) = &DAT_018aab20;
      return;
    }
    uVar4 = *puVar11;
    *(ushort **)(param_2 + 8) = (ushort *)((int)puVar11 + 2);
    *(uint *)(param_2 + 0xc) = uVar13 - 2;
    uVar15 = ((ushort)uVar4 & 0xff) << 8 | (uint)(ushort)((ushort)uVar4 >> 8);
    break;
  case 0xdd:
    puVar11 = *(uint **)(param_2 + 8);
    uVar13 = *(uint *)(param_2 + 0xc);
switchD_0113f290_caseD_dd:
    if (uVar13 < 4) {
      *(uint *)(param_2 + 8) = (int)puVar11 + uVar13;
      *(undefined4 *)(param_2 + 0xc) = 0;
      goto LAB_0113f4f0;
    }
    uVar4 = *puVar11;
    *(uint **)(param_2 + 8) = puVar11 + 1;
    *(uint *)(param_2 + 0xc) = uVar13 - 4;
    uVar15 = uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 | (uVar4 >> 0x10 & 0xff) << 8 |
             uVar4 >> 0x18;
    break;
  case 0xde:
    puVar11 = *(uint **)(param_2 + 8);
    uVar13 = *(uint *)(param_2 + 0xc);
switchD_0113f290_caseD_de:
    if (uVar13 < 2) {
      *(uint *)(param_2 + 8) = (int)puVar11 + uVar13;
      *(undefined4 *)(param_2 + 0xc) = 0;
      goto LAB_0113ef6c;
    }
    uVar4 = *puVar11;
    *(ushort **)(param_2 + 8) = (ushort *)((int)puVar11 + 2);
    *(uint *)(param_2 + 0xc) = uVar13 - 2;
    uVar15 = ((ushort)uVar4 & 0xff) << 8 | (uint)(ushort)((ushort)uVar4 >> 8);
    goto switchD_0113e9f8_caseD_80;
  case 0xdf:
    puVar11 = *(uint **)(param_2 + 8);
    uVar13 = *(uint *)(param_2 + 0xc);
switchD_0113f290_caseD_df:
    if (uVar13 < 4) {
      *(uint *)(param_2 + 8) = (int)puVar11 + uVar13;
      *(undefined4 *)(param_2 + 0xc) = 0;
      goto LAB_0113f4f0;
    }
    uVar4 = *puVar11;
    *(uint **)(param_2 + 8) = puVar11 + 1;
    *(uint *)(param_2 + 0xc) = uVar13 - 4;
    uVar15 = uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 | (uVar4 >> 0x10 & 0xff) << 8 |
             uVar4 >> 0x18;
switchD_0113e9f8_caseD_80:
    sVar3 = *(short *)(param_2 + 0x12);
    *(short *)(param_2 + 0x12) = sVar3 + -1;
    if (sVar3 == 1) goto LAB_0113f15c;
    if (uVar15 == 0) goto LAB_0113f148;
    do {
      FUN_0113e9d0(&local_30,param_2);
      if ((local_30 != '\t') || (FUN_0113e9d0(&local_30,param_2), local_30 != '\t')) {
        param_1[1] = local_2f;
        *param_1 = local_30;
        *(uint *)(param_1 + 2) = CONCAT22(uStack_2c,CONCAT11(cStack_2d,uStack_2e));
        *(uint *)(param_1 + 6) = CONCAT22(local_28,uStack_2a);
        *(uint *)(param_1 + 10) = CONCAT22(local_24,uStack_26);
        *(undefined2 *)(param_1 + 0xe) = uStack_22;
        return;
      }
      uVar15 = uVar15 - 1;
    } while (uVar15 != 0);
    goto LAB_0113f13c;
  }
  sVar3 = *(short *)(param_2 + 0x12);
  *(short *)(param_2 + 0x12) = sVar3 + -1;
  if (sVar3 == 1) {
LAB_0113f15c:
    *param_1 = '\b';
    return;
  }
  if (uVar15 != 0) {
    do {
      FUN_0113e9d0(&local_30,param_2);
      if (local_30 != '\t') {
        *(uint *)(param_1 + 2) = CONCAT22(uStack_2c,CONCAT11(cStack_2d,uStack_2e));
        *(uint *)(param_1 + 6) = CONCAT22(local_28,uStack_2a);
        *(uint *)(param_1 + 10) = CONCAT22(local_24,uStack_26);
        *(undefined2 *)(param_1 + 0xe) = uStack_22;
        param_1[1] = local_2f;
        *param_1 = local_30;
        return;
      }
      uVar15 = uVar15 - 1;
    } while (uVar15 != 0);
LAB_0113f13c:
    sVar3 = *(short *)(param_2 + 0x12) + 1;
  }
LAB_0113f148:
  *(short *)(param_2 + 0x12) = sVar3;
  *param_1 = '\t';
  return;
}

