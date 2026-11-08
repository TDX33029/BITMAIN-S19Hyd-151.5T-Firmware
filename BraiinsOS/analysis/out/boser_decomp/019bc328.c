// FUN_019bc328 @ 019bc328 size=1092 calls_out=5 calls_in=0
// strings: value

void FUN_019bc328(undefined4 *param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  undefined2 *puVar4;
  int iVar5;
  undefined1 uVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  undefined1 *puVar10;
  byte *pbVar11;
  uint uVar12;
  uint uVar13;
  code *pcVar14;
  int iVar15;
  char *pcStack_58;
  undefined4 uStack_54;
  byte **local_50;
  undefined2 *local_4c;
  undefined4 local_48;
  int local_44;
  byte *local_40;
  int local_3c;
  int local_38;
  code *local_34;
  undefined1 *local_30;
  undefined2 *local_2c;
  
  local_30 = (undefined1 *)&pcStack_58;
  local_34 = FUN_012fd074;
  pcStack_58 = "value";
  uStack_54 = 5;
  local_2c = &DAT_0132b6a0;
  local_38 = param_2;
  FUN_00664898(&local_50,&DAT_005ac2bb,&local_38);
  puVar4 = local_4c;
  local_38 = 0;
  local_2c = (undefined2 *)((uint)local_2c & 0xffff0000);
  local_34 = (code *)0x1b6;
  local_30 = (undefined1 *)0x1;
  FUN_019a581c(&local_40,&local_38,local_4c,local_48);
  iVar5 = local_3c;
  if (((char)local_40 != '\x04') && (((uint)local_40 & 0xff) != 4)) {
    FUN_019bb7e0(local_50,puVar4);
LAB_019bc474:
    param_1[2] = local_3c;
    *param_1 = 0;
    param_1[1] = local_40;
    return;
  }
  local_44 = local_3c;
  local_30 = (undefined1 *)0x0;
  local_34 = (code *)&DAT_00000001;
  local_38 = 0;
  FUN_01980288(&local_40,&local_44,&local_38);
  puVar10 = (undefined1 *)local_3c;
  pcVar14 = (code *)local_40;
  if (((uint)local_40 & 0xff) == 4) {
    puVar10 = local_30;
    pcVar14 = local_34;
    iVar15 = local_38;
  }
  else {
    FUN_019bb7e0(local_38,local_34);
    iVar15 = -0x80000000;
  }
  FUN_01bf01d6(iVar5);
  FUN_019bb7e0(local_50,puVar4);
  if (iVar15 == -0x80000000) {
    local_3c = (int)puVar10;
    local_40 = (byte *)pcVar14;
    goto LAB_019bc474;
  }
  pbVar8 = (byte *)(pcVar14 + (int)puVar10);
  pbVar9 = (byte *)0x0;
  if (puVar10 == (undefined1 *)0x0) {
    pbVar7 = (byte *)0x0;
    pbVar11 = (byte *)pcVar14;
joined_r0x019bc5c4:
    do {
      do {
        pbVar3 = pbVar8;
        if (pbVar11 == pbVar3) goto LAB_019bc6d0;
        pbVar8 = pbVar3 + -1;
        uVar13 = (uint)(char)*pbVar8;
        if (0x7fffffff < uVar13) {
          pbVar8 = pbVar3 + -2;
          bVar2 = *pbVar8;
          if ((char)bVar2 < -0x40) {
            pbVar8 = pbVar3 + -3;
            bVar1 = *pbVar8;
            if ((char)bVar1 < -0x40) {
              pbVar8 = pbVar3 + -4;
              uVar12 = (int)(char)bVar1 & 0x3fU | (*pbVar8 & 7) << 6;
            }
            else {
              uVar12 = bVar1 & 0xf;
            }
            uVar12 = (int)(char)bVar2 & 0x3fU | uVar12 << 6;
          }
          else {
            uVar12 = bVar2 & 0x1f;
          }
          uVar13 = uVar13 & 0x3f | uVar12 << 6;
        }
      } while ((uVar13 - 9 < 5) || (uVar13 == 0x20));
      if (uVar13 < 0x80) goto LAB_019bc6c8;
      uVar12 = uVar13 >> 8;
      if (0x1f < uVar12) {
        if (uVar12 == 0x20) {
          bVar2 = (&DAT_00533bcd)[uVar13 & 0xff] & 2;
joined_r0x019bc6c4:
          if (bVar2 == 0) goto LAB_019bc6c8;
        }
        else if (uVar12 != 0x30 || uVar13 != 0x3000) goto LAB_019bc6c8;
        goto joined_r0x019bc5c4;
      }
      if (uVar12 == 0) {
        bVar2 = (&DAT_00533bcd)[uVar13 & 0xff] & 1;
        goto joined_r0x019bc6c4;
      }
      if ((uVar12 != 0x16) || (uVar13 != 0x1680)) goto LAB_019bc6c8;
    } while( true );
  }
  pbVar7 = pbVar9;
  pbVar9 = (byte *)pcVar14;
  do {
    pbVar11 = pbVar9 + 1;
    uVar13 = (uint)*pbVar9;
    if (0x7fffffff < (uint)(int)(char)*pbVar9) {
      if (uVar13 < 0xe0) {
        uVar13 = pbVar9[1] & 0x3f | (uVar13 & 0x1f) << 6;
        pbVar11 = pbVar9 + 2;
      }
      else {
        uVar12 = pbVar9[2] & 0x3f | (pbVar9[1] & 0x3f) << 6;
        if (uVar13 < 0xf0) {
          uVar13 = uVar12 | (uVar13 & 0x1f) << 0xc;
          pbVar11 = pbVar9 + 3;
        }
        else {
          pbVar11 = pbVar9 + 4;
          uVar13 = pbVar9[3] & 0x3f | uVar12 << 6 | (uVar13 & 7) << 0x12;
        }
      }
    }
    pbVar9 = pbVar7 + ((int)pbVar11 - (int)pbVar9);
    if ((4 < uVar13 - 9) && (uVar13 != 0x20)) {
      if (uVar13 < 0x80) goto joined_r0x019bc5c4;
      uVar12 = uVar13 >> 8;
      if (uVar12 < 0x20) {
        if (uVar12 == 0) {
          bVar2 = (&DAT_00533bcd)[uVar13 & 0xff] & 1;
joined_r0x019bc5a4:
          if (bVar2 == 0) goto joined_r0x019bc5c4;
        }
        else if ((uVar12 != 0x16) || (uVar13 != 0x1680)) goto joined_r0x019bc5c4;
      }
      else {
        if (uVar12 == 0x20) {
          bVar2 = (&DAT_00533bcd)[uVar13 & 0xff] & 2;
          goto joined_r0x019bc5a4;
        }
        if ((uVar12 != 0x30) || (uVar13 != 0x3000)) goto joined_r0x019bc5c4;
      }
    }
    pbVar7 = pbVar9;
    pbVar9 = pbVar11;
  } while (pbVar11 != pbVar8);
  pbVar7 = (byte *)0x0;
  pbVar9 = (byte *)0x0;
LAB_019bc6d0:
  if ((int)pbVar9 - (int)pbVar7 == 1) {
    bVar2 = (byte)pcVar14[(int)pbVar7];
    if (bVar2 == 0x30) {
      *param_1 = 4;
      uVar6 = 0;
    }
    else {
      if (bVar2 != 0x31) goto LAB_019bc704;
      *param_1 = 4;
      uVar6 = 1;
    }
    *(undefined1 *)(param_1 + 1) = uVar6;
  }
  else {
LAB_019bc704:
    local_50 = &local_40;
    local_4c = &DAT_0132b6a0;
    local_40 = (byte *)(pcVar14 + (int)pbVar7);
    local_3c = (int)pbVar9 - (int)pbVar7;
    FUN_00664898(&local_38,&DAT_005a93b4,&local_50);
    param_1[1] = local_38;
    param_1[2] = local_34;
    param_1[3] = local_30;
    *param_1 = 1;
  }
  FUN_019bb7e0(iVar15,pcVar14);
  return;
LAB_019bc6c8:
  pbVar9 = pbVar3 + ((int)pbVar9 - (int)pbVar11);
  goto LAB_019bc6d0;
}

