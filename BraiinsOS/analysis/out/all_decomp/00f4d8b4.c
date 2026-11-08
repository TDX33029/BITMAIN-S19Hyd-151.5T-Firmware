// FUN_00f4d8b4 @ 00f4d8b4 size=124 calls_out=1 calls_in=10
// strings: 

undefined4 FUN_00f4d8b4(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 local_1c [3];
  
  uVar2 = *(uint *)(param_1 + 0x14);
  if (*(uint *)(param_1 + 0x10) <= uVar2) {
LAB_00f4d9c4:
    local_1c[0] = 3;
LAB_00f4d9c8:
    uVar1 = FUN_01143ab8(param_1,local_1c);
    return uVar1;
  }
LAB_00f4d8d0:
  switch(*(undefined1 *)(*(int *)(param_1 + 0xc) + uVar2)) {
  case 9:
  case 10:
  case 0xd:
  case 0x20:
    break;
  default:
    local_1c[0] = 6;
    goto LAB_00f4d9c8;
  case 0x3a:
    *(uint *)(param_1 + 0x14) = uVar2 + 1;
    return 0;
  }
  uVar2 = uVar2 + 1;
  *(uint *)(param_1 + 0x14) = uVar2;
  if (*(uint *)(param_1 + 0x10) == uVar2) goto LAB_00f4d9c4;
  goto LAB_00f4d8d0;
}

