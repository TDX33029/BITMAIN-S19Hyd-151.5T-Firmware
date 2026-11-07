// FUN_01155c64 @ 01155c64 size=1628 calls_out=1 calls_in=2
// strings: 

/* WARNING: Removing unreachable block (ram,0x01155e44) */
/* WARNING: Removing unreachable block (ram,0x01155ccc) */
/* WARNING: Removing unreachable block (ram,0x01155cc4) */
/* WARNING: Removing unreachable block (ram,0x01155d88) */
/* WARNING: Removing unreachable block (ram,0x01155d20) */
/* WARNING: Removing unreachable block (ram,0x01155e4c) */

void FUN_01155c64(undefined1 *param_1,int *param_2)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  byte bVar10;
  uint uVar11;
  byte unaff_r9;
  byte bVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  bool bVar16;
  byte local_2c;
  uint local_28;
  
  iVar15 = *param_2;
  uVar5 = param_2[1];
  uVar13 = param_2[2];
  if (uVar13 == uVar5) {
LAB_01155cd0:
    param_2[2] = uVar13;
LAB_01155cb8:
    param_2[2] = uVar13;
    goto LAB_011560d8;
  }
  uVar9 = uVar13;
  if (uVar5 <= uVar13) goto LAB_01156288;
  bVar6 = *(byte *)(iVar15 + uVar13);
  uVar3 = uVar13 + 1;
  param_2[2] = uVar3;
  uVar8 = bVar6 - 0x30;
  if (9 < (uVar8 & 0xff)) goto LAB_01155cd0;
  if (uVar3 != uVar5) {
    uVar9 = uVar3;
    if (uVar5 <= uVar3) goto LAB_01156288;
    cVar1 = *(char *)(iVar15 + uVar3);
    uVar11 = uVar13 + 2;
    param_2[2] = uVar11;
    if (9 < (byte)(cVar1 - 0x30U)) goto LAB_01155d24;
    uVar14 = (uVar8 & 0xff) * 10 + (uint)(byte)(cVar1 - 0x30);
    if (0xff < uVar14) goto LAB_01155cb8;
    if (uVar11 == uVar5) {
LAB_01155d8c:
      uVar8 = 0;
      param_2[2] = uVar11;
      uVar3 = uVar11;
      goto LAB_01155ddc;
    }
    uVar9 = uVar11;
    if (uVar5 <= uVar11) goto LAB_01156288;
    cVar1 = *(char *)(iVar15 + uVar11);
    uVar9 = uVar13 + 3;
    param_2[2] = uVar9;
    if (9 < (byte)(cVar1 - 0x30U)) goto LAB_01155d8c;
    uVar8 = 1;
    uVar14 = uVar14 * 10 + (uint)(byte)(cVar1 - 0x30);
    if (uVar14 < 0x100) {
      if (uVar9 != uVar5) {
        if (uVar5 <= uVar9) goto LAB_01156288;
        if (*(byte *)(iVar15 + uVar9) - 0x30 < 10) {
          param_2[2] = uVar13 + 4;
          goto LAB_01155cb8;
        }
      }
      param_2[2] = uVar9;
      uVar3 = uVar9;
      goto LAB_01155ddc;
    }
    goto LAB_01155cb8;
  }
LAB_01155d24:
  param_2[2] = uVar3;
  uVar14 = uVar8 & 0xff;
LAB_01155ddc:
  if (uVar3 == uVar5) goto LAB_011560d8;
  uVar11 = uVar3;
  if (uVar5 <= uVar3) goto LAB_011562ac;
  if (*(char *)(iVar15 + uVar3) != '.') goto LAB_011560d8;
  uVar9 = uVar3 + 1;
  param_2[2] = uVar9;
  if (uVar9 == uVar5) {
LAB_01155e50:
    param_2[2] = uVar9;
    goto LAB_01155e3c;
  }
  if (uVar5 <= uVar9) goto LAB_01156288;
  cVar1 = *(char *)(iVar15 + uVar9);
  uVar11 = uVar3 + 2;
  param_2[2] = uVar11;
  if (9 < (byte)(cVar1 - 0x30U)) goto LAB_01155e50;
  if (uVar11 != uVar5) {
    if (uVar11 < uVar5) {
      cVar2 = *(char *)(iVar15 + uVar11);
      param_2[2] = uVar3 + 3;
      unaff_r9 = cVar2 - 0x30;
      if (9 < (byte)(cVar2 - 0x30U)) goto LAB_01155e98;
      bVar6 = 1;
      uVar11 = uVar3 + 3;
      goto LAB_01155ea0;
    }
LAB_011562a0:
    uVar9 = uVar11;
    goto LAB_01156288;
  }
LAB_01155e98:
  bVar6 = 0;
  param_2[2] = uVar11;
LAB_01155ea0:
  local_28 = (uint)(byte)(cVar1 - 0x30);
  if (bVar6 != 0) {
    local_28 = local_28 * 10 + (uint)unaff_r9;
    if (0xff < local_28) goto LAB_01155e3c;
    if (uVar11 == uVar5) {
LAB_01155f5c:
      uVar8 = 0;
      param_2[2] = uVar11;
    }
    else {
      if (uVar5 <= uVar11) goto LAB_011562a0;
      cVar1 = *(char *)(iVar15 + uVar11);
      param_2[2] = uVar11 + 1;
      bVar6 = cVar1 - 0x30;
      if (9 < (byte)(cVar1 - 0x30U)) goto LAB_01155f5c;
      uVar8 = 1;
      uVar11 = uVar11 + 1;
    }
    if (uVar8 != 0) {
      local_28 = local_28 * 10 + (uint)bVar6;
      if (0xff < local_28) {
LAB_01155e3c:
        param_2[2] = uVar9;
        goto LAB_011560d8;
      }
      if (uVar11 != uVar5) {
        if (uVar5 <= uVar11) goto LAB_011562a0;
        if (*(byte *)(iVar15 + uVar11) - 0x30 < 10) {
          param_2[2] = uVar11 + 1;
          goto LAB_01155e3c;
        }
      }
      param_2[2] = uVar11;
    }
  }
  if (uVar11 == uVar5) goto LAB_011560d8;
  uVar3 = 1;
  bVar6 = 1;
  if (uVar5 <= uVar11) goto LAB_011562ac;
  if (*(char *)(iVar15 + uVar11) != '.') goto LAB_011560d8;
  uVar4 = uVar11 + 1;
  param_2[2] = uVar4;
  bVar16 = uVar5 <= uVar4;
  uVar9 = uVar4;
  if (uVar4 == uVar5) {
LAB_01155fb4:
    bVar12 = false;
    param_2[2] = uVar4;
  }
  else {
    if (bVar16) goto LAB_01156288;
    cVar1 = *(char *)(iVar15 + uVar4);
    param_2[2] = uVar11 + 2;
    bVar6 = cVar1 - 0x30;
    bVar12 = cVar1 - 0x30;
    bVar16 = 8 < bVar12;
    if (9 < bVar12) goto LAB_01155fb4;
    bVar12 = true;
    uVar9 = uVar11 + 2;
  }
  if ((bool)bVar12) {
    bVar16 = uVar5 <= uVar9;
    if (uVar9 == uVar5) {
LAB_01156008:
      bVar10 = 0;
      param_2[2] = uVar9;
    }
    else {
      if (bVar16) goto LAB_01156288;
      bVar10 = *(byte *)(iVar15 + uVar9);
      param_2[2] = uVar9 + 1;
      uVar8 = bVar10 - 0x30;
      bVar16 = 8 < (uVar8 & 0xff);
      if (9 < (uVar8 & 0xff)) goto LAB_01156008;
      bVar10 = 1;
      uVar9 = uVar9 + 1;
    }
    uVar3 = (uint)bVar6;
    if (bVar10 != 0) {
      uVar3 = uVar3 * 10 + (uVar8 & 0xff);
      bVar16 = 0xfe < uVar3;
      if (0xff < uVar3) goto LAB_01156000;
      bVar16 = uVar5 <= uVar9;
      if (uVar9 == uVar5) {
LAB_01156074:
        bVar7 = false;
        param_2[2] = uVar9;
      }
      else {
        if (bVar16) goto LAB_01156288;
        cVar1 = *(char *)(iVar15 + uVar9);
        param_2[2] = uVar9 + 1;
        bVar10 = cVar1 - 0x30;
        bVar16 = 8 < bVar10;
        if (9 < bVar10) goto LAB_01156074;
        bVar7 = true;
        uVar9 = uVar9 + 1;
      }
      if (bVar7) {
        uVar3 = uVar3 * 10 + (uint)bVar10;
        bVar16 = 0xfe < uVar3;
        if (0xff < uVar3) goto LAB_01156000;
        bVar16 = uVar5 <= uVar9;
        if (uVar9 != uVar5) {
          if (bVar16) goto LAB_01156288;
          uVar8 = *(byte *)(iVar15 + uVar9) - 0x30;
          bVar16 = 8 < uVar8;
          if (uVar8 < 10) {
            param_2[2] = uVar9 + 1;
            goto LAB_01156000;
          }
        }
        param_2[2] = uVar9;
      }
    }
    uVar4 = uVar9;
    uVar9 = uVar4;
  }
  else {
LAB_01156000:
    bVar12 = false;
    param_2[2] = uVar4;
  }
  if ((bool)bVar12 != false) {
    bVar16 = uVar5 <= uVar4;
  }
  if ((bool)bVar12 == false || uVar4 == uVar5) goto LAB_011560d8;
  uVar11 = uVar4;
  if (bVar16) {
LAB_011562ac:
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(uVar11,uVar5,&DAT_01888c94);
  }
  if (*(char *)(iVar15 + uVar4) != '.') goto LAB_011560d8;
  uVar11 = uVar4 + 1;
  param_2[2] = uVar11;
  if (uVar11 == uVar5) {
LAB_01156134:
    bVar16 = false;
    param_2[2] = uVar11;
    uVar8 = uVar11;
  }
  else {
    if (uVar5 <= uVar11) goto LAB_011562a0;
    cVar1 = *(char *)(iVar15 + uVar11);
    param_2[2] = uVar4 + 2;
    bVar12 = cVar1 - 0x30;
    if (9 < (byte)(cVar1 - 0x30U)) goto LAB_01156134;
    bVar16 = true;
    uVar8 = uVar4 + 2;
  }
  if (!bVar16) goto LAB_01156184;
  if (uVar8 != uVar5) {
    if (uVar8 < uVar5) {
      cVar1 = *(char *)(iVar15 + uVar8);
      param_2[2] = uVar8 + 1;
      if (9 < (byte)(cVar1 - 0x30U)) goto LAB_0115618c;
      bVar7 = true;
      uVar8 = uVar8 + 1;
      local_2c = cVar1 - 0x30;
      goto LAB_01156194;
    }
LAB_011562b8:
    uVar9 = uVar8;
LAB_01156288:
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(uVar9,uVar5,&DAT_01888c94);
  }
LAB_0115618c:
  bVar7 = false;
  param_2[2] = uVar8;
LAB_01156194:
  uVar9 = (uint)bVar12;
  if (bVar7) {
    uVar9 = uVar9 * 10 + (uint)local_2c;
    if (0xff < uVar9) goto LAB_01156184;
    if (uVar8 == uVar5) {
LAB_011561f4:
      bVar7 = false;
      param_2[2] = uVar8;
    }
    else {
      if (uVar5 <= uVar8) goto LAB_011562b8;
      cVar1 = *(char *)(iVar15 + uVar8);
      param_2[2] = uVar8 + 1;
      local_2c = cVar1 - 0x30;
      if (9 < (byte)(cVar1 - 0x30U)) goto LAB_011561f4;
      bVar7 = true;
      uVar8 = uVar8 + 1;
    }
    if (bVar7) {
      uVar9 = uVar9 * 10 + (uint)local_2c;
      if (uVar9 < 0x100) {
        if (uVar8 != uVar5) {
          if (uVar5 <= uVar8) goto LAB_011562b8;
          bVar6 = *(byte *)(iVar15 + uVar8);
          param_2[2] = uVar8 + 1;
          if (bVar6 - 0x30 < 10) goto LAB_01156184;
        }
        param_2[2] = uVar8;
      }
      else {
LAB_01156184:
        bVar16 = false;
        param_2[2] = uVar11;
      }
    }
  }
  if (bVar16) {
    *param_1 = 1;
    *(uint *)(param_1 + 1) =
         (uVar3 & 0xff) << 0x10 | uVar9 << 0x18 | (local_28 & 0xff) << 8 | uVar14 & 0xff;
    return;
  }
LAB_011560d8:
  param_2[2] = uVar13;
  *param_1 = 0;
  return;
}

