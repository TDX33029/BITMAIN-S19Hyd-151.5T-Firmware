// FUN_00ce0cec @ 00ce0cec size=2208 calls_out=4 calls_in=0
// strings: 

undefined4 FUN_00ce0cec(int *param_1,uint *param_2,undefined4 param_3)

{
  byte bVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined *puVar7;
  byte bVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint local_38;
  uint local_34;
  uint local_30;
  uint *local_2c;
  code *local_28;
  
  uVar11 = *param_2;
  local_38 = (int)uVar11 >> 0xd;
  if (local_38 < 10000) {
    iVar10 = param_1[2];
    uVar2 = (short)((local_38 & 0xffff) >> 2) * 0x147b;
    iVar5 = (int)(short)(ushort)(uVar2 >> 0x11);
    iVar4 = iVar10;
    if (*param_1 == iVar10) {
      FUN_00d653ec(param_1,iVar10,1,1,1);
      iVar4 = param_1[2];
    }
    *(byte *)(param_1[1] + iVar4) = (byte)((uint)(iVar5 * 0xcd) >> 0xb) & 0x3f | 0x30;
    iVar4 = iVar10 + 1;
    param_1[2] = iVar4;
    if (*param_1 == iVar4) {
      FUN_00d653ec(param_1,iVar4,1,1,1);
      iVar4 = param_1[2];
    }
    *(byte *)(param_1[1] + iVar4) =
         (char)(uVar2 >> 0x11) + (byte)((uint)(iVar5 * 0xcd0000) >> 0x1b) * -10 | 0x30;
    iVar4 = (int)local_38 % 100;
    iVar5 = iVar10 + 2;
    param_1[2] = iVar5;
    if (iVar4 < 0) {
      return 1;
    }
    uVar2 = (short)((ushort)iVar4 & 0xff) * 0xcd;
    if (*param_1 == iVar5) {
      FUN_00d653ec(param_1,iVar5,1,1,1);
      iVar5 = param_1[2];
    }
    *(byte *)(param_1[1] + iVar5) = (byte)(uVar2 >> 0xb) | 0x30;
    iVar5 = iVar10 + 3;
    param_1[2] = iVar5;
    if (*param_1 == iVar5) {
      FUN_00d653ec(param_1,iVar5,1,1,1);
      iVar5 = param_1[2];
    }
    iVar10 = iVar10 + 4;
    *(byte *)(param_1[1] + iVar5) = (char)iVar4 + (char)(uVar2 >> 0xb) * -10 | 0x30;
    param_1[2] = iVar10;
    iVar5 = iVar10;
    if (*param_1 == iVar10) {
LAB_00ce11fc:
      FUN_00d653ec(param_1,iVar5,1,1,1);
      iVar10 = param_1[2];
    }
  }
  else {
    local_2c = &local_38;
    local_28 = FUN_00fac2b8;
    iVar5 = FUN_00fa948c(param_1,&DAT_01876f04,&DAT_0056a568,&local_2c);
    if (iVar5 != 0) {
      return 1;
    }
    iVar10 = param_1[2];
    iVar5 = iVar10;
    if (*param_1 == iVar10) goto LAB_00ce11fc;
  }
  *(undefined1 *)(param_1[1] + iVar10) = 0x2d;
  iVar10 = iVar5 + 1;
  param_1[2] = iVar10;
  uVar2 = (uVar11 & 0x1fff) >> 3;
  if (0x2dc < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(uVar2,0x2dd,&DAT_01880224);
  }
  bVar1 = ""[uVar2];
  uVar2 = uVar2 + bVar1;
  bVar8 = (byte)(uVar2 >> 6);
  if (*param_1 == iVar10) {
    FUN_00d653ec(param_1,iVar10,1,1,1);
    iVar10 = param_1[2];
  }
  if (0x27f < uVar2) {
    bVar8 = bVar8 - 10;
  }
  *(byte *)(param_1[1] + iVar10) = 4 < uVar2 >> 7 | 0x30;
  iVar10 = iVar5 + 2;
  param_1[2] = iVar10;
  if (*param_1 == iVar10) {
    FUN_00d653ec(param_1,iVar10,1,1,1);
    iVar10 = param_1[2];
  }
  *(byte *)(param_1[1] + iVar10) = bVar8 | 0x30;
  iVar10 = iVar5 + 3;
  param_1[2] = iVar10;
  if (*param_1 == iVar10) {
    FUN_00d653ec(param_1,iVar10,1,1,1);
    iVar10 = param_1[2];
  }
  uVar2 = ((uint)bVar1 + (uVar11 >> 3) & 0x3f) >> 1;
  *(undefined1 *)(param_1[1] + iVar10) = 0x2d;
  iVar10 = iVar5 + 4;
  uVar11 = (short)uVar2 * 0x1a;
  param_1[2] = iVar10;
  bVar8 = (byte)(uVar11 >> 8);
  if (*param_1 == iVar10) {
    FUN_00d653ec(param_1,iVar10,1,1,1);
    iVar10 = param_1[2];
  }
  *(byte *)(param_1[1] + iVar10) = bVar8 | 0x30;
  iVar10 = iVar5 + 5;
  param_1[2] = iVar10;
  if (*param_1 == iVar10) {
    FUN_00d653ec(param_1,iVar10,1,1,1);
    iVar10 = param_1[2];
  }
  *(byte *)(param_1[1] + iVar10) = (char)uVar2 + (bVar8 | (byte)((uVar11 >> 8) << 2)) * -2 | 0x30;
  iVar10 = iVar5 + 6;
  param_1[2] = iVar10;
  if (*param_1 == iVar10) {
    FUN_00d653ec(param_1,iVar10,1,1,1);
    iVar10 = param_1[2];
  }
  uVar6 = param_2[1];
  uVar12 = param_2[2];
  uVar11 = uVar6 / 0x3c;
  *(undefined1 *)(param_1[1] + iVar10) = 0x54;
  iVar10 = iVar5 + 7;
  uVar2 = uVar12;
  if (999999999 < uVar12) {
    uVar2 = uVar12 + 0xc4653600;
  }
  param_1[2] = iVar10;
  iVar4 = uVar6 + (uVar11 * 0x10 - uVar6 / 0x3c) * -4;
  if (999999999 < uVar12) {
    iVar4 = iVar4 + 1;
  }
  if (99 < ((uint)((ulonglong)uVar6 * 0x91a2b3c5 >> 0x20) & 0x7ffff) >> 0xb) {
    return 1;
  }
  uVar12 = (short)((ushort)(uVar6 / 0xe10) & 0xff) * 0xcd;
  local_34 = uVar2;
  if (*param_1 == iVar10) {
    FUN_00d653ec(param_1,iVar10,1,1,1);
    iVar10 = param_1[2];
  }
  *(byte *)(param_1[1] + iVar10) = (byte)(uVar12 >> 0xb) | 0x30;
  iVar10 = iVar5 + 8;
  param_1[2] = iVar10;
  if (*param_1 == iVar10) {
    FUN_00d653ec(param_1,iVar10,1,1,1);
    iVar10 = param_1[2];
  }
  iVar9 = uVar11 + ((uVar11 / 0x3c) * 0x10 - uVar11 / 0x3c) * -4;
  *(byte *)(param_1[1] + iVar10) = (char)(uVar6 / 0xe10) + (char)(uVar12 >> 0xb) * -10 | 0x30;
  iVar10 = iVar5 + 9;
  param_1[2] = iVar10;
  if (*param_1 == iVar10) {
    FUN_00d653ec(param_1,iVar10,1,1,1);
    iVar10 = param_1[2];
  }
  *(undefined1 *)(param_1[1] + iVar10) = 0x3a;
  iVar10 = iVar5 + 10;
  param_1[2] = iVar10;
  if (*param_1 == iVar10) {
    FUN_00d653ec(param_1,iVar10,1,1,1);
    iVar10 = param_1[2];
  }
  *(byte *)(param_1[1] + iVar10) = (byte)((uint)(iVar9 * 0xcd) >> 0xb) & 0x3f | 0x30;
  iVar10 = iVar5 + 0xb;
  param_1[2] = iVar10;
  if (*param_1 == iVar10) {
    FUN_00d653ec(param_1,iVar10,1,1,1);
    iVar10 = param_1[2];
  }
  *(byte *)(param_1[1] + iVar10) =
       (char)iVar9 + (byte)((uint)(iVar9 * 0xcd0000) >> 0x1b) * -10 | 0x30;
  iVar10 = iVar5 + 0xc;
  param_1[2] = iVar10;
  if (*param_1 == iVar10) {
    FUN_00d653ec(param_1,iVar10,1,1,1);
    iVar10 = param_1[2];
  }
  *(undefined1 *)(param_1[1] + iVar10) = 0x3a;
  iVar10 = iVar5 + 0xd;
  param_1[2] = iVar10;
  if (*param_1 == iVar10) {
    FUN_00d653ec(param_1,iVar10,1,1,1);
    iVar10 = param_1[2];
  }
  *(byte *)(param_1[1] + iVar10) = (byte)((uint)(iVar4 * 0xcd) >> 0xb) & 0x3f | 0x30;
  iVar10 = iVar5 + 0xe;
  param_1[2] = iVar10;
  if (*param_1 == iVar10) {
    FUN_00d653ec(param_1,iVar10,1,1,1);
    iVar10 = param_1[2];
  }
  *(byte *)(param_1[1] + iVar10) =
       (char)iVar4 + (byte)((uint)(iVar4 * 0xcd0000) >> 0x1b) * -10 | 0x30;
  param_1[2] = iVar5 + 0xf;
  if (uVar2 == 0) goto LAB_00ce1284;
  uVar11 = uVar2 / 1000000;
  if (uVar2 + (short)uVar11 * -1000000 == 0) {
    puVar7 = &DAT_0035d4b5;
LAB_00ce124c:
    local_2c = &local_30;
    local_30 = uVar11;
  }
  else {
    uVar11 = uVar2 / 1000;
    if (uVar2 % 1000 == 0) {
      puVar7 = &DAT_0035d4bf;
      goto LAB_00ce124c;
    }
    local_2c = &local_34;
    puVar7 = &DAT_0035d4c9;
  }
  local_28 = (code *)&LAB_00fac484;
  iVar5 = FUN_00fa948c(param_1,&DAT_01876f04,puVar7,&local_2c);
  if (iVar5 != 0) {
    return 1;
  }
LAB_00ce1284:
  local_2c = (uint *)0x1010100;
  uVar3 = FUN_00d49464(&local_2c,param_1,param_3);
  return uVar3;
}

