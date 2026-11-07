// FUN_0104c574 @ 0104c574 size=324 calls_out=5 calls_in=1
// strings: assertion failed: start <= (u16::MAX as usize) | assertion failed: end <= (u16::MAX as usize) | assertion failed: start < self.offset | assertion failed: end <= self.buffer.len()1.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0

void FUN_0104c574(int *param_1,uint param_2,uint param_3)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  if (0xffff < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464("assertion failed: start <= (u16::MAX as usize)",0x2e,&DAT_01883578);
  }
  if (0xffff < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464("assertion failed: end <= (u16::MAX as usize)",0x2c,&DAT_01883588);
  }
  if (param_3 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464(&DAT_003e937e,0x1e,&DAT_01883598);
  }
  if ((uint)param_1[5] < 0x3fff) {
    if ((uint)param_1[5] <= param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa464("assertion failed: start < self.offset",0x25,&DAT_018835c8);
    }
    if (*(uint *)(param_1[3] + 8) < param_3) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa464("assertion failed: end <= self.buffer.len()1.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0"
                   ,0x2a,&DAT_018835d8);
    }
    iVar3 = *(int *)(param_1[3] + 4);
    param_3 = param_3 - param_2;
    if (param_3 == 0) {
      uVar4 = 1;
      uVar2 = 0;
    }
    else {
      uVar4 = thunk_FUN_016d4a50(param_3);
      uVar2 = param_3;
      if (uVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,param_3);
      }
    }
    FUN_016dd1aa(uVar4,iVar3 + param_2,param_3);
    iVar3 = param_1[2];
    if (iVar3 == *param_1) {
      FUN_0104e6a8(param_1);
    }
    param_1[2] = iVar3 + 1;
    puVar1 = (uint *)(param_1[1] + iVar3 * 0x10);
    *puVar1 = param_2;
    puVar1[1] = uVar2;
    puVar1[2] = uVar4;
    puVar1[3] = param_3;
  }
  return;
}

