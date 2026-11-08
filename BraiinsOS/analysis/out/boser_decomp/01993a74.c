// FUN_01993a74 @ 01993a74 size=1856 calls_out=5 calls_in=3
// strings: 

void FUN_01993a74(undefined4 *param_1,undefined4 param_2,uint param_3,undefined4 param_4,
                 uint param_5,char param_6,int param_7,int param_8,int param_9,int param_10)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint *puVar8;
  undefined1 uVar9;
  uint uVar10;
  uint uVar11;
  undefined4 uVar12;
  uint uVar13;
  uint uVar14;
  uint *puVar15;
  uint uVar16;
  int iVar17;
  bool bVar18;
  undefined8 uVar19;
  undefined4 local_94;
  int local_8c;
  int local_80;
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
  
  if (param_10 == 0) {
LAB_01993b9c:
    *(undefined1 *)param_1 = 0x52;
    param_1[1] = 0;
    return;
  }
  if ((param_3 & 0x3f) == 0xd) {
LAB_019956a4:
    cVar1 = *(char *)(param_8 + 0xd9);
    iVar6 = 4;
    uVar10 = *(uint *)(param_8 + 0xd4);
    if (cVar1 == '\b') {
      iVar6 = 0xc;
    }
    local_70 = iVar6 + *(int *)(param_8 + 0xdc);
    uVar14 = local_70 - uVar10;
    local_6c = param_8 + 0xb8;
    if ((param_5 < uVar14) || (uVar10 <= param_5 - uVar14)) {
      param_1[3] = 0;
      *param_1 = 0x3b;
      param_1[1] = local_6c;
      return;
    }
    uVar14 = 0;
    iVar3 = *(int *)(param_8 + 0x100);
    local_68 = iVar3 + 8;
    iVar6 = (param_5 - iVar6) - *(int *)(param_8 + 0xdc);
    uVar10 = *(int *)(param_8 + 0xd0) + uVar10;
    local_70 = ~param_5 + local_70;
    uVar16 = 0;
    uVar11 = 0;
    do {
      bVar2 = *(byte *)(uVar10 + iVar6);
      if ((uVar11 == 0x3f) && (1 < bVar2)) {
        uVar9 = 6;
        goto LAB_019957c0;
      }
      uVar5 = uVar11 & 0x3f;
      uVar7 = bVar2 & 0x7f;
      uVar4 = uVar5 - 0x20;
      uVar13 = uVar7 << uVar5;
      if (-1 < (int)uVar4) {
        uVar13 = 0;
      }
      uVar14 = uVar13 | uVar14;
      uVar13 = uVar7 >> (0x20 - uVar5 & 0xff);
      if (-1 < (int)uVar4) {
        uVar13 = uVar7 << (uVar4 & 0xff);
      }
      uVar16 = uVar13 | uVar16;
      if (-1 < (char)bVar2) {
        local_74 = (byte *)(uVar10 + iVar6) + 1;
        if (uVar14 == 0 && uVar16 == 0) {
          *(undefined1 *)param_1 = 0x3a;
          return;
        }
        if ((uVar16 == 0) && (uVar14 - 1 < *(uint *)(iVar3 + 0x10))) {
          puVar8 = (uint *)((uVar14 - 1) * 0x68 + *(int *)(iVar3 + 0xc));
          goto LAB_019958e8;
        }
        puVar8 = *(uint **)(iVar3 + 0x14);
        uVar9 = 0x12;
        if (puVar8 == (uint *)0x0) goto LAB_019957c0;
        iVar6 = *(int *)(iVar3 + 0x18);
        goto LAB_0199583c;
      }
      local_70 = local_70 + -1;
      uVar11 = uVar11 + 7;
      bVar18 = iVar6 != -1;
      iVar6 = iVar6 + 1;
    } while (bVar18);
    uVar16 = 0;
    uVar9 = 0x13;
    uVar14 = uVar10;
LAB_019957c0:
    *(byte *)((int)param_1 + 1) = bVar2;
    *(undefined1 *)param_1 = uVar9;
    param_1[1] = uVar10;
    param_1[2] = uVar14;
    param_1[3] = uVar16;
    return;
  }
  if (param_3 != 0xe) {
    if ((param_3 != 0xf) || (*(int *)(param_7 + 0x78) == 0)) goto LAB_01993b9c;
    uVar10 = *(uint *)(param_9 + 0x18);
    if (uVar10 != 0) {
      param_8 = *(int *)(param_9 + 0x14);
      iVar6 = 0;
      if (uVar10 != 1) {
        iVar3 = 0;
        do {
          iVar6 = iVar3 + (uVar10 >> 1);
          uVar10 = uVar10 - (uVar10 >> 1);
          if (param_5 < *(uint *)(param_8 + iVar6 * 0x120 + 0x118)) {
            iVar6 = iVar3;
          }
          iVar3 = iVar6;
        } while (1 < uVar10);
      }
      uVar10 = *(uint *)(param_8 + iVar6 * 0x120 + 0x118);
      if (uVar10 != param_5) {
        if (uVar10 < param_5) {
          iVar6 = iVar6 + 1;
        }
        if (((iVar6 != 0) && (param_8 = param_8 + iVar6 * 0x120, *(int *)(param_8 + -0x68) == 0)) &&
           (*(uint *)(param_8 + -100) <= param_5)) {
          param_5 = param_5 - *(uint *)(param_8 + -100);
          iVar6 = 4;
          if (*(char *)(param_8 + -0x47) == '\b') {
            iVar6 = 0xc;
          }
          uVar10 = (iVar6 + *(int *)(param_8 + -0x44)) - *(uint *)(param_8 + -0x4c);
          if ((uVar10 <= param_5) && (param_5 - uVar10 < *(uint *)(param_8 + -0x4c))) {
            param_8 = param_8 + -0x120;
            param_7 = *(int *)(param_7 + 0x78) + 8;
            goto LAB_019956a4;
          }
        }
      }
    }
    goto LAB_01993ce0;
  }
  if (param_6 == '\0') {
    uVar10 = *(uint *)(param_9 + 0x10);
    if (uVar10 == 0) goto LAB_01993ce0;
    iVar3 = *(int *)(param_9 + 0xc);
    iVar6 = 0;
    if (uVar10 != 1) {
      iVar17 = 0;
      do {
        iVar6 = iVar17 + (uVar10 >> 1);
        uVar10 = uVar10 - (uVar10 >> 1);
        if (param_5 < *(uint *)(iVar6 * 0x160 + iVar3 + 0x15c)) {
          iVar6 = iVar17;
        }
        iVar17 = iVar6;
      } while (1 < uVar10);
    }
    uVar10 = *(uint *)(iVar6 * 0x160 + iVar3 + 0x15c);
    if (uVar10 == param_5) goto LAB_01993ce0;
    if (uVar10 < param_5) {
      iVar6 = iVar6 + 1;
    }
    if (iVar6 == 0) goto LAB_01993ce0;
    param_8 = iVar6 * 0x160 + iVar3 + -0x160;
  }
  else {
    if ((param_6 != '\x01') || (uVar10 = *(uint *)(param_9 + 0x18), uVar10 == 0)) goto LAB_01993ce0;
    iVar3 = *(int *)(param_9 + 0x14);
    iVar6 = 0;
    if (uVar10 != 1) {
      iVar17 = 0;
      do {
        iVar6 = iVar17 + (uVar10 >> 1);
        uVar10 = uVar10 - (uVar10 >> 1);
        if (param_5 < *(uint *)(iVar3 + iVar6 * 0x120 + 0x118)) {
          iVar6 = iVar17;
        }
        iVar17 = iVar6;
      } while (1 < uVar10);
    }
    uVar10 = *(uint *)(iVar3 + iVar6 * 0x120 + 0x118);
    if (uVar10 == param_5) goto LAB_01993ce0;
    if (uVar10 < param_5) {
      iVar6 = iVar6 + 1;
    }
    if (iVar6 == 0) goto LAB_01993ce0;
    param_8 = iVar3 + iVar6 * 0x120 + -0x120;
  }
  if ((*(int *)(param_8 + 0xb8) == 0) && (*(uint *)(param_8 + 0xbc) <= param_5)) {
    param_5 = param_5 - *(uint *)(param_8 + 0xbc);
    iVar6 = 4;
    if (*(char *)(param_8 + 0xd9) == '\b') {
      iVar6 = 0xc;
    }
    uVar10 = (iVar6 + *(int *)(param_8 + 0xdc)) - *(uint *)(param_8 + 0xd4);
    if ((uVar10 <= param_5) && (param_5 - uVar10 < *(uint *)(param_8 + 0xd4))) goto LAB_019956a4;
  }
LAB_01993ce0:
  *(undefined1 *)param_1 = 0x3a;
  return;
LAB_0199583c:
  uVar11 = 0xffffffff;
  iVar3 = (uint)*(ushort *)((int)puVar8 + 0x4d6) << 3;
  puVar15 = puVar8;
  do {
    if (iVar3 == 0) {
      uVar11 = (uint)*(ushort *)((int)puVar8 + 0x4d6);
      goto LAB_019958a8;
    }
    uVar13 = *puVar15;
    uVar4 = puVar15[1];
    iVar3 = iVar3 + -8;
    uVar11 = uVar11 + 1;
    puVar15 = puVar15 + 2;
    uVar13 = (uint)(uVar4 <= uVar16 && (uint)(uVar14 <= uVar13) <= uVar4 - uVar16) -
             (uint)(uVar16 <= uVar4 && (uint)(uVar13 <= uVar14) <= uVar16 - uVar4);
  } while (uVar13 == 1);
  if ((uVar13 & 0xff) == 0) {
    puVar8 = puVar8 + uVar11 * 0x1a + 0x16;
LAB_019958e8:
    local_64 = (uint)(*(char *)((int)puVar8 + 0x62) == '\x01');
    uVar19 = FUN_0134bd24(puVar8);
    iVar6 = (int)((ulonglong)uVar19 >> 0x20);
    iVar3 = (int)uVar19;
    if (iVar6 == 0) goto LAB_01995aa8;
    uVar12 = *(undefined4 *)(param_8 + 0x104);
    local_80 = 0x2e;
    iVar6 = iVar6 << 4;
    iVar17 = 0;
    local_8c = 0;
    do {
      FUN_019901d0(&local_60,&local_74,*(undefined4 *)(local_6c + 0x20),iVar3);
      if (local_60 == 0x2e && local_5c == 0) {
        *param_1 = local_58;
        param_1[1] = uStack_54;
        param_1[2] = local_50;
        param_1[3] = uStack_4c;
        return;
      }
      uVar10 = local_50 & 0xffff;
      if (uVar10 < 0x47) {
        if (uVar10 == 3) {
          FUN_01993028(&local_38,&local_60);
          FUN_0198d46c(local_48,param_7,cVar1,uVar12,&local_38);
          if (local_48[0] == 'R') {
            iVar17 = local_44;
            local_94 = local_40;
          }
        }
        else if (uVar10 == 0x31) goto LAB_01995950;
      }
      else if (uVar10 == 0x47) {
LAB_01995950:
        FUN_01993028(&local_38,&local_60);
        local_80 = local_38;
        local_8c = local_34;
      }
      else if (uVar10 == 0x2007 || uVar10 == 0x6e) {
        FUN_01993028(&local_38,&local_60);
        FUN_0198d46c(local_48,param_7,cVar1,uVar12,&local_38);
        if (local_48[0] == 'R') {
          param_1[1] = local_44;
          param_1[2] = local_40;
          *(undefined1 *)param_1 = 0x52;
          return;
        }
      }
      iVar3 = iVar3 + 0x10;
      iVar6 = iVar6 + -0x10;
      if (iVar6 == 0) {
        if (iVar17 != 0) {
          param_1[1] = iVar17;
          param_1[2] = local_94;
          *(undefined1 *)param_1 = 0x52;
          return;
        }
        if (local_80 != 0x2e || local_8c != 0) {
          FUN_01993a74(param_1);
          return;
        }
LAB_01995aa8:
        *(undefined1 *)param_1 = 0x52;
        param_1[1] = 0;
        return;
      }
    } while( true );
  }
LAB_019958a8:
  if (iVar6 == 0) goto LAB_019957c0;
  iVar6 = iVar6 + -1;
  puVar8 = (uint *)puVar8[uVar11 + 0x136];
  goto LAB_0199583c;
}

