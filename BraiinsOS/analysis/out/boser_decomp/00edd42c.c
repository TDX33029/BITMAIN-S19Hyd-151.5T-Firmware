// FUN_00edd42c @ 00edd42c size=384 calls_out=4 calls_in=1
// strings: total_bytes

int FUN_00edd42c(undefined4 *param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint local_2c;
  int *local_28;
  
  iVar4 = *param_2;
  pcVar3 = "{";
  uVar1 = 1;
  do {
    uVar5 = *(uint *)(iVar4 + 4);
    uVar2 = uVar5 ^ 0x7fffffff;
    if (uVar1 < uVar2) {
      uVar2 = uVar1;
    }
    FUN_01284394(iVar4,pcVar3,uVar2);
    if (uVar5 == 0x7fffffff) goto LAB_00edd594;
    pcVar3 = pcVar3 + uVar2;
    uVar1 = uVar1 - uVar2;
  } while (uVar1 != 0);
  local_2c = 0x100;
  local_28 = param_2;
  iVar4 = FUN_0096b424(&local_2c,&DAT_00569de8,0x10,param_1[5],param_1[4],param_1[5]);
  if ((((iVar4 == 0) &&
       (iVar4 = FUN_00ec1250(&local_2c,"total_bytes",0xb,param_1[1],*param_1,param_1[1],param_1[2],
                             param_1[3]), iVar4 == 0)) && (iVar4 = 0, (local_2c & 0xff00) != 0)) &&
     ((local_2c & 1) == 0)) {
    uVar1 = 1;
    iVar6 = *local_28;
    pcVar3 = "}";
    do {
      uVar5 = *(uint *)(iVar6 + 4);
      uVar2 = uVar5 ^ 0x7fffffff;
      if (uVar1 < uVar2) {
        uVar2 = uVar1;
      }
      FUN_01284394(iVar6,pcVar3,uVar2);
      if (uVar5 == 0x7fffffff) {
LAB_00edd594:
        iVar4 = FUN_01966f50(2,&DAT_01d2e7b8);
        return iVar4;
      }
      pcVar3 = pcVar3 + uVar2;
      uVar1 = uVar1 - uVar2;
    } while (uVar1 != 0);
  }
  return iVar4;
}

