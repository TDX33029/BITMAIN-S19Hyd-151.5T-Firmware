// FUN_00f260d0 @ 00f260d0 size=160 calls_out=3 calls_in=0
// strings: 

undefined8 FUN_00f260d0(short *param_1)

{
  short sVar1;
  short sVar2;
  short *psVar3;
  undefined1 auStack_50 [32];
  undefined1 auStack_30 [32];
  
  sVar1 = *param_1;
  if (sVar1 != 2) {
    FUN_01bed4e2(auStack_50,param_1 + 1,0x1e);
  }
  sVar2 = param_1[0x10];
  if (sVar2 != 2) {
    FUN_01bed4e2(auStack_30,param_1 + 0x11,0x1e);
  }
  psVar3 = (short *)thunk_FUN_01be5118(0x40);
  if (psVar3 == (short *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x40);
  }
  *psVar3 = sVar1;
  FUN_01bed4e2(psVar3 + 1,auStack_50,0x1e);
  psVar3[0x10] = sVar2;
  FUN_01bed4e2(psVar3 + 0x11,auStack_30,0x1e);
  return CONCAT44(&UNK_01c1925c,psVar3);
}

