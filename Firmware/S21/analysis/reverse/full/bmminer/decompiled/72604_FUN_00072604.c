// FUN_00072604 @ 00072604  size=132  callers=1
// program: bmminer


int FUN_00072604(undefined4 param_1)

{
  ushort local_e;
  int local_c;
  
  local_c = -0x7ffffd00;
  local_e = 0;
  while ((local_e < 3 &&
         ((local_c = FUN_00071624(param_1), local_c == 0 || (local_c == -0x7ffffd00))))) {
    local_e = local_e + 1;
  }
  return local_c;
}

