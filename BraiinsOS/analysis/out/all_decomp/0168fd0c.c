// FUN_0168fd0c @ 0168fd0c size=304 calls_out=5 calls_in=1
// strings: 

void FUN_0168fd0c(float param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  if (param_1 < 0.0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464(&DAT_0041486d,0x26,&DAT_018adef0);
  }
  if (1000.0 < param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464(&DAT_00414893,0x29,&DAT_018adf00);
  }
  if (param_1 == 0.0) {
    iVar4 = 1;
    uVar3 = 0;
  }
  else {
    if (param_1 <= 1.0) {
      param_1 = 1.0 / param_1;
      uVar3 = 1;
    }
    else {
      param_1 = 1000.0 / param_1;
      uVar3 = 1000;
    }
    iVar4 = (int)param_1;
  }
  uVar2 = (uint)((longlong)iVar4 * 100);
  if ((int)((ulonglong)((longlong)iVar4 * 100) >> 0x20) != (int)uVar2 >> 0x1f) {
    uVar2 = iVar4 >> 0x1f ^ 0x7fffffff;
  }
  iVar1 = thunk_FUN_016d4a50(0x28);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(4,0x28);
  }
  FUN_016dd606(iVar1,0,0x28);
  FUN_0165a798(&local_30);
  *param_2 = 1;
  param_2[8] = local_30;
  param_2[9] = uStack_2c;
  param_2[10] = uStack_28;
  param_2[5] = 10;
  param_2[1] = 0;
  param_2[0xc] = 0;
  *(undefined1 *)(param_2 + 7) = 0;
  param_2[4] = iVar1;
  param_2[6] = 0;
  param_2[0xe] = uVar2;
  param_2[0xf] = 0;
  param_2[0x10] = uVar3;
  param_2[0x11] = iVar4;
  param_2[2] = 0;
  return;
}

