// FUN_00822174 @ 00822174 size=172 calls_out=3 calls_in=2
// strings: 

void FUN_00822174(undefined1 *param_1,char param_2)

{
  undefined4 *puVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined1 uVar2;
  undefined1 local_74 [4];
  undefined8 local_70;
  undefined1 auStack_68 [64];
  undefined4 local_28;
  undefined4 local_24;
  undefined2 local_20;
  
  FUN_00fb6cfc(auStack_68,&DAT_00343295,0x44,&DAT_00418eb9,2);
  local_24 = 0x44;
  local_20 = 1;
  local_28 = 0;
  local_70 = FUN_010f50c8(auStack_68);
  if ((int)local_70 == 0) {
    local_70 = 0x4400343295;
  }
  local_74[0] = 6;
  puVar1 = (undefined4 *)FUN_0080b0cc(local_74);
  puVar1 = (undefined4 *)*puVar1;
  uVar2 = 10;
  if (param_2 == '\x01') {
    uVar2 = 0xe;
  }
  *param_1 = 0;
  UNRECOVERED_JUMPTABLE = (code *)*puVar1;
  param_1[1] = uVar2;
                    /* WARNING: Could not recover jumptable at 0x0082221c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

