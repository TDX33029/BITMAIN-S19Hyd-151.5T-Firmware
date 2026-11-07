// FUN_014134a8 @ 014134a8 size=68 calls_out=1 calls_in=0
// strings: InvalidHeaderName

void FUN_014134a8(undefined4 param_1,undefined4 *param_2)

{
  undefined4 *local_10;
  undefined1 local_c;
  undefined1 local_b;
  
  local_c = (**(code **)(param_2[1] + 0xc))(*param_2,"InvalidHeaderName",0x11);
  local_b = 0;
  local_10 = param_2;
  FUN_01302e1c(&local_10);
  return;
}

