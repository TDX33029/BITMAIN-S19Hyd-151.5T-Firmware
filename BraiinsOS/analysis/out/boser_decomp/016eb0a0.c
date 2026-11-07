// FUN_016eb0a0 @ 016eb0a0 size=628 calls_out=6 calls_in=2
// strings: 

void FUN_016eb0a0(uint *param_1,int param_2,int param_3,undefined2 *param_4,int param_5)

{
  uint *puVar1;
  undefined2 uVar2;
  undefined2 *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  bool bVar13;
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
    uVar10 = param_3 - 0xc;
    iVar12 = param_2 + 0xc;
    uVar7 = (uVar10 >> 2) * param_5 * -0x55555555;
    iVar4 = param_2;
    while (param_3 != 0) {
      puVar1 = (uint *)(iVar4 + 8);
      param_3 = param_3 + -0xc;
      iVar4 = iVar4 + 0xc;
      bVar13 = CARRY4(*puVar1,uVar7);
      uVar7 = *puVar1 + uVar7;
      if (bVar13) {
                    /* WARNING: Subroutine does not return */
        FUN_0130739c(&DAT_005324b9,0x35,&DAT_01d2f704);
      }
    }
    uVar8 = 0;
    if ((int)uVar7 < 0) {
LAB_016eb128:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar8,uVar7);
    }
    if (uVar7 == 0) {
      local_2c = 1;
      local_30 = 0;
    }
    else {
      uVar8 = 1;
      local_2c = FUN_01298504(uVar7,1);
      local_30 = uVar7;
      if (local_2c == 0) goto LAB_016eb128;
    }
    uVar9 = *(uint *)(param_2 + 4);
    uVar6 = *(uint *)(param_2 + 8);
    local_28 = 0;
    if (local_30 < uVar6) {
      FUN_006520b4(&local_30,0,uVar6,1,1);
    }
    iVar4 = local_28;
    uVar11 = local_2c;
    FUN_01bed4e2(local_2c + local_28,uVar9,uVar6);
    uVar5 = uVar7 - (iVar4 + uVar6);
    puVar3 = (undefined2 *)(uVar11 + iVar4 + uVar6);
    if (param_5 == 1) {
      for (; uVar10 != 0; uVar10 = uVar10 - 0xc) {
        if (uVar5 == 0) goto LAB_016eb2d4;
        uVar8 = *(undefined4 *)(iVar12 + 4);
        uVar9 = *(uint *)(iVar12 + 8);
        *(undefined1 *)puVar3 = *(undefined1 *)param_4;
        if (uVar5 - 1 < uVar9) goto LAB_016eb2d4;
        iVar12 = iVar12 + 0xc;
        FUN_01bed4e2((undefined1 *)((int)puVar3 + 1),uVar8,uVar9);
        uVar5 = (uVar5 - 1) - uVar9;
        puVar3 = (undefined2 *)((undefined1 *)((int)puVar3 + 1) + uVar9);
      }
    }
    else if (param_5 == 3) {
      for (; uVar10 != 0; uVar10 = uVar10 - 0xc) {
        if (uVar5 >= 3) {
          iVar4 = *(int *)(iVar12 + 4);
          uVar11 = *(uint *)(iVar12 + 8);
          uVar9 = uVar5 - 3;
          uVar2 = *param_4;
          *(undefined1 *)(puVar3 + 1) = *(undefined1 *)(param_4 + 1);
          *puVar3 = uVar2;
        }
        if (uVar5 < 3 || uVar9 < uVar11) goto LAB_016eb2d4;
        iVar12 = iVar12 + 0xc;
        FUN_01bed4e2((undefined1 *)((int)puVar3 + 3),iVar4,uVar11);
        uVar5 = uVar9 - uVar11;
        puVar3 = (undefined2 *)((undefined1 *)((int)puVar3 + 3) + uVar11);
      }
    }
    else {
      for (; uVar10 != 0; uVar10 = uVar10 - 0xc) {
        if (1 < uVar5) {
          iVar4 = *(int *)(iVar12 + 4);
          uVar11 = *(uint *)(iVar12 + 8);
          uVar9 = uVar5 - 2;
          *puVar3 = *param_4;
        }
        if (1 >= uVar5 || uVar9 < uVar11) {
LAB_016eb2d4:
                    /* WARNING: Subroutine does not return */
          FUN_012fb100(&DAT_0053349c,0x13,&DAT_01d2f6f4);
        }
        iVar12 = iVar12 + 0xc;
        FUN_01bed4e2(puVar3 + 1,iVar4,uVar11);
        uVar5 = uVar9 - uVar11;
        puVar3 = (undefined2 *)((int)(puVar3 + 1) + uVar11);
      }
    }
    *param_1 = local_30;
    param_1[1] = local_2c;
    param_1[2] = uVar7 - uVar5;
  }
  return;
}

