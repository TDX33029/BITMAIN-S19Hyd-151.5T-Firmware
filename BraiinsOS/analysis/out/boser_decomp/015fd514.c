// FUN_015fd514 @ 015fd514 size=1372 calls_out=7 calls_in=1
// strings: 

void FUN_015fd514(uint *param_1,int param_2,uint param_3,undefined4 *param_4,uint *param_5)

{
  uint uVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint *puVar9;
  byte bVar10;
  byte *pbVar11;
  byte *pbVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  byte *pbVar16;
  uint uVar17;
  bool bVar18;
  undefined8 uVar19;
  undefined4 local_68;
  uint local_64;
  uint local_60;
  uint *local_58;
  uint local_38;
  uint *local_34;
  uint local_30;
  uint *local_2c;
  
  local_38 = 0x80000002;
  if (param_3 <= (int)param_5 + 1U) {
LAB_015fd99c:
    *param_1 = local_38;
    param_1[1] = (uint)local_34;
    param_1[2] = local_30;
    param_1[3] = (uint)local_2c;
    return;
  }
  pbVar16 = (byte *)param_4[1];
  uVar4 = (int)param_5 + 2;
  pbVar11 = (byte *)*param_4;
  uVar17 = param_4[2];
  uVar15 = (int)param_5 + 1U;
LAB_015fd560:
  do {
    uVar13 = uVar17;
    puVar9 = local_34;
    uVar1 = local_38;
    if (pbVar11 == pbVar16) {
      uVar3 = 1;
      goto LAB_015fda00;
    }
    pbVar12 = pbVar11 + 1;
    bVar10 = *pbVar11;
    uVar5 = (uint)bVar10;
    uVar17 = uVar13 + 1;
    *param_4 = pbVar12;
    param_4[2] = uVar17;
    if (uVar5 == 0x20) {
      if (uVar13 != uVar15) {
        bVar10 = 0x20;
        goto LAB_015fd9f0;
      }
      local_60 = uVar15 + 1;
      goto LAB_015fd994;
    }
    pbVar11 = pbVar12;
  } while (""[uVar5] != '\0');
  if ((uVar5 == 0x3d) && (uVar15 < uVar13)) {
    bVar2 = false;
    uVar5 = uVar17;
LAB_015fd5b8:
    pbVar11 = pbVar12;
    uVar14 = uVar5;
    do {
      if (bVar2) {
        if (pbVar11 == pbVar16) {
          uVar3 = 2;
          goto LAB_015fda00;
        }
        bVar10 = *pbVar11;
        *param_4 = pbVar11 + 1;
        param_4[2] = uVar14 + 1;
        if ((bVar10 == 0x22) && (uVar5 < uVar14)) {
          iVar8 = 0;
          goto LAB_015fd684;
        }
        if ((bVar10 < 0x20) || (bVar2 = true, bVar10 == 0x7f)) {
          param_1[2] = uVar14;
          *(byte *)((int)param_1 + 5) = bVar10;
          goto LAB_015fd9fc;
        }
      }
      else {
        if (pbVar11 == pbVar16) {
          uVar17 = uVar14;
          uVar14 = param_3;
          goto LAB_015fd6fc;
        }
        pbVar12 = pbVar11 + 1;
        bVar10 = *pbVar11;
        uVar7 = (uint)bVar10;
        uVar17 = uVar14 + 1;
        *param_4 = pbVar12;
        param_4[2] = uVar17;
        if (uVar7 == 0x22) goto LAB_015fd648;
        bVar2 = false;
        if (""[uVar7] == '\0') {
          if ((uVar7 != 0x3b) || (uVar14 <= uVar5)) goto LAB_015fda3c;
          goto LAB_015fd6e4;
        }
      }
      pbVar11 = pbVar11 + 1;
      uVar14 = uVar14 + 1;
    } while( true );
  }
LAB_015fd9f0:
  param_1[2] = uVar13;
  *(byte *)((int)param_1 + 5) = bVar10;
  goto LAB_015fd9fc;
LAB_015fd684:
  iVar6 = iVar8;
  pbVar12 = pbVar11 + iVar6 + 1;
  if (pbVar12 != pbVar16) goto code_r0x015fd694;
  pbVar11 = pbVar12;
  uVar17 = uVar14 + iVar6 + 1;
LAB_015fd6fc:
  local_60 = param_3;
  goto LAB_015fd700;
code_r0x015fd694:
  bVar10 = *pbVar12;
  *param_4 = pbVar11 + iVar6 + 2;
  param_4[2] = uVar14 + iVar6 + 2;
  iVar8 = iVar6 + 1;
  if (bVar10 != 0x20) goto code_r0x015fd6b8;
  goto LAB_015fd684;
code_r0x015fd6b8:
  uVar17 = uVar14 + iVar6 + 1;
  if (bVar10 != 0x3b) {
    param_1[2] = uVar17;
LAB_015fd9dc:
    *(byte *)((int)param_1 + 5) = bVar10;
LAB_015fd9fc:
    uVar3 = 3;
LAB_015fda00:
    *(undefined1 *)(param_1 + 1) = uVar3;
    *param_1 = 0x80000003;
    if ((int)local_38 < 0) {
      return;
    }
    FUN_0134aee0(local_38,local_34,4,0x10);
    return;
  }
  uVar17 = uVar17 + 1;
  pbVar12 = pbVar11 + iVar6 + 2;
LAB_015fd6e4:
  pbVar11 = pbVar12;
  local_60 = uVar17;
LAB_015fd700:
  uVar7 = 1;
  if ((int)local_38 < 0) {
    uVar7 = local_38 ^ 0x80000000;
  }
  if (uVar7 == 0) {
    local_68 = 0x20;
    local_58 = (uint *)thunk_FUN_01be5118();
    if (local_58 != (uint *)0x0) {
      local_58[1] = (int)puVar9 + 9;
      local_58[2] = (int)puVar9 + 10;
      *local_58 = (int)puVar9 + 2;
      local_58[3] = (int)puVar9 + 0xf;
      local_58[4] = uVar15;
      local_58[5] = uVar13;
      local_58[6] = uVar5;
      local_58[7] = uVar14;
      if (-1 < (int)uVar1) {
        FUN_0134aee0(uVar1,puVar9,4,0x10);
      }
      local_2c = param_5;
      local_30 = 2;
      local_64 = 2;
      local_38 = 2;
      local_34 = local_58;
      goto LAB_015fd984;
    }
LAB_015fda48:
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,local_68);
  }
  if (uVar7 == 1) {
    if (local_64 == local_38) {
      FUN_018fa978(&local_38);
      local_58 = local_34;
    }
    puVar9 = local_58 + local_64 * 4;
    *puVar9 = uVar15;
    local_64 = local_64 + 1;
    puVar9[3] = uVar14;
    puVar9[1] = uVar13;
    puVar9[2] = uVar5;
    local_30 = local_64;
  }
  else {
    if (uVar4 == uVar15) {
      if (uVar4 != 0) {
        if (uVar4 < param_3) {
          if (*(char *)(param_2 + uVar4) < -0x40) goto LAB_015fda58;
        }
        else if (uVar4 != param_3) goto LAB_015fda58;
      }
      if (uVar13 < param_3) {
        if (*(char *)(param_2 + uVar13) < -0x40) goto LAB_015fda58;
      }
      else if (uVar13 != param_3) {
LAB_015fda58:
                    /* WARNING: Subroutine does not return */
        FUN_012fb514(param_2,param_3,uVar4,uVar13,&DAT_01cfde38);
      }
      iVar8 = FUN_015fd0b8(&DAT_01d1d880,(char *)(param_2 + uVar4),uVar13 - uVar4);
      if (iVar8 != 0) {
        uVar19 = FUN_015fdea4(param_2,param_3,uVar5,uVar14,&DAT_01cfde48);
        iVar8 = FUN_015fd0b8(&DAT_01d1d88c,(int)uVar19,(int)((ulonglong)uVar19 >> 0x20));
        if (iVar8 != 0) {
          if (-1 < (int)uVar1) {
            FUN_0134aee0(uVar1,local_58,4,0x10);
          }
          local_34 = param_5;
          local_38 = 0x80000000;
          local_58 = param_5;
          goto LAB_015fd984;
        }
      }
    }
    local_68 = 0x10;
    puVar9 = (uint *)thunk_FUN_01be5118();
    if (puVar9 == (uint *)0x0) goto LAB_015fda48;
    *puVar9 = uVar15;
    puVar9[3] = uVar14;
    puVar9[1] = uVar13;
    puVar9[2] = uVar5;
    if (-1 < (int)uVar1) {
      FUN_0134aee0(uVar1,local_58,4,0x10);
    }
    local_2c = param_5;
    local_64 = 1;
    local_30 = 1;
    local_38 = 1;
    local_58 = puVar9;
    local_34 = puVar9;
  }
LAB_015fd984:
  pbVar12 = pbVar11;
LAB_015fd994:
  pbVar11 = pbVar12;
  uVar15 = local_60;
  if (param_3 <= local_60) goto LAB_015fd99c;
  goto LAB_015fd560;
LAB_015fd648:
  bVar18 = uVar14 != uVar5;
  bVar2 = true;
  uVar5 = uVar17;
  if (bVar18) {
    bVar10 = 0x22;
LAB_015fda3c:
    param_1[2] = uVar14;
    goto LAB_015fd9dc;
  }
  goto LAB_015fd5b8;
}

