// FUN_00030ad8 @ 00030ad8  size=348  callers=0
// program: bmminer


void FUN_00030ad8(int param_1,int param_2)

{
  uint uVar1;
  uint param3;
  uint uVar2;
  uint uVar3;
  undefined2 local_820 [1024];
  
  if (DAT_00087bbc < 4) {
    uVar1 = FUN_0002005c();
    uVar3 = DAT_00087bbc;
  }
  else {
    snprintf((char *)local_820,0x800,"\n asic nonce number for chain[%d] asic[%d]...\n",param_1,
             param_2);
    FUN_00032eb0(3,local_820,0);
    uVar1 = FUN_0002005c();
    uVar3 = DAT_00087bbc;
  }
  DAT_00087bbc = uVar3;
  if (0 < (int)uVar1) {
    param3 = 0;
LAB_00030b40:
    do {
      if (3 < uVar3) {
        uVar2 = param3 + 1;
        snprintf((char *)local_820,0x800,"core[%03d]=%-8d",param3,
                 (&DAT_0008b9c4)[param3 + (param_2 + param_1 * 0x100) * 0x400]);
        FUN_00032eb0(3,local_820,0);
        uVar3 = DAT_00087bbc;
        if ((uVar2 % 10 == 0) && (3 < DAT_00087bbc)) {
          local_820[0] = 10;
          FUN_00032eb0(3,local_820);
          param3 = uVar2;
          uVar3 = DAT_00087bbc;
          if (uVar1 == uVar2) break;
          goto LAB_00030b40;
        }
      }
      param3 = param3 + 1;
    } while (uVar1 != param3);
  }
  if (3 < uVar3) {
    local_820[0] = 10;
    FUN_00032eb0(3,local_820,0);
  }
  return;
}

