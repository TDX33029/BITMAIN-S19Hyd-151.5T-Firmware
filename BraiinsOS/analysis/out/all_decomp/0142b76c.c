// FUN_0142b76c @ 0142b76c size=544 calls_out=3 calls_in=4
// strings: 

void FUN_0142b76c(undefined4 *param_1,int *param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  uint *puVar8;
  undefined1 uVar9;
  undefined4 uVar10;
  int *piVar11;
  uint uVar12;
  uint uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  int iVar17;
  int local_64;
  byte local_50;
  undefined4 local_3c;
  int local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  uVar1 = FUN_01441568(param_2[4],param_2[5],param_2[6],param_2[7],param_3);
  uVar5 = uVar1 >> 0x19;
  iVar17 = *param_2;
  uVar12 = param_2[1];
  local_64 = 0;
  while( true ) {
    uVar1 = uVar12 & uVar1;
    uVar2 = *(uint *)(iVar17 + uVar1);
    uVar3 = uVar2 ^ uVar5 * 0x1010101;
    uVar3 = ~uVar3 & 0x80808080 & uVar3 + 0xfefefeff;
    while (uVar3 != 0) {
      uVar13 = uVar1 + ((uint)LZCOUNT(uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 |
                                      (uVar3 >> 0x10 & 0xff) << 8 | uVar3 >> 0x18) >> 3) & uVar12;
      iVar4 = FUN_014c953c(param_3,iVar17 + -0x28 + uVar13 * -0x28);
      uVar3 = uVar3 - 1 & uVar3;
      if (iVar4 != 0) {
        iVar4 = ((int)(uVar13 * 0x28) >> 3) * -0x33333333;
        puVar8 = (uint *)(iVar17 + (iVar4 - 4U & uVar12));
        uVar5 = *puVar8;
        uVar1 = *(uint *)(iVar17 + iVar4) & 0x80808080 & *(uint *)(iVar17 + iVar4) << 1;
        uVar9 = 0x80;
        if (((uint)LZCOUNT(uVar1 << 0x18 | (uVar1 >> 8 & 0xff) << 0x10 | (uVar1 >> 0x10 & 0xff) << 8
                           | uVar1 >> 0x18) >> 3) +
            ((uint)LZCOUNT(uVar5 & 0x80808080 & uVar5 << 1) >> 3) < 4) {
          param_2[2] = param_2[2] + 1;
          uVar9 = 0xff;
        }
        iVar6 = iVar17 + uVar13 * -0x28;
        *(undefined1 *)(iVar17 + iVar4) = uVar9;
        iVar17 = param_2[3];
        *(undefined1 *)(puVar8 + 1) = uVar9;
        param_2[3] = iVar17 + -1;
        piVar11 = *(int **)(iVar6 + -0x24);
        iVar17 = *(int *)(iVar6 + -0x20);
        uVar14 = *(undefined4 *)(iVar6 + -0x1c);
        uVar15 = *(undefined4 *)(iVar6 + -0x18);
        local_3c = *(undefined4 *)(iVar6 + -0x14);
        local_38 = *(int *)(iVar6 + -0x10);
        uStack_34 = *(undefined4 *)(iVar6 + -0xc);
        uStack_30 = *(undefined4 *)(iVar6 + -8);
        uStack_2c = *(undefined4 *)(iVar6 + -4);
        if (local_38 != -0x80000000) {
          uVar10 = *(undefined4 *)(iVar6 + -0xc);
          uVar16 = *(undefined4 *)(iVar6 + -8);
          local_50 = (byte)*(undefined4 *)(iVar6 + -0x28);
          uVar7 = *(undefined4 *)(iVar6 + -4);
          *param_1 = *(undefined4 *)(iVar6 + -0x10);
          param_1[1] = uVar10;
          param_1[2] = uVar16;
          param_1[3] = uVar7;
          if (1 < local_50) {
            (**(code **)(*piVar11 + 0x10))(piVar11 + 3,piVar11[1],piVar11[2]);
            thunk_FUN_016d3fb4(piVar11);
          }
          (**(code **)(iVar17 + 0x10))(&local_3c,uVar14,uVar15);
          return;
        }
        goto LAB_0142b91c;
      }
    }
    if ((uVar2 & 0x80808080 & uVar2 << 1) != 0) break;
    local_64 = local_64 + 4;
    uVar1 = uVar1 + local_64;
  }
LAB_0142b91c:
  *param_1 = 0x80000000;
  return;
}

