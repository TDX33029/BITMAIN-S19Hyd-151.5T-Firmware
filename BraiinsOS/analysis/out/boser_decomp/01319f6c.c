// FUN_01319f6c @ 01319f6c size=136 calls_out=1 calls_in=3
// strings: 

void FUN_01319f6c(undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  code *local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  uVar1 = param_1[0x100];
  if (0x40 < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(0,uVar1,0x40,&DAT_01ce4cd4);
  }
  if (uVar1 != 0) {
    iVar2 = uVar1 << 4;
    do {
      local_30 = (code *)*param_1;
      uStack_2c = param_1[1];
      uStack_28 = param_1[2];
      uStack_24 = param_1[3];
      *param_1 = &DAT_01348fc4;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      (*local_30)((uint)&local_30 | 4);
      param_1 = param_1 + 4;
      iVar2 = iVar2 + -0x10;
    } while (iVar2 != 0);
  }
  return;
}

