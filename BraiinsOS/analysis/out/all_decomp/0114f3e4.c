// FUN_0114f3e4 @ 0114f3e4 size=224 calls_out=3 calls_in=1
// strings: Unknown format for introduction frame | Incompatible introduction payload. Needs to be serializable as JSON object | a Display implementation returned an error unexpectedly

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0114f3e4(undefined4 *param_1,char param_2,undefined1 param_3)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined1 local_21;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 *local_14;
  undefined1 **local_10;
  code *local_c;
  
  local_18 = 0;
  local_20 = 0;
  local_1c = 1;
  local_21 = param_3;
  if (param_2 == '\0') {
    local_14 = &local_21;
    local_10 = &local_14;
    local_c = FUN_0127337c;
    iVar1 = FUN_00fa948c(&local_20,&DAT_01888adc,&DAT_0058b052,&local_10);
  }
  else {
    if (param_2 == '\x01') {
      uVar3 = 0x25;
      pcVar2 = "Unknown format for introduction frame";
    }
    else {
      uVar3 = 0x4a;
      pcVar2 = "Incompatible introduction payload. Needs to be serializable as JSON object";
    }
    iVar1 = FUN_0114f5e0(&local_20,pcVar2,uVar3);
  }
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8("a Display implementation returned an error unexpectedly",0x37,&local_10,
                 &DAT_01888af4);
  }
  *param_1 = local_20;
  param_1[1] = local_1c;
  param_1[2] = local_18;
  return;
}

