// FUN_016baa30 @ 016baa30 size=1872 calls_out=11 calls_in=3
// strings: 

void FUN_016baa30(undefined4 *param_1,int *param_2,char param_3,undefined1 *param_4,byte *param_5,
                 byte *param_6)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  undefined1 *puVar5;
  byte *pbVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined1 *puVar13;
  undefined4 uVar14;
  undefined1 *puVar15;
  int iVar16;
  undefined1 *puVar17;
  byte *pbVar18;
  byte *pbVar19;
  undefined *puVar20;
  byte *local_58;
  int local_3c;
  byte *local_38;
  uint local_34;
  uint local_30;
  byte *local_2c;
  uint local_28;
  
LAB_016baa58:
  do {
    if (param_5 == param_6) {
LAB_016badd4:
      *param_1 = 0;
      param_1[2] = 0;
      return;
    }
    puVar15 = (undefined1 *)(uint)*param_5;
    pbVar18 = param_5 + 1;
    if (0x7fffffff < (uint)(int)(char)*param_5) {
      if (puVar15 < (undefined1 *)0xe0) {
        puVar15 = (undefined1 *)(param_5[1] & 0x3f | ((uint)puVar15 & 0x1f) << 6);
        pbVar18 = param_5 + 2;
        goto joined_r0x016bab10;
      }
      uVar11 = param_5[2] & 0x3f | (param_5[1] & 0x3f) << 6;
      if (puVar15 < (undefined1 *)0xf0) {
        puVar15 = (undefined1 *)(uVar11 | ((uint)puVar15 & 0x1f) << 0xc);
        pbVar18 = param_5 + 3;
        goto joined_r0x016bab10;
      }
      puVar15 = (undefined1 *)(param_5[3] & 0x3f | uVar11 << 6 | ((uint)puVar15 & 7) << 0x12);
      if (puVar15 == &DAT_00110000) goto LAB_016badd4;
      param_5 = param_5 + 4;
      puVar5 = puVar15;
      if (puVar15 <= &DAT_0000000d) goto LAB_016baae4;
LAB_016bab14:
      puVar15 = puVar5;
      if (puVar5 != &DAT_00110000) break;
      goto LAB_016baa58;
    }
joined_r0x016bab10:
    param_5 = pbVar18;
    puVar5 = puVar15;
    if (&DAT_0000000e <= puVar15) goto LAB_016bab14;
LAB_016baae4:
    puVar5 = &DAT_00110000;
    if ((1 << ((uint)puVar15 & 0xff) & 0x2600U) == 0) {
      puVar5 = puVar15;
    }
  } while (puVar5 == &DAT_00110000);
  if (puVar5 == (undefined1 *)0x23) {
    uVar14 = 0;
    goto LAB_016bb090;
  }
  if (puVar5 != (undefined1 *)0x3f) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464(&DAT_00418698,0x43,&DAT_018aefe0);
  }
  puVar15 = (undefined1 *)param_2[2];
  puVar5 = puVar15;
  if ((undefined1 *)*param_2 == puVar15) {
    FUN_016bd7fc(param_2,puVar15,1,1,1);
    puVar5 = (undefined1 *)param_2[2];
  }
  piVar7 = (int *)param_2[1];
  puVar13 = puVar15 + 1;
  iVar16 = (int)param_6 - (int)param_5;
  param_2[2] = (int)puVar13;
  *(undefined1 *)((int)piVar7 + (int)puVar5) = 0x3f;
  if (iVar16 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0,iVar16);
  }
  uVar11 = 0;
  local_38 = &DAT_00000001;
  local_3c = 0;
  if (param_6 != param_5) {
    local_38 = (byte *)thunk_FUN_016d4a50(iVar16);
    if (local_38 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,iVar16);
    }
    local_3c = iVar16;
  }
  iVar16 = param_2[6];
  iVar8 = param_2[7];
  bVar1 = *(byte *)(param_2 + 8);
  pbVar18 = param_5;
  local_58 = local_38;
LAB_016babe4:
  do {
    param_5 = (byte *)0x0;
    local_34 = uVar11;
    if (pbVar18 == param_6) goto LAB_016badf0;
    puVar5 = (undefined1 *)(uint)*pbVar18;
    pbVar6 = pbVar18 + 1;
    if (0x7fffffff < (uint)(int)(char)*pbVar18) {
      if (puVar5 < (undefined1 *)0xe0) {
        puVar5 = (undefined1 *)(pbVar18[1] & 0x3f | ((uint)puVar5 & 0x1f) << 6);
        pbVar6 = pbVar18 + 2;
        goto joined_r0x016bac64;
      }
      uVar9 = pbVar18[2] & 0x3f | (pbVar18[1] & 0x3f) << 6;
      if (puVar5 < (undefined1 *)0xf0) {
        puVar5 = (undefined1 *)(uVar9 | ((uint)puVar5 & 0x1f) << 0xc);
        pbVar6 = pbVar18 + 3;
        goto joined_r0x016bac64;
      }
      puVar5 = (undefined1 *)(pbVar18[3] & 0x3f | uVar9 << 6 | ((uint)puVar5 & 7) << 0x12);
      if (puVar5 == &DAT_00110000) goto LAB_016badf0;
      param_5 = pbVar18 + 4;
      if (&DAT_0000000d < puVar5) goto LAB_016bac94;
LAB_016bac68:
      puVar17 = &DAT_00110000;
      if ((1 << ((uint)puVar5 & 0xff) & 0x2600U) == 0) {
        puVar17 = puVar5;
      }
      pbVar18 = param_5;
      if (puVar17 != &DAT_00110000) break;
      goto LAB_016babe4;
    }
joined_r0x016bac64:
    param_5 = pbVar6;
    if (puVar5 < &DAT_0000000e) goto LAB_016bac68;
LAB_016bac94:
    puVar17 = puVar5;
    pbVar18 = param_5;
  } while (puVar5 == &DAT_00110000);
  if (puVar17 == (undefined1 *)0x23) {
    puVar5 = (undefined1 *)(uint)bVar1;
  }
  if (puVar17 == (undefined1 *)0x23 && puVar5 == (undefined1 *)0x0) goto LAB_016badf0;
  FUN_016b4e08(iVar16,iVar8,puVar17,param_5,param_6);
  uVar9 = 1;
  if ((undefined1 *)0x7f < puVar17) {
    uVar9 = 2;
  }
  if (((undefined1 *)0x7ff < puVar17) && (uVar9 = 4, puVar17 < (undefined1 *)0x10000)) {
    uVar9 = 3;
  }
  pbVar18 = param_5;
  if (local_3c - uVar11 < uVar9) {
    FUN_016bd7fc(&local_3c,uVar11,uVar9,1,1);
    local_58 = local_38;
    pbVar6 = local_38 + local_34;
    if (puVar17 < &DAT_00000080) goto LAB_016bad04;
  }
  else {
    pbVar6 = local_58 + uVar11;
    if (puVar17 < (undefined1 *)0x80) {
LAB_016bad04:
      *pbVar6 = (byte)puVar17;
      goto LAB_016bad74;
    }
  }
  bVar2 = (byte)puVar17 & 0x3f | 0x80;
  bVar3 = (byte)((uint)puVar17 >> 6);
  if ((undefined1 *)0x7ff < puVar17) {
    bVar3 = bVar3 & 0x3f | 0x80;
    bVar4 = (byte)((uint)puVar17 >> 0xc);
    if ((uint)puVar17 >> 0x10 == 0) {
      pbVar6[1] = bVar3;
      pbVar6[2] = bVar2;
      *pbVar6 = bVar4 | 0xe0;
    }
    else {
      pbVar6[3] = bVar2;
      pbVar6[2] = bVar3;
      pbVar6[1] = bVar4 & 0x3f | 0x80;
      *pbVar6 = (byte)((uint)puVar17 >> 0x12) | 0xf0;
    }
    uVar11 = uVar9 + uVar11;
    goto LAB_016babe4;
  }
  pbVar6[1] = bVar2;
  *pbVar6 = bVar3 | 0xc0;
LAB_016bad74:
  uVar11 = uVar9 + uVar11;
  goto LAB_016babe4;
LAB_016badf0:
  if (param_4 == (undefined1 *)0x0) {
LAB_016baefc:
    local_30 = 0x80000000;
    local_2c = local_38;
    local_28 = uVar11;
  }
  else {
    if (puVar15 < param_4) {
      if (param_4 != puVar13) goto LAB_016bae1c;
    }
    else if (*(char *)((int)piVar7 + (int)param_4) < -0x40) {
LAB_016bae1c:
                    /* WARNING: Subroutine does not return */
      FUN_00faa8ac(piVar7,puVar13,0,param_4,&DAT_018aee98);
    }
    if (param_4 != (undefined1 *)0x3) {
      if (param_4 == (undefined1 *)0x4) {
        if ((*piVar7 == 0x70747468) || (*piVar7 == 0x656c6966)) goto LAB_016baea8;
      }
      else if (param_4 == (undefined1 *)0x5) {
        iVar16 = thunk_FUN_016dd50a(piVar7,&DAT_0041860c,5);
        if (iVar16 == 0) goto LAB_016baea8;
      }
      goto LAB_016baefc;
    }
    iVar16 = thunk_FUN_016dd50a(piVar7,&DAT_00418614,3);
    if (iVar16 != 0) goto LAB_016baefc;
LAB_016baea8:
    if (param_2[4] == 0) goto LAB_016baefc;
    (**(code **)(param_2[5] + 0x14))(&local_30,param_2[4],local_38,uVar11);
  }
  pbVar6 = local_2c;
  pbVar18 = local_2c;
  uVar11 = local_28;
  puVar20 = &DAT_005655f0;
  if (param_3 != '\x02') {
    puVar20 = &DAT_00564550;
  }
  while (uVar11 != 0) {
    pbVar19 = pbVar18 + 1;
    bVar1 = *pbVar18;
    if (((char)bVar1 < '\0') ||
       ((*(uint *)(puVar20 + (uint)(bVar1 >> 5) * 4) >> (bVar1 & 0x1f) & 1) != 0)) {
      uVar9 = uVar11 - 1;
      pbVar18 = (byte *)("%0" + (uint)bVar1 * 3);
      uVar11 = 3;
    }
    else {
      pbVar19 = &DAT_00000001;
      uVar9 = 1;
      do {
        uVar12 = uVar9;
        if (uVar11 == uVar12) {
          uVar9 = 0;
          goto LAB_016baf84;
        }
        uVar10 = (uint)(char)pbVar18[uVar12];
      } while ((-1 < (int)uVar10) &&
              (uVar9 = uVar12 + 1,
              (*(uint *)(puVar20 + (uVar10 >> 5) * 4) >> (uVar10 & 0x1f) & 1) == 0));
      if (uVar11 < uVar12) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa478(&DAT_00418e0f,0x13,&DAT_0188bb90);
      }
      uVar9 = uVar11 - uVar12;
      pbVar19 = pbVar18 + uVar12;
      uVar11 = uVar12;
    }
LAB_016baf84:
    if ((uint)(*param_2 - (int)puVar13) < uVar11) {
      FUN_016bd7fc(param_2,puVar13,uVar11,1,1);
    }
    iVar16 = param_2[2];
    FUN_016dd1aa(param_2[1] + iVar16,pbVar18,uVar11);
    puVar13 = (undefined1 *)(iVar16 + uVar11);
    param_2[2] = (int)puVar13;
    pbVar18 = pbVar19;
    uVar11 = uVar9;
  }
  if ((local_30 & 0x7fffffff) != 0) {
    thunk_FUN_016d3fb4(pbVar6);
  }
  if (local_3c != 0) {
    thunk_FUN_016d3fb4(local_38);
  }
  uVar14 = 1;
  if (param_5 == (byte *)0x0) {
    *param_1 = 1;
    param_1[1] = puVar15;
    param_1[2] = 0;
    return;
  }
LAB_016bb090:
  iVar8 = param_2[2];
  iVar16 = iVar8;
  if (*param_2 == iVar8) {
    FUN_016bd7fc(param_2,iVar8,1,1,1);
    iVar16 = param_2[2];
  }
  *(undefined1 *)(param_2[1] + iVar16) = 0x23;
  param_2[2] = iVar8 + 1;
  FUN_016b5408(param_2,param_5,param_6);
  *param_1 = uVar14;
  param_1[1] = puVar15;
  param_1[2] = 1;
  param_1[3] = iVar8;
  return;
}

