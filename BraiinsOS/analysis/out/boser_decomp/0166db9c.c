// FUN_0166db9c @ 0166db9c size=736 calls_out=4 calls_in=2
// strings: 

uint FUN_0166db9c(undefined4 *param_1,uint *param_2,uint param_3)

{
  bool bVar1;
  bool bVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint extraout_r1;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  uint uVar13;
  int iVar14;
  uint local_70;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint *local_30;
  char local_2c;
  
  uVar8 = param_2[1];
  uVar7 = param_2[2];
  uVar11 = param_1[4];
  uVar13 = param_1[5];
  local_30 = &DAT_01d519f0;
  local_34 = 0;
  local_38 = 0;
  local_3c = 0;
  local_40 = 0;
  local_2c = '\0';
  local_48 = uVar11;
  local_44 = uVar13;
  FUN_00b8c814(&local_48,uVar8);
  if (local_2c == '\0') {
    uVar4 = extraout_r1;
    uVar9 = local_48;
  }
  else {
    uVar4 = (local_48 ^ local_40) * (*local_30 ^ local_38);
    uVar9 = uVar4 ^ (local_44 ^ local_3c) * (local_30[1] ^ local_34) ^
            (uint)((ulonglong)(local_44 ^ local_3c) * (ulonglong)(*local_30 ^ local_38) >> 0x20) ^
            (uint)((ulonglong)(local_48 ^ local_40) * (ulonglong)(local_30[1] ^ local_34) >> 0x20);
  }
  if (param_1[2] == 0) {
    FUN_01668388(param_1,uVar4,uVar11,uVar13);
  }
  uVar11 = uVar9 >> 0x19;
  puVar12 = (uint *)*param_1;
  uVar13 = param_1[1];
  bVar3 = (byte)(uVar9 >> 0x19);
  iVar14 = 0;
  bVar1 = false;
  bVar2 = false;
  do {
    uVar9 = uVar13 & uVar9;
    uVar10 = *(uint *)((int)puVar12 + uVar9);
    uVar4 = uVar10 ^ uVar11 * 0x1010101;
    for (uVar4 = ~uVar4 & 0x80808080 & uVar4 + 0xfefefeff; uVar4 != 0; uVar4 = uVar4 - 1 & uVar4) {
      uVar5 = uVar9 + ((uint)LZCOUNT(uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 |
                                     (uVar4 >> 0x10 & 0xff) << 8 | uVar4 >> 0x18) >> 3) & uVar13;
      if ((uVar7 == puVar12[uVar5 * -4 + -2]) &&
         (iVar6 = thunk_FUN_01bed842(uVar8,puVar12[uVar5 * -4 + -3]), iVar6 == 0)) {
        uVar11 = puVar12[uVar5 * -4 + -1];
        uVar7 = *param_2;
        puVar12[uVar5 * -4 + -1] = param_3;
        FUN_019bb7e0(uVar7,uVar8);
        return uVar11;
      }
    }
    if (bVar1) {
      if (bVar2) goto LAB_0166dd68;
      bVar2 = false;
LAB_0166ddb4:
      bVar1 = true;
    }
    else {
      uVar4 = uVar10 & 0x80808080;
      if (uVar4 != 0) {
        local_70 = uVar9 + ((uint)LZCOUNT((uVar10 & 0x80) << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 |
                                          (uVar4 >> 0x10 & 0xff) << 8 | uVar4 >> 0x18) >> 3) &
                   uVar13;
LAB_0166dd68:
        if ((uVar10 & 0x80808080 & uVar10 << 1) != 0) {
          uVar7 = (uint)*(char *)((int)puVar12 + local_70);
          if (-1 < (int)uVar7) {
            uVar7 = *puVar12 & 0x80808080;
            uVar8 = LZCOUNT((*puVar12 & 0x80) << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 |
                            (uVar7 >> 0x10 & 0xff) << 8 | uVar7 >> 0x18);
            uVar7 = (uint)*(byte *)((int)puVar12 + (uVar8 >> 3));
            local_70 = uVar8 >> 3;
          }
          iVar14 = param_1[2];
          iVar6 = param_1[3];
          *(byte *)((int)puVar12 + local_70) = bVar3;
          param_1[2] = iVar14 - (uVar7 & 1);
          param_1[3] = iVar6 + 1;
          *(byte *)((int)puVar12 + (local_70 - 4 & uVar13) + 4) = bVar3;
          uVar7 = param_2[1];
          uVar8 = param_2[2];
          puVar12[local_70 * -4 + -4] = *param_2;
          puVar12[local_70 * -4 + -3] = uVar7;
          puVar12[local_70 * -4 + -2] = uVar8;
          puVar12[local_70 * -4 + -1] = param_3;
          return 0;
        }
        bVar2 = true;
        goto LAB_0166ddb4;
      }
      bVar1 = false;
      bVar2 = false;
    }
    iVar14 = iVar14 + 4;
    uVar9 = uVar9 + iVar14;
  } while( true );
}

