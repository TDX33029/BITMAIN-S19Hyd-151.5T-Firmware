// FUN_0006c214 @ 0006c214  size=80  callers=0
// program: bmminer


undefined4 FUN_0006c214(ushort param_1)

{
  uint local_c;
  
  FUN_00061240(0x24,&local_c);
  FUN_0006c140(local_c & 0xffff | (uint)param_1 << 0x10);
  return 0;
}

