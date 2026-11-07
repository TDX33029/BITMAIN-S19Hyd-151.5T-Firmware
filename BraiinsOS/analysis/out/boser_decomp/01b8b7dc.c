// FUN_01b8b7dc @ 01b8b7dc size=356 calls_out=5 calls_in=1
// strings: 

uint FUN_01b8b7dc(int *param_1,int param_2,int param_3,int param_4,int param_5,undefined1 param_6,
                 int param_7,int param_8,int param_9,int param_10,int param_11,int param_12,
                 int param_13,undefined4 param_14,undefined4 param_15,undefined4 param_16,
                 undefined4 param_17)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int in_stack_00000070;
  undefined4 in_stack_00000088;
  
  param_1[0x3e] = param_7;
  param_1[0x3f] = param_8;
  param_1[0x40] = param_9;
  param_1[0x41] = param_10;
  param_1[0x42] = param_11;
  param_1[0x43] = param_12;
  param_1[0x44] = param_13;
  param_1[0x2b] = in_stack_00000070;
  piVar3 = param_1 + 4;
  if (param_4 == 1 || (param_3 == 0 || param_2 == 0)) {
    *param_1 = param_2;
  }
  else {
    iVar1 = FUN_01b850b0(piVar3,param_3 + 3U & 0xfffffffc);
    if (iVar1 == 0) {
      return 0xffffffc0;
    }
    *param_1 = iVar1;
    FUN_01bed4e2(iVar1,param_2,param_3);
  }
  param_1[1] = param_3;
  param_1[2] = param_5;
  iVar1 = FUN_01b850b0(piVar3,0x2200);
  param_1[3] = iVar1;
  FUN_01b88480(param_1 + 0x48);
  uVar2 = FUN_01b86f10(param_1 + 0x10,piVar3,&param_7,in_stack_00000088,0,1,0);
  if (0xffffff88 < uVar2) {
    return 0xffffffc0;
  }
  param_17 = 3;
  param_14 = 1;
  uVar2 = FUN_01b8b1dc(param_1 + 0x48,param_1 + 0x10,0,piVar3,&param_6,*param_1,param_1[1],param_5,1
                       ,1,param_1[3]);
  if (uVar2 < 0xffffff89) {
    param_1[0x4c8] = uVar2;
    return 0;
  }
  return uVar2;
}

