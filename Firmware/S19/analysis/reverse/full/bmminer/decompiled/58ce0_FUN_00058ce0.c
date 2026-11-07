// FUN_00058ce0 @ 00058ce0  size=12  callers=1
// program: bmminer


/* WARNING: Removing unreachable block (ram,0x0005743c) */

undefined4 FUN_00058ce0(undefined4 param_1)

{
  undefined4 uStack_14;
  
  FUN_000571b0();
  usleep(10000);
  FUN_000592ec(0,param_1,0,0xb0,&uStack_14);
  uStack_14 = 0x207c310b;
  FUN_000571b0(param_1,1,0,0xb0,0x207c310b);
  usleep(10000);
  return 0;
}

