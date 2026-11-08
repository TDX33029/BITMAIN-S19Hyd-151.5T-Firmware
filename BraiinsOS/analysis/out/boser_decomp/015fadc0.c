// FUN_015fadc0 @ 015fadc0 size=144 calls_out=1 calls_in=1
// strings: 

void FUN_015fadc0(undefined4 *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  uint *puVar4;
  uint *puVar3;
  
  if (param_2[4] == 0) {
    *param_1 = 0x80000000;
    return;
  }
  iVar1 = *param_2;
  uVar2 = param_2[1];
  if (uVar2 == 0) {
    puVar3 = (uint *)param_2[2];
    do {
      puVar4 = puVar3 + 1;
      uVar2 = *puVar3;
      iVar1 = iVar1 + -0x2c0;
      puVar3 = puVar4;
    } while ((uVar2 & 0x80808080) == 0x80808080);
    param_2[2] = (int)puVar4;
    uVar2 = uVar2 & 0x80808080 ^ 0x80808080;
    *param_2 = iVar1;
  }
  iVar1 = (short)-(short)((uint)LZCOUNT(uVar2 << 0x18 | (uVar2 >> 8 & 0xff) << 0x10 |
                                        (uVar2 >> 0x10 & 0xff) << 8 | uVar2 >> 0x18) >> 3) * 0xb0 +
          iVar1;
  param_2[4] = param_2[4] + -1;
  param_2[1] = uVar2 - 1 & uVar2;
  FUN_006666fc(param_1,*(undefined4 *)(iVar1 + -0xac),*(undefined4 *)(iVar1 + -0xa8));
  return;
}

