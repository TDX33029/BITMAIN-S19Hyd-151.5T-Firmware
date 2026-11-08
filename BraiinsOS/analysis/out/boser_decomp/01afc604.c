// FUN_01afc604 @ 01afc604 size=248 calls_out=2 calls_in=3
// strings: /aws-lc/crypto/bytestring/cbb.c | /aws-lc/crypto/bytestring/cbb.c

undefined4 FUN_01afc604(int *param_1,int *param_2,uint param_3)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  uVar4 = param_1[1] + param_3;
  if (CARRY4(param_1[1],param_3)) {
    uVar5 = 0x46;
    bVar2 = 0;
  }
  else {
    uVar3 = param_1[2];
    if (uVar4 <= uVar3) {
LAB_01afc6c8:
      if (param_2 != (int *)0x0) {
        *param_2 = *param_1 + param_1[1];
      }
      return 1;
    }
    bVar2 = *(byte *)(param_1 + 3) & 1;
    if ((*(byte *)(param_1 + 3) & 1) != 0) {
      if ((uVar3 <= uVar3 * 2) && (uVar4 < uVar3 << 1)) {
        uVar4 = uVar3 << 1;
      }
      iVar1 = FUN_01b6b414(*param_1,uVar4);
      if (iVar1 != 0) {
        *param_1 = iVar1;
        param_1[2] = uVar4;
        goto LAB_01afc6c8;
      }
      goto LAB_01afc658;
    }
    uVar5 = 0x4c;
  }
  FUN_01b053d4(0xe,bVar2,0x45,"/aws-lc/crypto/bytestring/cbb.c",uVar5);
LAB_01afc658:
  *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) | 2;
  return 0;
}

