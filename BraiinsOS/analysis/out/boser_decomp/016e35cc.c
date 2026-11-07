// FUN_016e35cc @ 016e35cc size=424 calls_out=4 calls_in=1
// strings: 

void FUN_016e35cc(uint *param_1,uint *param_2,uint param_3)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  uint *puVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint local_28;
  
  uVar6 = 0;
  iVar1 = param_3 * 0xc;
  if (0xaaaaaaa < param_3) {
LAB_016e35f8:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar6,iVar1);
  }
  if (iVar1 == 0) {
    puVar2 = (uint *)&SUB_00000004;
    uVar3 = 0;
  }
  else {
    uVar6 = 4;
    puVar2 = (uint *)FUN_01298504(iVar1,4);
    uVar3 = param_3;
    if (puVar2 == (uint *)0x0) goto LAB_016e35f8;
  }
  puVar7 = puVar2;
  if (param_3 < 2) {
    local_28 = 1;
    if (param_3 == 0) {
      local_28 = 0;
      FUN_0134aee0(*param_2,param_2[1],4,0x18);
      goto LAB_016e375c;
    }
  }
  else {
    uVar9 = param_2[2];
    uVar4 = param_2[1];
    iVar8 = 0;
    uVar6 = 4;
    iVar1 = uVar9 * 0x18;
    do {
      if (0x5555555 < uVar9) {
        uVar6 = 0;
LAB_016e3734:
                    /* WARNING: Subroutine does not return */
        FUN_00664620(uVar6,iVar1);
      }
      if (iVar1 == 0) {
        uVar5 = 4;
        uVar10 = 0;
      }
      else {
        uVar5 = FUN_01298504(iVar1,4);
        uVar10 = uVar9;
        if (uVar5 == 0) goto LAB_016e3734;
      }
      FUN_01bed4e2(uVar5,uVar4);
      *puVar7 = uVar10;
      iVar8 = iVar8 + 1;
      puVar7[1] = uVar5;
      puVar7[2] = uVar9;
      puVar7 = puVar7 + 3;
    } while (param_3 - 1 != iVar8);
    local_28 = param_3;
  }
  uVar4 = param_2[1];
  uVar9 = param_2[2];
  *puVar7 = *param_2;
  puVar7[1] = uVar4;
  puVar7[2] = uVar9;
LAB_016e375c:
  *param_1 = uVar3;
  param_1[1] = (uint)puVar2;
  param_1[2] = local_28;
  return;
}

