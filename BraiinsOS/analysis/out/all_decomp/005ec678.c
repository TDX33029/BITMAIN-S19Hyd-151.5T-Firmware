// FUN_005ec678 @ 005ec678 size=316 calls_out=2 calls_in=2
// strings: 

void FUN_005ec678(undefined4 *param_1,int param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint uVar5;
  
  if (*(uint *)(param_2 + 8) <= param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(param_3,*(uint *)(param_2 + 8),&DAT_01856b08);
  }
  iVar1 = *(int *)(param_2 + 0x28);
  uVar5 = *(uint *)(param_2 + 0x2c);
  uVar3 = *(uint *)(*(int *)(param_2 + 4) + param_3 * 0x14 + 8);
  do {
    uVar2 = uVar3;
    if (uVar5 <= uVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(uVar2,uVar5,&DAT_01856b18);
    }
    uVar3 = *(uint *)(iVar1 + uVar2 * 8 + 4);
  } while (uVar3 != 0);
  if (uVar5 == *(uint *)(param_2 + 0x24)) {
    FUN_005fd440(param_2 + 0x24);
    iVar1 = *(int *)(param_2 + 0x28);
  }
  *(uint *)(param_2 + 0x2c) = uVar5 + 1;
  puVar4 = (undefined4 *)(iVar1 + uVar5 * 8);
  *puVar4 = param_4;
  puVar4[1] = 0;
  if (uVar2 == 0) {
    if (*(uint *)(param_2 + 8) <= param_3) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(param_3,*(uint *)(param_2 + 8),&DAT_01856b28);
    }
    *(uint *)(*(int *)(param_2 + 4) + param_3 * 0x14 + 8) = uVar5;
    *param_1 = 3;
    return;
  }
  if (uVar5 < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(uVar2,uVar5 + 1,&DAT_01856b38);
  }
  *(uint *)(iVar1 + uVar2 * 8 + 4) = uVar5;
  *param_1 = 3;
  return;
}

