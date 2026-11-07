// FUN_007142a8 @ 007142a8 size=596 calls_out=9 calls_in=2
// strings: 

undefined4 FUN_007142a8(int *param_1)

{
  ushort uVar1;
  short sVar2;
  ushort uVar3;
  uint uVar4;
  ushort uVar5;
  uint uVar6;
  short *psVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  undefined2 *puVar11;
  uint uVar12;
  short sVar13;
  undefined2 *puVar14;
  int iVar15;
  short sVar16;
  uint in_fpscr;
  float fVar17;
  float fVar18;
  undefined8 uVar19;
  undefined1 auStack_30 [12];
  
  iVar10 = param_1[10];
  if (*param_1 == 1 && param_1[1] == 0) {
    uVar6 = param_1[7];
    fVar17 = (float)VectorUnsignedToFloat(iVar10,(byte)(in_fpscr >> 0x16) & 3);
    fVar18 = (float)VectorUnsignedToFloat(uVar6,(byte)(in_fpscr >> 0x16) & 3);
    if (0.2 <= fVar17 / fVar18) {
      *param_1 = 0;
      param_1[1] = 0;
LAB_00714464:
      uVar9 = FUN_00714958(param_1,uVar6 << 1);
      return uVar9;
    }
    FUN_01414480(param_1);
    uVar6 = param_1[7];
    puVar14 = (undefined2 *)param_1[6];
    if (uVar6 != 0) {
      puVar11 = puVar14;
      do {
        puVar11[1] = 0;
        *puVar11 = 0xffff;
        puVar11 = puVar11 + 2;
      } while (puVar11 != puVar14 + uVar6 * 2);
    }
    if (param_1[10] != 0) {
      iVar15 = param_1[9];
      iVar10 = param_1[10] * 0x34 + iVar15;
      uVar1 = *(ushort *)(param_1 + 0xe);
      sVar16 = 0;
      do {
        uVar5 = FUN_0137e53c(param_1,iVar15 + 0x20);
        *(ushort *)(iVar15 + 0x30) = uVar5;
        iVar15 = iVar15 + 0x34;
        uVar12 = 0;
        uVar4 = (uint)(uVar1 & uVar5);
        while( true ) {
          do {
            uVar8 = uVar4;
            uVar4 = 0;
          } while (uVar6 <= uVar8);
          psVar7 = puVar14 + uVar8 * 2;
          if (*psVar7 == -1) {
            *psVar7 = sVar16;
            goto LAB_00714418;
          }
          if ((uVar8 - (psVar7[1] & uVar1) & (uint)uVar1) < uVar12) break;
          uVar12 = uVar12 + 1;
          uVar4 = uVar8 + 1;
        }
        uVar4 = uVar8;
        sVar13 = sVar16;
        while( true ) {
          do {
            uVar8 = uVar4;
            uVar4 = 0;
          } while (uVar6 <= uVar8);
          psVar7 = puVar14 + uVar8 * 2;
          sVar2 = *psVar7;
          if (sVar2 == -1) break;
          uVar3 = psVar7[1];
          *psVar7 = sVar13;
          psVar7[1] = uVar5;
          uVar4 = uVar8 + 1;
          sVar13 = sVar2;
          uVar5 = uVar3;
        }
        *psVar7 = sVar13;
LAB_00714418:
        puVar14[uVar8 * 2 + 1] = uVar5;
        sVar16 = sVar16 + 1;
      } while (iVar15 != iVar10);
    }
  }
  else {
    uVar6 = param_1[7];
    if (iVar10 == uVar6 - (uVar6 >> 2)) {
      if (iVar10 != 0) goto LAB_00714464;
      *(undefined2 *)(param_1 + 0xe) = 7;
      FUN_01412b3c(auStack_30,8);
      uVar19 = FUN_01410d80(auStack_30);
      if (uVar6 != 0) {
        thunk_FUN_01be4678(param_1[6]);
      }
      *(undefined8 *)(param_1 + 6) = uVar19;
      iVar10 = thunk_FUN_01be5118(0x138);
      if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(4,0x138);
      }
      FUN_00713c68(param_1 + 8);
      param_1[8] = 6;
      param_1[9] = iVar10;
      param_1[10] = 0;
    }
  }
  return 0;
}

