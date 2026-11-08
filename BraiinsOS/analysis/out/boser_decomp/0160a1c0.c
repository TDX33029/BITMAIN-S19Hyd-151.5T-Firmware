// FUN_0160a1c0 @ 0160a1c0 size=464 calls_out=2 calls_in=0
// strings: 

void FUN_0160a1c0(undefined4 *param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  bool bVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  bool bVar11;
  uint uVar12;
  uint *puVar13;
  uint uVar14;
  uint uVar15;
  bool bVar16;
  
  uVar5 = param_1[1];
  if (uVar5 != 0) {
    puVar13 = (uint *)*param_1;
    uVar9 = param_1[3];
    uVar2 = param_1[2];
    uVar15 = 0;
    bVar1 = false;
    do {
      bVar11 = bVar1;
      uVar3 = FUN_0160a394(uVar2,uVar9,param_3,param_4,uVar15);
      if (uVar5 <= uVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(uVar3,uVar5,&DAT_01d05e40);
      }
      uVar4 = (uVar15 + (param_3 & 3) * 4) * 4;
      puVar6 = puVar13 + uVar3 * 2;
      uVar14 = *puVar6;
      uVar10 = uVar4 & 0xff;
      uVar4 = (uVar4 & 0xff) - 0x20;
      uVar3 = 0xf >> (0x20 - uVar10 & 0xff);
      if (-1 < (int)uVar4) {
        uVar3 = 0xf << (uVar4 & 0xff);
      }
      uVar3 = puVar6[1] & uVar3 ^ uVar3;
      uVar12 = 0xf << uVar10;
      if (-1 < (int)uVar4) {
        uVar12 = 0;
      }
      uVar12 = uVar14 & uVar12 ^ uVar12;
      if (uVar12 != 0 || uVar3 != 0) {
        uVar7 = 1 >> (0x20 - uVar10 & 0xff);
        if (-1 < (int)uVar4) {
          uVar7 = 1 << (uVar4 & 0xff);
        }
        uVar10 = 1 << uVar10;
        if (-1 < (int)uVar4) {
          uVar10 = 0;
        }
        *puVar6 = uVar14 + uVar10;
        puVar6[1] = puVar6[1] + uVar7 + (uint)CARRY4(uVar14,uVar10);
      }
      bVar16 = uVar12 != 0 || uVar3 != 0;
      uVar3 = uVar15 & 0xff;
      uVar15 = uVar15 + 1;
      bVar1 = (bool)(bVar11 | bVar16);
    } while (uVar3 < 3);
    if (bVar11 || bVar16) {
      uVar15 = param_1[5] + 1;
      param_1[5] = uVar15;
      if ((uint)param_1[4] <= uVar15) {
        uVar3 = 0;
        iVar8 = uVar5 << 3;
        do {
          uVar4 = puVar13[1] & 0x11111111;
          uVar5 = *puVar13 & 0x11111111;
          iVar8 = iVar8 + -8;
          *puVar13 = *puVar13 >> 1 & 0x77777777;
          puVar13[1] = puVar13[1] >> 1 & 0x77777777;
          puVar13 = puVar13 + 2;
          uVar3 = uVar3 + ((uVar5 + (uVar5 >> 4) & 0x3030303) * 0x1010101 >> 0x18) +
                          ((uVar4 + (uVar4 >> 4) & 0x3030303) * 0x1010101 >> 0x18);
        } while (iVar8 != 0);
        param_1[5] = (uVar15 >> 1) - (uVar3 >> 2);
      }
    }
  }
  return;
}

