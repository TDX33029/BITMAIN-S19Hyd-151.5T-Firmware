// FUN_0134e6e8 @ 0134e6e8 size=568 calls_out=1 calls_in=5
// strings: 

void FUN_0134e6e8(uint *param_1,uint *param_2,uint param_3)

{
  byte bVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  undefined8 uVar12;
  uint local_30 [4];
  
  puVar7 = (uint *)param_1[6];
  uVar5 = param_1[1] >> (param_3 & 0x1f) | param_1[1] << 0x20 - (param_3 & 0x1f);
  uVar4 = *param_1 >> (param_3 & 0x1f) | *param_1 << 0x20 - (param_3 & 0x1f);
  if (param_3 < 0x11) {
    uVar11 = puVar7[2];
    uVar6 = puVar7[3];
    if (param_3 < 8) {
      if (param_3 < 4) {
        if (param_3 != 0) {
          uVar4 = uVar4 ^ (byte)*param_2;
          uVar11 = CONCAT11(*(byte *)((int)param_2 + (param_3 - 1)),
                            *(byte *)((int)param_2 + (param_3 >> 1))) ^ uVar11;
        }
      }
      else {
        uVar4 = *param_2 ^ uVar4;
        uVar11 = *(uint *)((int)param_2 + (param_3 - 4)) ^ uVar11;
      }
    }
    else {
      uVar4 = *param_2 ^ uVar4;
      uVar5 = param_2[1] ^ uVar5;
      uVar11 = *(uint *)((int)param_2 + (param_3 - 8)) ^ uVar11;
      uVar6 = *(uint *)((int)param_2 + (param_3 - 4)) ^ uVar6;
    }
    uVar3 = (ulonglong)uVar11 * (ulonglong)uVar5 ^ (ulonglong)uVar6 * (ulonglong)uVar4;
    uVar2 = (ulonglong)uVar6 * (ulonglong)uVar5 ^ (ulonglong)uVar11 * (ulonglong)uVar4;
    uVar4 = (uint)(uVar2 >> 0x20) ^ (uint)uVar3;
    uVar5 = (uint)uVar2 ^ (uint)(uVar3 >> 0x20);
    uVar12 = CONCAT44(uVar4,uVar5);
    bVar1 = (byte)param_1[7];
    *param_1 = uVar5;
    param_1[1] = uVar4;
  }
  else {
    uVar12 = FUN_0100dde8(param_2,param_3,uVar4,uVar5,puVar7);
    bVar1 = (byte)param_1[7];
    *(undefined8 *)param_1 = uVar12;
  }
  if (bVar1 < 0x79) {
    local_30[3] = 0;
    local_30[2] = 0;
    local_30[1] = 0;
    local_30[0] = 0xff;
    uVar4 = bVar1 & 0x1f;
    iVar10 = -(bVar1 >> 3 & 0xc);
    uVar5 = *(uint *)((int)local_30 + iVar10);
    param_1[2] = param_1[2] | uVar5 << uVar4;
    uVar11 = *(uint *)((int)local_30 + iVar10 + 4);
    uVar6 = *(uint *)((int)local_30 + iVar10 + 8);
    iVar10 = *(int *)((int)local_30 + iVar10 + 0xc);
    uVar8 = uVar4 ^ 0x1f;
    param_1[3] = param_1[3] | uVar11 << uVar4 | (uVar5 >> 1) >> uVar8;
    param_1[4] = param_1[4] | uVar6 << uVar4 | (uVar11 >> 1) >> uVar8;
    param_1[5] = param_1[5] | iVar10 << uVar4 | (uVar6 >> 1) >> uVar8;
    *(byte *)(param_1 + 7) = bVar1 + 8;
    return;
  }
  uVar11 = param_1[4];
  uVar5 = (uint)uVar12 ^ param_1[2];
  uVar6 = param_1[5];
  uVar4 = (uint)((ulonglong)uVar12 >> 0x20) ^ param_1[3];
  uVar8 = *puVar7;
  uVar9 = puVar7[1];
  param_1[4] = 0;
  param_1[5] = 0;
  uVar2 = (ulonglong)uVar5 * (ulonglong)(uVar9 ^ uVar6) ^
          (ulonglong)uVar4 * (ulonglong)(uVar8 ^ uVar11);
  uVar3 = (ulonglong)uVar5 * (ulonglong)(uVar8 ^ uVar11) ^
          (ulonglong)uVar4 * (ulonglong)(uVar9 ^ uVar6);
  *param_1 = (uint)uVar3 ^ (uint)(uVar2 >> 0x20);
  param_1[1] = (uint)(uVar3 >> 0x20) ^ (uint)uVar2;
  param_1[2] = 0xff;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 7) = 8;
  return;
}

