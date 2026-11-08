// FUN_01298ea8 @ 01298ea8 size=192 calls_out=2 calls_in=2
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01298ea8(int *param_1,int param_2,uint param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  
  uVar17 = *(uint *)(param_2 + 8);
  if (param_3 < uVar17) {
    piVar1 = (int *)(*(int *)(param_2 + 4) + param_3 * 0x3c);
    iVar2 = *piVar1;
    iVar3 = piVar1[1];
    iVar6 = piVar1[2];
    iVar11 = piVar1[3];
    iVar14 = piVar1[4];
    iVar4 = piVar1[5];
    iVar7 = piVar1[6];
    iVar9 = piVar1[7];
    iVar12 = piVar1[8];
    iVar15 = piVar1[9];
    iVar5 = piVar1[10];
    iVar8 = piVar1[0xb];
    iVar10 = piVar1[0xc];
    iVar13 = piVar1[0xd];
    iVar16 = piVar1[0xe];
    FUN_01bed864(piVar1,piVar1 + 0xf,(uVar17 + ~param_3) * 0x3c);
    uVar17 = uVar17 - 1;
    *(uint *)(param_2 + 8) = uVar17;
    if (iVar2 != 2) {
      *param_1 = iVar2;
      param_1[1] = iVar3;
      param_1[2] = iVar6;
      param_1[3] = iVar11;
      param_1[4] = iVar14;
      param_1[5] = iVar4;
      param_1[6] = iVar7;
      param_1[7] = iVar9;
      param_1[8] = iVar12;
      param_1[9] = iVar15;
      param_1[10] = iVar5;
      param_1[0xb] = iVar8;
      param_1[0xc] = iVar10;
      param_1[0xd] = iVar13;
      param_1[0xe] = iVar16;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0066651c(param_3,uVar17,&DAT_01ce2504);
}

