// FUN_00695cd4 @ 00695cd4 size=828 calls_out=6 calls_in=0
// strings: 

undefined4 FUN_00695cd4(undefined4 *param_1,undefined4 *param_2)

{
  byte bVar1;
  undefined1 **ppuVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  code *pcVar8;
  undefined1 *puVar9;
  code *pcVar10;
  undefined4 uVar11;
  int iVar12;
  undefined1 **local_3c;
  code *local_38;
  undefined1 *local_34;
  undefined1 *local_30;
  undefined1 *local_2c;
  undefined1 *local_28;
  
  FUN_0128ec84(&local_3c,*(undefined4 *)*param_1,0);
  pcVar3 = local_38;
  ppuVar2 = local_3c;
  if (local_3c == (undefined1 **)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0130739c(&DAT_00529c62,0x2b,&DAT_01d2a938);
  }
  puVar9 = (undefined1 *)((int)local_3c >> 0xd);
  local_30 = puVar9;
  if (puVar9 < (undefined1 *)0x2710) {
    uVar11 = *param_2;
    iVar12 = param_2[1];
    uVar5 = (uint)((short)(((uint)puVar9 & 0xffff) >> 2) * 0x147b) >> 0x11;
    iVar4 = FUN_0128891c(uVar11,iVar12,uVar5);
    if (iVar4 != 0) {
      return 1;
    }
    iVar4 = FUN_0128891c(uVar11,iVar12,puVar9 + uVar5 * -100);
  }
  else {
    local_3c = &local_30;
    uVar11 = *param_2;
    iVar12 = param_2[1];
    local_38 = FUN_012fce60;
    iVar4 = FUN_012fa178(uVar11,iVar12,&DAT_00570b30,&local_3c);
  }
  if (iVar4 != 0) {
    return 1;
  }
  pcVar8 = *(code **)(iVar12 + 0x10);
  iVar4 = (*pcVar8)(uVar11,0x2d);
  if (iVar4 != 0) {
    return 1;
  }
  uVar5 = ((uint)ppuVar2 & 0x1fff) >> 3;
  if (0x2dc < uVar5) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(uVar5,0x2dd,&DAT_01d2a928);
  }
  bVar1 = ""[uVar5];
  iVar4 = FUN_0128891c(uVar11,iVar12,uVar5 + bVar1 >> 6);
  if (iVar4 != 0) {
    return 1;
  }
  iVar4 = (*pcVar8)(uVar11,0x2d);
  if (iVar4 != 0) {
    return 1;
  }
  iVar4 = FUN_0128891c(uVar11,iVar12,((uint)bVar1 + ((uint)ppuVar2 >> 3) & 0x3f) >> 1);
  if (iVar4 != 0) {
    return 1;
  }
  iVar4 = (*pcVar8)(uVar11,0x54);
  if (iVar4 != 0) {
    return 1;
  }
  uVar5 = (uint)pcVar3 / 0x3c;
  puVar9 = local_34;
  if (&DAT_3b9ac9ff < local_34) {
    puVar9 = local_34 + -1000000000;
  }
  pcVar10 = pcVar3 + (uVar5 * 0x10 - (uint)pcVar3 / 0x3c) * -4;
  if (&DAT_3b9ac9ff < local_34) {
    pcVar10 = pcVar10 + 1;
  }
  local_2c = puVar9;
  iVar4 = FUN_0128891c(uVar11,iVar12,(uint)pcVar3 / 0xe10);
  if (iVar4 != 0) {
    return 1;
  }
  iVar4 = (*pcVar8)(uVar11,0x3a);
  if (iVar4 != 0) {
    return 1;
  }
  iVar4 = FUN_0128891c(uVar11,iVar12,uVar5 + ((uVar5 / 0x3c) * 0x10 - uVar5 / 0x3c) * -4);
  if (iVar4 != 0) {
    return 1;
  }
  iVar4 = (*pcVar8)(uVar11,0x3a);
  if (iVar4 != 0) {
    return 1;
  }
  iVar4 = FUN_0128891c(uVar11,iVar12,pcVar10);
  if (iVar4 != 0) {
    return 1;
  }
  if (puVar9 == (undefined1 *)0x0) goto LAB_00695fd4;
  puVar6 = (undefined1 *)((uint)puVar9 / 1000000);
  if (puVar9 + (short)puVar6 * -1000000 == (undefined1 *)0x0) {
    puVar7 = &DAT_004ba617;
LAB_00695fa4:
    local_3c = &local_28;
    local_28 = puVar6;
  }
  else {
    puVar6 = (undefined1 *)((uint)puVar9 / 1000);
    if ((uint)puVar9 % 1000 == 0) {
      puVar7 = &DAT_004ba621;
      goto LAB_00695fa4;
    }
    local_3c = &local_2c;
    puVar7 = &DAT_004ba62b;
  }
  local_38 = FUN_012fd02c;
  iVar4 = FUN_012fa178(uVar11,iVar12,puVar7,&local_3c);
  if (iVar4 != 0) {
    return 1;
  }
LAB_00695fd4:
  local_3c = (undefined1 **)0x1010101;
  uVar11 = FUN_006961e4(&local_3c,uVar11,iVar12);
  return uVar11;
}

