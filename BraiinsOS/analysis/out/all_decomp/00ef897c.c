// FUN_00ef897c @ 00ef897c size=196 calls_out=2 calls_in=1
// strings: 

/* WARNING: Exceeded maximum restarts with more pending */

undefined4 FUN_00ef897c(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 local_1c;
  undefined4 local_18;
  
switchD_00ef89f4_caseD_ef89ae:
  do {
                    /* WARNING: This code block may not be properly labeled as switch case */
    FUN_00ef8ba8(&local_1c,param_1);
    if ((char)local_1c == '\x01') {
      return local_18;
    }
    if (local_1c._1_1_ == 0x5c) {
      FUN_00ef8ba8(&local_1c,param_1);
      if ((char)local_1c == '\x01') {
        return local_18;
      }
      switch(local_1c >> 8 & 0xff) {
      case 0xef89ae:
        goto switchD_00ef89f4_caseD_ef89ae;
      default:
        uVar1 = *(undefined4 *)(param_1 + 0x14);
        uVar2 = *(undefined4 *)(param_1 + 0x18);
        local_1c = 0xc;
LAB_00ef8b80:
        uVar1 = FUN_0157c50c(&local_1c,uVar1,uVar2);
        return uVar1;
      }
    }
    if (local_1c._1_1_ == 0x22) {
      return 0;
    }
  } while (0x1f < local_1c._1_1_);
  uVar1 = *(undefined4 *)(param_1 + 0x14);
  uVar2 = *(undefined4 *)(param_1 + 0x18);
  local_1c = 0x10;
  goto LAB_00ef8b80;
}

