// FUN_0157d790 @ 0157d790 size=328 calls_out=1 calls_in=3
// strings: 

void FUN_0157d790(int *param_1)

{
  byte bVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  int iVar8;
  bool bVar9;
  
  uVar5 = param_1[1];
  uVar6 = param_1[2];
  if (uVar6 != uVar5) {
    if (uVar5 <= uVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(uVar6,uVar5,&DAT_018a9454);
    }
    iVar8 = *param_1;
    bVar1 = *(byte *)(iVar8 + uVar6);
    if (bVar1 != 0x22) {
      bVar9 = 0x5b < bVar1;
      if (bVar1 != 0x5c) {
        bVar9 = 0x1e < bVar1;
      }
      if (bVar9 && (bVar1 != 0x5c && bVar1 != 0x1f)) {
        iVar3 = uVar6 + 1;
        iVar4 = -(uVar5 - iVar3 & 0x7ffffffc);
        puVar2 = (uint *)(iVar8 + iVar3);
        while (puVar7 = puVar2, iVar4 != 0) {
          uVar6 = *puVar7;
          iVar4 = iVar4 + 4;
          uVar6 = ~uVar6 & 0x80808080 &
                  ((uVar6 ^ 0x22222222) + 0xfefefeff | uVar6 + 0xdfdfdfe0 |
                  (uVar6 ^ 0x5c5c5c5c) + 0xfefefeff);
          puVar2 = puVar7 + 1;
          if (uVar6 != 0) {
            param_1[2] = (int)puVar7 +
                         (((uint)LZCOUNT((uVar6 >> 7) << 0x18 | (uVar6 >> 0xf & 1) << 0x10 |
                                         (uVar6 >> 0x17 & 1) << 8 | uVar6 >> 0x1f) >> 3) - iVar8);
            return;
          }
        }
        param_1[2] = (uVar5 - iVar3 & 0xfffffffc) + iVar3;
        uVar5 = param_1[2];
        if (uVar5 < (uint)param_1[1]) {
          do {
            bVar1 = *(byte *)(*param_1 + uVar5);
            if (bVar1 == 0x22 || bVar1 == 0x5c) {
              return;
            }
            if (bVar1 < 0x20) {
              return;
            }
            uVar5 = uVar5 + 1;
            param_1[2] = uVar5;
          } while (param_1[1] != uVar5);
        }
        return;
      }
    }
  }
  return;
}

