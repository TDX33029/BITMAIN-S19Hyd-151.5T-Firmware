// FUN_01be73d4 @ 01be73d4 size=60 calls_out=0 calls_in=1
// strings: alid flags

undefined8 FUN_01be73d4(int param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  undefined4 in_cr0;
  undefined4 in_cr13;
  
  cVar1 = 'I';
  pcVar3 = "I";
  while (param_1 = param_1 + 1, param_1 != 0) {
    if (cVar1 == '\0') goto LAB_01be73f4;
    do {
      pcVar4 = pcVar3;
      pcVar3 = pcVar4 + 1;
    } while (pcVar4[1] != '\0');
    cVar1 = pcVar4[2];
    pcVar3 = pcVar4 + 2;
  }
  if (cVar1 == '\0') {
LAB_01be73f4:
    pcVar3 = pcVar3 + 1;
  }
  iVar2 = coprocessor_movefromRt(0xf,0,3,in_cr13,in_cr0);
  return CONCAT44(*(undefined4 *)(*(int *)(iVar2 + -0x18) + 0x14),pcVar3);
}

