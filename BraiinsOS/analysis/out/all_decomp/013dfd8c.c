// FUN_013dfd8c @ 013dfd8c size=360 calls_out=3 calls_in=0
// strings: 

void FUN_013dfd8c(uint *param_1)

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
  
  if ((char)param_1[3] == '\0') {
    uVar11 = param_1[2];
    if (uVar11 != 0) {
      uVar7 = 0;
      uVar10 = uVar11;
      do {
        while( true ) {
          if (uVar10 <= uVar7) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa4a4(uVar7,uVar10,&DAT_0189df50);
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
              FUN_014017b4(param_1);
              uVar1 = param_1[1];
            }
            param_1[2] = uVar10 + 1;
            pbVar4 = (byte *)(uVar1 + uVar10 * 2);
            *pbVar4 = bVar5;
            pbVar4[1] = bVar9;
            uVar10 = uVar10 + 1;
          }
          if (0x59 < bVar6) {
            bVar6 = 0x5a;
          }
          if (bVar8 < 0x42) {
            bVar8 = 0x41;
          }
          if (bVar6 < bVar8) break;
          if (uVar10 == *param_1) {
            FUN_014017b4(param_1);
            uVar1 = param_1[1];
          }
          param_1[2] = uVar10 + 1;
          pcVar2 = (char *)(uVar1 + uVar10 * 2);
          *pcVar2 = bVar8 + 0x20;
          pcVar2[1] = bVar6 + 0x20;
          uVar7 = uVar7 + 1;
          uVar10 = uVar10 + 1;
          if (uVar11 == uVar7) goto LAB_013dfec8;
        }
        uVar7 = uVar7 + 1;
      } while (uVar11 != uVar7);
    }
LAB_013dfec8:
    FUN_013f9740(param_1);
    *(undefined1 *)(param_1 + 3) = 1;
  }
  return;
}

