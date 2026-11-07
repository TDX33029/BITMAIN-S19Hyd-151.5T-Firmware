// FUN_016dd606 @ 016dd606 size=182 calls_out=0 calls_in=511
// strings: 

void FUN_016dd606(byte *param_1,byte param_2,uint param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  if (param_3 != 0) {
    *param_1 = param_2;
    param_1[param_3 - 1] = param_2;
    if (2 < param_3) {
      *(ushort *)(param_1 + 1) = CONCAT11(param_2,param_2);
      *(ushort *)(param_1 + (param_3 - 3)) = CONCAT11(param_2,param_2);
      if (6 < param_3) {
        param_1[3] = param_2;
        param_1[param_3 - 4] = param_2;
        if (8 < param_3) {
          uVar5 = -(int)param_1 & 3;
          uVar4 = param_3 - uVar5 & 0xfffffffc;
          pbVar1 = param_1 + uVar5;
          iVar3 = (uint)param_2 * 0x1010101;
          *(int *)(param_1 + uVar5) = iVar3;
          *(int *)(pbVar1 + (uVar4 - 4)) = iVar3;
          if (8 < uVar4) {
            *(int *)(pbVar1 + 4) = iVar3;
            *(int *)(pbVar1 + 8) = iVar3;
            *(int *)(pbVar1 + (uVar4 - 0xc)) = iVar3;
            *(int *)(pbVar1 + (uVar4 - 8)) = iVar3;
            if (0x18 < uVar4) {
              *(int *)(pbVar1 + 0xc) = iVar3;
              *(int *)(pbVar1 + 0x10) = iVar3;
              *(int *)(pbVar1 + 0x14) = iVar3;
              *(int *)(pbVar1 + 0x18) = iVar3;
              *(int *)(pbVar1 + (uVar4 - 0x1c)) = iVar3;
              *(int *)(pbVar1 + (uVar4 - 0x18)) = iVar3;
              *(int *)(pbVar1 + (uVar4 - 0x14)) = iVar3;
              *(int *)(pbVar1 + (uVar4 - 0x10)) = iVar3;
              pbVar2 = pbVar1 + ((uint)pbVar1 & 4) + 0x38;
              pbVar1 = pbVar2 + (uVar4 - (((uint)pbVar1 & 4) + 0x18) & 0xffffffe0);
              for (; pbVar2 != pbVar1; pbVar2 = pbVar2 + 0x20) {
                *(int *)(pbVar2 + -0x20) = iVar3;
                *(int *)(pbVar2 + -0x1c) = iVar3;
                *(int *)(pbVar2 + -0x18) = iVar3;
                *(int *)(pbVar2 + -0x14) = iVar3;
                *(int *)(pbVar2 + -0x10) = iVar3;
                *(int *)(pbVar2 + -0xc) = iVar3;
                *(int *)(pbVar2 + -8) = iVar3;
                *(int *)(pbVar2 + -4) = iVar3;
              }
            }
          }
          return;
        }
      }
    }
  }
  return;
}

