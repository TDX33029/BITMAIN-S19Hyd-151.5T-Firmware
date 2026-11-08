// FUN_000476e4 @ 000476e4  size=432  callers=0
// program: bmminer


void FUN_000476e4(int param_1,int param_2)

{
  uint uVar1;
  uint param3;
  uint uVar2;
  uint uVar3;
  undefined2 local_2028 [4098];
  
  if (DAT_000be63c < 4) {
    uVar1 = FUN_0002a544();
    uVar3 = DAT_000be63c;
  }
  else {
    memset(local_2028,0,0x2000);
    snprintf((char *)local_2028,0x2000,"\n asic nonce number for chain[%d] asic[%d]...\n",param_1,
             param_2);
    FUN_0004a3a4(3,local_2028,0);
    uVar1 = FUN_0002a544();
    uVar3 = DAT_000be63c;
  }
  DAT_000be63c = uVar3;
  if (0 < (int)uVar1) {
    param3 = 0;
LAB_00047754:
    do {
      if (3 < uVar3) {
        memset(local_2028,0,0x2000);
        uVar2 = param3 + 1;
        snprintf((char *)local_2028,0x2000,"core[%03d]=%-8d",param3,
                 (&DAT_000cc688)[param3 + param_2 * 0x7f8 + param_1 * 0x7f800]);
        FUN_0004a3a4(3,local_2028,0);
        uVar3 = DAT_000be63c;
        if ((uVar2 % 10 == 0) && (3 < DAT_000be63c)) {
          memset(local_2028,0,0x2000);
          local_2028[0] = 10;
          FUN_0004a3a4(3,local_2028,0);
          param3 = uVar2;
          uVar3 = DAT_000be63c;
          if (uVar1 == uVar2) break;
          goto LAB_00047754;
        }
      }
      param3 = param3 + 1;
    } while (uVar1 != param3);
  }
  if (3 < uVar3) {
    memset(local_2028,0,0x2000);
    local_2028[0] = 10;
    FUN_0004a3a4(3,local_2028,0);
  }
  return;
}

