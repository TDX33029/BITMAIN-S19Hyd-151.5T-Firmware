// FUN_01307558 @ 01307558 size=308 calls_out=0 calls_in=1
// strings: 

void FUN_01307558(uint *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  if (param_2 < 0x80) {
    if (param_2 - 0x41 < 0x1a) {
      param_2 = param_2 | 0x20;
    }
  }
  else {
    iVar3 = 0x2db;
    if (param_2 < 0x1eee) {
      iVar3 = 0;
    }
    if (*(uint *)(&UNK_00425de0 + (iVar3 + 0x16d) * 8) <= param_2) {
      iVar3 = iVar3 + 0x16d;
    }
    if (*(uint *)(&UNK_00425de0 + (iVar3 + 0xb7) * 8) <= param_2) {
      iVar3 = iVar3 + 0xb7;
    }
    if (*(uint *)(&UNK_00425de0 + (iVar3 + 0x5b) * 8) <= param_2) {
      iVar3 = iVar3 + 0x5b;
    }
    if (*(uint *)(&UNK_00425de0 + (iVar3 + 0x2e) * 8) <= param_2) {
      iVar3 = iVar3 + 0x2e;
    }
    if (*(uint *)(&UNK_00425de0 + (iVar3 + 0x17) * 8) <= param_2) {
      iVar3 = iVar3 + 0x17;
    }
    if (*(uint *)(&UNK_00425de0 + (iVar3 + 0xb) * 8) <= param_2) {
      iVar3 = iVar3 + 0xb;
    }
    if (*(uint *)(&UNK_00425de0 + (iVar3 + 6) * 8) <= param_2) {
      iVar3 = iVar3 + 6;
    }
    if (*(uint *)(&UNK_00425de0 + (iVar3 + 3) * 8) <= param_2) {
      iVar3 = iVar3 + 3;
    }
    if (*(uint *)(&UNK_00425de0 + (iVar3 + 1) * 8) <= param_2) {
      iVar3 = iVar3 + 1;
    }
    if (*(uint *)(&UNK_00425de0 + (iVar3 + 1) * 8) <= param_2) {
      iVar3 = iVar3 + 1;
    }
    if (*(uint *)(&UNK_00425de0 + iVar3 * 8) == param_2) {
      uVar1 = *(uint *)(&UNK_00425de4 + iVar3 * 8);
      uVar2 = 0;
      if ((uVar1 ^ 0xd800) - 0x110000 < 0xffef0800) {
        uVar1 = 0x69;
        uVar2 = 0x307;
      }
      *param_1 = uVar1;
      param_1[1] = uVar2;
      param_1[2] = 0;
      return;
    }
  }
  *param_1 = param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}

