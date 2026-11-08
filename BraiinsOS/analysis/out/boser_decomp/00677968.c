// FUN_00677968 @ 00677968 size=152 calls_out=2 calls_in=8
// strings: 

void FUN_00677968(undefined2 *param_1,int param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 local_18;
  undefined4 uStack_14;
  
  if (*(char *)(param_2 + 0x28) == '\x01') {
    uVar1 = *(undefined1 *)(param_2 + 0x29);
    *param_1 = 0x100;
    *(undefined1 *)(param_1 + 1) = uVar1;
  }
  else {
    FUN_0068cbec(&local_18,param_2 + 0x18);
    if ((local_18 & 0xff) == 5) {
      uVar1 = 0;
      *(undefined1 *)((int)param_1 + 1) = 0;
    }
    else if ((local_18 & 0xff) == 4) {
      *(undefined1 *)(param_2 + 0x29) = local_18._1_1_;
      *(undefined1 *)(param_1 + 1) = local_18._1_1_;
      uVar1 = 0;
      *(undefined1 *)(param_2 + 0x28) = 1;
      *(undefined1 *)((int)param_1 + 1) = 1;
    }
    else {
      uVar2 = FUN_01966f50(local_18,uStack_14);
      *(undefined4 *)(param_1 + 2) = uVar2;
      uVar1 = 1;
    }
    *(undefined1 *)param_1 = uVar1;
  }
  return;
}

