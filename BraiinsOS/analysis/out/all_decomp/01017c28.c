// FUN_01017c28 @ 01017c28 size=320 calls_out=1 calls_in=0
// strings: assertion failed: self.refused.is_none()

void FUN_01017c28(undefined2 *param_1,uint *param_2,uint param_3,int param_4,int param_5)

{
  undefined **ppuVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_2[2] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464("assertion failed: self.refused.is_none()",0x28,&DAT_0188244c);
  }
  if (*(char *)(param_5 + 0x2c) == '\x01') {
    if (param_4 == 0 || (param_3 & 1) == 0) {
LAB_01017c64:
      ppuVar1 = &PTR_LAB_01882e60;
      goto LAB_01017c74;
    }
  }
  else if (((param_4 != 0) || (param_3 == 0)) || ((param_3 & 1) != 0)) goto LAB_01017c64;
  if (*param_2 == 1) {
    *param_1 = 0x101;
    *(undefined4 *)(param_1 + 2) = 1;
    *(undefined ***)(param_1 + 4) = &PTR_LAB_01882418;
    *(undefined4 *)(param_1 + 6) = 1;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 10) = 0;
    return;
  }
  if (param_2[1] <= param_3) {
    uVar2 = *(uint *)(param_5 + 0x10);
    uVar3 = *(uint *)(param_5 + 0x14);
    *param_2 = param_3 + 2 >> 0x1f;
    param_2[1] = param_3 + 2;
    if (uVar3 < uVar2) {
      *(undefined4 *)(param_1 + 2) = 1;
      *(uint *)(param_1 + 4) = param_3;
      *(undefined1 *)param_1 = 3;
      return;
    }
    param_2[2] = 1;
    param_2[3] = param_3;
    *(undefined4 *)(param_1 + 2) = 0;
    *(undefined1 *)param_1 = 3;
    return;
  }
  ppuVar1 = &PTR_LAB_01882418;
LAB_01017c74:
  *(undefined ***)(param_1 + 4) = ppuVar1;
  *(undefined4 *)(param_1 + 2) = 1;
  *(undefined4 *)(param_1 + 6) = 1;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  *param_1 = 0x101;
  return;
}

