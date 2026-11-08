// FUN_01b8d374 @ 01b8d374 size=92 calls_out=0 calls_in=1
// strings: 

undefined8 FUN_01b8d374(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = param_1[1];
  uVar1 = (int)param_1[3] + (uVar2 >> 3);
  *(uint *)param_1[3] = *param_1;
  if (uVar1 < param_1[4]) {
    param_1[3] = uVar1;
  }
  else {
    param_1[3] = param_1[4];
  }
  param_1[1] = param_1[1] & 7;
  *param_1 = *param_1 >> ((uVar2 >> 3 & 0x1f) << 3);
  return 0;
}

