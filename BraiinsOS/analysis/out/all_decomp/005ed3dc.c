// FUN_005ed3dc @ 005ed3dc size=432 calls_out=2 calls_in=2
// strings: 

void FUN_005ed3dc(undefined4 *param_1,int param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  uint uVar7;
  
  uVar1 = *(uint *)(param_2 + 8);
  if (uVar1 <= param_4) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(param_4,uVar1,&DAT_018569b8);
  }
  iVar4 = *(int *)(param_2 + 0x28);
  uVar7 = *(uint *)(param_2 + 0x2c);
  uVar3 = *(uint *)(*(int *)(param_2 + 4) + param_4 * 0x14 + 8);
  do {
    uVar2 = uVar3;
    if (uVar7 <= uVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(uVar2,uVar7,&DAT_018569c8);
    }
    uVar3 = *(uint *)(iVar4 + uVar2 * 8 + 4);
  } while (uVar3 != 0);
  if (uVar1 <= param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(param_3,uVar1,&DAT_018569d8);
  }
  uVar1 = *(uint *)(*(int *)(param_2 + 4) + param_3 * 0x14 + 8);
  while( true ) {
    uVar3 = uVar7;
    if (uVar1 == 0) {
      *param_1 = 3;
      return;
    }
    if (uVar3 <= uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(uVar1,uVar3,&DAT_018569e8);
    }
    uVar6 = *(undefined4 *)(iVar4 + uVar1 * 8);
    if (uVar3 == *(uint *)(param_2 + 0x24)) {
      FUN_005fd440(param_2 + 0x24);
      iVar4 = *(int *)(param_2 + 0x28);
    }
    puVar5 = (undefined4 *)(iVar4 + uVar3 * 8);
    *puVar5 = uVar6;
    uVar7 = uVar3 + 1;
    puVar5[1] = 0;
    *(uint *)(param_2 + 0x2c) = uVar7;
    if (uVar2 == 0) {
      if (*(uint *)(param_2 + 8) <= param_4) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(param_4,*(uint *)(param_2 + 8),&DAT_018569f8);
      }
      *(uint *)(*(int *)(param_2 + 4) + param_4 * 0x14 + 8) = uVar3;
    }
    else {
      if (uVar3 < uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(uVar2,uVar7,&DAT_01856a08);
      }
      *(uint *)(*(int *)(param_2 + 0x28) + uVar2 * 8 + 4) = uVar3;
    }
    if (uVar3 < uVar1) break;
    iVar4 = *(int *)(param_2 + 0x28);
    uVar1 = *(uint *)(iVar4 + uVar1 * 8 + 4);
    uVar2 = uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00faa4a4(uVar1,uVar7,&DAT_01856a18);
}

