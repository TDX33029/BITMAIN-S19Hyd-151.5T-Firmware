// FUN_013e6808 @ 013e6808 size=424 calls_out=4 calls_in=1
// strings: 

void FUN_013e6808(uint *param_1,uint *param_2,uint param_3)

{
  uint *puVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  int iVar9;
  uint local_28;
  
  iVar9 = param_3 * 0xc;
  uVar2 = 0;
  if (0xaaaaaaa < param_3) {
LAB_013e6838:
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(uVar2,iVar9);
  }
  if (iVar9 == 0) {
    puVar3 = (uint *)&DAT_00000004;
  }
  else {
    puVar3 = (uint *)thunk_FUN_016d4a50(iVar9);
    if (puVar3 == (uint *)0x0) {
      uVar2 = 4;
      goto LAB_013e6838;
    }
    uVar2 = param_3;
  }
  uVar8 = param_2[2];
  uVar4 = *param_2;
  uVar5 = param_2[1];
  puVar7 = puVar3;
  if (param_3 < 2) {
    if (param_3 == 0) {
      local_28 = 0;
      if (uVar4 != 0) {
        thunk_FUN_016d3fb4(uVar5);
      }
      goto LAB_013e695c;
    }
  }
  else {
    puVar1 = (uint *)(uVar8 * 0x18);
    iVar9 = 0;
    do {
      if (uVar8 < 0x5555556) {
        param_2 = (uint *)&DAT_00000004;
      }
      if (uVar8 < 0x5555556 && puVar1 != (uint *)0x0) {
        param_2 = (uint *)thunk_FUN_016d4a50(puVar1);
        if (param_2 == (uint *)0x0) {
          uVar6 = 4;
          param_2 = puVar1;
LAB_013e699c:
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(uVar6,param_2);
        }
        uVar6 = uVar8;
      }
      else {
        uVar6 = 0;
        if (0x5555555 < uVar8) goto LAB_013e699c;
      }
      FUN_016dd1aa(param_2,uVar5,puVar1);
      iVar9 = iVar9 + 1;
      *puVar7 = uVar6;
      puVar7[1] = (uint)param_2;
      puVar7[2] = uVar8;
      puVar7 = puVar7 + 3;
    } while (param_3 - 1 != iVar9);
  }
  *puVar7 = uVar4;
  puVar7[1] = uVar5;
  puVar7[2] = uVar8;
  local_28 = param_3;
LAB_013e695c:
  *param_1 = uVar2;
  param_1[1] = (uint)puVar3;
  param_1[2] = local_28;
  return;
}

