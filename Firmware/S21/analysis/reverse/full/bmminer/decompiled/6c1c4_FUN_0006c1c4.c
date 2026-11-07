// FUN_0006c1c4 @ 0006c1c4  size=80  callers=0
// program: bmminer


undefined4 FUN_0006c1c4(ushort param_1)

{
  uint local_c;
  
  FUN_00061240(0x24,&local_c);
  FUN_0006c140(local_c & 0xffff00ff | (uint)param_1 << 8);
  return 0;
}

