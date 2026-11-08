// FUN_01be3278 @ 01be3278 size=50 calls_out=0 calls_in=3
// strings: 

undefined8 FUN_01be3278(uint param_1)

{
  char *pcVar1;
  int iVar2;
  undefined4 in_cr0;
  undefined4 in_cr13;
  
  iVar2 = coprocessor_movefromRt(0xf,0,3,in_cr13,in_cr0);
  if (param_1 < 0x84) {
    pcVar1 = "No error information" + *(ushort *)(&DAT_00564d08 + param_1 * 2);
  }
  else {
    pcVar1 = "No error information";
  }
  return CONCAT44(*(undefined4 *)(*(int *)(iVar2 + -0x18) + 0x14),pcVar1);
}

