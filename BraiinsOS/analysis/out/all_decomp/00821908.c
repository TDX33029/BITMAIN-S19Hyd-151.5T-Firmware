// FUN_00821908 @ 00821908 size=152 calls_out=3 calls_in=2
// strings: 

void FUN_00821908(undefined2 *param_1)

{
  undefined4 *puVar1;
  undefined1 local_74 [4];
  undefined8 local_70;
  undefined1 auStack_68 [64];
  undefined4 local_28;
  undefined4 local_24;
  undefined2 local_20;
  
  FUN_00fb6cfc(auStack_68,&DAT_003433fe,0x4d,&DAT_00418eb9,2);
  local_24 = 0x4d;
  local_20 = 1;
  local_28 = 0;
  local_70 = FUN_010f50c8(auStack_68);
  if ((int)local_70 == 0) {
    local_70 = 0x4d003433fe;
  }
  local_74[0] = 6;
  puVar1 = (undefined4 *)FUN_0080b0cc(local_74);
  puVar1 = (undefined4 *)*puVar1;
  *param_1 = 0x600;
                    /* WARNING: Could not recover jumptable at 0x0082199c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar1)();
  return;
}

