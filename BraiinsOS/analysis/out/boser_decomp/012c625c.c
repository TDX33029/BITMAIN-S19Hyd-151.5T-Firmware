// FUN_012c625c @ 012c625c size=232 calls_out=2 calls_in=1
// strings: 

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Exceeded maximum restarts with more pending */

undefined4 FUN_012c625c(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 local_1c;
  undefined4 local_18;
  
  do {
    while( true ) {
      while( true ) {
        FUN_012c5c74(&local_1c,param_1);
        if ((char)local_1c == '\x01') {
          return local_18;
        }
        if (local_1c._1_1_ == 0x5c) break;
        if (local_1c._1_1_ == 0x22) {
          return 0;
        }
        if (local_1c._1_1_ < 0x20) {
          uVar2 = *(undefined4 *)(param_1 + 0x24);
          uVar3 = *(undefined4 *)(param_1 + 0x28);
          local_1c = 0x10;
          goto LAB_012c6368;
        }
      }
      FUN_012c5c74(&local_1c,param_1);
      if ((char)local_1c == '\x01') {
        return local_18;
      }
      uVar1 = local_1c >> 8 & 0xff;
      if (0x61 < uVar1) break;
      if ((uVar1 != 0x22 && uVar1 != 0x2f) && (uVar1 != 0x5c)) goto LAB_012c6340;
    }
    switch(uVar1) {
    case 0xe709636a:
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* WARNING: This code block may not be properly labeled as switch case */
      halt_baddata();
    }
  } while (uVar1 == 0x62 || uVar1 == 0x66);
LAB_012c6340:
  uVar2 = *(undefined4 *)(param_1 + 0x24);
  uVar3 = *(undefined4 *)(param_1 + 0x28);
  local_1c = 0xc;
LAB_012c6368:
  uVar2 = FUN_01966fbc(&local_1c,uVar2,uVar3);
  return uVar2;
}

