// FUN_015dc214 @ 015dc214 size=480 calls_out=3 calls_in=3
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_015dc214(undefined4 *param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint *puVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uStack_38;
  int local_34;
  
  uVar7 = FUN_015f6a28(param_1[4],param_1[5],param_1[6],param_1[7]);
  if (param_1[2] == 0) {
    FUN_015d694c(param_1,1,param_1 + 4);
  }
  puVar10 = (uint *)*param_1;
  uVar13 = param_1[1];
  bVar6 = false;
  local_34 = 0;
  uVar11 = uVar7;
  do {
    uVar11 = uVar13 & uVar11;
    uVar12 = *(uint *)((int)puVar10 + uVar11);
    uVar8 = uVar12 ^ (uVar7 >> 0x19) * 0x1010101;
    uVar8 = ~uVar8 & 0x80808080 & uVar8 + 0xfefefeff;
    while (uVar8 != 0) {
      uVar1 = uVar8 >> 8;
      uVar2 = uVar8 >> 0x10;
      uVar3 = uVar8 >> 0x18;
      uVar4 = uVar8 << 0x18;
      uVar8 = uVar8 - 1 & uVar8;
      iVar9 = FUN_015f4844(param_2,(int)puVar10 +
                                   (uVar11 + ((uint)LZCOUNT(uVar4 | (uVar1 & 0xff) << 0x10 |
                                                            (uVar2 & 0xff) << 8 | uVar3) >> 3) &
                                   uVar13) * -0x32 + -0x32);
      if (iVar9 != 0) {
        return;
      }
    }
    uVar8 = uVar12 & 0x80808080;
    if (bVar6) {
LAB_015dc31c:
      if ((uVar8 & uVar12 << 1) != 0) {
        uVar11 = (uint)*(char *)((int)puVar10 + uStack_38);
        if (-1 < (int)uVar11) {
          uVar11 = *puVar10 & 0x80808080;
          uVar8 = LZCOUNT((*puVar10 & 0x80) << 0x18 | (uVar11 >> 8 & 0xff) << 0x10 |
                          (uVar11 >> 0x10 & 0xff) << 8 | uVar11 >> 0x18);
          uVar11 = (uint)*(byte *)((int)puVar10 + (uVar8 >> 3));
          uStack_38 = uVar8 >> 3;
        }
        iVar9 = param_1[3];
        param_1[2] = param_1[2] - (uVar11 & 1);
        bVar5 = (byte)(uVar7 >> 0x19);
        *(byte *)((int)puVar10 + uStack_38) = bVar5;
        param_1[3] = iVar9 + 1;
        *(byte *)((int)puVar10 + (uVar13 & uStack_38 - 4) + 4) = bVar5;
        FUN_01bed4e2((int)puVar10 + uStack_38 * -0x32 + -0x32,param_2,0x32);
        return;
      }
      bVar6 = true;
    }
    else {
      if (uVar8 != 0) {
        uStack_38 = uVar11 + ((uint)LZCOUNT((uVar12 & 0x80) << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 |
                                            (uVar8 >> 0x10 & 0xff) << 8 | uVar8 >> 0x18) >> 3) &
                    uVar13;
        goto LAB_015dc31c;
      }
      bVar6 = false;
    }
    local_34 = local_34 + 4;
    uVar11 = local_34 + uVar11;
  } while( true );
}

