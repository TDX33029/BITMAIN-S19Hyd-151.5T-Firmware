// FUN_0123c4bc @ 0123c4bc size=224 calls_out=2 calls_in=1
// strings: 

void FUN_0123c4bc(int *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int local_30;
  int iStack_2c;
  int local_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  
  uVar1 = *(uint *)(param_2 + 0x14);
  if (uVar1 < *(uint *)(param_2 + 0x10)) {
    do {
      uVar2 = (uint)*(byte *)(*(int *)(param_2 + 0xc) + uVar1);
      uVar3 = uVar2 - 9;
      if ((0x17 < uVar3) || ((1 << (uVar3 & 0xff) & 0x800013U) == 0)) {
        if (uVar2 == 0x6e) {
          *(uint *)(param_2 + 0x14) = uVar1 + 1;
          local_28 = FUN_01964c70(param_2,"ull",3);
          if (local_28 == 0) {
            *param_1 = 5;
            param_1[1] = 0;
            return;
          }
          goto LAB_0123c52c;
        }
        break;
      }
      uVar1 = uVar1 + 1;
      *(uint *)(param_2 + 0x14) = uVar1;
    } while (*(uint *)(param_2 + 0x10) != uVar1);
  }
  FUN_01248c20(&local_30);
  if (local_30 == 5 && iStack_2c == 0) {
LAB_0123c52c:
    *param_1 = 6;
    param_1[1] = 0;
    param_1[2] = local_28;
  }
  else {
    *param_1 = local_30;
    param_1[1] = iStack_2c;
    param_1[2] = local_28;
    param_1[3] = iStack_24;
    param_1[4] = iStack_20;
    param_1[5] = iStack_1c;
  }
  return;
}

