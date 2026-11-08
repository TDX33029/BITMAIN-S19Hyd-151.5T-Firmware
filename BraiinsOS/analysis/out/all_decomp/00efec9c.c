// FUN_00efec9c @ 00efec9c size=1096 calls_out=6 calls_in=2
// strings: Local time out of range for `NaiveDateTime`struct WorkSolverInfo with 14 elements

undefined4 FUN_00efec9c(undefined4 param_1,undefined4 param_2,int param_3)

{
  byte bVar1;
  uint uVar2;
  ushort uVar3;
  uint *puVar4;
  code *pcVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined *puVar9;
  code *pcVar10;
  uint uVar11;
  code *pcVar12;
  uint *local_3c;
  code *local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  
  FUN_00f6b678(&local_3c,param_1,0);
  pcVar5 = local_38;
  puVar4 = local_3c;
  if (local_3c == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8("Local time out of range for `NaiveDateTime`struct WorkSolverInfo with 14 elements"
                 ,0x2b,&DAT_0187c534);
  }
  uVar11 = (int)local_3c >> 0xd;
  local_30 = uVar11;
  if (uVar11 < 10000) {
    iVar6 = (int)(short)((uVar11 & 0xffff) >> 2);
    uVar7 = iVar6 * 0x147b;
    if (99 < (uint)(iVar6 * 0xa3d80) >> 0x18) {
      return 1;
    }
    uVar3 = (ushort)(uVar7 >> 0x10);
    uVar2 = (short)(uVar3 >> 1 & 0xff) * 0xcd;
    pcVar10 = *(code **)(param_3 + 0x10);
    iVar6 = (*pcVar10)(param_2,uVar2 >> 0xb | 0x30);
    if (iVar6 != 0) {
      return 1;
    }
    iVar6 = (*pcVar10)(param_2,(uVar7 >> 0x11) + (uVar2 >> 0xb) * -10 & 0xff | 0x30);
    if (iVar6 != 0) {
      return 1;
    }
    uVar11 = (short)(uVar3 >> 1) * 0x9c + uVar11;
    uVar7 = uVar11 & 0xff;
    if (99 < uVar7) {
      return 1;
    }
    uVar7 = (short)uVar7 * 0xcd;
    iVar6 = (*pcVar10)(param_2,uVar7 >> 0xb | 0x30);
    if (iVar6 != 0) {
      return 1;
    }
    iVar6 = (*pcVar10)(param_2,uVar11 + (uVar7 >> 0xb) * -10 & 0xff | 0x30);
    if (iVar6 != 0) {
      return 1;
    }
  }
  else {
    local_3c = &local_30;
    local_38 = FUN_00fac2b8;
    iVar6 = FUN_00fa948c(param_2,param_3,&DAT_0056a568,&local_3c);
    if (iVar6 != 0) {
      return 1;
    }
    pcVar10 = *(code **)(param_3 + 0x10);
  }
  iVar6 = (*pcVar10)(param_2,0x2d);
  if (iVar6 != 0) {
    return 1;
  }
  uVar11 = ((uint)puVar4 & 0x1fff) >> 3;
  if (0x2dc < uVar11) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(uVar11,0x2dd,&DAT_01880224);
  }
  bVar1 = ""[uVar11];
  uVar11 = uVar11 + bVar1 >> 6;
  uVar7 = (short)uVar11 * 0x1a;
  iVar6 = (*pcVar10)(param_2,uVar7 >> 8 | 0x30);
  if (iVar6 != 0) {
    return 1;
  }
  uVar7 = uVar7 >> 8;
  iVar6 = (*pcVar10)(param_2,uVar11 + (uVar7 | uVar7 << 2) * -2 & 0xff | 0x30);
  if (iVar6 != 0) {
    return 1;
  }
  iVar6 = (*pcVar10)(param_2,0x2d);
  if (iVar6 != 0) {
    return 1;
  }
  uVar7 = ((uint)bVar1 + ((uint)puVar4 >> 3) & 0x3f) >> 1;
  uVar11 = (short)uVar7 * 0x1a;
  iVar6 = (*pcVar10)(param_2,uVar11 >> 8 | 0x30);
  if (iVar6 != 0) {
    return 1;
  }
  uVar11 = uVar11 >> 8;
  iVar6 = (*pcVar10)(param_2,uVar7 + (uVar11 | uVar11 << 2) * -2 & 0xff | 0x30);
  if (iVar6 != 0) {
    return 1;
  }
  iVar6 = (*pcVar10)(param_2,0x54);
  if (iVar6 != 0) {
    return 1;
  }
  uVar11 = (uint)pcVar5 / 0x3c;
  pcVar12 = pcVar5 + uVar11 * 0xc4;
  uVar7 = local_34;
  if (999999999 < local_34) {
    uVar7 = local_34 + 0xc4653600;
  }
  if (999999999 < local_34) {
    pcVar12 = pcVar12 + 1;
  }
  local_2c = uVar7;
  iVar6 = FUN_00f24134(param_2,param_3,(uint)pcVar5 / 0xe10);
  if (iVar6 != 0) {
    return 1;
  }
  iVar6 = (*pcVar10)(param_2,0x3a);
  if (iVar6 != 0) {
    return 1;
  }
  iVar6 = FUN_00f24134(param_2,param_3,uVar11 + ((uVar11 / 0x3c) * 0x10 - uVar11 / 0x3c) * -4);
  if (iVar6 != 0) {
    return 1;
  }
  iVar6 = (*pcVar10)(param_2,0x3a);
  if (iVar6 != 0) {
    return 1;
  }
  iVar6 = FUN_00f24134(param_2,param_3,pcVar12);
  if (iVar6 != 0) {
    return 1;
  }
  if (uVar7 == 0) goto LAB_00eff0a8;
  uVar11 = uVar7 / 1000000;
  if (uVar7 % 1000000 == 0) {
    puVar9 = &DAT_0035d4b5;
LAB_00eff054:
    local_3c = &local_28;
    local_28 = uVar11;
  }
  else {
    uVar11 = uVar7 / 1000;
    if (uVar11 * -1000 == -uVar7) {
      puVar9 = &DAT_0035d4bf;
      goto LAB_00eff054;
    }
    local_3c = &local_2c;
    puVar9 = &DAT_0035d4c9;
  }
  local_38 = (code *)&LAB_00fac484;
  iVar6 = FUN_00fa948c(param_2,param_3,puVar9,&local_3c);
  if (iVar6 != 0) {
    return 1;
  }
LAB_00eff0a8:
  local_3c = (uint *)0x1010101;
  uVar8 = FUN_00ee0cb4(&local_3c,param_2,param_3);
  return uVar8;
}

