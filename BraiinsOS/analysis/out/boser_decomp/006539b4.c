// FUN_006539b4 @ 006539b4 size=264 calls_out=2 calls_in=2
// strings: 

void FUN_006539b4(undefined4 *param_1,int param_2,uint param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  
  if (*(uint *)(param_2 + 8) <= param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(param_3,*(uint *)(param_2 + 8),&DAT_01c03418);
  }
  iVar4 = *(int *)(param_2 + 0x28);
  uVar5 = *(uint *)(param_2 + 0x2c);
  uVar2 = *(uint *)(*(int *)(param_2 + 4) + param_3 * 0x14 + 8);
  do {
    uVar1 = uVar2;
    if (uVar5 <= uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(uVar1,uVar5,&DAT_01c03428);
    }
    uVar2 = *(uint *)(iVar4 + uVar1 * 8 + 4);
  } while (uVar2 != 0);
  if (uVar5 == *(uint *)(param_2 + 0x24)) {
    FUN_015f5ab8();
    iVar4 = *(int *)(param_2 + 0x28);
  }
  *(uint *)(param_2 + 0x2c) = uVar5 + 1;
  puVar3 = (undefined4 *)(iVar4 + uVar5 * 8);
  *puVar3 = param_4;
  puVar3[1] = 0;
  if (uVar1 == 0) {
    if (*(uint *)(param_2 + 8) <= param_3) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(param_3,*(uint *)(param_2 + 8),0x1c03448);
    }
    *(uint *)(*(int *)(param_2 + 4) + param_3 * 0x14 + 8) = uVar5;
  }
  else {
    if (uVar5 < uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(uVar1,uVar5 + 1,0x1c03438);
    }
    *(uint *)(iVar4 + uVar1 * 8 + 4) = uVar5;
  }
  *param_1 = 3;
  return;
}

