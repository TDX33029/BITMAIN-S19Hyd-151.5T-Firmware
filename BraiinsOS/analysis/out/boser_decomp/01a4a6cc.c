// FUN_01a4a6cc @ 01a4a6cc size=496 calls_out=6 calls_in=2
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01a4a6cc(uint *param_1,int param_2,int param_3,undefined2 *param_4,uint param_5)

{
  uint *puVar1;
  undefined2 *puVar2;
  int iVar3;
  uint uVar4;
  int extraout_r2;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  bool bVar10;
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
    iVar8 = param_2 + 0xc;
    uVar6 = (uVar7 >> 2) * param_5 * -0x55555555;
    iVar3 = param_2;
    while (param_3 != 0) {
      puVar1 = (uint *)(iVar3 + 8);
      param_3 = param_3 + -0xc;
      iVar3 = iVar3 + 0xc;
      bVar10 = CARRY4(*puVar1,uVar6);
      uVar6 = *puVar1 + uVar6;
      if (bVar10) {
                    /* WARNING: Subroutine does not return */
        FUN_0130739c(&DAT_005324b9,0x35,&DAT_01d2f704);
      }
    }
    uVar9 = 0;
    if ((int)uVar6 < 0) {
LAB_01a4a754:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar9,uVar6);
    }
    if (uVar6 == 0) {
      local_2c = 1;
      local_30 = 0;
    }
    else {
      uVar9 = 1;
      local_2c = FUN_01298504(uVar6,1);
      local_30 = uVar6;
      if (local_2c == 0) goto LAB_01a4a754;
    }
    uVar5 = *(uint *)(param_2 + 8);
    local_28 = 0;
    FUN_01657150(&local_30,*(int *)(param_2 + 4),*(int *)(param_2 + 4) + uVar5);
    uVar4 = uVar6 - local_28;
    puVar2 = (undefined2 *)(local_2c + local_28);
    iVar3 = local_28;
    if (param_5 == 2) {
      for (; uVar7 != 0; uVar7 = uVar7 - 0xc) {
        if (1 < uVar4) {
          iVar3 = *(int *)(iVar8 + 4);
          uVar5 = uVar4 - 2;
          param_5 = *(uint *)(iVar8 + 8);
          *puVar2 = *param_4;
        }
        if (1 >= uVar4 || uVar5 < param_5) goto LAB_01a4a884;
        iVar8 = iVar8 + 0xc;
        FUN_01bed4e2(puVar2 + 1,iVar3,param_5);
        uVar4 = uVar5 - param_5;
        puVar2 = (undefined2 *)((int)(puVar2 + 1) + param_5);
        iVar3 = extraout_r2;
      }
    }
    else {
      for (; uVar7 != 0; uVar7 = uVar7 - 0xc) {
        if (uVar4 == 0) {
LAB_01a4a884:
                    /* WARNING: Subroutine does not return */
          FUN_012fb100(&DAT_0053349c,0x13,&DAT_01d2f6f4);
        }
        uVar9 = *(undefined4 *)(iVar8 + 4);
        uVar5 = *(uint *)(iVar8 + 8);
        *(undefined1 *)puVar2 = *(undefined1 *)param_4;
        if (uVar4 - 1 < uVar5) goto LAB_01a4a884;
        iVar8 = iVar8 + 0xc;
        FUN_01bed4e2((undefined1 *)((int)puVar2 + 1),uVar9,uVar5);
        uVar4 = (uVar4 - 1) - uVar5;
        puVar2 = (undefined2 *)((undefined1 *)((int)puVar2 + 1) + uVar5);
      }
    }
    *param_1 = local_30;
    param_1[1] = local_2c;
    param_1[2] = uVar6 - uVar4;
  }
  return;
}

