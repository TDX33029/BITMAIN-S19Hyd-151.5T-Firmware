// FUN_01646fc8 @ 01646fc8 size=248 calls_out=4 calls_in=3
// strings: 

void FUN_01646fc8(uint *param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  bool bVar7;
  uint local_40;
  uint *local_3c;
  uint local_38;
  uint local_30;
  uint *local_2c;
  uint local_28;
  
  FUN_0164a964(&local_40,param_3 + param_5 + 1);
  FUN_016470f4(local_3c,local_38,param_2,param_3,param_4,param_5);
  local_30 = local_40;
  local_2c = local_3c;
  local_28 = local_38;
  bVar7 = local_38 == 0;
  puVar5 = local_3c;
  puVar1 = &local_30;
  if (!bVar7) {
    puVar5 = local_3c + (local_38 - 1);
    bVar7 = puVar5 == (uint *)0x0;
    puVar1 = local_3c;
  }
  if ((!bVar7) && (*puVar5 == 0)) {
    iVar4 = local_38 << 2;
    uVar3 = local_38 & 0x3fffffff;
    do {
      uVar6 = uVar3;
      if (iVar4 == 0) {
        uVar6 = 0;
        goto LAB_016470b0;
      }
      iVar2 = iVar4 + -4;
      iVar4 = iVar4 + -4;
      uVar3 = uVar6 - 1;
    } while (*(int *)((int)puVar1 + iVar2) == 0);
    if (uVar6 <= local_38) {
LAB_016470b0:
      local_28 = uVar6;
    }
  }
  if ((local_28 < local_40 >> 2) && (iVar4 = FUN_0164bb38(&local_30), iVar4 != -0x7fffffff)) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620();
  }
  *param_1 = local_30;
  param_1[1] = (uint)local_2c;
  param_1[2] = local_28;
  return;
}

