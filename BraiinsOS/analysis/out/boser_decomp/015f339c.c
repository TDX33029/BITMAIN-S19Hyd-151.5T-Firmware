// FUN_015f339c @ 015f339c size=544 calls_out=4 calls_in=2
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_015f339c(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  uint *puVar6;
  int iVar7;
  uint *puVar8;
  uint *puVar9;
  uint uVar10;
  int *local_54;
  int local_50;
  undefined4 local_48;
  undefined4 local_44;
  int local_40;
  int *local_3c;
  int local_38;
  int local_30;
  int local_2c;
  int local_28;
  
  puVar6 = *(uint **)(param_2 + 0x20);
  iVar7 = *(int *)(param_2 + 0x2c);
  puVar9 = puVar6 + 1;
  uVar10 = ~*puVar6 & 0x80808080;
  local_48 = param_3;
  local_44 = param_4;
  do {
    if (iVar7 == 0) {
      *param_1 = 0;
      param_1[1] = 4;
      param_1[2] = 0;
      return;
    }
    puVar8 = puVar9;
    if (uVar10 == 0) {
      do {
        puVar9 = puVar8 + 1;
        uVar10 = *puVar8;
        puVar6 = puVar6 + -0x18;
        puVar8 = puVar9;
      } while ((uVar10 & 0x80808080) == 0x80808080);
      uVar10 = uVar10 & 0x80808080 ^ 0x80808080;
    }
    uVar1 = (uint)LZCOUNT(uVar10 << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 |
                          (uVar10 >> 0x10 & 0xff) << 8 | uVar10 >> 0x18) >> 3;
    FUN_015f2c9c(&local_30,&local_48,puVar6[uVar1 * -6 + -5],puVar6[uVar1 * -6 + -4],
                 puVar6[uVar1 * -6 + -2],puVar6[uVar1 * -6 + -1]);
    iVar4 = local_28;
    iVar3 = local_2c;
    iVar2 = local_30;
    uVar10 = uVar10 - 1 & uVar10;
    iVar7 = iVar7 + -1;
  } while (local_30 == -0x80000000);
  local_54 = (int *)thunk_FUN_01be5118(0x30);
  if (local_54 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(4,0x30);
  }
  *local_54 = iVar2;
  local_54[2] = iVar4;
  local_54[1] = iVar3;
  local_50 = 1;
  local_40 = 4;
  local_38 = 1;
  local_3c = local_54;
  while (iVar7 != 0) {
    puVar8 = puVar9;
    if (uVar10 == 0) {
      do {
        puVar9 = puVar8 + 1;
        uVar10 = *puVar8;
        puVar6 = puVar6 + -0x18;
        puVar8 = puVar9;
      } while ((uVar10 & 0x80808080) == 0x80808080);
      uVar10 = uVar10 & 0x80808080 ^ 0x80808080;
    }
    uVar1 = (uint)LZCOUNT(uVar10 << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 |
                          (uVar10 >> 0x10 & 0xff) << 8 | uVar10 >> 0x18) >> 3;
    FUN_015f2c9c(&local_30,&local_48,puVar6[uVar1 * -6 + -5],puVar6[uVar1 * -6 + -4],
                 puVar6[uVar1 * -6 + -2],puVar6[uVar1 * -6 + -1]);
    iVar4 = local_28;
    iVar3 = local_2c;
    iVar2 = local_30;
    uVar10 = uVar10 - 1 & uVar10;
    iVar7 = iVar7 + -1;
    if (local_30 != -0x80000000) {
      if (local_50 == local_40) {
        FUN_006520b4(&local_40,local_50,1,4,0xc);
        local_54 = local_3c;
      }
      local_38 = local_50 + 1;
      piVar5 = local_54 + local_50 * 3;
      *piVar5 = iVar2;
      piVar5[1] = iVar3;
      piVar5[2] = iVar4;
      local_50 = local_38;
    }
  }
  *param_1 = local_40;
  param_1[1] = (int)local_3c;
  param_1[2] = local_38;
  return;
}

