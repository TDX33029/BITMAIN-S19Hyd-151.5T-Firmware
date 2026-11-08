// FUN_00b8c814 @ 00b8c814 size=516 calls_out=1 calls_in=10
// strings: 

void FUN_00b8c814(uint *param_1,uint *param_2,uint param_3)

{
  byte bVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined8 uVar13;
  uint local_30 [4];
  
  puVar8 = (uint *)param_1[6];
  uVar7 = param_1[1] >> (param_3 & 0x1f) | param_1[1] << 0x20 - (param_3 & 0x1f);
  uVar6 = *param_1 >> (param_3 & 0x1f) | *param_1 << 0x20 - (param_3 & 0x1f);
  if (param_3 < 0x11) {
    uVar5 = puVar8[2];
    uVar10 = puVar8[3];
    if (param_3 < 8) {
      if (param_3 < 4) {
        if (param_3 != 0) {
          uVar6 = uVar6 ^ (byte)*param_2;
          uVar5 = CONCAT11(*(byte *)((int)param_2 + (param_3 - 1)),
                           *(byte *)((int)param_2 + (param_3 >> 1))) ^ uVar5;
        }
      }
      else {
        uVar6 = uVar6 ^ *param_2;
        uVar5 = uVar5 ^ *(uint *)((int)param_2 + (param_3 - 4));
      }
    }
    else {
      uVar6 = *param_2 ^ uVar6;
      uVar7 = param_2[1] ^ uVar7;
      uVar5 = *(uint *)((int)param_2 + (param_3 - 8)) ^ uVar5;
      uVar10 = *(uint *)((int)param_2 + (param_3 - 4)) ^ uVar10;
    }
    uVar2 = (ulonglong)uVar5 * (ulonglong)uVar6 ^ (ulonglong)uVar10 * (ulonglong)uVar7;
    uVar3 = (ulonglong)uVar5 * (ulonglong)uVar7 ^ (ulonglong)uVar10 * (ulonglong)uVar6;
    uVar13 = CONCAT44((uint)(uVar2 >> 0x20) ^ (uint)uVar3,(uint)uVar2 ^ (uint)(uVar3 >> 0x20));
  }
  else {
    uVar13 = FUN_013476f0(param_2,param_3,uVar6,uVar7,puVar8);
  }
  bVar1 = (byte)param_1[7];
  *(undefined8 *)param_1 = uVar13;
  if (bVar1 < 0x79) {
    local_30[3] = 0;
    local_30[2] = 0;
    local_30[1] = 0;
    local_30[0] = 0xff;
    uVar6 = bVar1 & 0x1f;
    cVar4 = bVar1 + 8;
    iVar12 = -(bVar1 >> 3 & 0xc);
    uVar7 = *(uint *)((int)local_30 + iVar12);
    param_1[2] = param_1[2] | uVar7 << uVar6;
    uVar9 = *(uint *)((int)local_30 + iVar12 + 4);
    uVar10 = *(uint *)((int)local_30 + iVar12 + 8);
    iVar12 = *(int *)((int)local_30 + iVar12 + 0xc);
    uVar5 = uVar6 ^ 0x1f;
    param_1[3] = param_1[3] | uVar9 << uVar6 | (uVar7 >> 1) >> uVar5;
    param_1[4] = param_1[4] | uVar10 << uVar6 | (uVar9 >> 1) >> uVar5;
    param_1[5] = param_1[5] | iVar12 << uVar6 | (uVar10 >> 1) >> uVar5;
  }
  else {
    uVar5 = param_1[4];
    uVar10 = param_1[5];
    uVar6 = (uint)((ulonglong)uVar13 >> 0x20) ^ param_1[3];
    uVar9 = *puVar8;
    uVar11 = puVar8[1];
    uVar7 = (uint)uVar13 ^ param_1[2];
    param_1[4] = 0;
    param_1[5] = 0;
    uVar2 = (ulonglong)uVar7 * (ulonglong)(uVar11 ^ uVar10) ^
            (ulonglong)uVar6 * (ulonglong)(uVar9 ^ uVar5);
    uVar3 = (ulonglong)uVar7 * (ulonglong)(uVar9 ^ uVar5) ^
            (ulonglong)uVar6 * (ulonglong)(uVar11 ^ uVar10);
    *param_1 = (uint)uVar3 ^ (uint)(uVar2 >> 0x20);
    param_1[1] = (uint)(uVar3 >> 0x20) ^ (uint)uVar2;
    param_1[2] = 0xff;
    param_1[3] = 0;
    cVar4 = '\b';
  }
  *(char *)(param_1 + 7) = cVar4;
  return;
}

