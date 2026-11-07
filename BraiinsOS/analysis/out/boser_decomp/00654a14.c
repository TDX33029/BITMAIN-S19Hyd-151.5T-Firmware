// FUN_00654a14 @ 00654a14 size=504 calls_out=3 calls_in=2
// strings: 

void FUN_00654a14(undefined4 *param_1,int param_2)

{
  uint uVar1;
  byte *pbVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  ulonglong uVar14;
  
  uVar12 = *(uint *)(param_2 + 0x1ac);
  if (uVar12 == 0) {
LAB_00654bb4:
    *param_1 = 3;
    return;
  }
  iVar3 = *(int *)(param_2 + 0x1a8);
  uVar9 = 0;
  uVar1 = uVar12;
LAB_00654a4c:
  puVar6 = (uint *)(iVar3 + uVar9 * 0x14 + 0x10);
  uVar10 = uVar9;
  do {
    uVar9 = uVar10 + 1;
    if (1 < uVar10) {
      if (uVar1 <= uVar10) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(uVar10,uVar1,&DAT_01c03558);
      }
      if (*puVar6 < **(uint **)(param_2 + 0x1a0)) break;
    }
    puVar6 = puVar6 + 5;
    uVar10 = uVar9;
    if (uVar12 <= uVar9) goto LAB_00654bb4;
  } while( true );
  uVar8 = *(uint *)(param_2 + 0x1c4);
  iVar3 = *(byte *)(param_2 + 0x2eb) + 1;
  uVar7 = uVar8;
  if (*(int *)(param_2 + 0x1bc) - uVar8 <= (uint)*(byte *)(param_2 + 0x2eb)) {
    FUN_006520b4(param_2 + 0x1bc,uVar8,iVar3,4,4);
    uVar7 = *(uint *)(param_2 + 0x1c4);
  }
  iVar13 = *(int *)(param_2 + 0x1c0);
  do {
    *(undefined4 *)(iVar13 + uVar7 * 4) = 1;
    uVar7 = uVar7 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  uVar1 = *(uint *)(param_2 + 0x1ac);
  *(uint *)(param_2 + 0x1c4) = uVar7;
  if (uVar1 <= uVar10) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(uVar10,uVar1,&DAT_01c03458);
  }
  iVar3 = *(int *)(param_2 + 0x1a8);
  iVar5 = *(int *)(param_2 + 0x1b4);
  uVar4 = *(uint *)(iVar3 + uVar10 * 0x14);
  uVar11 = *(uint *)(param_2 + 0x1b8);
  uVar14 = (ulonglong)uVar4 << 0x20;
  if (uVar4 != 0) {
    uVar14 = CONCAT44(uVar4,1);
  }
  while (uVar4 = (uint)(uVar14 >> 0x20), (uVar14 & 1) != 0) {
    if (uVar11 <= uVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(uVar4,uVar11,&DAT_01c03568);
    }
    pbVar2 = (byte *)(iVar5 + uVar4 * 9);
    uVar4 = uVar8 + *(byte *)(param_2 + 0x1ec + (uint)*pbVar2);
    if (uVar7 <= uVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(uVar4,uVar7,&DAT_01c03578);
    }
    *(undefined4 *)(iVar13 + uVar4 * 4) = *(undefined4 *)(pbVar2 + 1);
    uVar14 = FUN_006541a0(param_2 + 0x1a4,uVar10,1);
  }
  *(uint *)(iVar3 + uVar10 * 0x14 + 4) = uVar8;
  if (uVar12 <= uVar9) goto LAB_00654bb4;
  goto LAB_00654a4c;
}

