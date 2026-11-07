// FUN_006dffd8 @ 006dffd8 size=336 calls_out=4 calls_in=8
// strings: Hash table capacity overflow

void FUN_006dffd8(int *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  int iVar10;
  int iVar11;
  
  iVar10 = param_2[1];
  if (iVar10 == 0) {
    *param_1 = (int)&DAT_0056d238;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    return;
  }
  uVar5 = iVar10 + 1;
  if (uVar5 < 0x3fffffff || iVar10 == 0x3ffffffe) {
    uVar7 = iVar10 + 5;
    uVar8 = uVar7 + uVar5 * 4;
    if ((uVar7 <= uVar8) && (uVar8 < 0x7ffffffd)) {
      if (uVar8 == 0) {
        iVar1 = 4;
      }
      else {
        iVar1 = FUN_01298504(uVar8,4);
        if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0066439c(4,uVar8);
        }
      }
      puVar6 = (uint *)*param_2;
      iVar1 = iVar1 + uVar5 * 4;
      FUN_01bed4e2(iVar1,puVar6,uVar7);
      iVar11 = param_2[3];
      if (iVar11 != 0) {
        puVar4 = puVar6 + 1;
        uVar5 = ~*puVar6 & 0x80808080;
        iVar2 = iVar11;
        puVar9 = puVar6;
        do {
          puVar3 = puVar4;
          if (uVar5 == 0) {
            do {
              puVar4 = puVar3 + 1;
              uVar5 = *puVar3;
              puVar9 = puVar9 + -4;
              puVar3 = puVar4;
            } while ((uVar5 & 0x80808080) == 0x80808080);
            uVar5 = uVar5 & 0x80808080 ^ 0x80808080;
          }
          iVar2 = iVar2 + -1;
          uVar7 = (uint)LZCOUNT(uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 |
                                (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18) >> 1 & 0x1c;
          *(undefined4 *)((int)puVar9 + iVar1 + -4 + (-(int)puVar6 - uVar7)) =
               *(undefined4 *)((int)puVar9 + (-4 - uVar7));
          uVar5 = uVar5 - 1 & uVar5;
        } while (iVar2 != 0);
      }
      iVar2 = param_2[2];
      *param_1 = iVar1;
      param_1[1] = iVar10;
      param_1[2] = iVar2;
      param_1[3] = iVar11;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012fb100("Hash table capacity overflow",0x39,&DAT_01d30868);
}

