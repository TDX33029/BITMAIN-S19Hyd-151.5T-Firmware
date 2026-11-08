// FUN_015028d4 @ 015028d4 size=548 calls_out=3 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_015028d4(undefined4 *param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uStack_48;
  
  uVar7 = param_1[4];
  uVar8 = param_1[5];
  uVar3 = FUN_01333c64(uVar7,uVar8,param_1[6],param_1[7]);
  if (param_1[2] == 0) {
    FUN_01502af8(param_1,0,uVar7,uVar8);
  }
  puVar6 = (uint *)*param_1;
  uVar13 = param_1[1];
  iVar11 = 0;
  bVar2 = false;
  uVar9 = uVar3;
  do {
    uVar9 = uVar13 & uVar9;
    uVar12 = *(uint *)((int)puVar6 + uVar9);
    uVar4 = uVar12 ^ (uVar3 >> 0x19) * 0x1010101;
    for (uVar4 = ~uVar4 & 0x80808080 & uVar4 + 0xfefefeff; uVar4 != 0; uVar4 = uVar4 - 1 & uVar4) {
      uVar5 = uVar9 + ((uint)LZCOUNT(uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 |
                                     (uVar4 >> 0x10 & 0xff) << 8 | uVar4 >> 0x18) >> 3) & uVar13;
      if ((param_3 == puVar6[uVar5 * -4 + -3]) &&
         (iVar10 = thunk_FUN_016dd50a(param_2,puVar6[uVar5 * -4 + -4],param_3), iVar10 == 0)) {
        puVar6[uVar5 * -4 + -2] = param_4;
        puVar6[uVar5 * -4 + -1] = param_5;
        return;
      }
    }
    uVar4 = uVar12 & 0x80808080;
    if (bVar2) {
LAB_01502a30:
      if ((uVar4 & uVar12 << 1) != 0) {
        uVar9 = (uint)*(char *)((int)puVar6 + uStack_48);
        if (-1 < (int)uVar9) {
          uVar9 = *puVar6 & 0x80808080;
          uVar4 = LZCOUNT((*puVar6 & 0x80) << 0x18 | (uVar9 >> 8 & 0xff) << 0x10 |
                          (uVar9 >> 0x10 & 0xff) << 8 | uVar9 >> 0x18);
          uVar9 = (uint)*(byte *)((int)puVar6 + (uVar4 >> 3));
          uStack_48 = uVar4 >> 3;
        }
        iVar11 = param_1[3];
        iVar10 = param_1[2];
        bVar1 = (byte)(uVar3 >> 0x19);
        *(byte *)((int)puVar6 + uStack_48) = bVar1;
        param_1[2] = iVar10 - (uVar9 & 1);
        param_1[3] = iVar11 + 1;
        *(byte *)((int)puVar6 + (uStack_48 - 4 & uVar13) + 4) = bVar1;
        puVar6[uStack_48 * -4 + -4] = param_2;
        puVar6[uStack_48 * -4 + -3] = param_3;
        puVar6[uStack_48 * -4 + -1] = param_5;
        puVar6[uStack_48 * -4 + -2] = param_4;
        return;
      }
      bVar2 = true;
    }
    else {
      if (uVar4 != 0) {
        uStack_48 = uVar9 + ((uint)LZCOUNT((uVar12 & 0x80) << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 |
                                           (uVar4 >> 0x10 & 0xff) << 8 | uVar4 >> 0x18) >> 3) &
                    uVar13;
        goto LAB_01502a30;
      }
      bVar2 = false;
    }
    iVar11 = iVar11 + 4;
    uVar9 = iVar11 + uVar9;
  } while( true );
}

