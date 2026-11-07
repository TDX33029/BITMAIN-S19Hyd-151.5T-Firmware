// FUN_01649264 @ 01649264 size=336 calls_out=5 calls_in=1
// strings: 

void FUN_01649264(uint *param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  uint local_2c;
  uint local_28;
  uint local_24;
  
  iVar4 = param_3 << 2;
  if (param_3 == 0) {
    uVar6 = 0;
    uVar2 = 4;
  }
  else {
    uVar2 = FUN_01298504(iVar4,4);
    uVar6 = param_3;
    if (uVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(4,iVar4);
    }
  }
  piVar3 = (int *)FUN_01bed4e2(uVar2,param_2,iVar4);
  bVar7 = param_3 == 0;
  if (!bVar7) {
    piVar3 = (int *)(uVar2 + param_3 * 4 + -4);
    bVar7 = piVar3 == (int *)0x0;
  }
  local_24 = param_3;
  if ((!bVar7) && (local_24 = param_3, *piVar3 == 0)) {
    iVar4 = param_3 * -4;
    uVar1 = param_3;
    do {
      uVar5 = uVar1;
      if (iVar4 == 0) {
        uVar5 = 0;
        goto LAB_016493a4;
      }
      piVar3 = (int *)((uVar2 - 4) - iVar4);
      iVar4 = iVar4 + 4;
      uVar1 = uVar5 - 1;
    } while (*piVar3 == 0);
    local_24 = param_3;
    if (uVar5 <= param_3) {
LAB_016493a4:
      local_24 = uVar5;
    }
  }
  local_2c = uVar6;
  local_28 = uVar2;
  if ((local_24 < uVar6 >> 2) && (iVar4 = FUN_0164bb38(&local_2c,local_24), iVar4 != -0x7fffffff)) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620();
  }
  if (local_24 == 0) {
    *param_1 = 0;
    param_1[1] = 4;
    param_1[2] = 0;
    param_1[3] = 1;
    FUN_0134aee0(local_2c,local_28,4,4);
    return;
  }
  *param_1 = local_2c;
  *(undefined1 *)(param_1 + 3) = 2;
  param_1[1] = local_28;
  param_1[2] = local_24;
  return;
}

