// FUN_016e0d7c @ 016e0d7c size=264 calls_out=2 calls_in=2
// strings: /aws-lc/crypto/bytestring/cbb.c | /aws-lc/crypto/bytestring/cbb.c

undefined8 FUN_016e0d7c(int *param_1,int *param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  uVar4 = param_1[1] + param_3;
  if (CARRY4(param_1[1],param_3)) {
    uVar5 = 0x46;
  }
  else {
    uVar3 = param_1[2];
    if (uVar4 <= uVar3) {
LAB_016e0df4:
      if (param_2 != (int *)0x0) {
        *param_2 = param_1[1] + *param_1;
      }
      return 1;
    }
    if ((*(byte *)(param_1 + 3) & 1) != 0) {
      uVar1 = uVar3 * 2;
      if ((uVar3 <= uVar1) && (uVar4 < uVar1)) {
        uVar4 = uVar1;
      }
      iVar2 = FUN_0177ad5c(*param_1);
      if (iVar2 != 0) {
        *param_1 = iVar2;
        param_1[2] = uVar4;
        goto LAB_016e0df4;
      }
      goto LAB_016e0e40;
    }
    uVar5 = 0x4c;
  }
  FUN_016e9cd0(0xe,0,0x45,"/aws-lc/crypto/bytestring/cbb.c",uVar5);
LAB_016e0e40:
  *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) | 2;
  return 0;
}

