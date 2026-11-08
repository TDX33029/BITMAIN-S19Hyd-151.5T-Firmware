// FUN_00748378 @ 00748378 size=368 calls_out=6 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00748378(uint *param_1,int *param_2,int param_3)

{
  uint *puVar1;
  undefined1 *puVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
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
    uVar6 = param_3 - 8;
    uVar7 = uVar6 >> 3;
    piVar3 = param_2;
    while (param_3 != 0) {
      puVar1 = (uint *)(piVar3 + 1);
      param_3 = param_3 + -8;
      piVar3 = piVar3 + 2;
      bVar10 = CARRY4(*puVar1,uVar7);
      uVar7 = *puVar1 + uVar7;
      if (bVar10) {
                    /* WARNING: Subroutine does not return */
        FUN_0130739c(&DAT_005324b9,0x35,&DAT_01d2f704);
      }
    }
    uVar8 = 0;
    if ((int)uVar7 < 0) {
LAB_007483dc:
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
      if (local_2c == 0) goto LAB_007483dc;
    }
    local_28 = 0;
    FUN_01657150(&local_30,*param_2,*param_2 + param_2[1]);
    iVar4 = uVar7 - local_28;
    puVar2 = (undefined1 *)(local_2c + local_28);
    for (; uVar6 != 0; uVar6 = uVar6 - 8) {
      if (iVar4 == 0) {
LAB_007484d0:
                    /* WARNING: Subroutine does not return */
        FUN_012fb100(&DAT_0053349c,0x13,&DAT_01d2f6f4);
      }
      iVar5 = param_2[2];
      uVar9 = param_2[3];
      *puVar2 = 0x20;
      if (iVar4 - 1U < uVar9) goto LAB_007484d0;
      FUN_01bed4e2(puVar2 + 1,iVar5,uVar9);
      iVar4 = (iVar4 - 1U) - uVar9;
      puVar2 = puVar2 + 1 + uVar9;
      param_2 = param_2 + 2;
    }
    *param_1 = local_30;
    param_1[1] = local_2c;
    param_1[2] = uVar7 - iVar4;
  }
  return;
}

