// FUN_006592e0 @ 006592e0 size=384 calls_out=1 calls_in=1
// strings: 

void FUN_006592e0(undefined4 *param_1,uint param_2,uint param_3,int param_4)

{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  byte *pbVar4;
  uint *puVar5;
  int iVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  
  if (((param_4 != 1) || (param_4 = 0, *(char *)*param_1 == '\x01')) ||
     (uVar8 = *(uint *)(param_1[1] + 0xc), uVar8 == 0)) {
LAB_006593cc:
    uVar8 = *(uint *)(param_1[3] + 8);
    uVar1 = *(int *)param_1[4] + (param_3 & 0xff);
    if (uVar8 <= uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(uVar1,uVar8,&DAT_01c03838);
    }
    *(int *)(*(int *)(param_1[3] + 4) + uVar1 * 4) = param_4 << (**(uint **)param_1[5] & 0x1f);
    return;
  }
  iVar6 = param_1[2];
  uVar1 = *(uint *)(iVar6 + 8);
  if (uVar8 < uVar1) {
    param_2 = param_2 & 0xff;
    do {
      puVar7 = (uint *)(*(int *)(iVar6 + 4) + uVar8 * 0x14);
      if (puVar7[1] == 0) {
        if (uVar1 <= uVar8) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb12c(uVar8,uVar1,&DAT_01c03268);
        }
        puVar5 = puVar7;
        do {
          uVar3 = *puVar5;
          if (uVar3 == 0) goto LAB_0065936c;
          uVar9 = *(uint *)(iVar6 + 0x14);
          if (uVar9 <= uVar3) {
            puVar2 = &DAT_01d08f58;
            goto LAB_00659418;
          }
          pbVar4 = (byte *)(*(int *)(iVar6 + 0x10) + uVar3 * 9);
          puVar5 = (uint *)(pbVar4 + 5);
        } while (*pbVar4 < param_2);
        if (param_2 == *pbVar4) {
          pbVar4 = pbVar4 + 1;
          goto LAB_00659360;
        }
      }
      else {
        uVar9 = *(uint *)(iVar6 + 0x20);
        uVar3 = puVar7[1] + (uint)*(byte *)(iVar6 + 0x48 + param_2);
        if (uVar9 <= uVar3) {
          puVar2 = &DAT_01d08f88;
LAB_00659418:
                    /* WARNING: Subroutine does not return */
          FUN_012fb12c(uVar3,uVar9,puVar2);
        }
        pbVar4 = (byte *)(*(int *)(iVar6 + 0x1c) + uVar3 * 4);
LAB_00659360:
        param_4 = *(int *)pbVar4;
        if (param_4 != 1) goto LAB_006593cc;
      }
LAB_0065936c:
      if (uVar1 <= uVar8) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(uVar8,uVar1,&DAT_01c03cb8);
      }
      uVar8 = puVar7[3];
    } while (uVar8 < uVar1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_012fb12c(uVar8,uVar1,&DAT_01d08f78);
}

