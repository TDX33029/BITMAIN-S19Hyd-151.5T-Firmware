// FUN_00b8ca34 @ 00b8ca34 size=596 calls_out=4 calls_in=3
// strings: 

void FUN_00b8ca34(undefined4 *param_1,int *param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  undefined4 *puVar4;
  undefined1 uVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint *local_30;
  char local_2c;
  
  local_48 = param_2[4];
  local_44 = param_2[5];
  local_30 = &DAT_01d519f0;
  local_34 = 0;
  local_38 = 0;
  local_3c = 0;
  local_40 = 0;
  local_2c = '\0';
  FUN_00b8c814(&local_48,param_3,param_4);
  if (local_2c == '\0') {
    uVar15 = local_48;
  }
  else {
    uVar15 = (local_44 ^ local_3c) * (local_30[1] ^ local_34) ^
             (local_48 ^ local_40) * (*local_30 ^ local_38) ^
             (uint)((ulonglong)(local_44 ^ local_3c) * (ulonglong)(*local_30 ^ local_38) >> 0x20) ^
             (uint)((ulonglong)(local_48 ^ local_40) * (ulonglong)(local_30[1] ^ local_34) >> 0x20);
  }
  uVar6 = uVar15 >> 0x19;
  iVar8 = *param_2;
  uVar17 = param_2[1];
  iVar10 = 0;
  do {
    uVar15 = uVar17 & uVar15;
    uVar16 = *(uint *)(iVar8 + uVar15);
    uVar1 = uVar16 ^ uVar6 * 0x1010101;
    for (uVar1 = ~uVar1 & 0x80808080 & uVar1 + 0xfefefeff; uVar1 != 0; uVar1 = uVar1 - 1 & uVar1) {
      uVar14 = uVar15 + ((uint)LZCOUNT(uVar1 << 0x18 | (uVar1 >> 8 & 0xff) << 0x10 |
                                       (uVar1 >> 0x10 & 0xff) << 8 | uVar1 >> 0x18) >> 3) & uVar17;
      iVar2 = *(int *)(iVar8 + -8 + uVar14 * -8);
      if ((param_4 == *(int *)(iVar2 + 8)) &&
         (iVar2 = thunk_FUN_01bed842(param_3,*(undefined4 *)(iVar2 + 4),param_4), iVar2 == 0)) {
        puVar3 = (uint *)(iVar8 + (uVar14 - 4 & uVar17));
        uVar6 = *puVar3;
        uVar15 = *(uint *)(iVar8 + uVar14) & 0x80808080 & *(uint *)(iVar8 + uVar14) << 1;
        uVar5 = 0x80;
        iVar10 = param_2[3];
        if (((uint)LZCOUNT(uVar15 << 0x18 | (uVar15 >> 8 & 0xff) << 0x10 |
                           (uVar15 >> 0x10 & 0xff) << 8 | uVar15 >> 0x18) >> 3) +
            ((uint)LZCOUNT(uVar6 & 0x80808080 & uVar6 << 1) >> 3) < 4) {
          param_2[2] = param_2[2] + 1;
          uVar5 = 0xff;
        }
        *(undefined1 *)(iVar8 + uVar14) = uVar5;
        *(undefined1 *)(puVar3 + 1) = uVar5;
        puVar4 = *(undefined4 **)(iVar8 + uVar14 * -8 + -4);
        param_2[3] = iVar10 + -1;
        uVar7 = puVar4[1];
        uVar9 = puVar4[2];
        uVar11 = puVar4[3];
        uVar12 = puVar4[4];
        uVar13 = puVar4[5];
        *param_1 = *puVar4;
        param_1[1] = uVar7;
        param_1[2] = uVar9;
        param_1[3] = uVar11;
        param_1[4] = uVar12;
        param_1[5] = uVar13;
        uVar7 = puVar4[6];
        uVar9 = puVar4[7];
        iVar8 = puVar4[9];
        iVar10 = puVar4[10];
        thunk_FUN_01be4678();
        FUN_019bb7e0(uVar7,uVar9);
        *(int *)(iVar8 + 0x28) = iVar10;
        *(int *)(iVar10 + 0x24) = iVar8;
        return;
      }
    }
    if ((uVar16 & 0x80808080 & uVar16 << 1) != 0) {
      param_1[2] = 0x80000000;
      return;
    }
    iVar10 = iVar10 + 4;
    uVar15 = iVar10 + uVar15;
  } while( true );
}

