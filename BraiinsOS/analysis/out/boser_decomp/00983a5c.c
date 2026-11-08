// FUN_00983a5c @ 00983a5c size=376 calls_out=1 calls_in=1
// strings: 

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_00983a5c(undefined4 *param_1,undefined1 *param_2)

{
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  if (*(int *)(param_2 + 0x30) == -0x80000000) {
    FUN_006666fc(&local_40,*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8));
    FUN_006666fc(&local_30,*(undefined4 *)(param_2 + 0x10),*(undefined4 *)(param_2 + 0x14));
    FUN_006666fc(&local_58,*(undefined4 *)(param_2 + 0x1c),*(undefined4 *)(param_2 + 0x20));
    *param_1 = local_40;
    param_1[1] = uStack_3c;
    param_1[2] = uStack_38;
    param_1[3] = local_30;
    param_1[4] = uStack_2c;
    param_1[5] = uStack_28;
    param_1[6] = local_58;
    param_1[7] = uStack_54;
    param_1[8] = uStack_50;
    param_1[0xc] = 0x80000000;
  }
  else {
    FUN_006666fc(&local_68,*(undefined4 *)(param_2 + 0x1c),*(undefined4 *)(param_2 + 0x20));
    FUN_006666fc(&local_40,*(undefined4 *)(param_2 + 0x28),*(undefined4 *)(param_2 + 0x2c));
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
    switch(*param_2) {
    case 7:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    default:
      local_58 = CONCAT31(local_58._1_3_,6);
      FUN_006666fc(&local_30,*(undefined4 *)(param_2 + 0x34),*(undefined4 *)(param_2 + 0x38));
      *param_1 = local_58;
      param_1[1] = uStack_54;
      param_1[2] = uStack_50;
      param_1[3] = uStack_4c;
      param_1[4] = uStack_48;
      param_1[5] = uStack_44;
      param_1[6] = local_68;
      param_1[7] = uStack_64;
      param_1[8] = uStack_60;
      param_1[9] = local_40;
      param_1[10] = uStack_3c;
      param_1[0xb] = uStack_38;
      param_1[0xc] = local_30;
      param_1[0xd] = uStack_2c;
      param_1[0xe] = uStack_28;
      param_1[0xf] = uStack_6c;
    }
  }
  return;
}

