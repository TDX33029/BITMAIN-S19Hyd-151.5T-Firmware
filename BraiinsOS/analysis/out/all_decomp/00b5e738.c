// FUN_00b5e738 @ 00b5e738 size=196 calls_out=0 calls_in=1
// strings: 

void FUN_00b5e738(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int *piVar14;
  
  piVar14 = param_1 + 8;
  iVar13 = 0;
  do {
    iVar12 = *piVar14;
    if ((iVar12 != 4) && (piVar14[-8] == 4)) {
      iVar2 = piVar14[1];
      iVar8 = piVar14[2];
      iVar10 = piVar14[3];
      iVar3 = piVar14[4];
      iVar4 = piVar14[5];
      iVar9 = piVar14[6];
      iVar11 = piVar14[7];
      iVar1 = iVar13;
      do {
        iVar6 = iVar1;
        puVar7 = (undefined4 *)((int)param_1 + iVar6);
        puVar7[8] = *puVar7;
        puVar7[9] = puVar7[1];
        puVar7[10] = puVar7[2];
        puVar7[0xb] = puVar7[3];
        puVar7[0xc] = puVar7[4];
        puVar7[0xd] = puVar7[5];
        puVar7[0xe] = puVar7[6];
        puVar7[0xf] = puVar7[7];
        if (iVar6 == 0) {
          piVar5 = param_1;
          goto LAB_00b5e758;
        }
        iVar1 = iVar6 + -0x20;
      } while (puVar7[-8] == 4);
      piVar5 = (int *)((int)param_1 + iVar6);
LAB_00b5e758:
      *piVar5 = iVar12;
      piVar5[1] = iVar2;
      piVar5[2] = iVar8;
      piVar5[3] = iVar10;
      piVar5[4] = iVar3;
      piVar5[5] = iVar4;
      piVar5[6] = iVar9;
      piVar5[7] = iVar11;
    }
    piVar14 = piVar14 + 8;
    iVar13 = iVar13 + 0x20;
    if (piVar14 == param_1 + param_2 * 8) {
      return;
    }
  } while( true );
}

