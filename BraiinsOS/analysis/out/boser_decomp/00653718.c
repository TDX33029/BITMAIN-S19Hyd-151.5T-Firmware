// FUN_00653718 @ 00653718 size=560 calls_out=2 calls_in=2
// strings: 

void FUN_00653718(int *param_1,int param_2,uint param_3,byte param_4,undefined4 param_5)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  uint uVar7;
  int local_40;
  uint uStack_3c;
  int local_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  
  if (*(uint *)(param_2 + 8) <= param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(param_3,*(uint *)(param_2 + 8),&DAT_01c03308);
  }
  iVar5 = *(int *)(param_2 + 4);
  iVar2 = *(int *)(iVar5 + param_3 * 0x14 + 4);
  if (iVar2 != 0) {
    uVar3 = iVar2 + (uint)*(byte *)(param_2 + (uint)param_4 + 0x48);
    if (*(uint *)(param_2 + 0x20) <= uVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(uVar3,*(uint *)(param_2 + 0x20),&DAT_01c03318);
    }
    *(undefined4 *)(*(int *)(param_2 + 0x1c) + uVar3 * 4) = param_5;
  }
  uVar3 = *(uint *)(iVar5 + param_3 * 0x14);
  if (uVar3 != 0) {
    uVar4 = *(uint *)(param_2 + 0x14);
    if (uVar4 <= uVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(uVar3,uVar4,&DAT_01c03328);
    }
    iVar2 = *(int *)(param_2 + 0x10);
    pbVar6 = (byte *)(iVar2 + uVar3 * 9);
    bVar1 = *pbVar6;
    if (bVar1 <= param_4) {
      if (param_4 != bVar1) {
        do {
          uVar7 = uVar3;
          uVar3 = *(uint *)(iVar2 + uVar7 * 9 + 5);
          if (uVar3 == 0) {
            uVar3 = 0;
            goto LAB_0065385c;
          }
          if (uVar4 <= uVar3) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb12c(uVar3,uVar4,&DAT_01c03338);
          }
          pbVar6 = (byte *)(iVar2 + uVar3 * 9);
          bVar1 = *pbVar6;
        } while (bVar1 < param_4);
        if (bVar1 <= param_4) {
          *(undefined4 *)(pbVar6 + 1) = param_5;
          goto LAB_0065380c;
        }
LAB_0065385c:
        FUN_00653968(&local_40,param_2);
        if (local_40 == 3) {
          uVar4 = *(uint *)(param_2 + 0x14);
          if (uVar4 <= uStack_3c) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb12c(uStack_3c,uVar4,&DAT_01c03348);
          }
          iVar2 = *(int *)(param_2 + 0x10);
          pbVar6 = (byte *)(iVar2 + uStack_3c * 9);
          *pbVar6 = param_4;
          *(uint *)(pbVar6 + 5) = uVar3;
          *(undefined4 *)(pbVar6 + 1) = param_5;
          if (uVar4 <= uVar7) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb12c(uVar7,uVar4,&DAT_01c03358);
          }
          *(uint *)(iVar2 + uVar7 * 9 + 5) = uStack_3c;
          goto LAB_0065380c;
        }
        goto LAB_006538b0;
      }
      *(undefined4 *)(pbVar6 + 1) = param_5;
      goto LAB_0065380c;
    }
  }
  FUN_00653968(&local_40,param_2);
  if (local_40 != 3) {
LAB_006538b0:
    param_1[2] = local_38;
    param_1[3] = iStack_34;
    param_1[4] = iStack_30;
    param_1[5] = iStack_2c;
    *param_1 = local_40;
    param_1[1] = uStack_3c;
    return;
  }
  if (*(uint *)(param_2 + 0x14) <= uStack_3c) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(uStack_3c,*(uint *)(param_2 + 0x14),&DAT_01c03368);
  }
  uVar4 = *(uint *)(param_2 + 8);
  pbVar6 = (byte *)(*(int *)(param_2 + 0x10) + uStack_3c * 9);
  *pbVar6 = param_4;
  *(uint *)(pbVar6 + 5) = uVar3;
  *(undefined4 *)(pbVar6 + 1) = param_5;
  if (uVar4 <= param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(param_3,uVar4,&DAT_01c03378);
  }
  *(uint *)(*(int *)(param_2 + 4) + param_3 * 0x14) = uStack_3c;
LAB_0065380c:
  *param_1 = 3;
  return;
}

