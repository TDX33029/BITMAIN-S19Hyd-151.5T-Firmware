// FUN_01b82fe4 @ 01b82fe4 size=776 calls_out=3 calls_in=4
// strings: 

/* WARNING: Removing unreachable block (ram,0x01b82dd0) */
/* WARNING: Removing unreachable block (ram,0x01b82dd8) */

uint FUN_01b82fe4(undefined4 param_1,int *param_2,uint *param_3,uint param_4,uint param_5,
                 uint param_6)

{
  uint *puVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  byte *pbVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  
  if (param_4 < 0x5dc) {
    uVar2 = FUN_01b82f2c();
    return uVar2;
  }
  if ((param_5 & 3) != 0) {
    return 0xffffffff;
  }
  if (param_6 < 0x1000) {
    return 0xffffffbe;
  }
  iVar4 = *param_2;
  if (param_4 == 0) {
    FUN_01bed93e(param_1,0);
    *param_2 = 0;
    uVar2 = 0;
  }
  else {
    FUN_01bed93e(param_5,0,0x1000);
    iVar7 = param_5 + 0x400;
    iVar8 = param_5 + 0x800;
    iVar9 = param_5 + 0xc00;
    puVar1 = (uint *)((int)param_3 + (param_4 - 0xf));
    uVar2 = *param_3;
    for (puVar3 = param_3 + 1; puVar3 < puVar1; puVar3 = puVar3 + 4) {
      uVar6 = *puVar3;
      *(int *)(param_5 + (uVar2 & 0xff) * 4) = *(int *)(param_5 + (uVar2 & 0xff) * 4) + 1;
      uVar10 = (uVar2 & 0xffff) >> 8;
      *(int *)(iVar7 + uVar10 * 4) = *(int *)(iVar7 + uVar10 * 4) + 1;
      uVar10 = (uVar2 & 0xffffff) >> 0x10;
      *(int *)(iVar8 + uVar10 * 4) = *(int *)(iVar8 + uVar10 * 4) + 1;
      *(int *)(iVar9 + (uVar2 >> 0x18) * 4) = *(int *)(iVar9 + (uVar2 >> 0x18) * 4) + 1;
      uVar2 = puVar3[1];
      *(int *)(param_5 + (uVar6 & 0xff) * 4) = *(int *)(param_5 + (uVar6 & 0xff) * 4) + 1;
      uVar10 = (uVar6 & 0xffff) >> 8;
      *(int *)(iVar7 + uVar10 * 4) = *(int *)(iVar7 + uVar10 * 4) + 1;
      uVar10 = (uVar6 & 0xffffff) >> 0x10;
      *(int *)(iVar8 + uVar10 * 4) = *(int *)(iVar8 + uVar10 * 4) + 1;
      *(int *)(iVar9 + (uVar6 >> 0x18) * 4) = *(int *)(iVar9 + (uVar6 >> 0x18) * 4) + 1;
      uVar6 = puVar3[2];
      *(int *)(param_5 + (uVar2 & 0xff) * 4) = *(int *)(param_5 + (uVar2 & 0xff) * 4) + 1;
      uVar10 = (uVar2 & 0xffff) >> 8;
      *(int *)(iVar7 + uVar10 * 4) = *(int *)(iVar7 + uVar10 * 4) + 1;
      uVar10 = (uVar2 & 0xffffff) >> 0x10;
      *(int *)(iVar8 + uVar10 * 4) = *(int *)(iVar8 + uVar10 * 4) + 1;
      *(int *)(iVar9 + (uVar2 >> 0x18) * 4) = *(int *)(iVar9 + (uVar2 >> 0x18) * 4) + 1;
      uVar2 = puVar3[3];
      *(int *)(param_5 + (uVar6 & 0xff) * 4) = *(int *)(param_5 + (uVar6 & 0xff) * 4) + 1;
      uVar10 = (uVar6 & 0xffff) >> 8;
      *(int *)(iVar7 + uVar10 * 4) = *(int *)(iVar7 + uVar10 * 4) + 1;
      uVar10 = (uVar6 & 0xffffff) >> 0x10;
      *(int *)(iVar8 + uVar10 * 4) = *(int *)(iVar8 + uVar10 * 4) + 1;
      *(int *)(iVar9 + (uVar6 >> 0x18) * 4) = *(int *)(iVar9 + (uVar6 >> 0x18) * 4) + 1;
    }
    uVar2 = param_4 - 4 & 0xfffffff0;
    if (puVar1 < (uint *)((int)param_3 + -0xb)) {
      uVar2 = 0;
    }
    for (pbVar5 = (byte *)((int)(param_3 + 1) + (uVar2 - 4));
        pbVar5 < (byte *)((int)param_3 + param_4); pbVar5 = pbVar5 + 1) {
      *(int *)(param_5 + (uint)*pbVar5 * 4) = *(int *)(param_5 + (uint)*pbVar5 * 4) + 1;
    }
    uVar2 = 0;
    puVar3 = (uint *)(param_5 - 4);
    do {
      puVar1 = puVar3 + 1;
      uVar6 = *puVar1 + puVar3[0x101] + puVar3[0x201] + puVar3[0x301];
      *puVar1 = uVar6;
      if (uVar2 < uVar6) {
        uVar2 = uVar6;
      }
      puVar3 = puVar1;
    } while (puVar1 != (uint *)(param_5 + 0x3fc));
    for (iVar7 = 0xff; *(int *)(param_5 + iVar7 * 4) == 0; iVar7 = iVar7 + -1) {
    }
    *param_2 = iVar7;
    FUN_01bed864(param_1,param_5,(iVar4 + 1) * 4);
  }
  return uVar2;
}

