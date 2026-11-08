// FUN_01445844 @ 01445844 size=288 calls_out=4 calls_in=3
// strings: 

void FUN_01445844(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint local_18;
  undefined4 local_14;
  
  if (*(char *)(param_1 + 0x413) != '\0') {
    return;
  }
  if (*(int *)(param_1 + 0x400) == 0) {
    return;
  }
  FUN_01445710(&local_18,param_1);
  if ((local_18 & 0xff) == 4) {
    uVar1 = *(uint *)(param_1 + 0x404);
    if (uVar1 == 0) {
      return;
    }
    if (3 < uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_012faff4(0,uVar1,3,&DAT_01cf8f64);
    }
    uVar3 = (uVar1 / 3) * 4;
    if (uVar1 % 3 != 0) {
      if (**(char **)(param_1 + 0x40c) == '\0') {
        uVar2 = 3;
        if (uVar1 % 3 == 1) {
          uVar2 = 2;
        }
        uVar3 = uVar2 | uVar3;
      }
      else {
        uVar3 = uVar3 + 4;
      }
    }
    FUN_01444220(param_1 + 0x410,uVar1,param_1,uVar3,*(char **)(param_1 + 0x40c));
    *(uint *)(param_1 + 0x408) = uVar3;
    FUN_01445710(&local_18,param_1);
    if ((local_18 & 0xff) == 4) {
      *(undefined4 *)(param_1 + 0x404) = 0;
      return;
    }
  }
  if ((local_18 & 0xff) == 4) {
    return;
  }
  FUN_0069d8a4(local_18,local_14);
  return;
}

