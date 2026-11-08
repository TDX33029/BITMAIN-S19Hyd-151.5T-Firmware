// FUN_00ee232c @ 00ee232c size=424 calls_out=3 calls_in=0
// strings: hot_temperature | dangerous_temperature | target_temperature

int FUN_00ee232c(undefined4 *param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint local_2c;
  int *local_28;
  
  iVar4 = *param_2;
  pcVar3 = "{";
  uVar2 = 1;
  do {
    uVar6 = *(uint *)(iVar4 + 4);
    uVar1 = uVar6 ^ 0x7fffffff;
    if (uVar2 < uVar1) {
      uVar1 = uVar2;
    }
    FUN_01284394(iVar4,pcVar3,uVar1);
    if (uVar6 == 0x7fffffff) goto LAB_00ee24bc;
    pcVar3 = pcVar3 + uVar1;
    uVar2 = uVar2 - uVar1;
  } while (uVar2 != 0);
  local_2c = 0x100;
  local_28 = param_2;
  iVar4 = FUN_00ee13d4((int)*(undefined8 *)(param_1 + 2),&local_2c,"hot_temperature",0xf,param_1[1],
                       *param_1,param_1[1]);
  if ((((iVar4 == 0) &&
       (iVar4 = FUN_00ee13d4((int)*(undefined8 *)(param_1 + 6),&local_2c,"dangerous_temperature",
                             0x15,param_1[5],param_1[4],param_1[5]), iVar4 == 0)) &&
      (iVar4 = FUN_00ee13d4((int)*(undefined8 *)(param_1 + 10),&local_2c,"target_temperature",0x12,
                            param_1[9],param_1[8],param_1[9]), iVar4 == 0)) &&
     ((iVar4 = 0, (local_2c & 0xff00) != 0 && ((local_2c & 1) == 0)))) {
    uVar2 = 1;
    iVar5 = *local_28;
    pcVar3 = "}";
    do {
      uVar6 = *(uint *)(iVar5 + 4);
      uVar1 = uVar6 ^ 0x7fffffff;
      if (uVar2 < uVar1) {
        uVar1 = uVar2;
      }
      FUN_01284394(iVar5,pcVar3,uVar1);
      if (uVar6 == 0x7fffffff) {
LAB_00ee24bc:
        iVar4 = FUN_01966f50(2,&DAT_01d2e7b8);
        return iVar4;
      }
      pcVar3 = pcVar3 + uVar1;
      uVar2 = uVar2 - uVar1;
    } while (uVar2 != 0);
  }
  return iVar4;
}

