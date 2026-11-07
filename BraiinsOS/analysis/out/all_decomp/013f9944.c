// FUN_013f9944 @ 013f9944 size=504 calls_out=4 calls_in=0
// strings: 

void FUN_013f9944(uint *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  uint uVar7;
  byte bVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  byte *pbVar12;
  byte bVar13;
  uint uVar14;
  uint uVar15;
  bool bVar16;
  
  uVar15 = param_1[2];
  if (uVar15 == 0) {
    return;
  }
  uVar11 = *(uint *)(param_2 + 8);
  if (uVar11 == 0) {
    *(undefined1 *)(param_1 + 3) = 1;
    param_1[2] = 0;
    return;
  }
  iVar2 = *(int *)(param_2 + 4);
  uVar4 = 0;
  uVar7 = 0;
  uVar9 = uVar15;
  uVar10 = 1;
  uVar14 = 1;
  do {
    while( true ) {
      if (uVar11 <= uVar4) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(uVar4,uVar11,&DAT_0189dfa0);
      }
      uVar3 = param_1[1];
      pbVar12 = (byte *)(iVar2 + uVar4 * 2);
      pbVar6 = (byte *)(uVar3 + uVar7 * 2);
      bVar13 = *pbVar6;
      bVar8 = pbVar6[1];
      if (bVar13 < *pbVar12) {
        bVar13 = *pbVar12;
      }
      if (pbVar12[1] < bVar8) {
        bVar8 = pbVar12[1];
      }
      uVar5 = uVar9;
      if (bVar13 <= bVar8) {
        if (uVar9 == *param_1) {
          FUN_014017b4(param_1);
          uVar3 = param_1[1];
        }
        uVar5 = uVar9 + 1;
        param_1[2] = uVar5;
        pbVar6 = (byte *)(uVar3 + uVar9 * 2);
        *pbVar6 = bVar13;
        pbVar6[1] = bVar8;
      }
      if (uVar5 <= uVar7) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(uVar7,uVar5,&DAT_0189dfb0);
      }
      bVar13 = *(byte *)(uVar3 + uVar7 * 2 + 1);
      uVar9 = uVar11;
      uVar1 = uVar10;
      if (bVar13 < pbVar12[1]) {
        uVar9 = uVar15;
        uVar1 = uVar14;
      }
      if (uVar9 <= uVar1) {
        if (uVar5 < uVar15) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa36c(0,uVar15,uVar5,&DAT_018af198);
        }
        param_1[2] = 0;
        if (uVar5 != uVar15) {
          FUN_016dd52c(uVar3,uVar3 + uVar15 * 2,(uVar5 - uVar15) * 2);
          param_1[2] = uVar5 - uVar15;
        }
        *(byte *)(param_1 + 3) = (byte)param_1[3] & *(byte *)(param_2 + 0xc);
        return;
      }
      uVar9 = uVar5;
      if (bVar13 < pbVar12[1]) break;
      uVar4 = uVar10;
      uVar10 = uVar1 + 1;
      if (uVar5 <= uVar7) goto LAB_013f9b28;
    }
    bVar16 = uVar14 < uVar5;
    uVar7 = uVar14;
    uVar14 = uVar1 + 1;
  } while (bVar16);
LAB_013f9b28:
                    /* WARNING: Subroutine does not return */
  FUN_00faa4a4(uVar7,uVar5,&DAT_0189df90);
}

