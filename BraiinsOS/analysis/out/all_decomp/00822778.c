// FUN_00822778 @ 00822778 size=180 calls_out=3 calls_in=2
// strings: 

void FUN_00822778(undefined2 *param_1,char param_2)

{
  undefined4 *puVar1;
  undefined1 local_7c [4];
  undefined8 local_78;
  undefined1 auStack_70 [64];
  undefined4 local_30;
  undefined4 local_2c;
  undefined2 local_28;
  
  FUN_00fb6cfc(auStack_70,&DAT_003431c8,0x44,&DAT_00418eb9,2);
  local_30 = 0;
  local_28 = 1;
  local_2c = 0x44;
  local_78 = FUN_010f50c8(auStack_70);
  if ((int)local_78 == 0) {
    local_78 = 0x44003431c8;
  }
  local_7c[0] = 6;
  puVar1 = (undefined4 *)FUN_0080b0cc(local_7c);
  if (param_2 == '\0') {
    *(undefined1 *)param_1 = 1;
    *(undefined4 **)(param_1 + 2) = puVar1;
    return;
  }
  puVar1 = (undefined4 *)*puVar1;
  *param_1 = 0x800;
                    /* WARNING: Could not recover jumptable at 0x00822818. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar1)();
  return;
}

