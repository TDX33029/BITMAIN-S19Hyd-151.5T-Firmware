// FUN_01020cc8 @ 01020cc8 size=216 calls_out=1 calls_in=1
// strings: assertion failed: self.window_size.0 >= sz as i32

void FUN_01020cc8(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  uVar3 = *(uint *)(param_1 + 0x3c);
  uVar6 = *(uint *)(param_1 + 0xe0);
  uVar2 = uVar3 & ~((int)uVar3 >> 0x1f);
  if (param_3 < uVar2) {
    uVar2 = param_3;
  }
  uVar1 = uVar2 - uVar6;
  if (uVar2 < uVar6) {
    uVar1 = 0;
  }
  if (param_2 != 0) {
    iVar5 = *(int *)(param_1 + 0x38);
    if (iVar5 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa464("assertion failed: self.window_size.0 >= sz as i32",0x31,&DAT_01882d2c);
    }
    uVar4 = uVar3;
    if (!SBORROW4(iVar5,param_2)) {
      *(int *)(param_1 + 0x38) = iVar5 - param_2;
      uVar4 = uVar3 - param_2;
    }
    if (!SBORROW4(iVar5,param_2) && !SBORROW4(uVar3,param_2)) {
      uVar2 = uVar4 & ~((int)uVar4 >> 0x1f);
      *(uint *)(param_1 + 0x3c) = uVar4;
      if (param_3 < uVar2) {
        uVar2 = param_3;
      }
    }
  }
  uVar6 = uVar6 - param_2;
  *(int *)(param_1 + 0xdc) = *(int *)(param_1 + 0xdc) - param_2;
  *(uint *)(param_1 + 0xe0) = uVar6;
  uVar3 = 0;
  if (uVar6 <= uVar2) {
    uVar3 = uVar2 - uVar6;
  }
  if (uVar1 < uVar3) {
    *(undefined1 *)(param_1 + 0xeb) = 1;
    iVar5 = *(int *)(param_1 + 0x40);
    *(undefined4 *)(param_1 + 0x40) = 0;
    if (iVar5 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01020d80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(iVar5 + 4))(*(undefined4 *)(param_1 + 0x44));
      return;
    }
  }
  return;
}

