// FUN_01114eb4 @ 01114eb4 size=124 calls_out=1 calls_in=21
// strings: 

undefined4 FUN_01114eb4(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 local_1c [3];
  
  uVar2 = *(uint *)(param_1 + 0x14);
  if (*(uint *)(param_1 + 0x10) <= uVar2) {
LAB_01114fc4:
    local_1c[0] = 3;
LAB_01114fc8:
    uVar1 = FUN_008f9984(param_1,local_1c);
    return uVar1;
  }
LAB_01114ed0:
  switch(*(undefined1 *)(*(int *)(param_1 + 0xc) + uVar2)) {
  case 9:
  case 10:
  case 0xd:
  case 0x20:
    break;
  default:
    local_1c[0] = 6;
    goto LAB_01114fc8;
  case 0x3a:
    *(uint *)(param_1 + 0x14) = uVar2 + 1;
    return 0;
  }
  uVar2 = uVar2 + 1;
  *(uint *)(param_1 + 0x14) = uVar2;
  if (*(uint *)(param_1 + 0x10) == uVar2) goto LAB_01114fc4;
  goto LAB_01114ed0;
}

