// FUN_01a1795c @ 01a1795c size=504 calls_out=7 calls_in=1
// strings: broadcast channel capacity cannot be zero | broadcast channel capacity exceeded `usize::MAX / 2`

void FUN_01a1795c(undefined4 *param_1,uint param_2)

{
  uint uVar1;
  uint *puVar2;
  undefined1 *puVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  bool bVar8;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_30;
  uint local_2c;
  uint local_28;
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb100("broadcast channel capacity cannot be zero",0x53);
  }
  if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb100("broadcast channel capacity exceeded `usize::MAX / 2`",0x69);
  }
  uVar6 = 0;
  if (param_2 - 1 != 0) {
    param_2 = (0xffffffffU >> LZCOUNT(param_2 - 1)) + 1;
  }
  iVar7 = param_2 * 0x28;
  if (0x3333333 < param_2) {
LAB_01a179ac:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar6,iVar7);
  }
  if (iVar7 == 0) {
    uVar1 = 8;
    local_40 = 0;
  }
  else {
    uVar6 = 8;
    uVar1 = FUN_01298504(iVar7,8);
    local_40 = param_2;
    if (uVar1 == 0) goto LAB_01a179ac;
  }
  iVar7 = 0;
  local_38 = 0;
  local_3c = uVar1;
  do {
    uVar4 = local_38;
    bVar8 = local_38 < param_2;
    iVar5 = local_38 - param_2;
    if (local_38 == local_40) {
      FUN_007193b0(&local_40);
      uVar1 = local_3c;
    }
    local_38 = uVar4 + 1;
    puVar3 = (undefined1 *)(uVar1 + iVar7);
    *puVar3 = 0;
    iVar7 = iVar7 + 0x28;
    *(uint *)(puVar3 + 0xc) = -(uint)bVar8;
    *(int *)(puVar3 + 8) = iVar5;
    puVar3[0x14] = 0;
    *(undefined4 *)(puVar3 + 0x10) = 0;
  } while (param_2 != local_38);
  local_30 = local_40;
  local_2c = local_3c;
  local_28 = local_38;
  if ((local_38 < local_40) &&
     (iVar7 = FUN_01609230(&local_30,local_38,8,0x28), iVar7 != -0x7fffffff)) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620();
  }
  uVar4 = local_28;
  uVar1 = local_2c;
  puVar2 = (uint *)thunk_FUN_01be5118(0x50);
  if (puVar2 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0x50);
  }
  *(undefined1 *)(puVar2 + 4) = 0;
  *puVar2 = 1;
  puVar2[1] = 1;
  puVar2[2] = uVar1;
  puVar2[3] = uVar4;
  puVar2[6] = 0;
  puVar2[7] = 0;
  puVar2[8] = 0;
  puVar2[9] = 0;
  puVar2[0xe] = 0;
  puVar2[0xf] = 0;
  puVar2[0x10] = param_2 - 1;
  puVar2[0x11] = 1;
  puVar2[0x12] = 0;
  *(undefined1 *)(puVar2 + 0xd) = 0;
  puVar2[0xc] = 0;
  *(undefined1 *)(puVar2 + 0xb) = 0;
  puVar2[10] = 1;
  do {
    uVar1 = *puVar2;
    bVar8 = (bool)hasExclusiveAccess(puVar2);
  } while (!bVar8);
  *puVar2 = uVar1 + 1;
  uVar4 = uVar1;
  if (uVar1 < 0x80000000) {
    uVar4 = 0;
    param_1[4] = puVar2;
  }
  if ((int)uVar1 < 0) {
    software_udf(0xfdee,0x1a17b20);
    return;
  }
  param_1[2] = uVar4;
  param_1[3] = uVar4;
  *param_1 = puVar2;
  return;
}

