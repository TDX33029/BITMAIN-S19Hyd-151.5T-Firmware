// FUN_01ac6460 @ 01ac6460 size=520 calls_out=6 calls_in=1
// strings: 

void FUN_01ac6460(uint *param_1,int param_2,int param_3,undefined2 *param_4,int param_5)

{
  uint *puVar1;
  undefined2 *puVar2;
  int iVar3;
  uint uVar4;
  int extraout_r2;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  bool bVar12;
  uint local_30;
  uint local_2c;
  uint local_28;
  
  uVar9 = param_3 * 0xc - 0xc;
  iVar10 = param_2 + 0xc;
  param_3 = param_3 * 0xc;
  uVar7 = (uVar9 >> 2) * param_5 * -0x55555555;
  iVar3 = param_2;
  while (param_3 != 0) {
    puVar1 = (uint *)(iVar3 + 8);
    param_3 = param_3 + -0xc;
    iVar3 = iVar3 + 0xc;
    bVar12 = CARRY4(*puVar1,uVar7);
    uVar7 = *puVar1 + uVar7;
    if (bVar12) {
                    /* WARNING: Subroutine does not return */
      FUN_0130739c(&DAT_005324b9,0x35,&DAT_01d2f704);
    }
  }
  uVar5 = 0;
  if ((int)uVar7 < 0) {
LAB_01ac64e4:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar5,uVar7);
  }
  if (uVar7 == 0) {
    local_2c = 1;
    local_30 = 0;
  }
  else {
    uVar5 = 1;
    local_2c = FUN_01298504(uVar7,1);
    local_30 = uVar7;
    if (local_2c == 0) goto LAB_01ac64e4;
  }
  uVar6 = *(uint *)(param_2 + 8);
  uVar5 = *(undefined4 *)(param_2 + 4);
  local_28 = 0;
  if (local_30 < uVar6) {
    FUN_006520b4(&local_30,0,uVar6,1,1);
  }
  uVar8 = local_28;
  uVar11 = local_2c;
  FUN_01bed4e2(local_2c + local_28,uVar5,uVar6);
  uVar4 = uVar7 - (uVar8 + uVar6);
  puVar2 = (undefined2 *)(uVar11 + uVar8 + uVar6);
  if (param_5 == 2) {
    for (; uVar9 != 0; uVar9 = uVar9 - 0xc) {
      if (1 < uVar4) {
        param_5 = *(int *)(iVar10 + 4);
        uVar8 = uVar4 - 2;
        uVar11 = *(uint *)(iVar10 + 8);
        *puVar2 = *param_4;
      }
      if (1 >= uVar4 || uVar8 < uVar11) goto LAB_01ac6608;
      iVar10 = iVar10 + 0xc;
      FUN_01bed4e2(puVar2 + 1,param_5,uVar11);
      uVar4 = uVar8 - uVar11;
      puVar2 = (undefined2 *)((int)(puVar2 + 1) + uVar11);
      param_5 = extraout_r2;
    }
  }
  else {
    for (; uVar9 != 0; uVar9 = uVar9 - 0xc) {
      if (uVar4 == 0) {
LAB_01ac6608:
                    /* WARNING: Subroutine does not return */
        FUN_012fb100(&DAT_0053349c,0x13,&DAT_01d2f6f4);
      }
      uVar5 = *(undefined4 *)(iVar10 + 4);
      uVar6 = *(uint *)(iVar10 + 8);
      *(undefined1 *)puVar2 = *(undefined1 *)param_4;
      if (uVar4 - 1 < uVar6) goto LAB_01ac6608;
      iVar10 = iVar10 + 0xc;
      FUN_01bed4e2((undefined1 *)((int)puVar2 + 1),uVar5,uVar6);
      uVar4 = (uVar4 - 1) - uVar6;
      puVar2 = (undefined2 *)((undefined1 *)((int)puVar2 + 1) + uVar6);
    }
  }
  *param_1 = local_30;
  param_1[1] = local_2c;
  param_1[2] = uVar7 - uVar4;
  return;
}

