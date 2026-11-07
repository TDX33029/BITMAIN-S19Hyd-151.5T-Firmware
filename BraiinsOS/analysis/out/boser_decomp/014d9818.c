// FUN_014d9818 @ 014d9818 size=156 calls_out=1 calls_in=1
// strings: 

void FUN_014d9818(undefined4 *param_1,int param_2,int param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined4 local_1c [3];
  
  if ((param_4 == 0) && (param_5 != 0)) {
    local_1c[0] = 0xe;
    uVar1 = FUN_012c6bfc(param_2,local_1c);
    param_1[1] = uVar1;
    uVar1 = 1;
  }
  else {
    uVar2 = *(uint *)(param_2 + 0x14);
    if (uVar2 < *(uint *)(param_2 + 0x10)) {
      do {
        if (9 < *(byte *)(*(int *)(param_2 + 0xc) + uVar2) - 0x30) break;
        uVar2 = uVar2 + 1;
        *(uint *)(param_2 + 0x14) = uVar2;
      } while (*(uint *)(param_2 + 0x10) != uVar2);
    }
    uVar1 = 0;
    uVar3 = 0x8000000000000000;
    if (param_3 != 0) {
      uVar3 = 0;
    }
    *(undefined8 *)(param_1 + 2) = uVar3;
  }
  *param_1 = uVar1;
  return;
}

