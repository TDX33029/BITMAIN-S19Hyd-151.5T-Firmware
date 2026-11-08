// FUN_006546c0 @ 006546c0 size=284 calls_out=2 calls_in=2
// strings: 

void FUN_006546c0(int param_1)

{
  byte *pbVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  
  uVar5 = *(uint *)(param_1 + 0x2fc);
  if (*(uint *)(param_1 + 0x1ac) <= uVar5) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(uVar5,*(uint *)(param_1 + 0x1ac),&DAT_01c03528);
  }
  if ((*(byte *)(*(int *)(param_1 + 0x1a0) + 4) - 1 < 2) &&
     (piVar3 = (int *)(*(int *)(param_1 + 0x1a8) + uVar5 * 0x14), piVar3[2] != 0)) {
    iVar8 = piVar3[1];
    iVar7 = *(int *)(param_1 + 0x1b4);
    uVar6 = *(uint *)(param_1 + 0x1b8);
    iVar9 = *(int *)(param_1 + 0x1c0);
    uVar4 = *(uint *)(param_1 + 0x1c4);
    uVar10 = CONCAT44(*piVar3,(uint)(*piVar3 != 0));
    while (uVar2 = (uint)(uVar10 >> 0x20), (uVar10 & 1) != 0) {
      if (uVar6 <= uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(uVar2,uVar6,&DAT_01c03538);
      }
      pbVar1 = (byte *)(iVar7 + uVar2 * 9);
      if ((*(uint *)(pbVar1 + 1) == uVar5) &&
         (pbVar1[1] = 0, pbVar1[2] = 0, pbVar1[3] = 0, pbVar1[4] = 0, iVar8 != 0)) {
        uVar2 = iVar8 + (uint)*(byte *)(param_1 + 0x1ec + (uint)*pbVar1);
        if (uVar4 <= uVar2) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb12c(uVar2,uVar4,&DAT_01c03548);
        }
        *(undefined4 *)(iVar9 + uVar2 * 4) = 0;
      }
      uVar10 = FUN_006541a0(param_1 + 0x1a4,uVar5,1);
    }
  }
  return;
}

