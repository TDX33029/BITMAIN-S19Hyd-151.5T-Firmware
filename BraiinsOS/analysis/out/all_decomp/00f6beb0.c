// FUN_00f6beb0 @ 00f6beb0 size=1180 calls_out=2 calls_in=1
// strings: 

undefined4 FUN_00f6beb0(uint *param_1,undefined4 param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  code *pcVar11;
  uint local_34;
  uint local_30;
  uint *local_2c;
  code *local_28;
  
  uVar4 = (int)*param_1 >> 0xd;
  uVar9 = (*param_1 & 0x1fff) >> 3;
  local_30 = uVar4;
  if (0x2dc < uVar9) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(uVar9,0x2dd,&DAT_01880224);
  }
  bVar1 = ""[uVar9];
  if (uVar4 < 10000) {
    iVar2 = (int)(short)((uVar4 & 0xffff) >> 2);
    uVar3 = iVar2 * 0x147b;
    if (99 < (uint)(iVar2 * 0xa3d80) >> 0x18) {
      return 1;
    }
    uVar10 = uVar3 >> 0x11;
    uVar3 = (short)((ushort)(uVar3 >> 0x11) & 0xff) * 0xcd;
    pcVar11 = *(code **)(param_3 + 0x10);
    iVar2 = (*pcVar11)(param_2,uVar3 >> 0xb | 0x30);
    if (iVar2 != 0) {
      return 1;
    }
    iVar2 = (*pcVar11)(param_2,uVar10 + (uVar3 >> 0xb) * -10 & 0xff | 0x30);
    if (iVar2 != 0) {
      return 1;
    }
    iVar7 = uVar4 + uVar10 * -100;
    uVar4 = (short)((ushort)iVar7 & 0xff) * 0xcd;
    iVar2 = (*pcVar11)(param_2,uVar4 >> 0xb | 0x30);
    if (iVar2 != 0) {
      return 1;
    }
    iVar2 = (*pcVar11)(param_2,iVar7 + (uVar4 >> 0xb) * -10 & 0xff | 0x30);
    if (iVar2 != 0) {
      return 1;
    }
  }
  else {
    local_2c = &local_30;
    local_28 = FUN_00fac2b8;
    iVar2 = FUN_00fa948c(param_2,param_3,&DAT_0056a568,&local_2c);
    if (iVar2 != 0) {
      return 1;
    }
    pcVar11 = *(code **)(param_3 + 0x10);
  }
  iVar2 = (*pcVar11)(param_2,0x2d);
  if (iVar2 != 0) {
    return 1;
  }
  uVar4 = uVar9 + bVar1 >> 6;
  uVar3 = (short)uVar4 * 0x1a;
  iVar2 = (*pcVar11)(param_2,uVar3 >> 8 | 0x30);
  if (iVar2 != 0) {
    return 1;
  }
  uVar3 = uVar3 >> 8;
  iVar2 = (*pcVar11)(param_2,uVar4 + (uVar3 | uVar3 << 2) * -2 & 0xff | 0x30);
  if (iVar2 != 0) {
    return 1;
  }
  iVar2 = (*pcVar11)(param_2,0x2d);
  if (iVar2 != 0) {
    return 1;
  }
  uVar9 = (uVar9 + bVar1 & 0xff) >> 1 & 0x1f;
  uVar4 = (short)uVar9 * 0xcd;
  iVar2 = (*pcVar11)(param_2,uVar4 >> 0xb | 0x30);
  if (iVar2 != 0) {
    return 1;
  }
  uVar4 = uVar4 >> 0xb;
  iVar2 = (*pcVar11)(param_2,uVar9 + (uVar4 | uVar4 << 2) * -2 & 0xff | 0x30);
  if ((iVar2 != 0) || (iVar2 = (*pcVar11)(param_2,0x54), iVar2 != 0)) {
    return 1;
  }
  uVar3 = param_1[1];
  uVar10 = param_1[2];
  uVar4 = uVar3 / 0x3c;
  uVar9 = uVar10;
  if (999999999 < uVar10) {
    uVar9 = uVar10 + 0xc4653600;
  }
  iVar2 = uVar3 + (uVar4 * 0x10 - uVar3 / 0x3c) * -4;
  if (999999999 < uVar10) {
    iVar2 = iVar2 + 1;
  }
  if (99 < ((uint)((ulonglong)uVar3 * 0x91a2b3c5 >> 0x20) & 0x7ffff) >> 0xb) {
    return 1;
  }
  uVar10 = (short)((ushort)(uVar3 / 0xe10) & 0xff) * 0xcd;
  local_34 = uVar9;
  iVar7 = (*pcVar11)(param_2,uVar10 >> 0xb | 0x30);
  if (iVar7 != 0) {
    return 1;
  }
  iVar7 = (*pcVar11)(param_2,uVar3 / 0xe10 + (uVar10 >> 0xb) * -10 & 0xff | 0x30);
  if (iVar7 != 0) {
    return 1;
  }
  iVar7 = (*pcVar11)(param_2,0x3a);
  if (iVar7 != 0) {
    return 1;
  }
  iVar8 = uVar4 + ((uVar4 / 0x3c) * 0x10 - uVar4 / 0x3c) * -4;
  iVar7 = (*pcVar11)(param_2,(uint)(iVar8 * 0xcd) >> 0xb & 0x3f | 0x30);
  if (iVar7 != 0) {
    return 1;
  }
  iVar7 = (*pcVar11)(param_2,iVar8 + ((uint)(iVar8 * 0xcd0000) >> 0x1b) * -10 & 0xff | 0x30);
  if (iVar7 != 0) {
    return 1;
  }
  iVar7 = (*pcVar11)(param_2,0x3a);
  if (iVar7 != 0) {
    return 1;
  }
  iVar7 = (*pcVar11)(param_2,(uint)(iVar2 * 0xcd) >> 0xb & 0x3f | 0x30);
  if (iVar7 != 0) {
    return 1;
  }
  iVar2 = (*pcVar11)(param_2,iVar2 + ((uint)(iVar2 * 0xcd0000) >> 0x1b) * -10 & 0xff | 0x30);
  if (iVar2 != 0) {
    return 1;
  }
  if (uVar9 == 0) {
    return 0;
  }
  uVar4 = uVar9 / 1000000;
  if (uVar9 + (short)uVar4 * -1000000 == 0) {
    puVar6 = &DAT_0035d4b5;
  }
  else {
    uVar4 = uVar9 / 1000;
    if (uVar9 % 1000 != 0) {
      local_2c = &local_34;
      puVar6 = &DAT_0035d4c9;
      goto LAB_00f6c334;
    }
    puVar6 = &DAT_0035d4bf;
  }
  local_2c = &local_30;
  local_30 = uVar4;
LAB_00f6c334:
  local_28 = (code *)&LAB_00fac484;
  uVar5 = FUN_00fa948c(param_2,param_3,puVar6,&local_2c);
  return uVar5;
}

