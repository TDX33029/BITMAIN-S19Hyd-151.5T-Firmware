// FUN_0088347c @ 0088347c size=584 calls_out=2 calls_in=3
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0088347c(uint *param_1,undefined4 *param_2,short param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uStack_54;
  undefined2 uStack_38;
  undefined2 uStack_36;
  undefined2 uStack_34;
  undefined2 uStack_32;
  undefined2 uStack_30;
  undefined2 uStack_2e;
  undefined2 uStack_2c;
  
  uVar6 = FUN_008350fc(param_2[4],param_2[5],param_2[6],param_2[7]);
  if (param_2[2] == 0) {
    FUN_00882e94(param_2,1,param_2 + 4);
  }
  puVar8 = (uint *)*param_2;
  uVar11 = param_2[1];
  iVar13 = 0;
  bVar5 = false;
  uVar9 = uVar6;
  do {
    uVar9 = uVar11 & uVar9;
    uVar10 = *(uint *)((int)puVar8 + uVar9);
    uVar7 = uVar10 ^ (uVar6 >> 0x19) * 0x1010101;
    uVar7 = ~uVar7 & 0x80808080 & uVar7 + 0xfefefeff;
    while (uVar7 != 0) {
      uVar12 = uVar7 >> 8;
      uVar1 = uVar7 >> 0x10;
      uVar2 = uVar7 >> 0x18;
      uVar3 = uVar7 << 0x18;
      uVar7 = uVar7 - 1 & uVar7;
      uVar12 = uVar9 + ((uint)LZCOUNT(uVar3 | (uVar12 & 0xff) << 0x10 | (uVar1 & 0xff) << 8 | uVar2)
                       >> 3) & uVar11;
      if (param_3 == (short)puVar8[uVar12 * -4 + -4]) {
        uVar6 = *param_4;
        uVar9 = param_4[1];
        uVar10 = param_4[2];
        uVar11 = puVar8[uVar12 * -4 + -1];
        uVar7 = puVar8[uVar12 * -4 + -2];
        *param_1 = puVar8[uVar12 * -4 + -3];
        param_1[1] = uVar7;
        param_1[2] = uVar11;
        puVar8[uVar12 * -4 + -1] = uVar10;
        puVar8[uVar12 * -4 + -2] = uVar9;
        puVar8[uVar12 * -4 + -3] = uVar6;
        return;
      }
    }
    uVar7 = uVar10 & 0x80808080;
    if (bVar5) {
LAB_008835b4:
      if ((uVar7 & uVar10 << 1) != 0) {
        uVar9 = (uint)*(char *)((int)puVar8 + uStack_54);
        if (-1 < (int)uVar9) {
          uVar9 = *puVar8 & 0x80808080;
          uVar7 = LZCOUNT(uVar9 << 0x18 | (uVar9 >> 8 & 0xff) << 0x10 | (uVar9 >> 0x10 & 0xff) << 8
                          | uVar9 >> 0x18);
          uVar9 = (uint)*(byte *)((int)puVar8 + (uVar7 >> 3));
          uStack_54 = uVar7 >> 3;
        }
        iVar13 = param_2[3];
        param_2[2] = param_2[2] - (uVar9 & 1);
        bVar4 = (byte)(uVar6 >> 0x19);
        *(byte *)((int)puVar8 + uStack_54) = bVar4;
        *(byte *)((int)puVar8 + (uVar11 & uStack_54 - 4) + 4) = bVar4;
        uVar9 = *param_4;
        uVar11 = param_4[1];
        uVar6 = param_4[2];
        *(short *)(puVar8 + uStack_54 * -4 + -4) = param_3;
        uStack_2e = (undefined2)uVar6;
        uStack_2c = (undefined2)(uVar6 >> 0x10);
        uStack_32 = (undefined2)uVar11;
        uStack_30 = (undefined2)(uVar11 >> 0x10);
        uStack_36 = (undefined2)uVar9;
        uStack_34 = (undefined2)(uVar9 >> 0x10);
        param_2[3] = iVar13 + 1;
        *(uint *)((int)puVar8 + uStack_54 * -0x10 + -0xe) = CONCAT22(uStack_36,uStack_38);
        *(uint *)((int)puVar8 + uStack_54 * -0x10 + -10) = CONCAT22(uStack_32,uStack_34);
        *(uint *)((int)puVar8 + uStack_54 * -0x10 + -6) = CONCAT22(uStack_2e,uStack_30);
        *(undefined2 *)((int)puVar8 + uStack_54 * -0x10 + -2) = uStack_2c;
        *param_1 = 0;
        return;
      }
      bVar5 = true;
    }
    else {
      if (uVar7 != 0) {
        uStack_54 = uVar9 + ((uint)LZCOUNT(uVar7 << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 |
                                           (uVar7 >> 0x10 & 0xff) << 8 | uVar7 >> 0x18) >> 3) &
                    uVar11;
        goto LAB_008835b4;
      }
      bVar5 = false;
    }
    iVar13 = iVar13 + 4;
    uVar9 = iVar13 + uVar9;
  } while( true );
}

