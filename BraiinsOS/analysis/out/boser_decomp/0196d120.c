// FUN_0196d120 @ 0196d120 size=612 calls_out=1 calls_in=1
// strings: 

void FUN_0196d120(int *param_1,uint *param_2,int *param_3,undefined1 param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34 [4];
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(param_4) {
  case 0:
    iVar5 = 0;
    do {
      local_34[iVar5] = 0x5a827999;
      iVar5 = iVar5 + 1;
    } while (iVar5 != 4);
    iVar9 = param_3[1];
    iVar5 = param_3[2];
    iVar10 = param_3[3];
    uVar1 = *param_2;
    uVar2 = param_2[1];
    uVar3 = param_2[2];
    uVar8 = param_2[3];
    uVar4 = local_34[0] + *param_3 + (uVar1 >> 0x1b | uVar1 << 5) + (uVar3 & uVar2 | uVar8 & ~uVar2)
    ;
    param_1[3] = uVar4 >> 2 | uVar4 * 0x40000000;
    uVar8 = local_34[1] + iVar9 + uVar8 + (uVar1 & (uVar2 >> 2 | uVar2 << 0x1e) | uVar3 & ~uVar1) +
            (uVar4 >> 0x1b | uVar4 * 0x20);
    param_1[2] = uVar8 >> 2 | uVar8 * 0x40000000;
    uVar3 = local_34[2] + iVar5 + uVar3 +
            (uVar4 & (uVar1 >> 2 | uVar1 << 0x1e) | ~uVar4 & (uVar2 >> 2 | uVar2 << 0x1e)) +
            (uVar8 >> 0x1b | uVar8 * 0x20);
    param_1[1] = uVar3;
    *param_1 = local_34[3] + iVar10 + (uVar2 >> 2 | uVar2 << 0x1e) +
               (uVar8 & (uVar4 >> 2 | uVar4 * 0x40000000) | ~uVar8 & (uVar1 >> 2 | uVar1 << 0x1e)) +
               (uVar3 >> 0x1b | uVar3 * 0x20);
    return;
  case 1:
    iVar5 = 0;
    do {
      local_34[iVar5] = 0x6ed9eba1;
      iVar5 = iVar5 + 1;
    } while (iVar5 != 4);
    break;
  case 2:
    iVar5 = 0;
    do {
      local_34[iVar5] = -0x70e44324;
      iVar5 = iVar5 + 1;
    } while (iVar5 != 4);
    iVar5 = param_3[3];
    uVar6 = *param_2;
    uVar4 = param_2[1];
    uVar7 = param_2[2];
    uVar1 = param_2[3];
    uVar3 = local_34[0] + *param_3 + (uVar6 >> 0x1b | uVar6 << 5) +
            ((uVar1 ^ uVar7) & uVar4 ^ uVar1 & uVar7);
    uVar8 = uVar4 >> 2 | uVar4 << 0x1e;
    uVar2 = local_34[1] + param_3[1] + uVar1 +
            ((uVar7 ^ (uVar4 >> 2 | uVar4 << 0x1e)) & uVar6 ^ uVar7 & (uVar4 >> 2 | uVar4 << 0x1e))
            + (uVar3 >> 0x1b | uVar3 * 0x20);
    uVar1 = uVar3 >> 2 | uVar3 * 0x40000000;
    uVar8 = local_34[2] + param_3[2] + uVar7 +
            (uVar3 & (uVar8 ^ (uVar6 >> 2 | uVar6 << 0x1e)) ^ uVar8 & (uVar6 >> 2 | uVar6 << 0x1e))
            + (uVar2 >> 0x1b | uVar2 * 0x20);
    param_1[2] = uVar2 >> 2 | uVar2 * 0x40000000;
    param_1[3] = uVar1;
    *param_1 = local_34[3] + iVar5 + (uVar4 >> 2 | uVar4 << 0x1e) +
               (uVar2 & (uVar1 ^ (uVar6 >> 2 | uVar6 << 0x1e)) ^
               uVar1 & (uVar6 >> 2 | uVar6 << 0x1e)) + (uVar8 >> 0x1b | uVar8 * 0x20);
    param_1[1] = uVar8;
    return;
  case 3:
    iVar5 = 0;
    do {
      local_34[iVar5] = -0x359d3e2a;
      iVar5 = iVar5 + 1;
    } while (iVar5 != 4);
  }
  local_38 = local_34[3] + param_3[3];
  local_3c = local_34[2] + param_3[2];
  local_40 = local_34[1] + param_3[1];
  local_44 = local_34[0] + *param_3;
  FUN_0196d394(param_1,param_2,&local_44);
  return;
}

