// FUN_0002bc14 @ 0002bc14  size=1080  callers=2
// program: cgminer


void FUN_0002bc14(int param_1,int param_2)

{
  void *pvVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  int iVar11;
  uint local_2c;
  
  *(int *)(param_1 + 0x168) = *(int *)(param_1 + 0x168) + 1;
  *(int *)(param_2 + 0x16c) = param_2 + 0x154;
  *(undefined4 *)(param_2 + 0x170) = 4;
  uVar2 = *(byte *)(param_2 + 0x154) + 0x112410d + (uint)*(byte *)(param_2 + 0x157) * 0x1000000 +
          (uint)*(byte *)(param_2 + 0x156) * 0x10000 + (uint)*(byte *)(param_2 + 0x155) * 0x100 ^
          0x7f76d;
  uVar6 = 0x9f49bac6 - uVar2 ^ uVar2 << 8;
  uVar3 = (-0x112410d - uVar2) - uVar6 ^ uVar6 >> 0xd;
  uVar2 = (uVar2 - uVar6) - uVar3 ^ uVar3 >> 0xc;
  uVar6 = (uVar6 - uVar3) - uVar2 ^ uVar2 << 0x10;
  uVar3 = (uVar3 - uVar2) - uVar6 ^ uVar6 >> 5;
  uVar2 = (uVar2 - uVar6) - uVar3 ^ uVar3 >> 3;
  uVar6 = (uVar6 - uVar3) - uVar2 ^ uVar2 << 10;
  uVar2 = (uVar3 - uVar2) - uVar6 ^ uVar6 >> 0xf;
  *(uint *)(param_2 + 0x174) = uVar2;
  if (*(int *)(param_1 + 0x160) == 0) {
    *(undefined4 *)(param_2 + 0x160) = 0;
    *(undefined4 *)(param_2 + 0x15c) = 0;
    *(int *)(param_1 + 0x160) = param_2;
    pvVar1 = malloc(0x2c);
    *(void **)(param_2 + 0x158) = pvVar1;
    pvVar1 = *(void **)(*(int *)(param_1 + 0x160) + 0x158);
    if (pvVar1 == (void *)0x0) goto LAB_0002c044;
    memset(pvVar1,0,0x2c);
    piVar5 = (int *)(*(int *)(param_1 + 0x160) + 0x158);
    *(int **)(*piVar5 + 0x10) = piVar5;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x160) + 0x158) + 4) = 0x20;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x160) + 0x158) + 8) = 5;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x160) + 0x158) + 0x14) = 0x158;
    puVar10 = *(undefined4 **)(*(int *)(param_1 + 0x160) + 0x158);
    pvVar1 = malloc(0x180);
    *puVar10 = pvVar1;
    pvVar1 = (void *)**(undefined4 **)(*(int *)(param_1 + 0x160) + 0x158);
    if (pvVar1 == (void *)0x0) goto LAB_0002c044;
    memset(pvVar1,0,0x180);
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x160) + 0x158) + 0x28) = 0xa0111fe1;
  }
  else {
    uVar7 = *(undefined4 *)(*(int *)(param_1 + 0x160) + 0x158);
    *(undefined4 *)(param_2 + 0x160) = 0;
    *(undefined4 *)(param_2 + 0x158) = uVar7;
    iVar4 = *(int *)(*(int *)(param_1 + 0x160) + 0x158);
    *(int *)(param_2 + 0x15c) = *(int *)(iVar4 + 0x10) - *(int *)(iVar4 + 0x14);
    *(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x160) + 0x158) + 0x10) + 8) = param_2;
    *(int *)(*(int *)(*(int *)(param_1 + 0x160) + 0x158) + 0x10) = param_2 + 0x158;
  }
  iVar4 = *(int *)(*(int *)(param_1 + 0x160) + 0x158);
  *(int *)(iVar4 + 0xc) = *(int *)(iVar4 + 0xc) + 1;
  piVar5 = *(int **)(*(int *)(param_1 + 0x160) + 0x158);
  iVar4 = (uVar2 & piVar5[1] - 1U) * 0xc;
  iVar8 = *piVar5 + iVar4;
  *(int *)(iVar8 + 4) = *(int *)(iVar8 + 4) + 1;
  uVar7 = *(undefined4 *)(**(int **)(*(int *)(param_1 + 0x160) + 0x158) + iVar4);
  *(undefined4 *)(param_2 + 0x164) = 0;
  *(undefined4 *)(param_2 + 0x168) = uVar7;
  iVar8 = **(int **)(*(int *)(param_1 + 0x160) + 0x158);
  if (*(int *)(iVar8 + iVar4) != 0) {
    *(int *)(*(int *)(iVar8 + iVar4) + 0xc) = param_2 + 0x158;
    iVar8 = **(int **)(*(int *)(param_1 + 0x160) + 0x158);
  }
  *(int *)(iVar8 + iVar4) = param_2 + 0x158;
  iVar4 = **(int **)(*(int *)(param_1 + 0x160) + 0x158) + iVar4;
  if (((uint)((*(int *)(iVar4 + 8) + 1) * 10) <= *(uint *)(iVar4 + 4)) &&
     (iVar4 = *(int *)(param_2 + 0x158), *(int *)(iVar4 + 0x24) != 1)) {
    pvVar1 = calloc(*(int *)(iVar4 + 4) * 0x18,1);
    if (pvVar1 == (void *)0x0) {
LAB_0002c044:
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    iVar8 = 0;
    *(uint *)(iVar4 + 0x18) =
         (uint)((*(int *)(iVar4 + 4) * 2 - 1U & *(uint *)(iVar4 + 0xc)) != 0) +
         (*(uint *)(iVar4 + 0xc) >> (*(int *)(iVar4 + 8) + 1U & 0xff));
    *(undefined4 *)(*(int *)(param_2 + 0x158) + 0x1c) = 0;
    piVar5 = *(int **)(param_2 + 0x158);
    uVar2 = piVar5[1];
    if (uVar2 != 0) {
      local_2c = 0;
      do {
        iVar4 = *(int *)(*piVar5 + iVar8);
        if (*(int *)(*piVar5 + iVar8) != 0) {
          while( true ) {
            iVar11 = *(int *)(iVar4 + 0x10);
            uVar3 = uVar2 * 2 - 1 & *(uint *)(iVar4 + 0x1c);
            uVar2 = *(int *)((int)pvVar1 + uVar3 * 0xc + 4) + 1;
            *(uint *)((int)pvVar1 + uVar3 * 0xc + 4) = uVar2;
            if ((uint)piVar5[6] < uVar2) {
              piVar5[7] = piVar5[7] + 1;
              uVar7 = FUN_0004a488(*(undefined4 *)((int)pvVar1 + uVar3 * 0xc + 4),
                                   *(undefined4 *)(*(int *)(param_2 + 0x158) + 0x18));
              *(undefined4 *)((int)pvVar1 + uVar3 * 0xc + 8) = uVar7;
            }
            *(undefined4 *)(iVar4 + 0xc) = 0;
            *(undefined4 *)(iVar4 + 0x10) = *(undefined4 *)((int)pvVar1 + uVar3 * 0xc);
            iVar9 = *(int *)((int)pvVar1 + uVar3 * 0xc);
            if (iVar9 != 0) {
              *(int *)(iVar9 + 0xc) = iVar4;
            }
            *(int *)((int)pvVar1 + uVar3 * 0xc) = iVar4;
            piVar5 = *(int **)(param_2 + 0x158);
            if (iVar11 == 0) break;
            uVar2 = piVar5[1];
            iVar4 = iVar11;
          }
          uVar2 = piVar5[1];
        }
        iVar8 = iVar8 + 0xc;
        local_2c = local_2c + 1;
      } while (local_2c < uVar2);
    }
    free((void *)*piVar5);
    *(int *)(*(int *)(param_2 + 0x158) + 4) = *(int *)(*(int *)(param_2 + 0x158) + 4) << 1;
    *(int *)(*(int *)(param_2 + 0x158) + 8) = *(int *)(*(int *)(param_2 + 0x158) + 8) + 1;
    **(undefined4 **)(param_2 + 0x158) = pvVar1;
    iVar4 = *(int *)(param_2 + 0x158);
    if (*(uint *)(iVar4 + 0xc) >> 1 < *(uint *)(iVar4 + 0x1c)) {
      iVar8 = *(int *)(iVar4 + 0x20) + 1;
    }
    else {
      iVar8 = 0;
    }
    *(int *)(iVar4 + 0x20) = iVar8;
    if (1 < *(uint *)(*(int *)(param_2 + 0x158) + 0x20)) {
      *(undefined4 *)(*(int *)(param_2 + 0x158) + 0x24) = 1;
    }
  }
  return;
}

