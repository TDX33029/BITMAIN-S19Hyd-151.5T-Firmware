// FUN_01b83060 @ 01b83060 size=136 calls_out=1 calls_in=4
// strings: 

ulonglong FUN_01b83060(undefined4 param_1,uint *param_2,uint *param_3,int param_4,uint param_5,
                      uint param_6)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  ulonglong uVar11;
  
  if ((param_5 & 3) != 0) {
    return 0xffffffff;
  }
  if (param_6 < 0x1000) {
    return 0xffffffbe;
  }
  if (0xfe < *param_2) {
    *param_2 = 0xff;
    uVar11 = FUN_01b82fe4();
    return uVar11;
  }
  uVar3 = *param_2;
  if (param_4 == 0) {
    FUN_01bed93e(param_1,0);
    *param_2 = 0;
    uVar4 = 0;
  }
  else {
    FUN_01bed93e(param_5,0,0x1000);
    iVar7 = param_5 + 0x400;
    iVar8 = param_5 + 0x800;
    iVar9 = param_5 + 0xc00;
    puVar1 = (uint *)((int)param_3 + param_4 + -0xf);
    uVar4 = *param_3;
    for (puVar2 = param_3 + 1; puVar2 < puVar1; puVar2 = puVar2 + 4) {
      uVar6 = *puVar2;
      *(int *)(param_5 + (uVar4 & 0xff) * 4) = *(int *)(param_5 + (uVar4 & 0xff) * 4) + 1;
      uVar10 = (uVar4 & 0xffff) >> 8;
      *(int *)(iVar7 + uVar10 * 4) = *(int *)(iVar7 + uVar10 * 4) + 1;
      uVar10 = (uVar4 & 0xffffff) >> 0x10;
      *(int *)(iVar8 + uVar10 * 4) = *(int *)(iVar8 + uVar10 * 4) + 1;
      *(int *)(iVar9 + (uVar4 >> 0x18) * 4) = *(int *)(iVar9 + (uVar4 >> 0x18) * 4) + 1;
      uVar4 = puVar2[1];
      *(int *)(param_5 + (uVar6 & 0xff) * 4) = *(int *)(param_5 + (uVar6 & 0xff) * 4) + 1;
      uVar10 = (uVar6 & 0xffff) >> 8;
      *(int *)(iVar7 + uVar10 * 4) = *(int *)(iVar7 + uVar10 * 4) + 1;
      uVar10 = (uVar6 & 0xffffff) >> 0x10;
      *(int *)(iVar8 + uVar10 * 4) = *(int *)(iVar8 + uVar10 * 4) + 1;
      *(int *)(iVar9 + (uVar6 >> 0x18) * 4) = *(int *)(iVar9 + (uVar6 >> 0x18) * 4) + 1;
      uVar6 = puVar2[2];
      *(int *)(param_5 + (uVar4 & 0xff) * 4) = *(int *)(param_5 + (uVar4 & 0xff) * 4) + 1;
      uVar10 = (uVar4 & 0xffff) >> 8;
      *(int *)(iVar7 + uVar10 * 4) = *(int *)(iVar7 + uVar10 * 4) + 1;
      uVar10 = (uVar4 & 0xffffff) >> 0x10;
      *(int *)(iVar8 + uVar10 * 4) = *(int *)(iVar8 + uVar10 * 4) + 1;
      *(int *)(iVar9 + (uVar4 >> 0x18) * 4) = *(int *)(iVar9 + (uVar4 >> 0x18) * 4) + 1;
      uVar4 = puVar2[3];
      *(int *)(param_5 + (uVar6 & 0xff) * 4) = *(int *)(param_5 + (uVar6 & 0xff) * 4) + 1;
      uVar10 = (uVar6 & 0xffff) >> 8;
      *(int *)(iVar7 + uVar10 * 4) = *(int *)(iVar7 + uVar10 * 4) + 1;
      uVar10 = (uVar6 & 0xffffff) >> 0x10;
      *(int *)(iVar8 + uVar10 * 4) = *(int *)(iVar8 + uVar10 * 4) + 1;
      *(int *)(iVar9 + (uVar6 >> 0x18) * 4) = *(int *)(iVar9 + (uVar6 >> 0x18) * 4) + 1;
    }
    uVar4 = param_4 - 4U & 0xfffffff0;
    if (puVar1 < (uint *)((int)param_3 + -0xb)) {
      uVar4 = 0;
    }
    for (pbVar5 = (byte *)((int)(param_3 + 1) + (uVar4 - 4));
        pbVar5 < (byte *)((int)param_3 + param_4); pbVar5 = pbVar5 + 1) {
      *(int *)(param_5 + (uint)*pbVar5 * 4) = *(int *)(param_5 + (uint)*pbVar5 * 4) + 1;
    }
    uVar4 = 0;
    puVar2 = (uint *)(param_5 - 4);
    do {
      puVar1 = puVar2 + 1;
      uVar6 = *puVar1 + puVar2[0x101] + puVar2[0x201] + puVar2[0x301];
      *puVar1 = uVar6;
      if (uVar4 < uVar6) {
        uVar4 = uVar6;
      }
      puVar2 = puVar1;
    } while (puVar1 != (uint *)(param_5 + 0x3fc));
    for (uVar6 = 0xff; *(int *)(param_5 + uVar6 * 4) == 0; uVar6 = uVar6 - 1) {
    }
    if (*param_2 < uVar6) {
      uVar4 = 0xffffffd0;
    }
    else {
      *param_2 = uVar6;
      FUN_01bed864(param_1,param_5,(uVar3 + 1) * 4);
    }
  }
  return (ulonglong)uVar4;
}

