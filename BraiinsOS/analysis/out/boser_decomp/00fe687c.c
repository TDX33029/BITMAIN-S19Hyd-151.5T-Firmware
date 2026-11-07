// FUN_00fe687c @ 00fe687c size=224 calls_out=2 calls_in=1
// strings: 

void FUN_00fe687c(undefined2 *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  char local_20;
  undefined1 local_1f;
  undefined4 local_1c;
  
  uVar2 = *(uint *)(param_2 + 0x14);
  if (uVar2 < *(uint *)(param_2 + 0x10)) {
    do {
      uVar3 = (uint)*(byte *)(*(int *)(param_2 + 0xc) + uVar2);
      uVar4 = uVar3 - 9;
      if ((0x17 < uVar4) || ((1 << (uVar4 & 0xff) & 0x800013U) == 0)) {
        if (uVar3 == 0x6e) {
          *(uint *)(param_2 + 0x14) = uVar2 + 1;
          iVar1 = FUN_012c6b8c(param_2,"ull",3);
          if (iVar1 == 0) {
            *param_1 = 0x200;
            return;
          }
          *(int *)(param_1 + 2) = iVar1;
          *(undefined1 *)param_1 = 1;
          return;
        }
        break;
      }
      uVar2 = uVar2 + 1;
      *(uint *)(param_2 + 0x14) = uVar2;
    } while (*(uint *)(param_2 + 0x10) != uVar2);
  }
  FUN_0127b5bc(&local_20);
  if (local_20 != '\x01') {
    *(undefined1 *)((int)param_1 + 1) = local_1f;
  }
  else {
    *(undefined4 *)(param_1 + 2) = local_1c;
  }
  *(bool *)param_1 = local_20 == '\x01';
  return;
}

