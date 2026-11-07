// FUN_0153a5fc @ 0153a5fc size=648 calls_out=4 calls_in=2
// strings: 

void FUN_0153a5fc(uint *param_1,undefined4 *param_2,uint *param_3,uint *param_4)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint *puVar16;
  uint uVar17;
  uint local_78;
  uint uStack_44;
  
  uVar17 = param_3[2];
  uVar7 = param_3[1];
  uVar3 = FUN_01676700(param_2 + 4,uVar7,uVar17);
  if (param_2[2] == 0) {
    FUN_0152e13c(param_2,1,param_2 + 4);
  }
  bVar2 = false;
  uVar8 = param_2[1];
  puVar16 = (uint *)*param_2;
  iVar10 = 0;
  uVar15 = uVar3;
  do {
    uVar15 = uVar8 & uVar15;
    uVar9 = *(uint *)((int)puVar16 + uVar15);
    uVar4 = uVar9 ^ (uVar3 >> 0x19) * 0x1010101;
    for (uVar4 = ~uVar4 & 0x80808080 & uVar4 + 0xfefefeff; uVar4 != 0; uVar4 = uVar4 - 1 & uVar4) {
      uVar5 = uVar15 + ((uint)LZCOUNT(uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 |
                                      (uVar4 >> 0x10 & 0xff) << 8 | uVar4 >> 0x18) >> 3) & uVar8;
      if (uVar17 == puVar16[uVar5 * -10 + -8]) {
        iVar6 = thunk_FUN_01bed842(uVar7,puVar16[uVar5 * -10 + -9],uVar17);
        if (iVar6 == 0) {
          uVar3 = puVar16[uVar5 * -10 + -5];
          uVar17 = puVar16[uVar5 * -10 + -4];
          uVar15 = puVar16[uVar5 * -10 + -3];
          uVar8 = puVar16[uVar5 * -10 + -2];
          uVar4 = puVar16[uVar5 * -10 + -1];
          *param_1 = puVar16[uVar5 * -10 + -6];
          param_1[1] = uVar3;
          param_1[2] = uVar17;
          param_1[3] = uVar15;
          param_1[4] = uVar8;
          param_1[5] = uVar4;
          uVar3 = param_4[1];
          uVar17 = param_4[2];
          uVar15 = param_4[3];
          uVar8 = param_4[4];
          uVar4 = param_4[5];
          puVar16[uVar5 * -10 + -6] = *param_4;
          puVar16[uVar5 * -10 + -5] = uVar3;
          puVar16[uVar5 * -10 + -4] = uVar17;
          puVar16[uVar5 * -10 + -3] = uVar15;
          puVar16[uVar5 * -10 + -2] = uVar8;
          puVar16[uVar5 * -10 + -1] = uVar4;
          FUN_019bb7e0(*param_3,uVar7);
          return;
        }
      }
    }
    uVar4 = uVar9 & 0x80808080;
    if (bVar2) {
LAB_0153a74c:
      if ((uVar4 & uVar9 << 1) != 0) {
        uVar7 = (uint)*(char *)((int)puVar16 + local_78);
        if (-1 < (int)uVar7) {
          uVar7 = *puVar16 & 0x80808080;
          uVar17 = LZCOUNT(uVar7 << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 | (uVar7 >> 0x10 & 0xff) << 8
                           | uVar7 >> 0x18);
          uVar7 = (uint)*(byte *)((int)puVar16 + (uVar17 >> 3));
          local_78 = uVar17 >> 3;
        }
        uVar4 = *param_3;
        uVar5 = param_3[1];
        uVar13 = param_3[2];
        uVar17 = *param_4;
        uVar15 = param_4[1];
        uVar9 = param_4[2];
        uVar11 = param_4[3];
        uVar12 = param_4[4];
        uVar14 = param_4[5];
        iVar10 = param_2[3];
        param_2[2] = param_2[2] - (uVar7 & 1);
        bVar1 = (byte)(uVar3 >> 0x19);
        *(byte *)((int)puVar16 + local_78) = bVar1;
        *(byte *)((int)puVar16 + (uVar8 & local_78 - 4) + 4) = bVar1;
        param_2[3] = iVar10 + 1;
        puVar16[local_78 * -10 + -10] = uVar4;
        puVar16[local_78 * -10 + -9] = uVar5;
        puVar16[local_78 * -10 + -8] = uVar13;
        puVar16[local_78 * -10 + -7] = uStack_44;
        puVar16[local_78 * -10 + -6] = uVar17;
        puVar16[local_78 * -10 + -5] = uVar15;
        puVar16[local_78 * -10 + -4] = uVar9;
        puVar16[local_78 * -10 + -3] = uVar11;
        puVar16[local_78 * -10 + -2] = uVar12;
        puVar16[local_78 * -10 + -1] = uVar14;
        *(undefined1 *)param_1 = 6;
        return;
      }
      bVar2 = true;
    }
    else {
      if (uVar4 != 0) {
        local_78 = uVar15 + ((uint)LZCOUNT(uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 |
                                           (uVar4 >> 0x10 & 0xff) << 8 | uVar4 >> 0x18) >> 3) &
                   uVar8;
        goto LAB_0153a74c;
      }
      bVar2 = false;
    }
    iVar10 = iVar10 + 4;
    uVar15 = iVar10 + uVar15;
  } while( true );
}

