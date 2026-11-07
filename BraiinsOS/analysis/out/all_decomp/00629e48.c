// FUN_00629e48 @ 00629e48 size=1724 calls_out=6 calls_in=3
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00629e48(char *param_1,undefined4 param_2,uint param_3,undefined4 param_4,uint param_5,
                 undefined4 param_6,int param_7,int param_8,int param_9,int param_10)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  char cVar10;
  int *piVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  undefined4 *puVar16;
  uint uVar17;
  byte *pbVar18;
  undefined4 uVar19;
  undefined4 *puVar20;
  bool bVar21;
  int local_98;
  undefined4 local_94;
  int local_8c;
  int local_88;
  int local_80;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  uint local_64;
  int local_60;
  int local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  uint local_50;
  undefined4 uStack_4c;
  char local_48 [4];
  int local_44;
  undefined4 local_40;
  int local_38;
  int local_34;
  undefined4 local_30;
  int local_2c;
  uint local_28;
  undefined4 in_stack_ffffffdc;
  
  if (param_10 == 0) {
LAB_00629f38:
    *param_1 = 'O';
    param_1[4] = '\0';
    param_1[5] = '\0';
    param_1[6] = '\0';
    param_1[7] = '\0';
    return;
  }
  if ((param_3 & 0x3f) == 0xd) {
  }
  else {
    if (param_3 != 0xe) {
      if ((param_3 == 0xf) && (*(int *)(param_7 + 0x68) != 0)) {
        uVar12 = *(uint *)(param_9 + 0x18);
        if (uVar12 != 0) {
          param_8 = *(int *)(param_9 + 0x14);
          iVar13 = 0;
          if (uVar12 != 1) {
            iVar13 = 0;
            do {
              iVar14 = iVar13 + (uVar12 >> 1);
              uVar12 = uVar12 - (uVar12 >> 1);
              if (param_5 < *(uint *)(param_8 + iVar14 * 0x120 + 0x118)) {
                iVar14 = iVar13;
              }
              iVar13 = iVar14;
            } while (1 < uVar12);
          }
          uVar12 = *(uint *)(param_8 + iVar13 * 0x120 + 0x118);
          if (uVar12 != param_5) {
            if (uVar12 < param_5) {
              iVar13 = iVar13 + 1;
            }
            if (((iVar13 != 0) &&
                (param_8 = param_8 + iVar13 * 0x120, *(int *)(param_8 + -0x68) == 0)) &&
               (*(uint *)(param_8 + -100) <= param_5)) {
              param_5 = param_5 - *(uint *)(param_8 + -100);
              iVar13 = 4;
              if (*(char *)(param_8 + -0x47) == '\b') {
                iVar13 = 0xc;
              }
              uVar12 = (iVar13 + *(int *)(param_8 + -0x44)) - *(uint *)(param_8 + -0x4c);
              if ((uVar12 <= param_5) && (param_5 - uVar12 < *(uint *)(param_8 + -0x4c))) {
                param_8 = param_8 + -0x120;
                param_6 = 1;
                param_7 = *(int *)(param_7 + 0x68) + 8;
                goto LAB_0062a02c;
              }
            }
          }
        }
        param_1[0xc] = '\0';
        param_1[0xd] = '\0';
        param_1[0xe] = '\0';
        param_1[0xf] = '\0';
        *param_1 = ':';
        return;
      }
      goto LAB_00629f38;
    }
    FUN_006122b4(&local_30,param_9,param_5,param_6);
    if ((char)local_30 != 'O') {
      param_1[3] = local_30._3_1_;
      *(undefined2 *)(param_1 + 1) = local_30._1_2_;
      *(int *)(param_1 + 4) = local_2c;
      *(uint *)(param_1 + 8) = local_28;
      *(undefined4 *)(param_1 + 0xc) = in_stack_ffffffdc;
      *param_1 = (char)local_30;
      return;
    }
    param_5 = local_28;
    param_8 = local_2c;
  }
LAB_0062a02c:
  cVar1 = *(char *)(param_8 + 0xd9);
  iVar13 = 4;
  uVar12 = *(uint *)(param_8 + 0xd4);
  if (cVar1 == '\b') {
    iVar13 = 0xc;
  }
  uVar6 = (iVar13 + *(int *)(param_8 + 0xdc)) - uVar12;
  uVar15 = param_5 - uVar6;
  bVar21 = uVar15 == 0;
  if (uVar6 <= param_5) {
    bVar21 = uVar12 == uVar15;
  }
  if ((uVar6 > param_5 || uVar12 < uVar15) || bVar21) {
    param_1[0xc] = '\0';
    param_1[0xd] = '\0';
    param_1[0xe] = '\0';
    param_1[0xf] = '\0';
    param_1[0] = ';';
    param_1[1] = '\0';
    param_1[2] = '\0';
    param_1[3] = '\0';
    return;
  }
  local_70 = uVar12 - uVar15;
  iVar14 = *(int *)(param_8 + 0x100);
  local_6c = param_8 + 0xb8;
  local_68 = iVar14 + 8;
  iVar13 = (param_5 - iVar13) - *(int *)(param_8 + 0xdc);
  local_74 = *(int *)(param_8 + 0xd0) + uVar12;
  uVar12 = 0;
  uVar6 = 0;
  pbVar9 = (byte *)0x0;
  pbVar18 = (byte *)0x0;
  do {
    pbVar7 = pbVar9;
    pbVar8 = (byte *)(local_74 + iVar13);
    if (iVar13 == 0) {
      uVar6 = 0;
      cVar10 = '\x13';
      goto LAB_0062a14c;
    }
    bVar2 = *pbVar8;
    pbVar9 = (byte *)(uint)bVar2;
    if ((uVar12 == 0x3f) && (&DAT_00000001 < pbVar9)) {
      cVar10 = '\x06';
      pbVar8 = pbVar9;
      goto LAB_0062a14c;
    }
    uVar3 = uVar12 & 0x3f;
    uVar17 = (uint)pbVar9 & 0x7f;
    uVar5 = uVar3 - 0x20;
    iVar13 = iVar13 + 1;
    uVar15 = uVar17 << uVar3;
    if (-1 < (int)uVar5) {
      uVar15 = 0;
    }
    pbVar8 = (byte *)(uVar15 | (uint)pbVar18);
    uVar15 = uVar17 >> (0x20 - uVar3 & 0xff);
    uVar12 = uVar12 + 7;
    if (-1 < (int)uVar5) {
      uVar15 = uVar17 << (uVar5 & 0xff);
    }
    uVar6 = uVar15 | uVar6;
    local_70 = local_70 + -1;
    pbVar18 = pbVar8;
  } while ((char)bVar2 < '\0');
  local_74 = local_74 + iVar13;
  if (pbVar8 == (byte *)0x0 && uVar6 == 0) {
    *param_1 = ':';
    return;
  }
  if ((uVar6 != 0) || (*(byte **)(iVar14 + 0x10) <= pbVar8 + -1)) {
    puVar20 = *(undefined4 **)(iVar14 + 0x14);
    cVar10 = '\x12';
    if (puVar20 == (undefined4 *)0x0) {
LAB_0062a14c:
      param_1[1] = (char)pbVar7;
      *param_1 = cVar10;
      *(byte **)(param_1 + 4) = pbVar8;
      *(byte **)(param_1 + 8) = pbVar8;
      *(uint *)(param_1 + 0xc) = uVar6;
      return;
    }
    local_80 = *(int *)(iVar14 + 0x18);
    do {
      uVar15 = 0xffffffff;
      uVar12 = (uint)*(ushort *)((int)puVar20 + 0x4d6);
      iVar13 = uVar12 << 3;
      puVar16 = puVar20;
      do {
        if (iVar13 == 0) goto LAB_0062a230;
        pbVar9 = (byte *)*puVar16;
        uVar3 = puVar16[1];
        iVar13 = iVar13 + -8;
        uVar15 = uVar15 + 1;
        puVar16 = puVar16 + 2;
        uVar3 = (uint)(uVar3 <= uVar6 && (uint)(pbVar8 <= pbVar9) <= uVar3 - uVar6) -
                (uint)(uVar6 <= uVar3 && (uint)(pbVar9 <= pbVar8) <= uVar6 - uVar3);
      } while (uVar3 == 1);
      uVar12 = uVar15;
      if ((uVar3 & 0xff) == 0) {
        piVar4 = puVar20 + uVar15 * 0x1a + 0x16;
        goto LAB_0062a26c;
      }
LAB_0062a230:
      if (local_80 == 0) goto LAB_0062a14c;
      local_80 = local_80 + -1;
      puVar20 = (undefined4 *)puVar20[uVar12 + 0x136];
    } while( true );
  }
  piVar4 = (int *)((int)(pbVar8 + -1) * 0x68 + *(int *)(iVar14 + 0xc));
LAB_0062a26c:
  local_64 = (uint)(*(char *)((int)piVar4 + 0x62) == '\x01');
  if (*piVar4 == 1) {
    piVar11 = (int *)piVar4[2];
    uVar12 = piVar4[3];
  }
  else {
    uVar12 = piVar4[1];
    if (5 < uVar12) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa36c(0,uVar12,5,&DAT_01882304);
    }
    piVar11 = piVar4 + 2;
  }
  if (uVar12 != 0) {
    uVar19 = *(undefined4 *)(param_8 + 0x104);
    local_80 = 0;
    local_88 = 0x2e;
    iVar13 = uVar12 << 4;
    local_8c = 0;
    do {
      local_38 = *piVar11;
      local_34 = piVar11[1];
      local_30 = piVar11[2];
      local_2c = piVar11[3];
      FUN_006067fc(&local_60,&local_74,*(undefined4 *)(local_6c + 0x20),&local_38);
      if (local_60 == 0x2e && local_5c == 0) {
        *(undefined4 *)param_1 = local_58;
        *(undefined4 *)(param_1 + 4) = uStack_54;
        *(uint *)(param_1 + 8) = local_50;
        *(undefined4 *)(param_1 + 0xc) = uStack_4c;
        return;
      }
      uVar12 = local_50 & 0xffff;
      if (uVar12 < 0x47) {
        if (uVar12 == 3) {
          FUN_0060872c(&local_38,&local_60);
          FUN_00611d9c(local_48,param_7,cVar1,uVar19,&local_38);
          if (local_48[0] == 'O') {
            local_94 = local_40;
            local_80 = local_44;
          }
        }
        else if (uVar12 == 0x31) goto LAB_0062a2f0;
      }
      else if (uVar12 == 0x47) {
LAB_0062a2f0:
        FUN_0060872c(&local_38,&local_60);
        local_88 = local_38;
        local_8c = local_34;
        local_98 = local_30;
      }
      else if (uVar12 == 0x2007 || uVar12 == 0x6e) {
        FUN_0060872c(&local_38,&local_60);
        FUN_00611d9c(local_48,param_7,cVar1,uVar19,&local_38);
        if (local_48[0] == 'O') {
          *(int *)(param_1 + 4) = local_44;
          *(undefined4 *)(param_1 + 8) = local_40;
          *param_1 = 'O';
          return;
        }
      }
      piVar11 = piVar11 + 4;
      iVar13 = iVar13 + -0x10;
    } while (iVar13 != 0);
    if (local_80 != 0) {
      *(int *)(param_1 + 4) = local_80;
      *(undefined4 *)(param_1 + 8) = local_94;
      *param_1 = 'O';
      return;
    }
    if (local_88 != 0x2e || local_8c != 0) {
      FUN_00629e48(param_1,param_9,local_88,local_8c,local_98,param_6,param_7,param_8,param_9,
                   param_10 + -1);
      return;
    }
  }
  *param_1 = 'O';
  param_1[4] = '\0';
  param_1[5] = '\0';
  param_1[6] = '\0';
  param_1[7] = '\0';
  return;
}

