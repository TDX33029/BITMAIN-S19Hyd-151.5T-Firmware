// FUN_0141d9b4 @ 0141d9b4 size=540 calls_out=3 calls_in=3
// strings: 

void FUN_0141d9b4(int *param_1,int param_2,uint param_3,uint param_4)

{
  ushort uVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ushort *puVar9;
  undefined *puVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  short *psVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int *piVar25;
  
  uVar17 = *(uint *)(param_2 + 0x1c);
  if (param_3 < uVar17) {
    iVar24 = *(int *)(param_2 + 0x18);
    uVar7 = *(uint *)(param_2 + 0x28);
    *(undefined4 *)(iVar24 + param_3 * 4) = 0xffff;
    if (param_4 < uVar7) {
      piVar25 = (int *)(param_4 * 0x34 + *(int *)(param_2 + 0x24));
      uVar7 = uVar7 - 1;
      iVar3 = *piVar25;
      iVar11 = piVar25[1];
      iVar18 = piVar25[2];
      iVar21 = piVar25[3];
      iVar4 = piVar25[4];
      iVar12 = piVar25[5];
      iVar19 = piVar25[6];
      iVar22 = piVar25[7];
      iVar5 = piVar25[8];
      iVar13 = piVar25[9];
      iVar16 = piVar25[10];
      iVar20 = piVar25[0xb];
      iVar23 = piVar25[0xc];
      FUN_01bed864(piVar25,uVar7 * 0x34 + *(int *)(param_2 + 0x24),0x34);
      *(uint *)(param_2 + 0x28) = uVar7;
      if (param_4 < uVar7) {
        uVar6 = (uint)(*(ushort *)(piVar25 + 0xc) & *(ushort *)(param_2 + 0x38));
        while( true ) {
          do {
            uVar8 = uVar6;
            uVar6 = 0;
          } while (uVar17 <= uVar8);
          puVar9 = (ushort *)(iVar24 + uVar8 * 4);
          if ((*puVar9 != 0xffff) && (uVar7 <= *puVar9)) break;
          uVar6 = uVar8 + 1;
        }
        puVar9[1] = *(ushort *)(piVar25 + 0xc);
        *puVar9 = (ushort)param_4;
        if (*piVar25 == 1) {
          uVar6 = piVar25[1];
          uVar8 = *(uint *)(param_2 + 0x34);
          if (uVar6 < uVar8) {
            uVar14 = piVar25[2];
            piVar25 = *(int **)(param_2 + 0x30);
            piVar25[uVar6 * 9] = 0;
            (piVar25 + uVar6 * 9)[1] = param_4;
            if (uVar14 < uVar8) {
              piVar25[uVar14 * 9 + 2] = 0;
              piVar25[uVar14 * 9 + 3] = param_4;
              goto LAB_0141dae8;
            }
            puVar10 = &DAT_01d2f3ec;
            uVar6 = uVar14;
          }
          else {
            puVar10 = &DAT_01d2f3dc;
          }
                    /* WARNING: Subroutine does not return */
          FUN_012fb12c(uVar6,uVar8,puVar10);
        }
      }
LAB_0141dae8:
      if (uVar7 != 0) {
        uVar1 = *(ushort *)(param_2 + 0x38);
        uVar7 = param_3 + 1;
        while( true ) {
          do {
            uVar6 = uVar7;
            uVar7 = 0;
          } while (uVar17 <= uVar6);
          psVar15 = (short *)(iVar24 + uVar6 * 4);
          sVar2 = *psVar15;
          if (sVar2 != -1) {
            param_4 = (uint)(ushort)psVar15[1];
            piVar25 = (int *)(uVar6 - (uVar1 & psVar15[1]));
          }
          if (sVar2 == -1 || ((uint)piVar25 & (uint)uVar1) == 0) break;
          if (uVar17 <= param_3) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb12c(param_3,uVar17,&DAT_01d2f3fc);
          }
          piVar25 = (int *)(param_3 * 4);
          *(short *)(iVar24 + (int)piVar25) = sVar2;
          *psVar15 = -1;
          ((short *)(iVar24 + (int)piVar25))[1] = (short)param_4;
          psVar15[1] = 0;
          uVar7 = uVar6 + 1;
          param_3 = uVar6;
        }
      }
      *param_1 = iVar3;
      param_1[1] = iVar11;
      param_1[2] = iVar18;
      param_1[3] = iVar21;
      param_1[4] = iVar4;
      param_1[5] = iVar12;
      param_1[6] = iVar19;
      param_1[7] = iVar22;
      param_1[8] = iVar5;
      param_1[9] = iVar13;
      param_1[10] = iVar16;
      param_1[0xb] = iVar20;
      param_1[0xc] = iVar23;
      return;
    }
    FUN_006664cc(param_4);
  }
                    /* WARNING: Subroutine does not return */
  FUN_012fb12c(param_3,uVar17,&DAT_01d2f3cc);
}

