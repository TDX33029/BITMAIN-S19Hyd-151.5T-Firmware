// FUN_008fab2c @ 008fab2c size=396 calls_out=6 calls_in=6
// strings: 

void FUN_008fab2c(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  int local_28;
  int local_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  uVar2 = *(uint *)(param_2 + 0x14);
  if (*(uint *)(param_2 + 0x10) <= uVar2) {
LAB_008fac08:
    local_28 = 5;
    uVar1 = FUN_008f9984(param_2,&local_28);
    *param_1 = 1;
    param_1[1] = uVar1;
    return;
  }
LAB_008fab48:
  uVar3 = (uint)*(byte *)(*(int *)(param_2 + 0xc) + uVar2);
  switch(uVar3) {
  case 9:
  case 10:
  case 0xd:
  case 0x20:
    goto switchD_008fab60_caseD_9;
  default:
    if (9 < uVar3 - 0x30) {
      uVar1 = FUN_005b8238(param_2,&local_28,&DAT_018673a8);
      uVar1 = FUN_00e959bc(uVar1,param_2);
      param_1[1] = uVar1;
      *param_1 = 1;
      return;
    }
    FUN_008fa814(&local_28,param_2,1);
    uVar4 = CONCAT44(uStack_1c,local_20);
    if (local_28 == 3 && local_24 == 0) {
      *param_1 = 1;
      param_1[1] = local_20;
      return;
    }
    if (local_28 == 2) {
LAB_008facf8:
      uVar4 = FUN_01845d5c();
      goto LAB_008facfc;
    }
    if (local_28 != 1) goto LAB_008facfc;
    break;
  case 0x2d:
    *(uint *)(param_2 + 0x14) = uVar2 + 1;
    FUN_008fa814(&local_28,param_2,0);
    uVar4 = CONCAT44(uStack_1c,local_20);
    if (local_28 == 3 && local_24 == 0) {
      *param_1 = 1;
      param_1[1] = local_20;
      return;
    }
    if (local_28 == 0) goto LAB_008facfc;
    if (local_28 != 1) goto LAB_008facf8;
  }
  uVar4 = FUN_01845f30();
LAB_008facfc:
  *(undefined8 *)(param_1 + 2) = uVar4;
  *param_1 = 0;
  return;
switchD_008fab60_caseD_9:
  uVar2 = uVar2 + 1;
  *(uint *)(param_2 + 0x14) = uVar2;
  if (*(uint *)(param_2 + 0x10) == uVar2) goto LAB_008fac08;
  goto LAB_008fab48;
}

