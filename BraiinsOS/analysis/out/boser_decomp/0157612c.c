// FUN_0157612c @ 0157612c size=168 calls_out=3 calls_in=1
// strings: 

void FUN_0157612c(undefined1 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  if (*(char *)(param_2 + 0x1c) == '\x01') {
    local_20._1_1_ = *(undefined1 *)(param_2 + 0x1d);
  }
  else {
    FUN_0157368c(&local_20,param_2 + 0xc);
    if ((local_20 & 0xff) == 5) {
      local_20 = 4;
      uVar1 = FUN_01966fbc(&local_20,*(undefined4 *)(param_2 + 0x10),*(undefined4 *)(param_2 + 0x14)
                          );
      *(undefined4 *)(param_1 + 4) = uVar1;
      *param_1 = 1;
      return;
    }
    if ((local_20 & 0xff) != 4) {
      uVar1 = FUN_01966f50(local_20,uStack_1c);
      uVar2 = 1;
      *(undefined4 *)(param_1 + 4) = uVar1;
      goto LAB_015761b4;
    }
    *(undefined1 *)(param_2 + 0x1d) = local_20._1_1_;
    *(undefined1 *)(param_2 + 0x1c) = 1;
  }
  uVar2 = 0;
  param_1[1] = local_20._1_1_;
LAB_015761b4:
  *param_1 = uVar2;
  return;
}

