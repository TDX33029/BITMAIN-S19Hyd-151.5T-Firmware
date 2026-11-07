// FUN_0078b2c8 @ 0078b2c8 size=376 calls_out=6 calls_in=2
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0078b2c8(uint *param_1,int *param_2,int param_3,undefined1 *param_4)

{
  uint *puVar1;
  undefined1 *puVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
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
    param_3 = param_3 * 8;
    uVar9 = param_3 - 8;
    uVar8 = uVar9 >> 3;
    piVar3 = param_2;
    while (param_3 != 0) {
      puVar1 = (uint *)(piVar3 + 1);
      param_3 = param_3 + -8;
      piVar3 = piVar3 + 2;
      bVar10 = CARRY4(*puVar1,uVar8);
      uVar8 = *puVar1 + uVar8;
      if (bVar10) {
                    /* WARNING: Subroutine does not return */
        FUN_0130739c(&DAT_005324b9,0x35,&DAT_01d2f704);
      }
    }
    uVar6 = 0;
    if ((int)uVar8 < 0) {
LAB_0078b330:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar6,uVar8);
    }
    if (uVar8 == 0) {
      local_2c = 1;
      local_30 = 0;
    }
    else {
      uVar6 = 1;
      local_2c = FUN_01298504(uVar8,1);
      local_30 = uVar8;
      if (local_2c == 0) goto LAB_0078b330;
    }
    local_28 = 0;
    FUN_01657150(&local_30,*param_2,*param_2 + param_2[1]);
    iVar4 = uVar8 - local_28;
    puVar2 = (undefined1 *)(local_2c + local_28);
    for (; uVar9 != 0; uVar9 = uVar9 - 8) {
      if (iVar4 == 0) {
LAB_0078b428:
                    /* WARNING: Subroutine does not return */
        FUN_012fb100(&DAT_0053349c,0x13,&DAT_01d2f6f4);
      }
      iVar5 = param_2[2];
      uVar7 = param_2[3];
      *puVar2 = *param_4;
      if (iVar4 - 1U < uVar7) goto LAB_0078b428;
      FUN_01bed4e2(puVar2 + 1,iVar5,uVar7);
      iVar4 = (iVar4 - 1U) - uVar7;
      puVar2 = puVar2 + 1 + uVar7;
      param_2 = param_2 + 2;
    }
    *param_1 = local_30;
    param_1[1] = local_2c;
    param_1[2] = uVar8 - iVar4;
  }
  return;
}

