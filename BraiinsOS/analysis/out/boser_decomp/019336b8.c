// FUN_019336b8 @ 019336b8 size=388 calls_out=6 calls_in=0
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_019336b8(uint *param_1,int param_2,int param_3)

{
  uint *puVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  int extraout_r2;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  int *piVar8;
  uint uVar9;
  uint uVar10;
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
    param_3 = param_3 * 0xc;
    uVar5 = param_3 - 0xc;
    uVar6 = (uVar5 >> 2) * -0x55555554;
    iVar3 = param_2;
    while (param_3 != 0) {
      puVar1 = (uint *)(iVar3 + 8);
      param_3 = param_3 + -0xc;
      iVar3 = iVar3 + 0xc;
      bVar11 = CARRY4(*puVar1,uVar6);
      uVar6 = *puVar1 + uVar6;
      if (bVar11) {
                    /* WARNING: Subroutine does not return */
        FUN_0130739c(&DAT_005324b9,0x35,&DAT_01d2f704);
      }
    }
    uVar7 = 0;
    if ((int)uVar6 < 0) {
LAB_01933730:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar7,uVar6);
    }
    uVar9 = 0;
    if (uVar6 == 0) {
      local_2c = 1;
      local_30 = 0;
    }
    else {
      uVar7 = 1;
      local_2c = FUN_01298504(uVar6,1);
      local_30 = uVar6;
      if (local_2c == 0) goto LAB_01933730;
    }
    uVar10 = *(uint *)(param_2 + 8);
    local_28 = 0;
    FUN_01657150(&local_30,*(int *)(param_2 + 4),*(int *)(param_2 + 4) + uVar10);
    piVar8 = (int *)(param_2 + 0x10);
    uVar4 = uVar6 - local_28;
    puVar2 = (undefined4 *)(local_2c + local_28);
    iVar3 = local_28;
    for (; uVar5 != 0; uVar5 = uVar5 - 0xc) {
      if (3 < uVar4) {
        uVar9 = uVar4 - 4;
        iVar3 = *piVar8;
        uVar10 = piVar8[1];
        *puVar2 = 0x20726f20;
      }
      if (3 >= uVar4 || uVar9 < uVar10) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb100(&DAT_0053349c,0x13,&DAT_01d2f6f4);
      }
      FUN_01bed4e2(puVar2 + 1,iVar3,uVar10);
      uVar4 = uVar9 - uVar10;
      puVar2 = (undefined4 *)((int)(puVar2 + 1) + uVar10);
      piVar8 = piVar8 + 3;
      iVar3 = extraout_r2;
    }
    *param_1 = local_30;
    param_1[1] = local_2c;
    param_1[2] = uVar6 - uVar4;
  }
  return;
}

