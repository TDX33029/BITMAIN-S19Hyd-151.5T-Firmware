// FUN_01afc508 @ 01afc508 size=192 calls_out=3 calls_in=1
// strings: 

undefined8 FUN_01afc508(int *param_1,char *param_2)

{
  int iVar1;
  char *pcVar2;
  
  if (*param_2 == '-') {
    pcVar2 = param_2 + 1;
  }
  else {
    pcVar2 = param_2;
  }
  if ((*pcVar2 == '0') && ((pcVar2[1] & 0xdfU) == 0x58)) {
    iVar1 = FUN_01afc488(param_1,pcVar2 + 2);
  }
  else {
    iVar1 = FUN_01afc4c8(param_1);
  }
  if (iVar1 == 0) {
    return 0;
  }
  if ((*param_2 == '-') && (iVar1 = FUN_01b2e300(*param_1), iVar1 == 0)) {
    *(undefined4 *)(*param_1 + 0xc) = 1;
  }
  return 1;
}

