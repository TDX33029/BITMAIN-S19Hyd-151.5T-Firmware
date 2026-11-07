// FUN_01021a40 @ 01021a40 size=76 calls_out=1 calls_in=1
// strings: 

undefined1 FUN_01021a40(uint *param_1)

{
  undefined1 uVar1;
  uint uVar2;
  
  if (param_1[1] == 0) {
    uVar2 = *param_1;
    if (uVar2 < (uint)((int *)param_1[2])[1]) {
      uVar1 = *(undefined1 *)(*(int *)param_1[2] + uVar2);
      *param_1 = uVar2 + 1;
      param_1[1] = (uint)(0xfffffffe < uVar2);
      return uVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00f600c0(&DAT_0056a308);
}

