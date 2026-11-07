// FUN_0149295c @ 0149295c size=492 calls_out=3 calls_in=2
// strings: 

void FUN_0149295c(int *param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  int iVar7;
  undefined1 uVar8;
  int *piVar9;
  int iVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  uint uVar14;
  int local_50;
  undefined4 auStack_2c [2];
  
  uVar1 = FUN_014c854c(param_1[4],param_1[5],param_1[6],param_1[7],param_2);
  uVar6 = uVar1 >> 0x19;
  iVar10 = *param_1;
  uVar14 = param_1[1];
  local_50 = 0;
  do {
    uVar1 = uVar14 & uVar1;
    uVar2 = *(uint *)(iVar10 + uVar1);
    uVar3 = uVar2 ^ uVar6 * 0x1010101;
    uVar3 = ~uVar3 & 0x80808080 & uVar3 + 0xfefefeff;
    while (uVar3 != 0) {
      uVar11 = uVar1 + ((uint)LZCOUNT(uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 |
                                      (uVar3 >> 0x10 & 0xff) << 8 | uVar3 >> 0x18) >> 3) & uVar14;
      iVar4 = FUN_014c953c(param_2,iVar10 + -0x18 + uVar11 * -0x18);
      uVar3 = uVar3 - 1 & uVar3;
      if (iVar4 != 0) {
        iVar4 = ((int)(uVar11 * 0x18) >> 3) * -0x55555555;
        puVar5 = (uint *)(iVar10 + (iVar4 - 4U & uVar14));
        uVar1 = *puVar5;
        uVar6 = *(uint *)(iVar10 + iVar4) & 0x80808080 & *(uint *)(iVar10 + iVar4) << 1;
        uVar8 = 0x80;
        if (((uint)LZCOUNT(uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8
                           | uVar6 >> 0x18) >> 3) +
            ((uint)LZCOUNT(uVar1 & 0x80808080 & uVar1 << 1) >> 3) < 4) {
          param_1[2] = param_1[2] + 1;
          uVar8 = 0xff;
        }
        iVar7 = iVar10 + uVar11 * -0x18;
        *(undefined1 *)(iVar10 + iVar4) = uVar8;
        iVar10 = param_1[3];
        *(undefined1 *)(puVar5 + 1) = uVar8;
        param_1[3] = iVar10 + -1;
        piVar9 = *(int **)(iVar7 + -0x14);
        iVar10 = *(int *)(iVar7 + -0x10);
        uVar12 = *(undefined4 *)(iVar7 + -0xc);
        uVar13 = *(undefined4 *)(iVar7 + -8);
        auStack_2c[0] = *(undefined4 *)(iVar7 + -4);
        uVar6 = *(uint *)(iVar7 + -0x18) & 0xff;
        if (uVar6 == 3) {
          return;
        }
        if (1 < uVar6) {
          (**(code **)(*piVar9 + 0x10))(piVar9 + 3,piVar9[1],piVar9[2]);
          thunk_FUN_016d3fb4(piVar9);
        }
        (**(code **)(iVar10 + 0x10))(auStack_2c,uVar12,uVar13);
        return;
      }
    }
    if ((uVar2 & 0x80808080 & uVar2 << 1) != 0) {
      return;
    }
    local_50 = local_50 + 4;
    uVar1 = uVar1 + local_50;
  } while( true );
}

