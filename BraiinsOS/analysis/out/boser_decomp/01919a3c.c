// FUN_01919a3c @ 01919a3c size=172 calls_out=2 calls_in=6
// strings: 

void FUN_01919a3c(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  uint local_18;
  undefined4 local_14;
  
  uVar2 = FUN_01914f6c(*param_2);
  if ((int)uVar2 != 0) {
    *(undefined8 *)(param_1 + 1) = uVar2;
    uVar1 = 0;
    goto LAB_01919adc;
  }
  if (*(char *)(param_2 + 1) == '\0') {
    if (*(char *)((int)param_2 + 5) == '\0') {
      local_14 = 0;
      local_18 = 0xd01;
    }
    else {
      FUN_019a18a8(&local_18,0x25,&DAT_005235d8,0x88);
      if (((char)local_18 == '\x04') || ((local_18 & 0xff) == 4)) goto LAB_01919a74;
    }
    param_1[1] = local_18;
    param_1[2] = local_14;
    uVar1 = 1;
  }
  else {
LAB_01919a74:
    uVar1 = 0;
    param_1[1] = 1;
    param_1[2] = 0;
  }
LAB_01919adc:
  *param_1 = uVar1;
  return;
}

