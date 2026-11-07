// FUN_01225c40 @ 01225c40 size=732 calls_out=3 calls_in=1
// strings: 

void FUN_01225c40(undefined4 *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint *puVar16;
  uint uVar17;
  int iVar18;
  uint local_68;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  
  local_30 = param_1[4];
  iVar11 = *(int *)(param_2 + 8);
  uVar9 = *(undefined4 *)(param_2 + 4);
  local_2c = param_1[5];
  local_38 = param_1[6];
  local_34 = param_1[7];
  local_48 = param_1[8];
  local_44 = param_1[9];
  local_40 = param_1[10];
  local_3c = param_1[0xb];
  FUN_011df94c(&local_48);
  uVar7 = local_38 ^ 0xff;
  uVar10 = local_34 << 0x18 | (local_34 >> 8 & 0xff) << 0x10 | (local_34 >> 0x10 & 0xff) << 8 |
           local_34 >> 0x18;
  lVar4 = (ulonglong)uVar10 * 0xb36a80d2;
  uVar14 = (uint)lVar4;
  uVar15 = (uVar14 << 0x18 | (uVar14 >> 8 & 0xff) << 0x10 | (uVar14 >> 0x10 & 0xff) << 8 |
           uVar14 >> 0x18) ^
           local_34 * 0x2df45158 + uVar7 * 0x2d7f954c + (int)((ulonglong)uVar7 * 0x2df45158 >> 0x20)
  ;
  uVar12 = uVar15 << 0x18 | (uVar15 >> 8 & 0xff) << 0x10 | (uVar15 >> 0x10 & 0xff) << 8 |
           uVar15 >> 0x18;
  lVar5 = (ulonglong)~local_30 * (ulonglong)uVar12;
  uVar17 = (uint)lVar5;
  uVar13 = local_2c << 0x18 | (local_2c >> 8 & 0xff) << 0x10 | (local_2c >> 0x10 & 0xff) << 8 |
           local_2c >> 0x18;
  uVar10 = (uVar7 << 0x18 | (local_38 >> 8 & 0xff) << 0x10 | (local_38 >> 0x10 & 0xff) << 8 |
           local_38 >> 0x18) * -0x4c957f2e + uVar10 * -0x5851f42e + (int)((ulonglong)lVar4 >> 0x20);
  uVar14 = (uVar10 * 0x1000000 | (uVar10 >> 8 & 0xff) << 0x10 | (uVar10 >> 0x10 & 0xff) << 8 |
           uVar10 >> 0x18) ^ (uint)((ulonglong)uVar7 * 0x2df45158);
  uVar7 = (uVar14 << 0x18 | (uVar14 >> 8 & 0xff) << 0x10 | (uVar14 >> 0x10 & 0xff) << 8 |
          uVar14 >> 0x18) * ~local_30 + uVar12 * ~local_2c + (int)((ulonglong)lVar5 >> 0x20);
  lVar4 = (ulonglong)uVar13 * (ulonglong)uVar14;
  uVar7 = (uVar7 * 0x1000000 | (uVar7 >> 8 & 0xff) << 0x10 | (uVar7 >> 0x10 & 0xff) << 8 |
          uVar7 >> 0x18) ^ (uint)lVar4;
  uVar12 = (uVar17 << 0x18 | (uVar17 >> 8 & 0xff) << 0x10 | (uVar17 >> 0x10 & 0xff) << 8 |
           uVar17 >> 0x18) ^
           uVar15 * uVar13 +
           uVar14 * (local_30 << 0x18 | (local_30 >> 8 & 0xff) << 0x10 |
                     (local_30 >> 0x10 & 0xff) << 8 | local_30 >> 0x18) +
           (int)((ulonglong)lVar4 >> 0x20);
  uVar10 = uVar12;
  if ((uVar14 & 0x20) != 0) {
    uVar10 = uVar7;
    uVar7 = uVar12;
  }
  uVar7 = uVar7 << (uVar14 & 0x1f) | (uVar10 >> 1) >> (~uVar14 & 0x1f);
  if (param_1[2] == 0) {
    FUN_011a6e38(param_1,param_1 + 4);
  }
  puVar16 = (uint *)*param_1;
  uVar14 = param_1[1];
  iVar18 = 0;
  bVar6 = false;
  uVar10 = uVar7;
  do {
    uVar10 = uVar14 & uVar10;
    uVar13 = *(uint *)((int)puVar16 + uVar10);
    uVar12 = uVar13 ^ (uVar7 >> 0x19) * 0x1010101;
    uVar12 = ~uVar12 & 0x80808080 & uVar12 + 0xfefefeff;
    while (uVar12 != 0) {
      uVar15 = uVar12 >> 8;
      uVar17 = uVar12 >> 0x10;
      uVar1 = uVar12 >> 0x18;
      uVar2 = uVar12 << 0x18;
      uVar12 = uVar12 - 1 & uVar12;
      if ((iVar11 == *(int *)(puVar16[-1 - (uVar10 + ((uint)LZCOUNT(uVar2 | (uVar15 & 0xff) << 0x10
                                                                    | (uVar17 & 0xff) << 8 | uVar1)
                                                     >> 3) & uVar14)] + 8)) &&
         (iVar8 = thunk_FUN_016dd50a(uVar9,*(undefined4 *)
                                            (puVar16[-1 - (uVar10 + ((uint)LZCOUNT(uVar2 | (uVar15 &
                                                                                           0xff) << 
                                                  0x10 | (uVar17 & 0xff) << 8 | uVar1) >> 3) &
                                                  uVar14)] + 4),iVar11), iVar8 == 0)) {
        return;
      }
    }
    uVar12 = uVar13 & 0x80808080;
    if (bVar6) {
LAB_01225e68:
      if ((uVar12 & uVar13 << 1) != 0) {
        uVar10 = (uint)*(char *)((int)puVar16 + local_68);
        if (-1 < (int)uVar10) {
          uVar10 = *puVar16 & 0x80808080;
          uVar12 = LZCOUNT((*puVar16 & 0x80) << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 |
                           (uVar10 >> 0x10 & 0xff) << 8 | uVar10 >> 0x18);
          uVar10 = (uint)*(byte *)((int)puVar16 + (uVar12 >> 3));
          local_68 = uVar12 >> 3;
        }
        iVar11 = param_1[3];
        iVar18 = param_1[2];
        bVar3 = (byte)(uVar7 >> 0x19);
        *(byte *)((int)puVar16 + local_68) = bVar3;
        param_1[2] = iVar18 - (uVar10 & 1);
        param_1[3] = iVar11 + 1;
        *(byte *)((int)puVar16 + (uVar14 & local_68 - 4) + 4) = bVar3;
        puVar16[-1 - local_68] = param_2;
        return;
      }
      bVar6 = true;
    }
    else {
      if (uVar12 != 0) {
        local_68 = uVar10 + ((uint)LZCOUNT((uVar13 & 0x80) << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 |
                                           (uVar12 >> 0x10 & 0xff) << 8 | uVar12 >> 0x18) >> 3) &
                   uVar14;
        goto LAB_01225e68;
      }
      bVar6 = false;
    }
    iVar18 = iVar18 + 4;
    uVar10 = iVar18 + uVar10;
  } while( true );
}

