// FUN_00abb634 @ 00abb634 size=212 calls_out=2 calls_in=2
// strings: 

void FUN_00abb634(int *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int local_28;
  int local_24;
  int iStack_20;
  
  uVar1 = *(uint *)(param_2 + 0x14);
  if (uVar1 < *(uint *)(param_2 + 0x10)) {
    do {
      uVar2 = (uint)*(byte *)(*(int *)(param_2 + 0xc) + uVar1);
      uVar3 = uVar2 - 9;
      if ((0x17 < uVar3) || ((1 << (uVar3 & 0xff) & 0x800013U) == 0)) {
        if (uVar2 == 0x6e) {
          *(uint *)(param_2 + 0x14) = uVar1 + 1;
          local_24 = FUN_012c6b8c(param_2,"ull",3);
          if (local_24 == 0) {
            *param_1 = -0x80000000;
            return;
          }
          goto LAB_00abb6a0;
        }
        break;
      }
      uVar1 = uVar1 + 1;
      *(uint *)(param_2 + 0x14) = uVar1;
    } while (*(uint *)(param_2 + 0x10) != uVar1);
  }
  FUN_00aeeebc(&local_28);
  if (local_28 == -0x80000000) {
LAB_00abb6a0:
    *param_1 = -0x7fffffff;
    param_1[1] = local_24;
  }
  else {
    *param_1 = local_28;
    param_1[1] = local_24;
    param_1[2] = iStack_20;
  }
  return;
}

