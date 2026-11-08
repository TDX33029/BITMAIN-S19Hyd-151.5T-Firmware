// FUN_0101f510 @ 0101f510 size=396 calls_out=1 calls_in=1
// strings: 

void FUN_0101f510(undefined2 *param_1,byte *param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar2 = (uint)*param_2;
  uVar3 = uVar2 - 6;
  uVar4 = uVar3;
  if (uVar2 < 6) {
    uVar4 = 6;
  }
  if ((uVar4 & 0xff) == 3) {
    bVar1 = param_2[1];
    if (((5 < uVar3) && (uVar2 < 3)) && (uVar2 != 0)) {
      if (uVar2 == 1) {
        (**(code **)(*(int *)(param_2 + 8) + 0x10))
                  (param_2 + 0x14,*(undefined4 *)(param_2 + 0xc),*(undefined4 *)(param_2 + 0x10));
      }
      else if ((*(uint *)(param_2 + 4) & 0x7fffffff) != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 8),0x7fffffff,
                           DAT_018dd947);
      }
    }
    param_2[1] = bVar1;
    *param_2 = 0xb;
    *(undefined1 *)param_1 = 3;
    return;
  }
  if ((uVar4 & 0xff) != 4) {
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 2) = 1;
    *(undefined ***)(param_1 + 4) = &PTR_LAB_01882ab4;
    *(undefined4 *)(param_1 + 6) = 1;
    *(undefined4 *)(param_1 + 10) = 0;
    *param_1 = 0x101;
    return;
  }
  if (((5 < uVar3) && (uVar2 < 3)) && (uVar2 != 0)) {
    if (uVar2 == 1) {
      (**(code **)(*(int *)(param_2 + 8) + 0x10))
                (param_2 + 0x14,*(undefined4 *)(param_2 + 0xc),*(undefined4 *)(param_2 + 0x10));
    }
    else if ((*(uint *)(param_2 + 4) & 0x7fffffff) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 8),0x7fffffff,
                         DAT_018dd947);
      *(undefined1 *)param_1 = 3;
      *param_2 = 3;
      return;
    }
  }
  *(undefined1 *)param_1 = 3;
  *param_2 = 3;
  return;
}

