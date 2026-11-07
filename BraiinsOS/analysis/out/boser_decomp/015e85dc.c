// FUN_015e85dc @ 015e85dc size=188 calls_out=2 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_015e85dc(int *param_1,int param_2,uint param_3,undefined4 param_4)

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
  uint uVar14;
  
  uVar14 = *(uint *)(param_2 + 8);
  if (param_3 < uVar14) {
    piVar1 = (int *)(*(int *)(param_2 + 4) + param_3 * 0x30);
    iVar2 = *piVar1;
    iVar3 = piVar1[1];
    iVar4 = piVar1[2];
    iVar6 = piVar1[3];
    iVar8 = piVar1[4];
    iVar10 = piVar1[5];
    iVar12 = piVar1[6];
    iVar5 = piVar1[7];
    iVar7 = piVar1[8];
    iVar9 = piVar1[9];
    iVar11 = piVar1[10];
    iVar13 = piVar1[0xb];
    FUN_01bed864(piVar1,piVar1 + 0xc,(uVar14 + ~param_3) * 0x30);
    uVar14 = uVar14 - 1;
    *(uint *)(param_2 + 8) = uVar14;
    if (iVar2 != 0x13 || iVar3 != 0) {
      *param_1 = iVar2;
      param_1[1] = iVar3;
      param_1[2] = iVar4;
      param_1[3] = iVar6;
      param_1[4] = iVar8;
      param_1[5] = iVar10;
      param_1[6] = iVar12;
      param_1[7] = iVar5;
      param_1[8] = iVar7;
      param_1[9] = iVar9;
      param_1[10] = iVar11;
      param_1[0xb] = iVar13;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0066651c(param_3,uVar14,param_4);
}

