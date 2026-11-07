// FUN_01600744 @ 01600744 size=1056 calls_out=3 calls_in=0
// strings: 

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Exceeded maximum restarts with more pending */

undefined4 FUN_01600744(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined1 local_80 [92];
  
  local_98 = *(undefined4 *)(param_1 + 0x1c);
  uStack_94 = *(undefined4 *)(param_1 + 0x20);
  uStack_90 = *(undefined4 *)(param_1 + 0x24);
  uStack_8c = *(undefined4 *)(param_1 + 0x28);
  uStack_88 = *(undefined4 *)(param_1 + 0x2c);
  FUN_012897f4(local_80,&local_98);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
  switch(local_80[0]) {
  case 8:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  default:
    uVar1 = FUN_012fb940(param_2,1,0);
    FUN_019bb7e0(0,1);
    return uVar1;
  }
}

