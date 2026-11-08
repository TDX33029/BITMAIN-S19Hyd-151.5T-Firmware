// FUN_00736e8c @ 00736e8c size=236 calls_out=2 calls_in=1
// strings: 

void FUN_00736e8c(int param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  uint *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  iVar7 = 0;
  local_2c = 0;
  do {
    uVar1 = FUN_00736d7c(param_2,param_3,&local_2c);
    iVar8 = iVar7 * 4;
    iVar7 = iVar7 + 1;
    puVar3 = (uint *)(param_1 + iVar8 + 0x1000);
    *puVar3 = *puVar3 ^ uVar1;
  } while (iVar7 != 0x12);
  iVar7 = 0;
  uVar4 = 0;
  uVar5 = 0;
  do {
    FUN_00736dd4(&local_28,param_1,uVar4,uVar5);
    iVar8 = iVar7 * 8;
    *(undefined4 *)(param_1 + 0x1004 + iVar7 * 8) = local_24;
    iVar7 = iVar7 + 1;
    *(undefined4 *)(param_1 + iVar8 + 0x1000) = local_28;
    uVar4 = local_28;
    uVar5 = local_24;
  } while (iVar7 != 9);
  iVar8 = 0;
  iVar7 = param_1;
  do {
    iVar6 = 0;
    do {
      FUN_00736dd4(&local_28,param_1);
      puVar2 = (undefined4 *)(iVar7 + iVar6 * 8);
      *puVar2 = local_28;
      iVar6 = iVar6 + 1;
      puVar2[1] = local_24;
    } while (iVar6 != 0x80);
    iVar8 = iVar8 + 1;
    iVar7 = iVar7 + 0x400;
  } while (iVar8 != 4);
  return;
}

