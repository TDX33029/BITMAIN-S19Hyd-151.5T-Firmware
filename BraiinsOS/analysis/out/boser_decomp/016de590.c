// FUN_016de590 @ 016de590 size=332 calls_out=3 calls_in=2
// strings: 

void FUN_016de590(uint *param_1)

{
  uint uVar1;
  char *pcVar2;
  byte bVar3;
  byte *pbVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  byte bVar8;
  byte bVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  
  if ((char)param_1[3] == '\0') {
    uVar12 = param_1[2];
    if (uVar12 != 0) {
      uVar7 = 0;
      uVar10 = uVar12;
      do {
        if (uVar10 <= uVar7) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb12c(uVar7,uVar10,&DAT_01d18828);
        }
        uVar1 = param_1[1];
        pbVar4 = (byte *)(uVar1 + uVar7 * 2);
        bVar8 = *pbVar4;
        bVar6 = pbVar4[1];
        bVar3 = bVar8;
        if (bVar8 < 0x62) {
          bVar3 = 0x61;
        }
        bVar5 = bVar6;
        if (0x79 < bVar6) {
          bVar5 = 0x7a;
        }
        if (bVar5 < bVar3) {
          uVar11 = uVar10;
        }
        else {
          bVar5 = bVar5 - 0x20;
          bVar3 = bVar3 - 0x20;
          bVar9 = bVar5;
          if (bVar3 >= bVar5 && bVar3 != bVar5) {
            bVar9 = bVar3;
          }
          if (bVar3 < bVar5) {
            bVar5 = bVar3;
          }
          if (uVar10 == *param_1) {
            FUN_016f5378(param_1);
            uVar1 = param_1[1];
          }
          uVar11 = uVar10 + 1;
          param_1[2] = uVar11;
          pbVar4 = (byte *)(uVar1 + uVar10 * 2);
          *pbVar4 = bVar5;
          pbVar4[1] = bVar9;
        }
        if (0x59 < bVar6) {
          bVar6 = 0x5a;
        }
        if (bVar8 < 0x42) {
          bVar8 = 0x41;
        }
        if (bVar6 < bVar8) {
          uVar10 = uVar11;
        }
        else {
          if (uVar11 == *param_1) {
            FUN_016f5378(param_1);
            uVar1 = param_1[1];
          }
          uVar10 = uVar11 + 1;
          param_1[2] = uVar10;
          pcVar2 = (char *)(uVar1 + uVar11 * 2);
          *pcVar2 = bVar8 + 0x20;
          pcVar2[1] = bVar6 + 0x20;
        }
        uVar7 = uVar7 + 1;
      } while (uVar12 != uVar7);
    }
    FUN_016f6050(param_1);
    *(undefined1 *)(param_1 + 3) = 1;
  }
  return;
}

