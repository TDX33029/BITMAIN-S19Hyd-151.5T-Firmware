// FUN_017361a0 @ 017361a0 size=472 calls_out=4 calls_in=3
// strings: 

void FUN_017361a0(int *param_1,int param_2)

{
  uint uVar1;
  code *pcVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined1 auStack_13c [68];
  undefined1 auStack_f8 [68];
  undefined1 auStack_b4 [68];
  undefined1 auStack_70 [68];
  uint local_2c;
  
  local_2c = DAT_018ddaf8;
  pcVar2 = *(code **)(*param_1 + 0x30);
  pcVar3 = *(code **)(*param_1 + 0x2c);
  (*pcVar2)(param_1,auStack_13c,param_2);
  (*pcVar2)(param_1,auStack_f8,param_2 + 0x88);
  (*pcVar2)(param_1,auStack_b4,auStack_f8);
  (*pcVar3)(param_1,auStack_70,auStack_b4,auStack_f8);
  if (param_1[0x74] == 0) {
    (*pcVar3)(param_1,auStack_f8,auStack_b4,param_1 + 0x4d);
    FUN_0172ec3c(param_1,auStack_13c,auStack_13c,auStack_f8);
  }
  else {
    FUN_0172ec3c(param_1,auStack_f8,auStack_b4,auStack_b4);
    FUN_0172ec3c(param_1,auStack_f8,auStack_f8,auStack_b4);
    FUN_0172ece8(param_1,auStack_13c,auStack_13c,auStack_f8);
  }
  (*pcVar3)(param_1,auStack_13c,auStack_13c,param_2);
  (*pcVar3)(param_1,auStack_f8,param_1 + 0x5e,auStack_70);
  FUN_0172ec3c(param_1,auStack_13c,auStack_13c,auStack_f8);
  (*pcVar2)(param_1,auStack_f8,param_2 + 0x44);
  FUN_0172ece8(param_1,auStack_f8,auStack_f8,auStack_13c);
  uVar1 = FUN_0172f2c0(param_1,auStack_f8);
  uVar4 = FUN_0172f2c0(param_1,param_2 + 0x88);
  if ((local_2c ^ DAT_018ddaf8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78(~((uint)uVar4 & uVar1) & 1,(int)((ulonglong)uVar4 >> 0x20),local_2c ^ DAT_018ddaf8,
                 0);
  }
  return;
}

