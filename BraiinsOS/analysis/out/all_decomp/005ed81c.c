// FUN_005ed81c @ 005ed81c size=404 calls_out=1 calls_in=2
// strings: 

void FUN_005ed81c(int param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  
  uVar2 = *(uint *)(param_1 + 0x2fc);
  if (*(uint *)(param_1 + 0x1ac) <= uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(uVar2,*(uint *)(param_1 + 0x1ac),&DAT_01856c18);
  }
  if ((*(byte *)(*(int *)(param_1 + 0x1a0) + 4) - 1 < 2) &&
     (puVar4 = (uint *)(*(int *)(param_1 + 0x1a8) + uVar2 * 0x14), puVar4[2] != 0)) {
    uVar7 = puVar4[1];
    iVar6 = *(int *)(param_1 + 0x1b4);
    uVar3 = *(uint *)(param_1 + 0x1b8);
    uVar5 = *puVar4;
    if (uVar7 == 0) {
      if (uVar5 != 0) {
        if (uVar5 < uVar3) {
          puVar4 = (uint *)(iVar6 + uVar5 * 9 + 1);
          if (*puVar4 == uVar2) {
            *puVar4 = 0;
          }
          while (uVar5 < uVar3) {
            uVar5 = *(uint *)(iVar6 + uVar5 * 9 + 5);
            if (uVar5 == 0) {
              return;
            }
            if (uVar3 <= uVar5) goto LAB_005ed980;
            puVar4 = (uint *)(iVar6 + uVar5 * 9 + 1);
            if (*puVar4 == uVar2) {
              *puVar4 = 0;
            }
          }
LAB_005ed8fc:
                    /* WARNING: Subroutine does not return */
          FUN_00faa4a4(uVar5,uVar3,&DAT_01856b58);
        }
        goto LAB_005ed980;
      }
    }
    else if (uVar5 != 0) {
      if (uVar5 < uVar3) {
        iVar8 = *(int *)(param_1 + 0x1c0);
        uVar9 = *(uint *)(param_1 + 0x1c4);
        do {
          puVar4 = (uint *)(iVar6 + uVar5 * 9 + 1);
          if (*puVar4 == uVar2) {
            bVar1 = *(byte *)(iVar6 + uVar5 * 9);
            *puVar4 = 0;
            uVar10 = uVar7 + *(byte *)(param_1 + 0x1ec + (uint)bVar1);
            if (uVar9 <= uVar10) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa4a4(uVar10,uVar9,&DAT_01856c38);
            }
            *(undefined4 *)(iVar8 + uVar10 * 4) = 0;
          }
          if (uVar3 <= uVar5) goto LAB_005ed8fc;
          uVar5 = *(uint *)(iVar6 + uVar5 * 9 + 5);
          if (uVar5 == 0) {
            return;
          }
        } while (uVar5 < uVar3);
      }
LAB_005ed980:
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(uVar5,uVar3,&DAT_01856c28);
    }
  }
  return;
}

