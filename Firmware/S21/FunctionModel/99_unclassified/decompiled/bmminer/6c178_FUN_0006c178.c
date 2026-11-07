// FUN_0006c178 @ 0006c178  size=76  callers=0
// program: bmminer


undefined4 FUN_0006c178(ushort param_1)

{
  uint local_c;
  
  FUN_00061240(0x24,&local_c);
  FUN_0006c140(local_c & 0xffffff00 | (uint)param_1);
  return 0;
}

