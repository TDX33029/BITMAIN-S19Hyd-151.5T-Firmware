// FUN_00e477bc @ 00e477bc size=696 calls_out=6 calls_in=3
// strings: 

void FUN_00e477bc(uint *param_1,int param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  int *piVar33;
  ulonglong uVar34;
  
  if (param_1[9] != 0x80000000) {
    uVar5 = param_1[8];
    uVar2 = param_1[3];
    while ((uVar2 < uVar5 + param_2 && (param_1[0xc] != 0))) {
      uVar3 = param_1[0xb] + 1;
      puVar6 = (undefined4 *)(param_1[10] + param_1[0xb] * 8);
      piVar33 = (int *)*puVar6;
      iVar24 = puVar6[1];
      uVar2 = uVar3 - param_1[9];
      if (uVar3 < param_1[9]) {
        uVar2 = uVar3;
      }
      param_1[0xb] = uVar2;
      uVar3 = *(uint *)(iVar24 + 8);
      param_1[0xc] = param_1[0xc] - 1;
      uVar2 = uVar3;
      if (uVar3 < 9) {
        uVar2 = 8;
      }
      iVar16 = (int)piVar33 + (uVar2 - 1 & 0xfffffff8) + 8;
      uVar34 = FUN_00e47b10(iVar16);
      piVar12 = (int *)uVar34;
      if (((uint)(uVar34 >> 0x20) & 0xff) == 2) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa444(&DAT_01886ab4);
      }
      iVar13 = piVar12[2];
      piVar12[2] = 4;
      if (iVar13 == 4) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa444(&DAT_01886ac4);
      }
      iVar7 = piVar12[3];
      iVar20 = piVar12[4];
      iVar25 = piVar12[5];
      iVar29 = piVar12[6];
      iVar8 = piVar12[7];
      iVar17 = piVar12[8];
      iVar21 = piVar12[9];
      iVar26 = piVar12[10];
      iVar30 = piVar12[0xb];
      iVar14 = piVar12[0xc];
      iVar9 = piVar12[0xd];
      iVar10 = piVar12[0xe];
      iVar18 = piVar12[0xf];
      iVar22 = piVar12[0x10];
      iVar27 = piVar12[0x11];
      iVar31 = piVar12[0x12];
      iVar11 = piVar12[0x13];
      iVar19 = piVar12[0x14];
      iVar23 = piVar12[0x15];
      iVar28 = piVar12[0x16];
      iVar32 = piVar12[0x17];
      if ((((uVar34 & 0x100000000) == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
         (iVar4 = FUN_015bf3f8(), iVar4 == 0)) {
        *(undefined1 *)(piVar12 + 1) = 1;
      }
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar12;
        bVar1 = (bool)hasExclusiveAccess(piVar12);
      } while (!bVar1);
      *piVar12 = 0;
      if (iVar4 == 2) {
        FUN_016d6968(0xf0,piVar12,0x81,1);
      }
      (**(code **)(iVar24 + 0xc))(iVar16 + (uVar3 - 1 & 0xffffff98) + 0x68);
      uVar3 = *param_1;
      uVar2 = param_1[3];
      if (uVar2 == uVar3) {
        FUN_00aa2b6c(param_1);
        uVar3 = *param_1;
        uVar2 = param_1[3];
      }
      uVar15 = param_1[2] + uVar2;
      param_1[3] = uVar2 + 1;
      uVar2 = uVar15 - uVar3;
      if (uVar15 < uVar3) {
        uVar2 = uVar15;
      }
      piVar12 = (int *)(param_1[1] + uVar2 * 0x58);
      *piVar12 = iVar13;
      piVar12[1] = iVar7;
      piVar12[2] = iVar20;
      piVar12[3] = iVar25;
      piVar12[4] = iVar29;
      piVar12[5] = iVar8;
      piVar12[6] = iVar17;
      piVar12[7] = iVar21;
      piVar12[8] = iVar26;
      piVar12[9] = iVar30;
      piVar12[10] = iVar14;
      piVar12[0xb] = iVar9;
      piVar12[0xc] = iVar10;
      piVar12[0xd] = iVar18;
      piVar12[0xe] = iVar22;
      piVar12[0xf] = iVar27;
      piVar12[0x10] = iVar31;
      piVar12[0x11] = iVar11;
      piVar12[0x12] = iVar19;
      piVar12[0x13] = iVar23;
      piVar12[0x14] = iVar28;
      piVar12[0x15] = iVar32;
      DataMemoryBarrier(0xb);
      do {
        iVar16 = *piVar33;
        bVar1 = (bool)hasExclusiveAccess(piVar33);
      } while (!bVar1);
      *piVar33 = iVar16 + -1;
      if (iVar16 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00aac164(piVar33,iVar24);
      }
      uVar2 = param_1[3];
    }
  }
  return;
}

