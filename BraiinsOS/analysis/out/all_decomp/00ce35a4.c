// FUN_00ce35a4 @ 00ce35a4 size=1496 calls_out=3 calls_in=0
// strings: 

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00ce5aec) */

undefined4 FUN_00ce35a4(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  uint local_88 [25];
  
  local_a0 = *(undefined4 *)(param_1 + 0x1c);
  uStack_9c = *(undefined4 *)(param_1 + 0x20);
  uStack_98 = *(undefined4 *)(param_1 + 0x24);
  uStack_94 = *(undefined4 *)(param_1 + 0x28);
  uStack_90 = *(undefined4 *)(param_1 + 0x2c);
  FUN_00f6403c(local_88,&local_a0);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(local_88[0] & 0xff) {
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

