// FUN_0122532c @ 0122532c size=640 calls_out=3 calls_in=2
// strings: 

bool FUN_0122532c(int *param_1,undefined4 param_2)

{
  byte bVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint *puVar14;
  uint local_60;
  undefined4 local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  
  local_30 = param_1[4];
  local_2c = param_1[5];
  local_38 = param_1[6];
  local_34 = param_1[7];
  local_48 = param_1[8];
  local_44 = param_1[9];
  local_40 = param_1[10];
  local_3c = param_1[0xb];
  local_4c = param_2;
  FUN_011dfcb4(&local_4c,&local_48);
  uVar13 = local_2c << 0x18 | (local_2c >> 8 & 0xff) << 0x10 | (local_2c >> 0x10 & 0xff) << 8 |
           local_2c >> 0x18;
  lVar3 = (ulonglong)local_38 * (ulonglong)uVar13;
  uVar9 = local_34 << 0x18 | (local_34 >> 8 & 0xff) << 0x10 | (local_34 >> 0x10 & 0xff) << 8 |
          local_34 >> 0x18;
  lVar4 = (ulonglong)~local_30 * (ulonglong)uVar9;
  uVar10 = (uint)lVar4;
  uVar9 = (local_38 << 0x18 | (local_38 >> 8 & 0xff) << 0x10 | (local_38 >> 0x10 & 0xff) << 8 |
          local_38 >> 0x18) * ~local_30 + uVar9 * ~local_2c + (int)((ulonglong)lVar4 >> 0x20);
  uVar13 = (local_30 << 0x18 | (local_30 >> 8 & 0xff) << 0x10 | (local_30 >> 0x10 & 0xff) << 8 |
           local_30 >> 0x18) * local_38 + uVar13 * local_34 + (int)((ulonglong)lVar3 >> 0x20) ^
           (uVar10 << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 | (uVar10 >> 0x10 & 0xff) << 8 |
           uVar10 >> 0x18);
  uVar9 = (uint)lVar3 ^
          (uVar9 * 0x1000000 | (uVar9 >> 8 & 0xff) << 0x10 | (uVar9 >> 0x10 & 0xff) << 8 |
          uVar9 >> 0x18);
  uVar10 = uVar13;
  if ((local_38 & 0x20) != 0) {
    uVar10 = uVar9;
    uVar9 = uVar13;
  }
  uVar9 = uVar9 << (local_38 & 0x1f) | (uVar10 >> 1) >> (~local_38 & 0x1f);
  if (param_1[2] == 0) {
    FUN_011a7d18(param_1,param_1 + 4);
  }
  puVar14 = (uint *)*param_1;
  uVar13 = param_1[1];
  bVar5 = false;
  iVar6 = 0;
  uVar10 = uVar9;
  do {
    uVar10 = uVar13 & uVar10;
    uVar11 = *(uint *)((int)puVar14 + uVar10);
    uVar7 = uVar11 ^ (uVar9 >> 0x19) * 0x1010101;
    uVar7 = ~uVar7 & 0x80808080 & uVar7 + 0xfefefeff;
    while (uVar12 = uVar7, uVar12 != 0) {
      iVar8 = FUN_011e2b78(param_2,*(undefined4 *)
                                    (*param_1 +
                                     (uVar10 + ((uint)LZCOUNT(uVar12 << 0x18 |
                                                              (uVar12 >> 8 & 0xff) << 0x10 |
                                                              (uVar12 >> 0x10 & 0xff) << 8 |
                                                              uVar12 >> 0x18) >> 3) & uVar13) * -4 +
                                    -4));
      uVar7 = uVar12 - 1 & uVar12;
      if (iVar8 != 0) goto LAB_01225568;
    }
    uVar7 = uVar11 & 0x80808080;
    if (bVar5) goto LAB_012254cc;
    if (uVar7 == 0) {
      bVar5 = false;
    }
    else {
      local_60 = uVar10 + ((uint)LZCOUNT((uVar11 & 0x80) << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 |
                                         (uVar7 >> 0x10 & 0xff) << 8 | uVar7 >> 0x18) >> 3) & uVar13
      ;
LAB_012254cc:
      if ((uVar7 & uVar11 << 1) != 0) {
        if (-1 < *(char *)((int)puVar14 + local_60)) {
          uVar10 = *puVar14 & 0x80808080;
          local_60 = (uint)LZCOUNT((*puVar14 & 0x80) << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 |
                                   (uVar10 >> 0x10 & 0xff) << 8 | uVar10 >> 0x18) >> 3;
        }
        iVar6 = *param_1;
        uVar10 = param_1[1];
        iVar8 = param_1[2];
        param_1[3] = param_1[3] + 1;
        bVar1 = *(byte *)(iVar6 + local_60);
        bVar2 = (byte)(uVar9 >> 0x19);
        *(byte *)(iVar6 + local_60) = bVar2;
        *(byte *)(iVar6 + (uVar10 & local_60 - 4) + 4) = bVar2;
        *(undefined4 *)(iVar6 + local_60 * -4 + -4) = param_2;
        param_1[2] = iVar8 - (bVar1 & 1);
LAB_01225568:
        return uVar12 != 0;
      }
      bVar5 = true;
    }
    iVar6 = iVar6 + 4;
    uVar10 = iVar6 + uVar10;
  } while( true );
}

