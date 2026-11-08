// FUN_0069e49c @ 0069e49c size=432 calls_out=4 calls_in=8
// strings: 

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_0069e49c(undefined4 *param_1,int param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  byte bVar5;
  int iVar6;
  int local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  while( true ) {
    FUN_0069c5d0(&local_2c,param_2);
    if ((char)local_2c == '\x01') break;
    if (local_2c._1_1_ != 0x5c) {
      if (local_2c._1_1_ == 0x22) {
        uVar3 = *(undefined4 *)(param_2 + 0x10);
        uVar4 = *(undefined4 *)(param_2 + 0x14);
        FUN_012fbd94(&local_38,param_3[1],param_3[2]);
        if (local_38 != 1) {
          param_1[2] = local_30;
          uVar3 = 1;
          goto LAB_0069e640;
        }
        local_2c = 0xf;
      }
      else {
        if (0x1f < local_2c._1_1_) {
          iVar1 = *param_3;
          bVar5 = local_2c._1_1_;
          goto LAB_0069e4ec;
        }
        uVar3 = *(undefined4 *)(param_2 + 0x10);
        uVar4 = *(undefined4 *)(param_2 + 0x14);
        local_2c = 0x10;
      }
LAB_0069e62c:
      local_34 = FUN_01966fbc(&local_2c,uVar3,uVar4);
      goto LAB_0069e63c;
    }
    FUN_0069c5d0(&local_2c,param_2);
    if ((char)local_2c == '\x01') break;
    uVar2 = local_2c >> 8 & 0xff;
    if (uVar2 < 0x62) {
      if (uVar2 == 0x22) {
        iVar1 = *param_3;
        bVar5 = 0x22;
      }
      else if (uVar2 == 0x2f) {
        iVar1 = *param_3;
        bVar5 = 0x2f;
      }
      else {
        if (uVar2 != 0x5c) goto LAB_0069e614;
        iVar1 = *param_3;
        bVar5 = 0x5c;
      }
    }
    else {
      switch(uVar2) {
      case 0xe2f0e5b6:
                    /* WARNING: Bad instruction - Truncating control flow here */
                    /* WARNING: This code block may not be properly labeled as switch case */
        halt_baddata();
      }
      if (uVar2 == 0x62) {
        iVar1 = *param_3;
        bVar5 = 8;
      }
      else {
        if (uVar2 != 0x66) {
LAB_0069e614:
          uVar3 = *(undefined4 *)(param_2 + 0x10);
          uVar4 = *(undefined4 *)(param_2 + 0x14);
          local_2c = 0xc;
          goto LAB_0069e62c;
        }
        iVar1 = *param_3;
        bVar5 = 0xc;
      }
    }
LAB_0069e4ec:
    iVar6 = param_3[2];
    if (iVar6 == iVar1) {
      FUN_006666a0(param_3);
    }
    *(byte *)(param_3[1] + iVar6) = bVar5;
    param_3[2] = iVar6 + 1;
  }
  local_34 = local_28;
LAB_0069e63c:
  uVar3 = 2;
LAB_0069e640:
  *param_1 = uVar3;
  param_1[1] = local_34;
  return;
}

