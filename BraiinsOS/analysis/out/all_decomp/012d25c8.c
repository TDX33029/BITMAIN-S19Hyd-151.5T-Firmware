// FUN_012d25c8 @ 012d25c8 size=360 calls_out=3 calls_in=2
// strings: 

undefined4 FUN_012d25c8(int param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 *puStack_34;
  undefined4 *local_30;
  undefined4 *local_2c;
  undefined4 *local_28;
  
  iVar1 = param_2[2];
  if ((uint)(*param_2 - iVar1) < 0x23) {
    FUN_010e555c(param_2,iVar1,0x23,1,1);
    iVar1 = param_2[2];
  }
  FUN_016dd1aa(param_2[1] + iVar1,&DAT_003b78b8,0x23);
  iVar1 = iVar1 + 0x23;
  param_2[2] = iVar1;
  if (*(int *)(param_1 + 8) != 0) {
    puVar3 = *(undefined4 **)(param_1 + 4);
    puVar4 = puVar3 + *(int *)(param_1 + 8) * 4;
    do {
      local_44 = *puVar3;
      local_40 = puVar3[1];
      local_3c = puVar3[2];
      uStack_38 = puVar3[3];
      local_28 = &DAT_0157d360;
      local_30 = &DAT_0157d360;
      puStack_34 = &local_44;
      local_2c = &local_3c;
      iVar1 = FUN_00fa948c(param_2,&DAT_018859c0,&DAT_00589b5e,&puStack_34);
      if (iVar1 != 0) {
        return 1;
      }
      puVar3 = puVar3 + 4;
    } while (puVar3 != puVar4);
    iVar1 = param_2[2];
  }
  uVar5 = *(undefined4 *)(param_1 + 0x10);
  uVar2 = *(uint *)(param_1 + 0x14);
  if ((uint)(*param_2 - iVar1) < uVar2) {
    FUN_010e555c(param_2,iVar1,uVar2,1,1);
    iVar1 = param_2[2];
  }
  FUN_016dd1aa(param_2[1] + iVar1,uVar5,uVar2);
  param_2[2] = iVar1 + uVar2;
  return 0;
}

