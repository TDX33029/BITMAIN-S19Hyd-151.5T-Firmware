// FUN_01b44430 @ 01b44430 size=468 calls_out=4 calls_in=3
// strings: 

void FUN_01b44430(int *param_1,int param_2)

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
  
  local_2c = DAT_01d53560;
  pcVar2 = *(code **)(*param_1 + 0x30);
  pcVar3 = *(code **)(*param_1 + 0x2c);
  (*pcVar2)(param_1,auStack_13c,param_2);
  (*pcVar2)(param_1,auStack_f8,param_2 + 0x88);
  (*pcVar2)(param_1,auStack_b4,auStack_f8);
  (*pcVar3)(param_1,auStack_70,auStack_b4,auStack_f8);
  if (param_1[0x74] == 0) {
    (*pcVar3)(param_1,auStack_f8,auStack_b4,param_1 + 0x4d);
    FUN_01b3ecc0(param_1,auStack_13c,auStack_13c,auStack_f8);
  }
  else {
    FUN_01b3ecc0(param_1,auStack_f8,auStack_b4,auStack_b4);
    FUN_01b3ecc0(param_1,auStack_f8,auStack_f8,auStack_b4);
    FUN_01b3ed6c(param_1,auStack_13c,auStack_13c,auStack_f8);
  }
  (*pcVar3)(param_1,auStack_13c,auStack_13c,param_2);
  (*pcVar3)(param_1,auStack_f8,param_1 + 0x5e,auStack_70);
  FUN_01b3ecc0(param_1,auStack_13c,auStack_13c,auStack_f8);
  (*pcVar2)(param_1,auStack_f8,param_2 + 0x44);
  FUN_01b3ed6c(param_1,auStack_f8,auStack_f8,auStack_13c);
  uVar1 = FUN_01b3f320(param_1,auStack_f8);
  uVar4 = FUN_01b3f320(param_1,param_2 + 0x88);
  if ((local_2c ^ DAT_01d53560) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4(~((uint)uVar4 & uVar1) & 1,(int)((ulonglong)uVar4 >> 0x20),local_2c ^ DAT_01d53560,
                 0);
  }
  return;
}

