// FUN_00752094 @ 00752094 size=484 calls_out=2 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint FUN_00752094(int *param_1,short param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  bool bVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint uStack_3c;
  
  uVar6 = FUN_006a5594(param_1[4],param_1[5],param_1[6],param_1[7]);
  if (param_1[2] == 0) {
    FUN_00752290(param_1,param_1 + 4);
  }
  puVar7 = (uint *)*param_1;
  uVar9 = param_1[1];
  iVar12 = 0;
  bVar5 = false;
  uVar10 = uVar6;
  do {
    uVar10 = uVar9 & uVar10;
    uVar13 = *(uint *)((int)puVar7 + uVar10);
    uVar8 = uVar13 ^ (uVar6 >> 0x19) * 0x1010101;
    uVar8 = ~uVar8 & 0x80808080 & uVar8 + 0xfefefeff;
    while (uVar8 != 0) {
      uVar11 = uVar8 >> 8;
      uVar1 = uVar8 >> 0x10;
      uVar2 = uVar8 >> 0x18;
      uVar3 = uVar8 << 0x18;
      uVar8 = uVar8 - 1 & uVar8;
      uVar11 = uVar10 + ((uint)LZCOUNT(uVar3 | (uVar11 & 0xff) << 0x10 | (uVar1 & 0xff) << 8 | uVar2
                                      ) >> 3) & uVar9;
      if (param_2 == (short)puVar7[uVar11 * -2 + -2]) {
        uVar6 = puVar7[uVar11 * -2 + -1];
        puVar7[uVar11 * -2 + -1] = param_3;
        return uVar6;
      }
    }
    uVar8 = uVar13 & 0x80808080;
    if (bVar5) {
LAB_007521b0:
      if ((uVar8 & uVar13 << 1) != 0) {
        uVar10 = (uint)*(char *)((int)puVar7 + uStack_3c);
        if (-1 < (int)uVar10) {
          uVar10 = *puVar7 & 0x80808080;
          uVar8 = LZCOUNT(uVar10 << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 |
                          (uVar10 >> 0x10 & 0xff) << 8 | uVar10 >> 0x18);
          uVar10 = (uint)*(byte *)((int)puVar7 + (uVar8 >> 3));
          uStack_3c = uVar8 >> 3;
        }
        param_1[2] = param_1[2] - (uVar10 & 1);
        param_1[3] = param_1[3] + 1;
        bVar4 = (byte)(uVar6 >> 0x19);
        *(byte *)((int)puVar7 + uStack_3c) = bVar4;
        *(byte *)((int)puVar7 + (uVar9 & uStack_3c - 4) + 4) = bVar4;
        *(short *)(puVar7 + uStack_3c * -2 + -2) = param_2;
        puVar7[uStack_3c * -2 + -1] = param_3;
        return 0;
      }
      bVar5 = true;
    }
    else {
      if (uVar8 != 0) {
        uStack_3c = uVar10 + ((uint)LZCOUNT(uVar8 << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 |
                                            (uVar8 >> 0x10 & 0xff) << 8 | uVar8 >> 0x18) >> 3) &
                    uVar9;
        goto LAB_007521b0;
      }
      bVar5 = false;
    }
    iVar12 = iVar12 + 4;
    uVar10 = iVar12 + uVar10;
  } while( true );
}

