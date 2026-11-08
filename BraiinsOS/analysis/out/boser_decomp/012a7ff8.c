// FUN_012a7ff8 @ 012a7ff8 size=436 calls_out=6 calls_in=3
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_012a7ff8(uint *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  int iVar11;
  uint local_30;
  uint local_2c;
  uint local_28;
  
  local_2c = thunk_FUN_01be5118(100);
  if (local_2c == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(4,100);
  }
  iVar4 = *(int *)(param_2 + 0x48);
  puVar10 = (undefined4 *)(iVar4 + 0x114);
  local_28 = 0;
  local_30 = 5;
  for (iVar6 = *(int *)(param_2 + 0x4c) * 0x134; iVar6 != 0; iVar6 = iVar6 + -0x134) {
    if ((*(byte *)(iVar4 + 0x11c) & 1) != 0) {
      FUN_012bba08(&local_30,*puVar10,puVar10[1]);
    }
    iVar4 = iVar4 + 0x134;
    puVar10 = puVar10 + 0x4d;
  }
  if (*(int *)(param_2 + 0x70) != 0) {
    iVar6 = *(int *)(param_2 + 0x6c);
    iVar4 = iVar6 + *(int *)(param_2 + 0x70) * 0x30;
    do {
      if (*(char *)(iVar6 + 0x2c) != '\0') {
        uVar2 = FUN_012bba08(&local_30,*(undefined4 *)(iVar6 + 0x24),*(undefined4 *)(iVar6 + 0x28));
        puVar10 = *(undefined4 **)(iVar6 + 0x10);
        for (iVar11 = *(int *)(iVar6 + 0x14) << 3; uVar1 = local_28, iVar11 != 0;
            iVar11 = iVar11 + -8) {
          uVar9 = *puVar10;
          uVar7 = puVar10[1];
          if (local_28 == local_30) {
            FUN_0161d664(&local_30);
          }
          puVar3 = (undefined4 *)(local_2c + uVar1 * 0x14);
          *puVar3 = 0;
          puVar3[1] = 4;
          puVar3[2] = 0;
          puVar3[3] = uVar9;
          puVar3[4] = uVar7;
          local_28 = uVar1 + 1;
          if (uVar1 < uVar2) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb12c(uVar2,local_28,&DAT_01ce2724);
          }
          piVar5 = (int *)(local_2c + uVar2 * 0x14);
          iVar8 = piVar5[2];
          if (iVar8 == *piVar5) {
            FUN_01a54b48(piVar5);
          }
          puVar10 = puVar10 + 2;
          *(uint *)(piVar5[1] + iVar8 * 4) = uVar1;
          piVar5[2] = iVar8 + 1;
        }
      }
      iVar6 = iVar6 + 0x30;
    } while (iVar6 != iVar4);
  }
  *param_1 = local_30;
  param_1[1] = local_2c;
  param_1[2] = local_28;
  return;
}

