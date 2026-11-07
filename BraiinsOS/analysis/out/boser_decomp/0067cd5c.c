// FUN_0067cd5c @ 0067cd5c size=492 calls_out=1 calls_in=2
// strings: 

uint FUN_0067cd5c(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = 0;
  if ((*(char *)(param_1 + 0x80) == *(char *)(param_2 + 0x80)) &&
     (*(int *)(param_1 + 0x34) == *(int *)(param_2 + 0x34))) {
    if (*(int *)(param_1 + 0x38) == -0x80000000 || *(int *)(param_2 + 0x38) == -0x80000000) {
      if (*(int *)(param_1 + 0x38) != -0x80000000 || *(int *)(param_2 + 0x38) != -0x80000000) {
        return 0;
      }
    }
    else {
      if (*(int *)(param_1 + 0x40) != *(int *)(param_2 + 0x40)) {
        return 0;
      }
      iVar2 = thunk_FUN_01bed842(*(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_2 + 0x3c));
      if (iVar2 != 0) {
        return 0;
      }
    }
    if (*(int *)(param_1 + 0x44) == -0x80000000 || *(int *)(param_2 + 0x44) == -0x80000000) {
      if (*(int *)(param_1 + 0x44) != -0x80000000 || *(int *)(param_2 + 0x44) != -0x80000000) {
        return 0;
      }
    }
    else {
      if (*(int *)(param_1 + 0x4c) != *(int *)(param_2 + 0x4c)) {
        return 0;
      }
      iVar2 = thunk_FUN_01bed842(*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_2 + 0x48));
      if (iVar2 != 0) {
        return 0;
      }
    }
    if (*(int *)(param_1 + 0x50) == -0x80000000 || *(int *)(param_2 + 0x50) == -0x80000000) {
      if (*(int *)(param_1 + 0x50) != -0x80000000 || *(int *)(param_2 + 0x50) != -0x80000000) {
        return 0;
      }
    }
    else {
      if (*(int *)(param_1 + 0x58) != *(int *)(param_2 + 0x58)) {
        return 0;
      }
      iVar2 = thunk_FUN_01bed842(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_2 + 0x54));
      if (iVar2 != 0) {
        return 0;
      }
    }
    uVar1 = *(uint *)(param_2 + 0x20);
    uVar3 = *(uint *)(param_1 + 0x20);
    if ((uVar3 != 2) != (uVar1 == 2)) {
      if (uVar3 == 2) {
        if (*(int *)(param_1 + 0x24) != 1) {
          return *(uint *)(param_2 + 0x24) ^ 1;
        }
        if (*(uint *)(param_2 + 0x24) == 0) {
          return 0;
        }
        iVar2 = *(int *)(param_1 + 0x28) - *(int *)(param_2 + 0x28);
      }
      else {
        if ((uVar3 & 1) == 0) {
          if ((uVar1 & 1) != 0) {
            return 0;
          }
        }
        else {
          if ((uVar1 & 1) == 0) {
            return 0;
          }
          if (*(int *)(param_1 + 0x24) != *(int *)(param_2 + 0x24)) {
            return 0;
          }
        }
        if (*(int *)(param_1 + 0x28) == -0x80000000 || *(int *)(param_2 + 0x28) == -0x80000000) {
          return (uint)(*(int *)(param_1 + 0x28) == -0x80000000 &&
                       *(int *)(param_2 + 0x28) == -0x80000000);
        }
        if (*(int *)(param_1 + 0x30) != *(int *)(param_2 + 0x30)) {
          return 0;
        }
        iVar2 = thunk_FUN_01bed842(*(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_2 + 0x2c));
      }
      uVar4 = (uint)(iVar2 == 0);
    }
  }
  return uVar4;
}

