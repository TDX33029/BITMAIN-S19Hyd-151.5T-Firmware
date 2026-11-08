// FUN_0101ffc0 @ 0101ffc0 size=336 calls_out=2 calls_in=5
// strings: 

void FUN_0101ffc0(byte *param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  byte *local_1c;
  byte **local_18;
  code *local_14;
  
  uVar2 = (uint)*param_1;
  uVar3 = uVar2 - 6;
  uVar4 = uVar3;
  if (uVar2 < 6) {
    uVar4 = 6;
  }
  if ((uVar4 & 0xff) == 3) {
    bVar1 = param_1[2];
    if (((5 < uVar3) && (uVar2 < 3)) && (uVar2 != 0)) {
      if (uVar2 == 1) {
        (**(code **)(*(int *)(param_1 + 8) + 0x10))
                  (param_1 + 0x14,*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10));
      }
      else if ((*(uint *)(param_1 + 4) & 0x7fffffff) != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 8),0x7fffffff,DAT_018dd947);
      }
    }
    param_1[1] = bVar1;
    *param_1 = 10;
    return;
  }
  if ((uVar4 & 0xff) != 5) {
    local_14 = FUN_0101f6c8;
    local_18 = &local_1c;
    local_1c = param_1;
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_005818e3,&local_18,&DAT_01882ac8);
  }
  if (((5 < uVar3) && (uVar2 < 3)) && (uVar2 != 0)) {
    if (uVar2 == 1) {
      (**(code **)(*(int *)(param_1 + 8) + 0x10))
                (param_1 + 0x14,*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10));
    }
    else if ((*(uint *)(param_1 + 4) & 0x7fffffff) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 8),0x7fffffff,DAT_018dd947);
      *param_1 = 3;
      return;
    }
  }
  *param_1 = 3;
  return;
}

