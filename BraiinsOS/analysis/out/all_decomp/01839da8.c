// FUN_01839da8 @ 01839da8 size=1088 calls_out=3 calls_in=1
// strings: 

undefined8 FUN_01839da8(int param_1,int *param_2)

{
  code *pcVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int local_2c [2];
  
  iVar6 = param_1 + (-param_1 & 0xfU);
  local_2c[0] = DAT_018ddaf8;
  iVar12 = iVar6 + 0x60;
  FUN_0183a638(iVar6 + 0x30,iVar6 + 0x30,iVar6 + 0x90,&DAT_00563ce0);
  if (*(uint *)(param_1 + 400) < 0x11) {
    if (*(uint *)(param_1 + 400) != 0) {
      FUN_01838f34(iVar12,param_1 + 0x170);
      *(undefined4 *)(iVar6 + 4) = 1;
      *(undefined4 *)(iVar6 + 0xc) = 0;
      *(undefined4 *)(iVar6 + 0x14) = 0;
      *(undefined4 *)(iVar6 + 0x1c) = 0;
      *(undefined4 *)(iVar6 + 0x24) = 0;
      FUN_0183a638(iVar6 + 0x30,iVar6 + 0x30,iVar6,iVar12);
    }
  }
  else {
    FUN_01838f34(iVar12,param_1 + 0x170);
    *(undefined4 *)(iVar6 + 0x94) = *(undefined4 *)(iVar6 + 4);
    *(undefined4 *)(iVar6 + 0x9c) = *(undefined4 *)(iVar6 + 0xc);
    *(undefined4 *)(iVar6 + 0xa4) = *(undefined4 *)(iVar6 + 0x14);
    *(undefined4 *)(iVar6 + 0xac) = *(undefined4 *)(iVar6 + 0x1c);
    *(undefined4 *)(iVar6 + 0xb4) = *(undefined4 *)(iVar6 + 0x24);
    FUN_0183a638(iVar6 + 0x30,iVar6 + 0x30,iVar6 + 0x90,iVar12);
  }
  uVar10 = *(int *)(iVar6 + 0x30) + *(int *)(iVar6 + 0x34);
  uVar4 = *(int *)(iVar6 + 0x3c) + *(int *)(iVar6 + 0x38) + (uVar10 >> 0x1a);
  uVar16 = *(int *)(iVar6 + 0x40) + *(int *)(iVar6 + 0x44) + (uVar4 >> 0x1a);
  uVar14 = *(int *)(iVar6 + 0x48) + *(int *)(iVar6 + 0x4c) + (uVar16 >> 0x1a);
  uVar3 = *(int *)(iVar6 + 0x50) + *(int *)(iVar6 + 0x54) + (uVar14 >> 0x1a);
  uVar10 = (uVar3 >> 0x1a) * 5 + (uVar10 & 0x3ffffff);
  uVar4 = (uVar4 & 0x3ffffff) + (uVar10 >> 0x1a);
  uVar17 = (uVar16 & 0x3ffffff) + (uVar4 >> 0x1a);
  uVar16 = (uVar14 & 0x3ffffff) + (uVar17 >> 0x1a);
  uVar14 = (uVar3 & 0x3ffffff) + (uVar16 >> 0x1a);
  uVar3 = (-(uVar14 >> 0x1a) & 5) + (uVar10 & 0x3ffffff);
  uVar4 = (uVar4 & 0x3ffffff) + (uVar3 >> 0x1a);
  uVar18 = (uVar17 & 0x3ffffff) + (uVar4 >> 0x1a);
  uVar15 = (uVar16 & 0x3ffffff) + (uVar18 >> 0x1a);
  uVar11 = (uVar14 & 0x3ffffff) + (uVar15 >> 0x1a);
  uVar14 = ((int)(uVar11 * 0x20) >> 0x1f & 5U) + (uVar3 & 0x3ffffff);
  uVar10 = uVar14 + 5;
  uVar16 = (uVar4 & 0x3ffffff) + (uVar10 >> 0x1a);
  uVar17 = (uVar18 & 0x3ffffff) + (uVar16 >> 0x1a);
  uVar7 = (uVar15 & 0x3ffffff) + (uVar17 >> 0x1a);
  uVar8 = (uVar11 & 0x3ffffff) + (uVar7 >> 0x1a);
  uVar3 = uVar8 >> 0x1a;
  uVar10 = uVar10 & 0x3ffffff;
  if (uVar3 == 0) {
    uVar10 = uVar14;
  }
  *(uint *)(iVar6 + 0x30) = uVar10;
  uVar16 = uVar4 & 0x3ffffff ^ ((uVar4 ^ uVar16) & 0x3ffffff) * uVar3;
  *(uint *)(iVar6 + 0x38) = uVar16;
  uVar14 = uVar15 & 0x3ffffff ^ ((uVar15 ^ uVar7) & 0x3ffffff) * uVar3;
  uVar17 = uVar18 & 0x3ffffff ^ ((uVar18 ^ uVar17) & 0x3ffffff) * uVar3;
  *(uint *)(iVar6 + 0x48) = uVar14;
  uVar4 = ((uVar11 ^ uVar8) & 0x3ffffff) * uVar3 ^ uVar11 & 0x3ffffff;
  *(uint *)(iVar6 + 0x40) = uVar17;
  *(uint *)(iVar6 + 0x50) = uVar4;
  FUN_01838f34(iVar12,param_1 + 0x194,0x10);
  uVar3 = *(uint *)(iVar6 + 0x80) ^ 0x1000000;
  *(uint *)(iVar6 + 0x80) = uVar3;
  iVar9 = uVar3 + uVar4;
  uVar10 = uVar10 + *(int *)(iVar6 + 0x60);
  iVar13 = uVar16 + *(int *)(iVar6 + 0x68);
  iVar12 = uVar17 + *(int *)(iVar6 + 0x70);
  iVar5 = uVar14 + *(int *)(iVar6 + 0x78);
  *(int *)(iVar6 + 0x50) = iVar9;
  *(uint *)(iVar6 + 0x30) = uVar10;
  *(int *)(iVar6 + 0x38) = iVar13;
  *(int *)(iVar6 + 0x40) = iVar12;
  *(int *)(iVar6 + 0x48) = iVar5;
  if ((&iStack_3c <= param_2) || (param_2 + 1 <= &iStack_3c)) {
    uVar3 = iVar13 + (uVar10 >> 0x1a);
    if (&iStack_38 <= param_2 || param_2 <= &iStack_3c) {
      piVar2 = param_2 + 1;
      *param_2 = (uVar10 & 0x3ffffff) + uVar3 * 0x4000000;
      if ((&iStack_38 <= piVar2) || (param_2 + 2 <= &iStack_38)) {
        uVar10 = iVar12 + (uVar3 >> 0x1a);
        if (&iStack_34 <= piVar2 || piVar2 <= &iStack_38) {
          param_2[1] = uVar10 * 0x100000 + ((uVar3 & 0x3ffffff) >> 6);
          piVar2 = param_2 + 2;
          if ((&iStack_34 <= piVar2) || (param_2 + 3 <= &iStack_34)) {
            uVar3 = iVar5 + (uVar10 >> 0x1a);
            if (piVar2 <= &iStack_34 || &iStack_30 <= piVar2) {
              piVar2 = param_2 + 3;
              param_2[2] = uVar3 * 0x4000 + ((uVar10 & 0x3ffffff) >> 0xc);
              if (((&iStack_30 <= piVar2) || (param_2 + 4 <= &iStack_30)) &&
                 (piVar2 <= &iStack_30 || local_2c <= piVar2)) {
                param_2[3] = ((uVar3 & 0x3ffffff) >> 0x12) + (iVar9 + (uVar3 >> 0x1a)) * 0x100;
                if (local_2c[0] != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
                  FUN_016d2b78();
                }
                return 0;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0,0x183a1e4);
  (*pcVar1)();
}

