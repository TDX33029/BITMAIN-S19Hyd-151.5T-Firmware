// FUN_0196856c @ 0196856c size=324 calls_out=1 calls_in=3
// strings: 

void FUN_0196856c(int *param_1)

{
  byte bVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  int iVar9;
  
  uVar5 = param_1[1];
  uVar6 = param_1[2];
  if (uVar6 != uVar5) {
    if (uVar5 <= uVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(uVar6,uVar5,&DAT_01d272e4);
    }
    iVar9 = *param_1;
    bVar1 = *(byte *)(iVar9 + uVar6);
    if ((bVar1 != 0x22 && bVar1 != 0x5c) && (0x1f < bVar1)) {
      iVar3 = uVar6 + 1;
      iVar4 = -(uVar5 - iVar3 & 0x7ffffffc);
      puVar2 = (uint *)(iVar9 + iVar3);
      do {
        puVar8 = puVar2;
        if (iVar4 == 0) {
          param_1[2] = (uVar5 - iVar3 & 0xfffffffc) + iVar3;
          uVar5 = param_1[2];
          if ((uint)param_1[1] <= uVar5) {
            return;
          }
          while( true ) {
            bVar1 = *(byte *)(*param_1 + uVar5);
            if (bVar1 == 0x22 || bVar1 == 0x5c) {
              return;
            }
            if (bVar1 < 0x20) break;
            uVar5 = uVar5 + 1;
            param_1[2] = uVar5;
            if (param_1[1] == uVar5) {
              return;
            }
          }
          return;
        }
        uVar6 = *puVar8;
        iVar4 = iVar4 + 4;
        uVar6 = ((uVar6 ^ 0x22222222) + 0xfefefeff | uVar6 + 0xdfdfdfe0 |
                (uVar6 ^ 0x5c5c5c5c) + 0xfefefeff) & ~uVar6;
        uVar7 = uVar6 & 0x80808080;
        puVar2 = puVar8 + 1;
      } while (uVar7 == 0);
      param_1[2] = (int)puVar8 +
                   (((uint)LZCOUNT((uVar6 >> 7 & 1) << 0x18 | (uVar7 >> 0xf & 1) << 0x10 |
                                   (uVar7 >> 0x17 & 1) << 8 | uVar6 >> 0x1f) >> 3) - iVar9);
    }
  }
  return;
}

