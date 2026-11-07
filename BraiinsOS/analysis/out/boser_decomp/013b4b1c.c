// FUN_013b4b1c @ 013b4b1c size=76 calls_out=1 calls_in=1
// strings: 

undefined1 FUN_013b4b1c(uint *param_1)

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
  FUN_01284540(&DAT_00570850);
}

