// FUN_01bc55b4 @ 01bc55b4 size=172 calls_out=2 calls_in=3
// strings: 

undefined8 FUN_01bc55b4(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x40) == 2) {
    if (param_2 == 0) goto LAB_01bc5630;
  }
  else {
    if (param_2 == 0) {
      uVar1 = FUN_01bc5598(*(undefined4 *)(param_1 + 0x18));
      *(undefined4 *)(param_1 + 0x28) = uVar1;
LAB_01bc5630:
      uVar1 = FUN_01bc5598(*(undefined4 *)(param_1 + 0x1c));
      *(undefined4 *)(param_1 + 0x2c) = uVar1;
      uVar1 = FUN_01bc5598(*(undefined4 *)(param_1 + 0x20));
      *(undefined4 *)(param_1 + 0x30) = uVar1;
      uVar1 = FUN_01bc5598(*(undefined4 *)(param_1 + 0x24));
      goto LAB_01bc560c;
    }
    uVar1 = FUN_01bc556c();
    *(undefined4 *)(param_1 + 0x28) = uVar1;
  }
  uVar1 = FUN_01bc556c(*(undefined4 *)(param_1 + 0x1c));
  *(undefined4 *)(param_1 + 0x2c) = uVar1;
  uVar1 = FUN_01bc556c(*(undefined4 *)(param_1 + 0x20));
  *(undefined4 *)(param_1 + 0x30) = uVar1;
  uVar1 = FUN_01bc556c(*(undefined4 *)(param_1 + 0x24));
LAB_01bc560c:
  *(undefined4 *)(param_1 + 0x34) = uVar1;
  return 0;
}

