// FUN_016e0cb4 @ 016e0cb4 size=200 calls_out=3 calls_in=1
// strings: 

undefined8 FUN_016e0cb4(int *param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  
  cVar1 = *param_2;
  if (cVar1 == '-') {
    cVar1 = param_2[1];
    pcVar3 = param_2 + 1;
  }
  else {
    pcVar3 = param_2;
  }
  if ((cVar1 == '0') && ((pcVar3[1] & 0xdfU) == 0x58)) {
    iVar2 = FUN_016e0804(param_1,pcVar3 + 2);
  }
  else {
    iVar2 = FUN_016e0adc(param_1);
  }
  if (iVar2 == 0) {
    return 0;
  }
  if ((*param_2 == '-') && (iVar2 = FUN_01717e5c(*param_1), iVar2 == 0)) {
    *(undefined4 *)(*param_1 + 0xc) = 1;
  }
  return 1;
}

