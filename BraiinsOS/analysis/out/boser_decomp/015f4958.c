// FUN_015f4958 @ 015f4958 size=452 calls_out=6 calls_in=2
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_015f4958(uint *param_1,int *param_2,int param_3,undefined1 *param_4,uint param_5)

{
  uint *puVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined1 *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int *piVar10;
  bool bVar11;
  uint local_30;
  uint local_2c;
  int local_28;
  
  if (param_3 == 0) {
    *param_1 = 0;
    param_1[1] = 1;
    param_1[2] = 0;
  }
  else {
    param_3 = param_3 * 8;
    uVar9 = param_3 - 8;
    piVar10 = param_2 + 2;
    uVar8 = param_5 * (uVar9 >> 3);
    piVar2 = param_2;
    while (param_3 != 0) {
      puVar1 = (uint *)(piVar2 + 1);
      param_3 = param_3 + -8;
      piVar2 = piVar2 + 2;
      bVar11 = CARRY4(*puVar1,uVar8);
      uVar8 = *puVar1 + uVar8;
      if (bVar11) {
                    /* WARNING: Subroutine does not return */
        FUN_0130739c(&DAT_005324b9,0x35,&DAT_01d2f704);
      }
    }
    uVar4 = 0;
    if ((int)uVar8 < 0) {
LAB_015f49d0:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar4,uVar8);
    }
    if (uVar8 == 0) {
      local_2c = 1;
      local_30 = 0;
    }
    else {
      uVar4 = 1;
      local_2c = FUN_01298504(uVar8,1);
      local_30 = uVar8;
      if (local_2c == 0) goto LAB_015f49d0;
    }
    local_28 = 0;
    FUN_01657150(&local_30,*param_2,*param_2 + param_2[1]);
    uVar7 = uVar8 - local_28;
    puVar6 = (undefined1 *)(local_2c + local_28);
    if ((param_5 & 1) == 0) {
      for (; uVar9 != 0; uVar9 = uVar9 - 8) {
        uVar5 = piVar10[1];
        if (uVar7 < uVar5) goto LAB_015f4b04;
        FUN_01bed4e2(puVar6,*piVar10,uVar5);
        uVar7 = uVar7 - uVar5;
        puVar6 = puVar6 + uVar5;
        piVar10 = piVar10 + 2;
      }
    }
    else {
      for (; uVar9 != 0; uVar9 = uVar9 - 8) {
        if (uVar7 == 0) {
LAB_015f4b04:
                    /* WARNING: Subroutine does not return */
          FUN_012fb100(&DAT_0053349c,0x13,&DAT_01d2f6f4);
        }
        iVar3 = *piVar10;
        uVar5 = piVar10[1];
        *puVar6 = *param_4;
        if (uVar7 - 1 < uVar5) goto LAB_015f4b04;
        piVar10 = piVar10 + 2;
        FUN_01bed4e2(puVar6 + 1,iVar3,uVar5);
        uVar7 = (uVar7 - 1) - uVar5;
        puVar6 = puVar6 + 1 + uVar5;
      }
    }
    *param_1 = local_30;
    param_1[1] = local_2c;
    param_1[2] = uVar8 - uVar7;
  }
  return;
}

