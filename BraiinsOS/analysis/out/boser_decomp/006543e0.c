// FUN_006543e0 @ 006543e0 size=420 calls_out=4 calls_in=2
// strings: internal error: entered unreachable code

void FUN_006543e0(int *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint unaff_r7;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  int local_40 [7];
  
  uVar1 = *(uint *)(param_2 + 0x2fc);
  if (*(uint *)(param_2 + 0x1ac) <= uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(uVar1,*(uint *)(param_2 + 0x1ac),&DAT_01c03458);
  }
  iVar10 = param_2 + 0x1a4;
  uVar2 = *(uint *)(param_2 + 0x300);
  uVar8 = 0;
  iVar9 = *(int *)(param_2 + 0x1b4);
  uVar4 = *(uint *)(param_2 + 0x1b8);
  uVar5 = *(uint *)(*(int *)(param_2 + 0x1a8) + uVar1 * 0x14);
  uVar12 = (ulonglong)uVar5 << 0x20;
  if (uVar5 != 0) {
    uVar12 = CONCAT44(uVar5,1);
  }
  while (uVar5 = (uint)(uVar12 >> 0x20), uVar11 = FUN_006541a0(iVar10,uVar2,uVar8,unaff_r7),
        unaff_r7 = (uint)(uVar11 >> 0x20), (uVar12 & 1) != 0) {
    if ((uVar11 & 1) == 0) goto LAB_00654528;
    if (uVar4 <= uVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(uVar5,uVar4,&DAT_01c034e8);
    }
    if (uVar4 <= unaff_r7) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(unaff_r7,uVar4,&DAT_01c034f8);
    }
    uVar8 = 1;
    *(undefined4 *)(iVar9 + unaff_r7 * 9 + 1) = *(undefined4 *)(iVar9 + uVar5 * 9 + 1);
    uVar12 = FUN_006541a0(iVar10,uVar1,1,uVar5);
  }
  if ((uVar11 & 1) == 0) {
    FUN_00654224(local_40,iVar10,uVar1,uVar2);
    if (local_40[0] == 3) {
      if (*(uint *)(param_2 + 0x1ac) <= uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(uVar2,*(uint *)(param_2 + 0x1ac),&DAT_01c034d8);
      }
      *(undefined4 *)(*(int *)(param_2 + 0x1a8) + uVar2 * 0x14 + 0xc) = 0;
      local_40[0] = 3;
    }
    else {
      piVar3 = (int *)((uint)local_40 | 4);
      iVar9 = piVar3[1];
      iVar10 = piVar3[2];
      iVar6 = piVar3[3];
      iVar7 = piVar3[4];
      param_1[1] = *piVar3;
      param_1[2] = iVar9;
      param_1[3] = iVar10;
      param_1[4] = iVar6;
      param_1[5] = iVar7;
    }
    *param_1 = local_40[0];
    return;
  }
LAB_00654528:
                    /* WARNING: Subroutine does not return */
  FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01c03508);
}

