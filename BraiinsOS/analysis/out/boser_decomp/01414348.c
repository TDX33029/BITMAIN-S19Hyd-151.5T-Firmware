// FUN_01414348 @ 01414348 size=280 calls_out=4 calls_in=3
// strings: 

void FUN_01414348(undefined4 *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined1 auStack_2c [12];
  
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined2 *)(param_1 + 0xe) = 0;
    param_1[6] = 2;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 4;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 4;
    param_1[0xd] = 0;
  }
  else {
    uVar3 = 1;
    uVar1 = (uint)((ulonglong)param_2 * 0x2aaaaaaab >> 0x21);
    iVar2 = uVar1 - 1;
    if (uVar1 != 0 && iVar2 != 0) {
      uVar3 = (0xffffffffU >> LZCOUNT(iVar2)) + 1;
    }
    if (uVar3 < 0x8001) {
      FUN_01412b3c(auStack_2c,uVar3);
      uVar4 = FUN_01410d80(auStack_2c);
      iVar2 = FUN_01298504(uVar3 * 0x34,4);
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620();
      }
      *(short *)(param_1 + 0xe) = (short)uVar3 + -1;
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined8 *)(param_1 + 6) = uVar4;
      param_1[8] = uVar3;
      param_1[9] = iVar2;
      param_1[10] = 0;
      param_1[0xb] = 0;
      param_1[0xc] = 4;
      param_1[0xd] = 0;
    }
    else {
      *param_1 = 3;
      param_1[1] = 0;
    }
  }
  return;
}

