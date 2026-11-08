// FUN_00ec9a00 @ 00ec9a00 size=956 calls_out=5 calls_in=2
// strings: authoriza | earer

void FUN_00ec9a00(int *param_1,undefined4 param_2)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  undefined1 *puVar7;
  uint uVar8;
  byte *pbVar9;
  byte *pbVar10;
  uint uVar11;
  undefined4 uVar12;
  int iVar13;
  byte *pbVar14;
  longlong lVar15;
  undefined4 local_40;
  int iStack_3c;
  byte *pbStack_38;
  int local_34;
  byte *local_30;
  byte *local_2c;
  undefined4 local_28;
  undefined2 local_24;
  
  iVar4 = FUN_01ac3400(param_2,"authoriza",0xd);
  if (iVar4 != 0) {
    pbVar14 = *(byte **)(iVar4 + 4);
    iVar5 = 0;
    iVar13 = *(int *)(iVar4 + 8);
    lVar3 = *(longlong *)(iVar4 + 4);
    do {
      if (iVar13 == iVar5) {
        if (iVar13 == 0) goto LAB_00ec9bcc;
        pbVar6 = (byte *)0x0;
        pbVar9 = pbVar14;
        goto LAB_00ec9a84;
      }
      pbVar9 = pbVar14 + iVar5;
      iVar5 = iVar5 + 1;
    } while ((*pbVar9 == 9) || (*pbVar9 - 0x20 < 0x5f));
  }
  goto LAB_00ec9c68;
LAB_00ec9a84:
  do {
    pbVar10 = pbVar9 + 1;
    uVar8 = (uint)*pbVar9;
    if (0x7fffffff < (uint)(int)(char)*pbVar9) {
      if (uVar8 < 0xe0) {
        uVar8 = pbVar9[1] & 0x3f | (uVar8 & 0x1f) << 6;
        pbVar10 = pbVar9 + 2;
      }
      else {
        uVar11 = pbVar9[2] & 0x3f | (pbVar9[1] & 0x3f) << 6;
        if (uVar8 < 0xf0) {
          uVar8 = uVar11 | (uVar8 & 0x1f) << 0xc;
          pbVar10 = pbVar9 + 3;
        }
        else {
          pbVar10 = pbVar9 + 4;
          uVar8 = pbVar9[3] & 0x3f | uVar11 << 6 | (uVar8 & 7) << 0x12;
        }
      }
    }
    if ((uVar8 - 9 < 0x18) && ((1 << (uVar8 - 9 & 0xff) & 0x80001fU) != 0)) {
LAB_00ec9b84:
      if (pbVar6 == &DAT_00000006) {
        iVar4 = 0;
        goto LAB_00ec9b98;
      }
      break;
    }
    if (0x7f < uVar8) {
      uVar11 = uVar8 >> 8;
      if (uVar11 < 0x20) {
        if (uVar11 == 0) {
          bVar1 = (&DAT_00533bcd)[uVar8 & 0xff] & 1;
joined_r0x00ec9b6c:
          if (bVar1 != 0) goto LAB_00ec9b84;
        }
        else if ((uVar11 == 0x16) && (uVar8 == 0x1680)) goto LAB_00ec9b84;
      }
      else {
        if (uVar11 == 0x20) {
          bVar1 = (&DAT_00533bcd)[uVar8 & 0xff] & 2;
          goto joined_r0x00ec9b6c;
        }
        if (uVar11 == 0x30 && uVar8 == 0x3000) goto LAB_00ec9b84;
      }
    }
    pbVar6 = pbVar10 + ((int)pbVar6 - (int)pbVar9);
    pbVar9 = pbVar10;
  } while (pbVar10 != pbVar14 + iVar13);
  goto LAB_00ec9bcc;
  while (lVar2 = lVar15, (int)((ulonglong)lVar15 >> 0x20) == 0) {
LAB_00a5e334:
    lVar15 = FUN_00a5e3c8(&local_40);
    lVar2 = lVar3;
    if ((int)lVar15 == 0) break;
  }
  iVar4 = (int)((ulonglong)lVar2 >> 0x20);
  uVar12 = 0;
  if (lVar2 < 0) {
LAB_00a5e36c:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar12,iVar4);
  }
  if (iVar4 == 0) {
    iVar13 = 1;
    iVar5 = 0;
  }
  else {
    uVar12 = 1;
    iVar13 = FUN_01298504(iVar4,1);
    iVar5 = iVar4;
    if (iVar13 == 0) goto LAB_00a5e36c;
  }
  FUN_01bed4e2(iVar13,(int)lVar2,iVar4);
  *param_1 = iVar5;
  param_1[1] = iVar13;
  param_1[2] = iVar4;
  return;
  while( true ) {
    uVar8 = (uint)pbVar14[iVar4];
    uVar11 = (uint)(byte)"b"[iVar4];
    iVar4 = iVar4 + 1;
    if (uVar8 - 0x41 < 0x1a) {
      uVar8 = uVar8 | 0x20;
    }
    if (uVar11 - 0x41 < 0x1a) {
      uVar11 = uVar11 | 0x20;
    }
    if (uVar8 != uVar11) break;
LAB_00ec9b98:
    if (iVar4 == 6) {
      local_24 = 1;
      local_2c = pbVar14 + iVar13;
      local_28 = 0;
      local_40 = 0;
      iStack_3c = iVar13;
      pbStack_38 = pbVar14;
      local_34 = iVar13;
      local_30 = pbVar14;
      goto LAB_00a5e334;
    }
  }
LAB_00ec9bcc:
  pbVar9 = pbVar14;
  do {
    if (pbVar9 == pbVar14 + iVar13) {
LAB_00ec9c74:
      uVar12 = 0;
      if (iVar13 < 0) {
LAB_00ec9c80:
                    /* WARNING: Subroutine does not return */
        FUN_00664620(uVar12,iVar13);
      }
      if (iVar13 == 0) {
        iVar5 = 1;
        iVar4 = 0;
      }
      else {
        uVar12 = 1;
        iVar5 = FUN_01298504(iVar13,1);
        iVar4 = iVar13;
        if (iVar5 == 0) goto LAB_00ec9c80;
      }
      FUN_01bed4e2(iVar5,pbVar14,iVar13);
      *param_1 = iVar4;
      param_1[1] = iVar5;
      param_1[2] = iVar13;
      return;
    }
    pbVar6 = pbVar9 + 1;
    puVar7 = (undefined1 *)(uint)*pbVar9;
    if (0x7fffffff < (uint)(int)(char)*pbVar9) {
      if (puVar7 < (undefined1 *)0xe0) {
        puVar7 = (undefined1 *)(pbVar9[1] & 0x3f | ((uint)puVar7 & 0x1f) << 6);
        pbVar6 = pbVar9 + 2;
      }
      else {
        uVar8 = pbVar9[2] & 0x3f | (pbVar9[1] & 0x3f) << 6;
        if (puVar7 < (undefined1 *)0xf0) {
          puVar7 = (undefined1 *)(uVar8 | ((uint)puVar7 & 0x1f) << 0xc);
          pbVar6 = pbVar9 + 3;
        }
        else {
          puVar7 = (undefined1 *)(pbVar9[3] & 0x3f | uVar8 << 6 | ((uint)puVar7 & 7) << 0x12);
          if (puVar7 == &DAT_00110000) goto LAB_00ec9c74;
          pbVar6 = pbVar9 + 4;
        }
      }
    }
    pbVar9 = pbVar6;
  } while (((undefined1 *)0xfffffff4 < puVar7 + -0x3a && puVar7 != (undefined1 *)0x2f) ||
          (0xffffffe5 < ((uint)puVar7 & 0xffffffdf) - 0x5b));
LAB_00ec9c68:
  *param_1 = -0x80000000;
  return;
}

