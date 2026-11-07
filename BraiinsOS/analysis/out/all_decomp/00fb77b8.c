// FUN_00fb77b8 @ 00fb77b8 size=344 calls_out=0 calls_in=3
// strings: 

void FUN_00fb77b8(uint *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  if (param_2 < 0x80) {
    param_1[2] = 0;
    if (param_2 - 0x61 < 0x1a) {
      param_2 = param_2 ^ 0x20;
    }
    *param_1 = param_2;
    param_1[1] = 0;
    return;
  }
  iVar2 = 0x309;
  if (param_2 < 0x1fa8) {
    iVar2 = 0;
  }
  if (*(uint *)(&UNK_00365c60 + (iVar2 + 0x184) * 8) <= param_2) {
    iVar2 = iVar2 + 0x184;
  }
  if (*(uint *)(&UNK_00365c60 + (iVar2 + 0xc2) * 8) <= param_2) {
    iVar2 = iVar2 + 0xc2;
  }
  if (*(uint *)(&UNK_00365c60 + (iVar2 + 0x61) * 8) <= param_2) {
    iVar2 = iVar2 + 0x61;
  }
  if (*(uint *)(&UNK_00365c60 + (iVar2 + 0x31) * 8) <= param_2) {
    iVar2 = iVar2 + 0x31;
  }
  if (*(uint *)(&UNK_00365c60 + (iVar2 + 0x18) * 8) <= param_2) {
    iVar2 = iVar2 + 0x18;
  }
  if (*(uint *)(&UNK_00365c60 + (iVar2 + 0xc) * 8) <= param_2) {
    iVar2 = iVar2 + 0xc;
  }
  if (*(uint *)(&UNK_00365c60 + (iVar2 + 6) * 8) <= param_2) {
    iVar2 = iVar2 + 6;
  }
  if (*(uint *)(&UNK_00365c60 + (iVar2 + 3) * 8) <= param_2) {
    iVar2 = iVar2 + 3;
  }
  if (*(uint *)(&UNK_00365c60 + (iVar2 + 2) * 8) <= param_2) {
    iVar2 = iVar2 + 2;
  }
  if (*(uint *)(&UNK_00365c60 + (iVar2 + 1) * 8) <= param_2) {
    iVar2 = iVar2 + 1;
  }
  if (*(uint *)(&UNK_00365c60 + iVar2 * 8) != param_2) {
    *param_1 = param_2;
    param_1[1] = 0;
    param_1[2] = 0;
    return;
  }
  uVar1 = *(uint *)(&UNK_00365c64 + iVar2 * 8);
  if ((uVar1 ^ 0xd800) - 0x110000 < 0xffef0800) {
    iVar2 = (uVar1 & 0x3fffff) * 0xc;
    uVar3 = *(uint *)(&UNK_00368cf4 + iVar2);
    uVar1 = *(uint *)(&UNK_00368cf8 + iVar2);
    *param_1 = *(uint *)(&UNK_00368cf0 + iVar2);
    param_1[1] = uVar3;
    param_1[2] = uVar1;
    return;
  }
  *param_1 = uVar1;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}

