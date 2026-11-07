// FUN_015d9074 @ 015d9074 size=1916 calls_out=5 calls_in=3
// strings: 

void FUN_015d9074(undefined4 *param_1,undefined4 param_2,uint param_3,undefined4 param_4,
                 uint param_5,uint param_6,int param_7,int param_8,int param_9,int param_10)

{
  char cVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  bool bVar18;
  undefined4 local_98;
  undefined4 local_94;
  int local_8c;
  int local_7c;
  byte *local_74;
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
  
  if (param_10 == 0) {
LAB_015d919c:
    *(undefined1 *)param_1 = 0x52;
    param_1[1] = 0;
    return;
  }
  if ((param_3 & 0x3f) != 0xd) {
    if (param_3 == 0xe) {
      if ((param_6 & 0xff) == 0) {
        uVar13 = *(uint *)(param_9 + 0x10);
        if (uVar13 == 0) goto LAB_015d92e0;
        iVar5 = *(int *)(param_9 + 0xc);
        iVar9 = 0;
        if (uVar13 != 1) {
          iVar16 = 0;
          do {
            iVar9 = iVar16 + (uVar13 >> 1);
            uVar13 = uVar13 - (uVar13 >> 1);
            if (param_5 < *(uint *)(iVar9 * 0x160 + iVar5 + 0x15c)) {
              iVar9 = iVar16;
            }
            iVar16 = iVar9;
          } while (1 < uVar13);
        }
        uVar13 = *(uint *)(iVar9 * 0x160 + iVar5 + 0x15c);
        if (uVar13 == param_5) goto LAB_015d92e0;
        if (uVar13 < param_5) {
          iVar9 = iVar9 + 1;
        }
        if (iVar9 == 0) goto LAB_015d92e0;
        param_8 = iVar9 * 0x160 + iVar5 + -0x160;
      }
      else {
        if (((param_6 & 0xff) != 1) || (uVar13 = *(uint *)(param_9 + 0x18), uVar13 == 0))
        goto LAB_015d92e0;
        iVar5 = *(int *)(param_9 + 0x14);
        iVar9 = 0;
        if (uVar13 != 1) {
          iVar16 = 0;
          do {
            iVar9 = iVar16 + (uVar13 >> 1);
            uVar13 = uVar13 - (uVar13 >> 1);
            if (param_5 < *(uint *)(iVar5 + iVar9 * 0x120 + 0x118)) {
              iVar9 = iVar16;
            }
            iVar16 = iVar9;
          } while (1 < uVar13);
        }
        uVar13 = *(uint *)(iVar5 + iVar9 * 0x120 + 0x118);
        if (uVar13 == param_5) goto LAB_015d92e0;
        if (uVar13 < param_5) {
          iVar9 = iVar9 + 1;
        }
        if (iVar9 == 0) goto LAB_015d92e0;
        param_8 = iVar5 + iVar9 * 0x120 + -0x120;
      }
      if ((*(int *)(param_8 + 0xb8) != 0) || (param_5 < *(uint *)(param_8 + 0xbc))) {
LAB_015d92e0:
        *(undefined1 *)param_1 = 0x3a;
        return;
      }
      param_5 = param_5 - *(uint *)(param_8 + 0xbc);
      iVar9 = 4;
      if (*(char *)(param_8 + 0xd9) == '\b') {
        iVar9 = 0xc;
      }
      uVar13 = (iVar9 + *(int *)(param_8 + 0xdc)) - *(uint *)(param_8 + 0xd4);
      if ((param_5 < uVar13) || (*(uint *)(param_8 + 0xd4) <= param_5 - uVar13)) goto LAB_015d92e0;
    }
    else {
      if ((param_3 != 0xf) || (*(int *)(param_7 + 0x78) == 0)) goto LAB_015d919c;
      uVar13 = *(uint *)(param_9 + 0x18);
      if (uVar13 == 0) goto LAB_015d92e0;
      param_8 = *(int *)(param_9 + 0x14);
      iVar9 = 0;
      if (uVar13 != 1) {
        iVar5 = 0;
        do {
          iVar9 = iVar5 + (uVar13 >> 1);
          uVar13 = uVar13 - (uVar13 >> 1);
          if (param_5 < *(uint *)(param_8 + iVar9 * 0x120 + 0x118)) {
            iVar9 = iVar5;
          }
          iVar5 = iVar9;
        } while (1 < uVar13);
      }
      uVar13 = *(uint *)(param_8 + iVar9 * 0x120 + 0x118);
      if (uVar13 == param_5) goto LAB_015d92e0;
      if (uVar13 < param_5) {
        iVar9 = iVar9 + 1;
      }
      if (((iVar9 == 0) || (param_8 = param_8 + iVar9 * 0x120, *(int *)(param_8 + -0x68) != 0)) ||
         (param_5 < *(uint *)(param_8 + -100))) goto LAB_015d92e0;
      param_5 = param_5 - *(uint *)(param_8 + -100);
      iVar9 = 4;
      if (*(char *)(param_8 + -0x47) == '\b') {
        iVar9 = 0xc;
      }
      uVar13 = (iVar9 + *(int *)(param_8 + -0x44)) - *(uint *)(param_8 + -0x4c);
      if ((param_5 < uVar13) || (*(uint *)(param_8 + -0x4c) <= param_5 - uVar13)) goto LAB_015d92e0;
      param_8 = param_8 + -0x120;
      param_7 = *(int *)(param_7 + 0x78) + 8;
      param_6 = 1;
    }
  }
  cVar1 = *(char *)(param_8 + 0xd9);
  iVar9 = 4;
  local_6c = param_8 + 0xb8;
  uVar13 = *(uint *)(param_8 + 0xd4);
  if (cVar1 == '\b') {
    iVar9 = 0xc;
  }
  local_70 = iVar9 + *(int *)(param_8 + 0xdc);
  uVar11 = local_70 - uVar13;
  if ((param_5 < uVar11) || (uVar13 <= param_5 - uVar11)) {
    param_1[3] = 0;
    *param_1 = 0x3b;
    param_1[1] = local_6c;
    return;
  }
  uVar11 = 0;
  iVar5 = *(int *)(param_8 + 0x100);
  local_68 = iVar5 + 8;
  iVar9 = (param_5 - iVar9) - *(int *)(param_8 + 0xdc);
  local_70 = ~param_5 + local_70;
  uVar13 = *(int *)(param_8 + 0xd0) + uVar13;
  uVar14 = 0;
  uVar10 = 0;
  do {
    bVar2 = *(byte *)(uVar13 + iVar9);
    if ((uVar10 == 0x3f) && (1 < bVar2)) {
      uVar4 = 6;
      goto LAB_015daddc;
    }
    uVar8 = uVar10 & 0x3f;
    uVar6 = bVar2 & 0x7f;
    uVar15 = uVar8 - 0x20;
    uVar17 = uVar6 << uVar8;
    if (-1 < (int)uVar15) {
      uVar17 = 0;
    }
    uVar11 = uVar17 | uVar11;
    uVar17 = uVar6 >> (0x20 - uVar8 & 0xff);
    if (-1 < (int)uVar15) {
      uVar17 = uVar6 << (uVar15 & 0xff);
    }
    uVar14 = uVar17 | uVar14;
    if (-1 < (char)bVar2) {
      local_74 = (byte *)(uVar13 + iVar9) + 1;
      if (uVar11 == 0 && uVar14 == 0) {
        *(undefined1 *)param_1 = 0x3a;
        return;
      }
      if ((uVar14 == 0) && (uVar11 - 1 < *(uint *)(iVar5 + 0x10))) {
        puVar7 = (uint *)((uVar11 - 1) * 0x68 + *(int *)(iVar5 + 0xc));
        goto LAB_015daf00;
      }
      puVar7 = *(uint **)(iVar5 + 0x14);
      uVar4 = 0x12;
      if (puVar7 == (uint *)0x0) goto LAB_015daddc;
      local_7c = *(int *)(iVar5 + 0x18);
      goto LAB_015dae50;
    }
    local_70 = local_70 + -1;
    uVar10 = uVar10 + 7;
    bVar18 = iVar9 != -1;
    iVar9 = iVar9 + 1;
  } while (bVar18);
  uVar14 = 0;
  uVar4 = 0x13;
  uVar11 = uVar13;
  goto LAB_015daddc;
LAB_015dae50:
  uVar10 = 0xffffffff;
  iVar9 = (uint)*(ushort *)((int)puVar7 + 0x4d6) << 3;
  puVar12 = puVar7;
  do {
    if (iVar9 == 0) {
      uVar10 = (uint)*(ushort *)((int)puVar7 + 0x4d6);
      goto LAB_015daec4;
    }
    uVar6 = *puVar12;
    iVar9 = iVar9 + -8;
    uVar17 = puVar12[1];
    uVar10 = uVar10 + 1;
    puVar12 = puVar12 + 2;
    uVar17 = (uint)(uVar17 <= uVar14 && (uint)(uVar11 <= uVar6) <= uVar17 - uVar14) -
             (uint)(uVar14 <= uVar17 && (uint)(uVar6 <= uVar11) <= uVar14 - uVar17);
  } while (uVar17 == 1);
  if ((uVar17 & 0xff) == 0) {
    puVar7 = puVar7 + uVar10 * 0x1a + 0x16;
LAB_015daf00:
    local_64 = (uint)(*(char *)((int)puVar7 + 0x62) == '\x01');
    if (*puVar7 == 1) {
      puVar12 = (uint *)puVar7[2];
      uVar13 = puVar7[3];
    }
    else {
      uVar13 = puVar7[1];
      if (5 < uVar13) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(0,uVar13,5,&DAT_018822e4);
      }
      puVar12 = puVar7 + 2;
    }
    if (uVar13 == 0) goto LAB_015db0e4;
    iVar9 = uVar13 << 4;
    iVar5 = 0;
    iVar16 = 0;
    uVar3 = *(undefined4 *)(param_8 + 0x104);
    local_8c = 0x2e;
    do {
      FUN_015d5608(&local_60,&local_74,*(undefined4 *)(local_6c + 0x20),puVar12);
      if (local_60 == 0x2e && local_5c == 0) {
        *param_1 = local_58;
        param_1[1] = uStack_54;
        param_1[2] = local_50;
        param_1[3] = uStack_4c;
        return;
      }
      uVar13 = local_50 & 0xffff;
      if (uVar13 < 0x47) {
        if (uVar13 == 3) {
          FUN_015d855c(&local_38,&local_60);
          FUN_015d2860(local_48,param_7,cVar1,uVar3,&local_38);
          if (local_48[0] == 'R') {
            iVar5 = local_44;
            local_94 = local_40;
          }
        }
        else if (uVar13 == 0x31) goto LAB_015daf90;
      }
      else if (uVar13 == 0x47) {
LAB_015daf90:
        FUN_015d855c(&local_38,&local_60);
        local_8c = local_38;
        local_98 = local_30;
        iVar16 = local_34;
      }
      else if (uVar13 == 0x2007 || uVar13 == 0x6e) {
        FUN_015d855c(&local_38,&local_60);
        FUN_015d2860(local_48,param_7,cVar1,uVar3,&local_38);
        if (local_48[0] == 'R') {
          param_1[1] = local_44;
          param_1[2] = local_40;
          *(undefined1 *)param_1 = 0x52;
          return;
        }
      }
      puVar12 = puVar12 + 4;
      iVar9 = iVar9 + -0x10;
      if (iVar9 == 0) {
        if (iVar5 != 0) {
          param_1[1] = iVar5;
          param_1[2] = local_94;
          *(undefined1 *)param_1 = 0x52;
          return;
        }
        if (local_8c != 0x2e || iVar16 != 0) {
          FUN_015d9074(param_1,param_9,local_8c,iVar16,local_98,param_6,param_7,param_8,param_9,
                       param_10 + -1);
          return;
        }
LAB_015db0e4:
        *(undefined1 *)param_1 = 0x52;
        param_1[1] = 0;
        return;
      }
    } while( true );
  }
LAB_015daec4:
  if (local_7c == 0) goto LAB_015db160;
  local_7c = local_7c + -1;
  puVar7 = (uint *)puVar7[uVar10 + 0x136];
  goto LAB_015dae50;
LAB_015db160:
  uVar4 = 0x12;
LAB_015daddc:
  *(byte *)((int)param_1 + 1) = bVar2;
  *(undefined1 *)param_1 = uVar4;
  param_1[1] = uVar13;
  param_1[2] = uVar11;
  param_1[3] = uVar14;
  return;
}

