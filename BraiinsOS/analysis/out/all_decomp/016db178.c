// FUN_016db178 @ 016db178 size=80 calls_out=2 calls_in=1
// strings: 

uint FUN_016db178(uint param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined4 in_cr0;
  undefined4 in_cr13;
  
  uVar2 = *(uint *)(param_2 + 0x4c);
  if (-1 < (int)uVar2) {
    if (uVar2 != 0) {
      iVar1 = coprocessor_movefromRt(0xf,0,3,in_cr13,in_cr0);
      if ((uVar2 & 0xbfffffff) == *(uint *)(iVar1 + -0x60)) goto LAB_016db198;
    }
    uVar2 = FUN_016db0e2(param_1,param_2);
    return uVar2;
  }
LAB_016db198:
  if ((param_1 & 0xff) == *(uint *)(param_2 + 0x50)) {
    uVar2 = FUN_016dac02(param_2);
    return uVar2;
  }
  puVar3 = *(undefined1 **)(param_2 + 0x14);
  if (puVar3 == *(undefined1 **)(param_2 + 0x10)) {
    uVar2 = FUN_016dac02(param_2);
    return uVar2;
  }
  *(undefined1 **)(param_2 + 0x14) = puVar3 + 1;
  *puVar3 = (char)param_1;
  return param_1 & 0xff;
}

