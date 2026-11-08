// FUN_014b6cd8 @ 014b6cd8 size=716 calls_out=11 calls_in=2
// strings: 

undefined8 FUN_014b6cd8(int param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  byte *pbVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  uint uVar11;
  longlong lVar12;
  int local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  uint local_50;
  byte *local_4c;
  uint local_48;
  uint local_40;
  undefined4 local_3c;
  undefined4 local_38;
  uint *local_34;
  undefined1 *local_30;
  int local_2c;
  undefined *local_28;
  
  uVar10 = *(undefined4 *)(param_1 + 4);
  uVar6 = *(undefined4 *)(param_1 + 8);
  FUN_019a5900(&local_64,uVar10,uVar6);
  if (local_64 == -0x80000000) {
    local_34 = &local_40;
    local_58 = local_60;
    local_38 = 0;
    local_40 = 0;
    local_28 = (undefined *)0x0;
    local_54 = local_5c;
    local_3c = 1;
    local_2c = 0x60000020;
    local_30 = &DAT_01cf9988;
    iVar3 = FUN_019a24f8(uVar10,uVar6,&local_34);
    if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_013073dc(&DAT_00533383,0x37,&local_50,&DAT_01cf99a0,&DAT_01d30334);
    }
    local_50 = local_40;
    local_4c = (byte *)local_3c;
    local_48 = local_38;
    uVar8 = FUN_014b6844(&local_58);
    uVar6 = 1;
    goto LAB_014b6e44;
  }
  lVar12 = FUN_006685f8(local_60,local_5c);
  uVar11 = (uint)((ulonglong)lVar12 >> 0x20);
  uVar6 = 0;
  if (lVar12 < 0) {
LAB_014b6d2c:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar6,uVar11);
  }
  local_48 = uVar11;
  if (uVar11 == 0) {
    FUN_01bed4e2(1,(int)lVar12,0);
    FUN_0134bd64(local_64,local_60);
    local_4c = &DAT_00000001;
    local_50 = 0;
LAB_014b6de8:
    uVar6 = 0;
    goto LAB_014b6dec;
  }
  uVar6 = 1;
  pbVar2 = (byte *)FUN_01298504(uVar11,1);
  if (pbVar2 == (byte *)0x0) goto LAB_014b6d2c;
  FUN_01bed4e2(pbVar2,(int)lVar12,uVar11);
  FUN_0134bd64(local_64,local_60);
  local_50 = uVar11;
  local_4c = pbVar2;
  if (uVar11 == 0) goto LAB_014b6de8;
  if (uVar11 == 1) {
    bVar1 = *pbVar2;
    uVar6 = 1;
    if ((bVar1 == 0x2b) || (bVar1 == 0x2d)) goto LAB_014b6dec;
  }
  else {
    bVar1 = *pbVar2;
  }
  uVar8 = 0;
  uVar9 = uVar11;
  pbVar7 = pbVar2;
  if (bVar1 == 0x2b) {
    pbVar7 = pbVar2 + 1;
    uVar9 = uVar11 - 1;
  }
  if (8 < uVar9) {
    do {
      if (uVar9 == 0) goto LAB_014b6e9c;
      uVar4 = (uint)((ulonglong)uVar8 * 10);
      if ((int)((ulonglong)uVar8 * 10 >> 0x20) != 0) {
        uVar6 = 1;
        if (*pbVar7 - 0x30 < 10) {
          uVar6 = 2;
        }
        goto LAB_014b6dec;
      }
      uVar5 = *pbVar7 - 0x30;
      if (9 < uVar5) goto LAB_014b6f64;
      uVar8 = uVar5 + uVar4;
      uVar9 = uVar9 - 1;
      pbVar7 = pbVar7 + 1;
    } while (!CARRY4(uVar5,uVar4));
    uVar6 = 2;
    goto LAB_014b6dec;
  }
  for (; uVar9 != 0; uVar9 = uVar9 - 1) {
    bVar1 = *pbVar7;
    if (9 < bVar1 - 0x30) goto LAB_014b6f64;
    pbVar7 = pbVar7 + 1;
    uVar8 = (bVar1 - 0x30) + uVar8 * 10;
  }
LAB_014b6e9c:
  uVar6 = 0;
  goto LAB_014b6e38;
LAB_014b6f64:
  uVar6 = 1;
LAB_014b6dec:
  pbVar2 = local_4c;
  uVar11 = local_50;
  local_30 = &LAB_00632348;
  local_34 = &local_50;
  local_28 = &DAT_019ba4dc;
  local_2c = param_1;
  FUN_00664898(&local_40,&DAT_00578bf0,&local_34);
  uVar8 = FUN_014b6354(uVar6,&local_40);
  uVar6 = 1;
LAB_014b6e38:
  FUN_0134bd64(uVar11,pbVar2);
LAB_014b6e44:
  return CONCAT44(uVar8,uVar6);
}

