// FUN_0165192c @ 0165192c size=444 calls_out=7 calls_in=2
// strings: 

void FUN_0165192c(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  uint *local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_38;
  uint local_34;
  uint local_30;
  
  uVar10 = 1;
  FUN_019ac130(&local_38,1);
  uVar3 = local_30;
  uVar2 = local_34;
  uVar9 = local_38;
  iVar4 = param_1 * 3 + -1;
  uVar8 = 0;
  if (param_1 * 3 != 0 && iVar4 != 0) {
    uVar10 = (0xffffffffU >> LZCOUNT(iVar4)) + 1;
  }
  bVar11 = 0x3fffffe < uVar10;
  uVar1 = uVar10 * 0x40;
  if (uVar10 < 0x4000000) {
    bVar11 = 0x7fffffc0 < uVar1;
    local_4c = &local_38;
  }
  if (bVar11) {
LAB_0165197c:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar8,uVar1);
  }
  if (uVar1 == 0) {
    uVar5 = 0x40;
    local_48 = 0;
  }
  else {
    local_38 = 0;
    uVar8 = 0x40;
    iVar4 = FUN_01be5878(&local_38,0x40,uVar1);
    if ((iVar4 != 0) || (uVar5 = local_38, local_48 = uVar10, local_38 == 0)) goto LAB_0165197c;
  }
  local_40 = 0;
  local_44 = uVar5;
  if (uVar10 != 0) {
    iVar4 = 0;
    do {
      uVar1 = local_40;
      if (local_40 == local_48) {
        FUN_01651c08(&local_48);
        uVar5 = local_44;
      }
      local_40 = uVar1 + 1;
      puVar6 = (uint *)(uVar5 + iVar4);
      *puVar6 = uVar9;
      iVar4 = iVar4 + 0x40;
      puVar6[1] = uVar2;
      iVar7 = uVar5 + uVar1 * 0x40;
      *(undefined4 *)(iVar7 + 0x18) = 0;
      *(undefined4 *)(iVar7 + 0x1c) = 0;
      *(undefined4 *)(iVar7 + 0x20) = 0;
      *(uint *)(iVar7 + 0x10) = local_40;
      *(uint *)(iVar7 + 8) = uVar3;
    } while (uVar10 != local_40);
  }
  *local_4c = local_48;
  local_4c[1] = local_44;
  local_4c[2] = local_40;
  if (local_30 < local_38) {
    iVar4 = FUN_01609230(&local_38,local_30,0x40,0x40);
    if (iVar4 != -0x7fffffff) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620();
    }
    uVar9 = local_30;
  }
  else {
    uVar9 = local_30;
  }
  puVar6 = (uint *)thunk_FUN_01be5118(0x10);
  if (puVar6 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x10);
  }
  *puVar6 = local_34;
  puVar6[1] = uVar9;
  puVar6[2] = 0x1f - LZCOUNT(uVar10);
  puVar6[3] = param_2;
  return;
}

