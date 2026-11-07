// FUN_00654224 @ 00654224 size=416 calls_out=2 calls_in=2
// strings: 

void FUN_00654224(undefined4 *param_1,int param_2,uint param_3,uint param_4)

{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 uVar8;
  
  uVar1 = *(uint *)(param_2 + 8);
  if (uVar1 <= param_4) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(param_4,uVar1,&DAT_01c03298);
  }
  iVar5 = *(int *)(param_2 + 0x28);
  uVar7 = *(uint *)(param_2 + 0x2c);
  uVar4 = *(uint *)(*(int *)(param_2 + 4) + param_4 * 0x14 + 8);
  do {
    uVar3 = uVar4;
    if (uVar7 <= uVar3) {
      puVar2 = &DAT_01c032a8;
      goto LAB_00654384;
    }
    uVar4 = *(uint *)(iVar5 + uVar3 * 8 + 4);
  } while (uVar4 != 0);
  if (uVar1 <= param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(param_3,uVar1,&DAT_01c032b8);
  }
  uVar1 = *(uint *)(*(int *)(param_2 + 4) + param_3 * 0x14 + 8);
  if (uVar1 != 0) {
    uVar4 = uVar7;
    do {
      if (uVar4 <= uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(uVar1,uVar4,&DAT_01c032c8);
      }
      uVar8 = *(undefined4 *)(iVar5 + uVar1 * 8);
      if (uVar4 == *(uint *)(param_2 + 0x24)) {
        FUN_015f5ab8((uint *)(param_2 + 0x24));
        iVar5 = *(int *)(param_2 + 0x28);
      }
      puVar6 = (undefined4 *)(iVar5 + uVar4 * 8);
      *puVar6 = uVar8;
      uVar7 = uVar4 + 1;
      puVar6[1] = 0;
      *(uint *)(param_2 + 0x2c) = uVar7;
      if (uVar3 == 0) {
        if (*(uint *)(param_2 + 8) <= param_4) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb12c(param_4,*(uint *)(param_2 + 8),&DAT_01c032e8);
        }
        *(uint *)(*(int *)(param_2 + 4) + param_4 * 0x14 + 8) = uVar4;
      }
      else {
        if (uVar4 < uVar3) {
          puVar2 = &DAT_01c032d8;
LAB_00654384:
                    /* WARNING: Subroutine does not return */
          FUN_012fb12c(uVar3,uVar7,puVar2);
        }
        *(uint *)(*(int *)(param_2 + 0x28) + uVar3 * 8 + 4) = uVar4;
      }
      if (uVar4 < uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(uVar1,uVar7,&DAT_01c032f8);
      }
      iVar5 = *(int *)(param_2 + 0x28);
      uVar1 = *(uint *)(iVar5 + uVar1 * 8 + 4);
      uVar3 = uVar4;
      uVar4 = uVar7;
    } while (uVar1 != 0);
  }
  *param_1 = 3;
  return;
}

