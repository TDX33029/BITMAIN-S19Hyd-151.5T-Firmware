// FUN_005edbe4 @ 005edbe4 size=452 calls_out=2 calls_in=2
// strings: 

void FUN_005edbe4(undefined4 *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  byte *pbVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  
  uVar7 = *(uint *)(param_2 + 0x1ac);
  if (uVar7 != 0) {
    uVar10 = 0;
    do {
      if (1 < uVar10) {
        if (*(uint *)(param_2 + 0x1ac) <= uVar10) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa4a4(uVar10,*(uint *)(param_2 + 0x1ac),&DAT_01856c48);
        }
        if (*(uint *)(*(int *)(param_2 + 0x1a8) + uVar10 * 0x14 + 0x10) <
            **(uint **)(param_2 + 0x1a0)) {
          uVar9 = *(uint *)(param_2 + 0x1c4);
          iVar4 = *(byte *)(param_2 + 0x2eb) + 1;
          uVar8 = uVar9;
          if (*(int *)(param_2 + 0x1bc) - uVar9 <= (uint)*(byte *)(param_2 + 0x2eb)) {
            FUN_005fd500(param_2 + 0x1bc,uVar9,iVar4);
            uVar8 = *(uint *)(param_2 + 0x1c4);
          }
          iVar1 = *(int *)(param_2 + 0x1c0);
          do {
            *(undefined4 *)(iVar1 + uVar8 * 4) = 1;
            uVar8 = uVar8 + 1;
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
          *(uint *)(param_2 + 0x1c4) = uVar8;
          if (*(uint *)(param_2 + 0x1ac) <= uVar10) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa4a4(uVar10,*(uint *)(param_2 + 0x1ac),&DAT_01856b48);
          }
          iVar4 = *(int *)(param_2 + 0x1a8);
          uVar2 = *(uint *)(iVar4 + uVar10 * 0x14);
          if (uVar2 != 0) {
            uVar5 = *(uint *)(param_2 + 0x1b8);
            if (uVar5 <= uVar2) {
LAB_005edd44:
                    /* WARNING: Subroutine does not return */
              FUN_00faa4a4(uVar2,uVar5,&DAT_01856c58);
            }
            iVar11 = *(int *)(param_2 + 0x1b4);
            while( true ) {
              pbVar3 = (byte *)(iVar11 + uVar2 * 9);
              uVar6 = uVar9 + *(byte *)(param_2 + 0x1ec + (uint)*pbVar3);
              if (uVar8 <= uVar6) {
                    /* WARNING: Subroutine does not return */
                FUN_00faa4a4(uVar6,uVar8,&DAT_01856c68);
              }
              *(undefined4 *)(iVar1 + uVar6 * 4) = *(undefined4 *)(pbVar3 + 1);
              if (uVar5 <= uVar2) {
                    /* WARNING: Subroutine does not return */
                FUN_00faa4a4(uVar2,uVar5,&DAT_01856b58);
              }
              uVar2 = *(uint *)(iVar11 + uVar2 * 9 + 5);
              if (uVar2 == 0) break;
              if (uVar5 <= uVar2) goto LAB_005edd44;
            }
          }
          *(uint *)(iVar4 + uVar10 * 0x14 + 4) = uVar9;
        }
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 != uVar7);
  }
  *param_1 = 3;
  return;
}

