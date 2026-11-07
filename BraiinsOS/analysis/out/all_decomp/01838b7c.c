// FUN_01838b7c @ 01838b7c size=940 calls_out=2 calls_in=1
// strings: 

undefined8 FUN_01838b7c(int param_1,int *param_2)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int *piVar12;
  int *piVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int local_2c [2];
  
  uVar9 = param_1 + 0x3fU & 0xffffffc0;
  local_2c[0] = DAT_018ddaf8;
  if (*(int *)(uVar9 + 0x48) != 0) {
    FUN_0183802c(uVar9,uVar9 + 0x38,*(int *)(uVar9 + 0x48),0);
  }
  piVar12 = (int *)(uVar9 + 0x4c);
  uVar7 = *(int *)(uVar9 + 0x28) + (*(uint *)(uVar9 + 0x24) >> 0x1a);
  uVar15 = uVar7 & 0x3ffffff;
  uVar7 = *(int *)(uVar9 + 0x2c) + (uVar7 >> 0x1a);
  uVar14 = uVar7 & 0x3ffffff;
  uVar7 = *(int *)(uVar9 + 0x30) + (uVar7 >> 0x1a);
  uVar10 = uVar7 & 0x3ffffff;
  uVar2 = *(int *)(uVar9 + 0x34) + (uVar7 >> 0x1a);
  uVar3 = (uVar2 >> 0x1a) * 5 + (*(uint *)(uVar9 + 0x24) & 0x3ffffff);
  uVar6 = uVar3 + 5;
  uVar17 = uVar15 + (uVar6 >> 0x1a);
  uVar16 = uVar14 + (uVar17 >> 0x1a);
  uVar5 = uVar10 + (uVar16 >> 0x1a);
  uVar8 = (uVar2 | 0xfc000000) + (uVar5 >> 0x1a);
  uVar7 = (int)uVar8 >> 0x1f;
  uVar11 = 0xffffffff - uVar7;
  uVar3 = uVar6 & uVar11 & 0x3ffffff | uVar3 & uVar7;
  uVar14 = uVar16 & uVar11 & 0x3ffffff | uVar14 & uVar7;
  uVar15 = uVar17 & uVar11 & 0x3ffffff | uVar15 & uVar7;
  uVar6 = uVar5 & uVar11 & 0x3ffffff | uVar10 & uVar7;
  uVar7 = uVar7 & uVar2 & 0x3ffffff | uVar11 & uVar8;
  *(uint *)(uVar9 + 0x24) = uVar3;
  *(uint *)(uVar9 + 0x28) = uVar15;
  *(uint *)(uVar9 + 0x2c) = uVar14;
  *(uint *)(uVar9 + 0x30) = uVar6;
  *(uint *)(uVar9 + 0x34) = uVar7;
  if ((piVar12 <= &iStack_30 || local_2c <= piVar12) &&
     ((piVar13 = (int *)(uVar9 + 0x50), &iStack_30 <= piVar12 || (piVar13 <= &iStack_30)))) {
    uVar2 = *(uint *)(uVar9 + 0x4c);
    if ((&iStack_30 <= piVar13 || piVar13 <= &iStack_34) &&
       ((piVar12 = (int *)(uVar9 + 0x54), &iStack_34 <= piVar13 || (piVar12 <= &iStack_34)))) {
      uVar5 = *(uint *)(uVar9 + 0x50);
      if ((piVar12 <= &iStack_38 || &iStack_34 <= piVar12) &&
         ((piVar13 = (int *)(uVar9 + 0x58), &iStack_38 <= piVar12 || (piVar13 <= &iStack_38)))) {
        uVar8 = *(uint *)(uVar9 + 0x54);
        if ((&iStack_38 <= piVar13 || piVar13 <= &iStack_3c) &&
           ((&iStack_3c <= piVar13 || ((int *)(uVar9 + 0x5c) <= &iStack_3c)))) {
          iVar4 = *(int *)(uVar9 + 0x58);
          if ((&iStack_40 <= param_2) || (param_2 + 1 <= &iStack_40)) {
            uVar3 = uVar3 | uVar15 << 0x1a;
            if (&iStack_3c <= param_2 || param_2 <= &iStack_40) {
              piVar12 = param_2 + 1;
              *param_2 = uVar3 + uVar2;
              if ((&iStack_44 <= piVar12) || (param_2 + 2 <= &iStack_44)) {
                uVar10 = uVar14 << 0x14 | uVar15 >> 6;
                uVar11 = uVar10 + uVar5;
                uVar9 = (uint)CARRY4(uVar3,uVar2);
                uVar2 = (uint)CARRY4(uVar10,uVar5) + (uint)CARRY4(uVar9,uVar11);
                if (&iStack_40 <= piVar12 || piVar12 <= &iStack_44) {
                  piVar12 = param_2 + 2;
                  param_2[1] = uVar9 + uVar11;
                  if ((&iStack_48 <= piVar12) || (param_2 + 3 <= &iStack_48)) {
                    uVar9 = uVar6 << 0xe | uVar14 >> 0xc;
                    uVar3 = uVar9 + uVar8;
                    if (&iStack_44 <= piVar12 || piVar12 <= &iStack_48) {
                      piVar12 = param_2 + 3;
                      param_2[2] = uVar2 + uVar3;
                      if (((&iStack_4c <= piVar12) || (param_2 + 4 <= &iStack_4c)) &&
                         (piVar12 <= &iStack_4c || &iStack_48 <= piVar12)) {
                        param_2[3] = (uint)CARRY4(uVar9,uVar8) + (uint)CARRY4(uVar2,uVar3) +
                                     (uVar7 << 8 | uVar6 >> 0x12) + iVar4;
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
        }
      }
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0,0x1838f24);
  (*pcVar1)();
}

