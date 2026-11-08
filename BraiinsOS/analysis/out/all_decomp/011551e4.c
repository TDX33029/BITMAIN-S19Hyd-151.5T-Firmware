// FUN_011551e4 @ 011551e4 size=1188 calls_out=6 calls_in=3
// strings: assertion failed: head.len() + tail.len() <= 8PrefixLenErrorDotDotDotNormal

void FUN_011551e4(undefined1 *param_1,int *param_2)

{
  char cVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  ushort uVar15;
  uint uVar16;
  ulonglong uVar17;
  byte local_74;
  byte local_70;
  ushort local_64;
  ushort local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  ushort local_38 [4];
  undefined4 local_30;
  undefined4 local_2c;
  
  iVar12 = param_2[2];
  local_4c = 0;
  local_50 = 0;
  local_54 = 0;
  local_58 = 0;
  uVar17 = FUN_01155758(param_2,&local_58,8);
  uVar6 = (uint)uVar17;
  if (uVar6 == 8) {
    uVar15 = local_4c._2_2_ << 8 | local_4c._2_2_ >> 8;
    local_5c = (ushort)((local_4c & 0xff) << 8) | (ushort)(local_4c >> 8) & 0xff;
    uVar4 = local_50._2_2_ << 8 | local_50._2_2_ >> 8;
    local_64 = (ushort)((local_50 & 0xff) << 8) | (ushort)(local_50 >> 8) & 0xff;
    uVar7 = (ushort)local_54 << 8 | (ushort)local_54 >> 8;
    uVar9 = local_54._2_2_ << 8 | local_54._2_2_ >> 8;
    uVar8 = local_58._2_2_ << 8 | local_58._2_2_ >> 8;
    uVar3 = (ushort)local_58;
  }
  else {
    if ((uVar17 & 0x100000000) != 0) goto LAB_011555b8;
    uVar5 = param_2[1];
    uVar13 = param_2[2];
    if (uVar13 == uVar5) goto LAB_011555b8;
    if (uVar5 <= uVar13) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(uVar13,uVar5,&DAT_01888c94);
    }
    if (*(char *)(*param_2 + uVar13) != ':') goto LAB_011555b8;
    uVar16 = uVar13 + 1;
    param_2[2] = uVar16;
    if (uVar16 == uVar5) goto LAB_011555b8;
    if (uVar5 <= uVar16) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(uVar16,uVar5,&DAT_01888c94);
    }
    if (*(char *)(*param_2 + uVar16) != ':') goto LAB_011555b8;
    param_2[2] = uVar13 + 2;
    local_3c = 0;
    local_40 = 0;
    local_44 = 0;
    local_48 = 0;
    uVar13 = FUN_01155758(param_2,&local_48,8 - uVar6);
    if (8 < uVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa36c(0,uVar6,8,&DAT_01888d2c);
    }
    if (8 < uVar13) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa36c(0,uVar13,8,&DAT_01888d1c);
    }
    if (8 < uVar13 + uVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa464("assertion failed: head.len() + tail.len() <= 8PrefixLenErrorDotDotDotNormal",
                   0x2e,&DAT_01888d3c);
    }
    local_2c = 0;
    local_30 = 0;
    local_38[2] = 0;
    local_38[3] = 0;
    local_38[0] = 0;
    local_38[1] = 0;
    FUN_016dd1aa(local_38,&local_58,uVar6 << 1);
    FUN_016dd1aa(local_38 + (8 - uVar13),&local_48,uVar13 << 1);
    uVar15 = local_2c._2_2_ << 8 | local_2c._2_2_ >> 8;
    local_5c = (ushort)((local_2c & 0xff) << 8) | (ushort)(local_2c >> 8) & 0xff;
    uVar9 = local_38[3] << 8 | local_38[3] >> 8;
    uVar4 = local_30._2_2_ << 8 | local_30._2_2_ >> 8;
    local_64 = (ushort)((local_30 & 0xff) << 8) | (ushort)(local_30 >> 8) & 0xff;
    uVar7 = local_38[2] << 8 | local_38[2] >> 8;
    uVar8 = local_38[1] << 8 | local_38[1] >> 8;
    uVar3 = local_38[0];
  }
  uVar13 = param_2[1];
  uVar6 = param_2[2];
  if (uVar6 == uVar13) goto LAB_011555b8;
  if (uVar13 <= uVar6) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(uVar6,uVar13,&DAT_01888c94);
  }
  iVar11 = *param_2;
  if (*(char *)(iVar11 + uVar6) != '/') goto LAB_011555b8;
  uVar5 = uVar6 + 1;
  param_2[2] = uVar5;
  if (uVar5 == uVar13) {
LAB_0115540c:
    param_2[2] = uVar5;
    goto LAB_01155434;
  }
  if (uVar13 <= uVar5) goto LAB_01155678;
  cVar1 = *(char *)(iVar11 + uVar5);
  uVar16 = uVar6 + 2;
  param_2[2] = uVar16;
  if (9 < (byte)(cVar1 - 0x30U)) goto LAB_0115540c;
  uVar14 = (uint)(byte)(cVar1 - 0x30);
  if (0x80 < uVar14) goto LAB_01155434;
  if (uVar16 != uVar13) {
    if (uVar16 < uVar13) {
      cVar1 = *(char *)(iVar11 + uVar16);
      param_2[2] = uVar6 + 3;
      local_70 = cVar1 - 0x30;
      if (9 < (byte)(cVar1 - 0x30U)) goto LAB_011554c8;
      bVar10 = true;
      uVar16 = uVar6 + 3;
      goto LAB_011554d0;
    }
LAB_01155674:
    uVar5 = uVar16;
LAB_01155678:
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(uVar5,uVar13,&DAT_01888c94);
  }
LAB_011554c8:
  bVar10 = false;
  param_2[2] = uVar16;
LAB_011554d0:
  if (!bVar10) goto LAB_011555a4;
  uVar14 = uVar14 * 10 + (uint)local_70;
  if (0x80 < uVar14) goto LAB_01155434;
  if (uVar16 == uVar13) {
LAB_01155540:
    param_2[2] = uVar16;
    bVar10 = false;
  }
  else {
    if (uVar13 <= uVar16) goto LAB_01155674;
    cVar1 = *(char *)(iVar11 + uVar16);
    param_2[2] = uVar16 + 1;
    local_74 = cVar1 - 0x30;
    if (9 < (byte)(cVar1 - 0x30U)) goto LAB_01155540;
    bVar10 = true;
    uVar16 = uVar16 + 1;
  }
  if (!bVar10) goto LAB_011555a4;
  uVar14 = uVar14 * 10 + (uint)local_74;
  if (0x80 < uVar14) {
LAB_01155434:
    param_2[2] = uVar5;
LAB_011555b8:
    param_2[2] = iVar12;
    *param_1 = 0;
    return;
  }
  if (uVar16 != uVar13) {
    if (uVar13 <= uVar16) goto LAB_01155674;
    bVar2 = *(byte *)(iVar11 + uVar16);
    param_2[2] = uVar16 + 1;
    if (bVar2 - 0x30 < 10) goto LAB_01155434;
  }
  param_2[2] = uVar16;
LAB_011555a4:
  if (0x80 < (uVar14 & 0xff)) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_00418ec6,0x2b,local_38,&DAT_01888c84,&DAT_01888cdc);
  }
  *(ushort *)(param_1 + 0xd) = local_5c;
  *(ushort *)(param_1 + 0xb) = uVar4;
  *(ushort *)(param_1 + 9) = local_64;
  param_1[0x11] = (char)uVar14;
  *(ushort *)(param_1 + 0xf) = uVar15;
  *(ushort *)(param_1 + 7) = uVar9;
  *(ushort *)(param_1 + 5) = uVar7;
  *(ushort *)(param_1 + 3) = uVar8;
  *(ushort *)(param_1 + 1) = uVar3 << 8 | uVar3 >> 8;
  *param_1 = 1;
  return;
}

