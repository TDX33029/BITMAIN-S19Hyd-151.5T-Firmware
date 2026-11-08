// FUN_00658f88 @ 00658f88 size=444 calls_out=1 calls_in=1
// strings: 

void FUN_00658f88(int *param_1,uint param_2,uint param_3,int param_4)

{
  int *piVar1;
  uint uVar2;
  uint *puVar3;
  undefined *puVar4;
  uint uVar5;
  byte *pbVar6;
  uint *puVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  
  param_3 = param_3 & 0xff;
  if (param_4 == 1) {
    uVar10 = *(uint *)(*param_1 + 0xc);
    if (uVar10 != 0) {
      iVar8 = param_1[1];
      uVar2 = *(uint *)(iVar8 + 8);
      if (uVar10 < uVar2) {
        param_2 = param_2 & 0xff;
        do {
          puVar3 = (uint *)(*(int *)(iVar8 + 4) + uVar10 * 0x14);
          if (puVar3[1] == 0) {
            if (uVar2 <= uVar10) {
                    /* WARNING: Subroutine does not return */
              FUN_012fb12c(uVar10,uVar2,&DAT_01c03268);
            }
            puVar7 = puVar3;
            do {
              uVar5 = *puVar7;
              if (uVar5 == 0) goto LAB_00659004;
              uVar9 = *(uint *)(iVar8 + 0x14);
              if (uVar9 <= uVar5) {
                puVar4 = &DAT_01d08f58;
                goto LAB_006590e0;
              }
              pbVar6 = (byte *)(*(int *)(iVar8 + 0x10) + uVar5 * 9);
              puVar7 = (uint *)(pbVar6 + 5);
            } while (*pbVar6 < param_2);
            if (param_2 == *pbVar6) {
              pbVar6 = pbVar6 + 1;
              goto LAB_00658ff8;
            }
          }
          else {
            uVar9 = *(uint *)(iVar8 + 0x20);
            uVar5 = puVar3[1] + (uint)*(byte *)(iVar8 + 0x48 + param_2);
            if (uVar9 <= uVar5) {
              puVar4 = &DAT_01d08f88;
LAB_006590e0:
                    /* WARNING: Subroutine does not return */
              FUN_012fb12c(uVar5,uVar9,puVar4);
            }
            pbVar6 = (byte *)(*(int *)(iVar8 + 0x1c) + uVar5 * 4);
LAB_00658ff8:
            param_4 = *(int *)pbVar6;
            if (param_4 != 1) goto LAB_006590b0;
          }
LAB_00659004:
          if (uVar2 <= uVar10) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb12c(uVar10,uVar2,&DAT_01c03cb8);
          }
          uVar10 = puVar3[3];
        } while (uVar10 < uVar2);
      }
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(uVar10,uVar2,&DAT_01d08f78);
    }
    param_4 = 0;
LAB_006590b0:
    iVar8 = param_1[2];
    param_3 = *(int *)param_1[3] + param_3;
    if (*(uint *)(iVar8 + 8) <= param_3) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(param_3,*(uint *)(iVar8 + 8),&DAT_01c03a18);
    }
  }
  else {
    iVar8 = param_1[2];
    uVar10 = *(int *)param_1[3] + param_3;
    if (*(uint *)(iVar8 + 8) <= uVar10) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(uVar10,*(uint *)(iVar8 + 8),&DAT_01c039f8);
    }
    piVar1 = (int *)param_1[4];
    *(int *)(*(int *)(iVar8 + 4) + uVar10 * 4) = param_4;
    param_3 = *piVar1 + param_3;
    if (*(uint *)(iVar8 + 8) <= param_3) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(param_3,*(uint *)(iVar8 + 8),&DAT_01c03a08);
    }
  }
  *(int *)(*(int *)(iVar8 + 4) + param_3 * 4) = param_4;
  return;
}

