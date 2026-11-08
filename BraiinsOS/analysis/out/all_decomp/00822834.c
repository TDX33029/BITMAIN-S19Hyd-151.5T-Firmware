// FUN_00822834 @ 00822834 size=144 calls_out=3 calls_in=1
// strings: 

void FUN_00822834(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined1 local_74 [4];
  undefined8 local_70;
  undefined1 auStack_68 [64];
  undefined4 local_28;
  undefined4 local_24;
  undefined2 local_20;
  
  FUN_00fb6cfc(auStack_68,&DAT_003431c8,0x44,&DAT_00418eb9,2);
  local_24 = 0x44;
  local_20 = 1;
  local_28 = 0;
  local_70 = FUN_010f50c8(auStack_68);
  if ((int)local_70 == 0) {
    local_70 = 0x44003431c8;
  }
  local_74[0] = 6;
  uVar1 = FUN_0080b0cc(local_74);
  *param_1 = 0x80000000;
  param_1[1] = uVar1;
  return;
}

