// FUN_01602834 @ 01602834 size=476 calls_out=7 calls_in=1
// strings: 

void FUN_01602834(undefined4 *param_1,int param_2)

{
  bool bVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  uint uVar10;
  uint local_38;
  int *piStack_34;
  uint uStack_30;
  uint uStack_2c;
  int *local_28;
  
  puVar9 = *(uint **)*param_1;
  *(undefined4 *)*param_1 = 0;
  if (puVar9 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa444(&DAT_018ab078);
  }
  if (*(char *)(param_2 + 4) != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_015f8320();
  }
  uVar2 = *puVar9;
  piVar5 = (int *)puVar9[1];
  uVar7 = puVar9[2];
  uVar10 = puVar9[3];
  do {
    if (DAT_018dd998 != 0) {
      ClearExclusiveLocal();
      FUN_015bf680(&DAT_018dd998);
      goto LAB_016028a4;
    }
    bVar1 = (bool)hasExclusiveAccess(0x18dd998);
  } while (!bVar1);
  DAT_018dd998 = 1;
  DataMemoryBarrier(0xb);
LAB_016028a4:
  uVar8 = 0;
  if ((DAT_018dd988 & 0x7fffffff) != 0) {
    uVar8 = FUN_015bf3f8();
    uVar8 = uVar8 ^ 1;
  }
  if (uVar7 != 0) {
    piVar3 = piVar5;
    do {
      uVar6 = piVar3[1];
      local_28 = piVar3 + 4;
      if (*piVar3 == 0) {
        local_38 = 0;
        FUN_018430e4(uVar6,0,0xf,0,&local_38);
        uVar6 = local_38 & 0xfffffffe;
      }
      if (uVar6 != 0) {
        uVar6 = uVar6 - 1;
      }
      FUN_015c0298(uVar6,&local_28,&DAT_018aaa18);
      piVar3 = piVar3 + 7;
    } while (piVar3 != piVar5 + uVar7 * 7);
  }
  local_38 = uVar2;
  piStack_34 = piVar5;
  uStack_30 = uVar7;
  uStack_2c = uVar10;
  if (((uVar8 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) && (iVar4 = FUN_015bf3f8(), iVar4 == 0))
  {
    DAT_018dd99c = 1;
  }
  iVar4 = DAT_018dd998;
  DataMemoryBarrier(0xb);
  do {
    bVar1 = (bool)hasExclusiveAccess(0x18dd998);
  } while (!bVar1);
  DAT_018dd998 = 0;
  if (iVar4 == 2) {
    FUN_016d6968(0xf0,&DAT_018dd998,0x81,1);
  }
  *puVar9 = local_38;
  puVar9[1] = (uint)piStack_34;
  puVar9[2] = uStack_30;
  puVar9[3] = uStack_2c;
  return;
}

