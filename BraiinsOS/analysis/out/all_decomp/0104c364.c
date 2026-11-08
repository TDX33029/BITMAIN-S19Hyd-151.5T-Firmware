// FUN_0104c364 @ 0104c364 size=248 calls_out=3 calls_in=1
// strings: assertion failed: match_start <= &(u16::MAX as usize) | assertion failed: start < self.offset | assertion failed: end <= self.buffer.len()1.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0

undefined4 FUN_0104c364(int param_1,uint param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  
  if (*(uint *)(param_1 + 0x14) <= param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464("assertion failed: start < self.offset",0x25,&DAT_018835c8);
  }
  uVar4 = *(uint *)(*(int *)(param_1 + 0xc) + 8);
  if (uVar4 < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464("assertion failed: end <= self.buffer.len()1.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0.0"
                 ,0x2a,&DAT_018835d8);
  }
  if (param_3 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(param_2,param_3,uVar4,&DAT_018835e8);
  }
  if (*(int *)(param_1 + 8) != 0) {
    puVar5 = *(uint **)(param_1 + 4);
    iVar1 = *(int *)(*(int *)(param_1 + 0xc) + 4);
    iVar3 = *(int *)(param_1 + 8) << 4;
    do {
      if ((puVar5[3] == param_3 - param_2) &&
         (iVar2 = thunk_FUN_016dd50a(puVar5[2],iVar1 + param_2,param_3 - param_2), iVar2 == 0)) {
        if (0xffff < *puVar5) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa464("assertion failed: match_start <= &(u16::MAX as usize)",0x35,&DAT_01883568);
        }
        return 1;
      }
      puVar5 = puVar5 + 4;
      iVar3 = iVar3 + -0x10;
    } while (iVar3 != 0);
  }
  return 0;
}

