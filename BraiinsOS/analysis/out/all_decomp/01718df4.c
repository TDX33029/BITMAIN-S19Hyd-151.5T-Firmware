// FUN_01718df4 @ 01718df4 size=372 calls_out=2 calls_in=6
// strings: 

ulonglong FUN_01718df4(uint param_1,undefined4 *param_2,uint param_3,undefined4 *param_4,
                      uint param_5)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  ulonglong uVar6;
  
  puVar4 = param_2;
  uVar3 = param_3;
  if (param_5 <= param_3) {
    puVar4 = param_4;
    param_4 = param_2;
    uVar3 = param_5;
    param_5 = param_3;
  }
  iVar2 = param_5 * 4;
  if (uVar3 == 0) {
    if (iVar2 == 0) {
      return (ulonglong)param_1;
    }
    uVar6 = FUN_016dd606(param_1,0,iVar2,0);
    return uVar6;
  }
  puVar5 = (undefined4 *)(param_1 + iVar2);
  uVar1 = FUN_01718cb4(param_1,param_4,param_5,*puVar4);
  *(undefined4 *)(param_1 + param_5 * 4) = uVar1;
  if (uVar3 == 1) {
    return 0;
  }
  do {
    uVar1 = FUN_01718b54(param_1 + 4,param_4,param_5,puVar4[1]);
    puVar5[1] = uVar1;
    if (uVar3 == 2) {
      return CONCAT44(param_4,param_1 + 8);
    }
    uVar1 = FUN_01718b54(param_1 + 8,param_4,param_5,puVar4[2]);
    iVar2 = param_1 + 0xc;
    puVar5[2] = uVar1;
    if (uVar3 == 3) {
      return CONCAT44(param_4,iVar2);
    }
    param_1 = param_1 + 0x10;
    uVar1 = FUN_01718b54(iVar2,param_4,param_5,puVar4[3]);
    uVar3 = uVar3 - 4;
    puVar5[3] = uVar1;
    if (uVar3 == 0) {
      return CONCAT44(param_4,param_1);
    }
    puVar4 = puVar4 + 4;
    uVar1 = FUN_01718b54(param_1,param_4,param_5,*puVar4);
    puVar5 = puVar5 + 4;
    *puVar5 = uVar1;
  } while (uVar3 != 1);
  return 0;
}

