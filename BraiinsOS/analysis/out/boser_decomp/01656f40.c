// FUN_01656f40 @ 01656f40 size=396 calls_out=6 calls_in=2
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01656f40(uint *param_1,int param_2,int param_3,undefined1 *param_4)

{
  uint *puVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  bool bVar9;
  uint local_30;
  uint local_2c;
  int local_28;
  
  if (param_3 == 0) {
    *param_1 = 0;
    param_1[1] = 1;
    param_1[2] = 0;
  }
  else {
    param_3 = param_3 * 0xc;
    uVar7 = param_3 - 0xc;
    uVar6 = (uVar7 >> 2) * -0x55555555;
    iVar3 = param_2;
    while (param_3 != 0) {
      puVar1 = (uint *)(iVar3 + 8);
      param_3 = param_3 + -0xc;
      iVar3 = iVar3 + 0xc;
      bVar9 = CARRY4(*puVar1,uVar6);
      uVar6 = *puVar1 + uVar6;
      if (bVar9) {
                    /* WARNING: Subroutine does not return */
        FUN_0130739c(&DAT_005324b9,0x35,&DAT_01d2f704);
      }
    }
    uVar4 = 0;
    if ((int)uVar6 < 0) {
LAB_01656fbc:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar4,uVar6);
    }
    if (uVar6 == 0) {
      local_2c = 1;
      local_30 = 0;
    }
    else {
      uVar4 = 1;
      local_2c = FUN_01298504(uVar6,1);
      local_30 = uVar6;
      if (local_2c == 0) goto LAB_01656fbc;
    }
    local_28 = 0;
    FUN_01657150(&local_30,*(int *)(param_2 + 4),*(int *)(param_2 + 4) + *(int *)(param_2 + 8));
    puVar8 = (undefined4 *)(param_2 + 0x10);
    iVar3 = uVar6 - local_28;
    puVar2 = (undefined1 *)(local_2c + local_28);
    for (; uVar7 != 0; uVar7 = uVar7 - 0xc) {
      if (iVar3 == 0) {
LAB_016570b4:
                    /* WARNING: Subroutine does not return */
        FUN_012fb100(&DAT_0053349c,0x13,&DAT_01d2f6f4);
      }
      uVar4 = *puVar8;
      uVar5 = puVar8[1];
      *puVar2 = *param_4;
      if (iVar3 - 1U < uVar5) goto LAB_016570b4;
      FUN_01bed4e2(puVar2 + 1,uVar4,uVar5);
      iVar3 = (iVar3 - 1U) - uVar5;
      puVar2 = puVar2 + 1 + uVar5;
      puVar8 = puVar8 + 3;
    }
    *param_1 = local_30;
    param_1[1] = local_2c;
    param_1[2] = uVar6 - iVar3;
  }
  return;
}

