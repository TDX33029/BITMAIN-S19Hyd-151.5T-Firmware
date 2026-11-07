// FUN_0067d664 @ 0067d664 size=688 calls_out=5 calls_in=2
// strings: 

void FUN_0067d664(uint *param_1,undefined4 *param_2,undefined4 *param_3,uint *param_4)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint *puVar13;
  uint local_a0;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  uint local_60;
  uint uStack_5c;
  uint uStack_58;
  uint uStack_54;
  uint local_50;
  uint uStack_4c;
  uint uStack_48;
  uint uStack_44;
  uint uStack_40;
  uint local_3c;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  
  uVar10 = param_3[2];
  uVar8 = param_3[1];
  uVar2 = FUN_01adafd4(param_2[4],param_2[5],param_2[6],param_2[7],uVar8,uVar10);
  if (param_2[2] == 0) {
    FUN_0067fb88(param_2,param_2 + 4);
  }
  uVar12 = param_2[1];
  puVar13 = (uint *)*param_2;
  bVar9 = false;
  iVar11 = 0;
  uVar7 = uVar2;
  do {
    uVar7 = uVar12 & uVar7;
    uVar3 = *(uint *)((int)puVar13 + uVar7);
    uVar4 = uVar3 ^ (uVar2 >> 0x19) * 0x1010101;
    for (uVar4 = ~uVar4 & 0x80808080 & uVar4 + 0xfefefeff; uVar4 != 0; uVar4 = uVar4 - 1 & uVar4) {
      uVar5 = uVar7 + ((uint)LZCOUNT(uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 |
                                     (uVar4 >> 0x10 & 0xff) << 8 | uVar4 >> 0x18) >> 3) & uVar12;
      if ((uVar10 == puVar13[uVar5 * -0x12 + -0x10]) &&
         (iVar6 = thunk_FUN_01bed842(uVar8,puVar13[uVar5 * -0x12 + -0x11]), iVar6 == 0)) {
        uVar2 = puVar13[uVar5 * -0x12 + -0xd];
        uVar10 = puVar13[uVar5 * -0x12 + -0xc];
        uVar7 = puVar13[uVar5 * -0x12 + -0xb];
        *param_1 = puVar13[uVar5 * -0x12 + -0xe];
        param_1[1] = uVar2;
        param_1[2] = uVar10;
        param_1[3] = uVar7;
        uVar2 = puVar13[uVar5 * -0x12 + -9];
        uVar10 = puVar13[uVar5 * -0x12 + -8];
        uVar7 = puVar13[uVar5 * -0x12 + -7];
        uVar12 = puVar13[uVar5 * -0x12 + -6];
        param_1[4] = puVar13[uVar5 * -0x12 + -10];
        param_1[5] = uVar2;
        param_1[6] = uVar10;
        param_1[7] = uVar7;
        param_1[8] = uVar12;
        uVar2 = puVar13[uVar5 * -0x12 + -4];
        uVar10 = puVar13[uVar5 * -0x12 + -3];
        uVar7 = puVar13[uVar5 * -0x12 + -2];
        uVar12 = puVar13[uVar5 * -0x12 + -1];
        param_1[9] = puVar13[uVar5 * -0x12 + -5];
        param_1[10] = uVar2;
        param_1[0xb] = uVar10;
        param_1[0xc] = uVar7;
        param_1[0xd] = uVar12;
        uVar2 = param_4[1];
        uVar10 = param_4[2];
        uVar7 = param_4[3];
        puVar13[uVar5 * -0x12 + -0xe] = *param_4;
        puVar13[uVar5 * -0x12 + -0xd] = uVar2;
        puVar13[uVar5 * -0x12 + -0xc] = uVar10;
        puVar13[uVar5 * -0x12 + -0xb] = uVar7;
        uVar2 = param_4[5];
        uVar10 = param_4[6];
        uVar7 = param_4[7];
        uVar12 = param_4[8];
        puVar13[uVar5 * -0x12 + -10] = param_4[4];
        puVar13[uVar5 * -0x12 + -9] = uVar2;
        puVar13[uVar5 * -0x12 + -8] = uVar10;
        puVar13[uVar5 * -0x12 + -7] = uVar7;
        puVar13[uVar5 * -0x12 + -6] = uVar12;
        uVar2 = param_4[10];
        uVar10 = param_4[0xb];
        uVar7 = param_4[0xc];
        uVar12 = param_4[0xd];
        puVar13[uVar5 * -0x12 + -5] = param_4[9];
        puVar13[uVar5 * -0x12 + -4] = uVar2;
        puVar13[uVar5 * -0x12 + -3] = uVar10;
        puVar13[uVar5 * -0x12 + -2] = uVar7;
        puVar13[uVar5 * -0x12 + -1] = uVar12;
        FUN_019bb7e0(*param_3,uVar8);
        return;
      }
    }
    uVar4 = uVar3 & 0x80808080;
    if (bVar9) {
LAB_0067d7bc:
      if ((uVar4 & uVar3 << 1) != 0) {
        uVar10 = (uint)*(char *)((int)puVar13 + local_a0);
        if (-1 < (int)uVar10) {
          uVar10 = *puVar13 & 0x80808080;
          uVar7 = LZCOUNT(uVar10 << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 |
                          (uVar10 >> 0x10 & 0xff) << 8 | uVar10 >> 0x18);
          uVar10 = (uint)*(byte *)((int)puVar13 + (uVar7 >> 3));
          local_a0 = uVar7 >> 3;
        }
        local_70 = *param_3;
        uStack_6c = param_3[1];
        uStack_68 = param_3[2];
        local_60 = *param_4;
        uStack_5c = param_4[1];
        uStack_58 = param_4[2];
        uStack_54 = param_4[3];
        local_50 = param_4[4];
        uStack_4c = param_4[5];
        uStack_48 = param_4[6];
        uStack_44 = param_4[7];
        uStack_40 = param_4[8];
        local_3c = param_4[9];
        uStack_38 = param_4[10];
        uStack_34 = param_4[0xb];
        uStack_30 = param_4[0xc];
        uStack_2c = param_4[0xd];
        bVar1 = (byte)(uVar2 >> 0x19);
        *(byte *)((int)puVar13 + local_a0) = bVar1;
        iVar11 = param_2[2];
        iVar6 = param_2[3];
        *(byte *)((int)puVar13 + (uVar12 & local_a0 - 4) + 4) = bVar1;
        param_2[2] = iVar11 - (uVar10 & 1);
        param_2[3] = iVar6 + 1;
        FUN_01bed4e2(puVar13 + local_a0 * -0x12 + -0x12,&local_70,0x48);
        *param_1 = 0;
        return;
      }
      bVar9 = true;
    }
    else {
      if (uVar4 != 0) {
        local_a0 = uVar7 + ((uint)LZCOUNT(uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 |
                                          (uVar4 >> 0x10 & 0xff) << 8 | uVar4 >> 0x18) >> 3) &
                   uVar12;
        goto LAB_0067d7bc;
      }
      bVar9 = false;
    }
    iVar11 = iVar11 + 4;
    uVar7 = iVar11 + uVar7;
  } while( true );
}

