// FUN_00f25d5c @ 00f25d5c size=1692 calls_out=3 calls_in=0
// strings: 

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00f28a1c) */

undefined4 FUN_00f25d5c(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  uint local_90 [27];
  
  local_a8 = *(undefined4 *)(param_1 + 0x1c);
  uStack_a4 = *(undefined4 *)(param_1 + 0x20);
  uStack_a0 = *(undefined4 *)(param_1 + 0x24);
  uStack_9c = *(undefined4 *)(param_1 + 0x28);
  uStack_98 = *(undefined4 *)(param_1 + 0x2c);
  FUN_00f6403c(local_90,&local_a8);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(local_90[0] & 0xff) {
  case 8:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 9:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 10:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  default:
    uVar1 = FUN_00faace8(param_2,1,0);
    return uVar1;
  }
}

