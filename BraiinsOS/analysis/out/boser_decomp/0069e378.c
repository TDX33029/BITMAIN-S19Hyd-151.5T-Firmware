// FUN_0069e378 @ 0069e378 size=232 calls_out=2 calls_in=1
// strings: 

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Exceeded maximum restarts with more pending */

undefined4 FUN_0069e378(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 local_1c;
  undefined4 local_18;
  
  do {
    while( true ) {
      while( true ) {
        FUN_0069c5d0(&local_1c,param_1);
        if ((char)local_1c == '\x01') {
          return local_18;
        }
        if (local_1c._1_1_ == 0x5c) break;
        if (local_1c._1_1_ == 0x22) {
          return 0;
        }
        if (local_1c._1_1_ < 0x20) {
          uVar2 = *(undefined4 *)(param_1 + 0x10);
          uVar3 = *(undefined4 *)(param_1 + 0x14);
          local_1c = 0x10;
          goto LAB_0069e484;
        }
      }
      FUN_0069c5d0(&local_1c,param_1);
      if ((char)local_1c == '\x01') {
        return local_18;
      }
      uVar1 = local_1c >> 8 & 0xff;
      if (0x61 < uVar1) break;
      if ((uVar1 != 0x22 && uVar1 != 0x2f) && (uVar1 != 0x5c)) goto LAB_0069e45c;
    }
    switch(uVar1) {
    case 0xe646e486:
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* WARNING: This code block may not be properly labeled as switch case */
      halt_baddata();
    }
  } while (uVar1 == 0x62 || uVar1 == 0x66);
LAB_0069e45c:
  uVar2 = *(undefined4 *)(param_1 + 0x10);
  uVar3 = *(undefined4 *)(param_1 + 0x14);
  local_1c = 0xc;
LAB_0069e484:
  uVar2 = FUN_01966fbc(&local_1c,uVar2,uVar3);
  return uVar2;
}

