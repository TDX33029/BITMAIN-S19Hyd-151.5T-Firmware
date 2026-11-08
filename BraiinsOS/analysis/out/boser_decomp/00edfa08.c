// FUN_00edfa08 @ 00edfa08 size=220 calls_out=2 calls_in=0
// strings: 

undefined4 FUN_00edfa08(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = 1;
  pcVar3 = "{";
  do {
    uVar2 = *(uint *)(param_1 + 4);
    uVar4 = uVar2 ^ 0x7fffffff;
    if (uVar5 < uVar4) {
      uVar4 = uVar5;
    }
    FUN_01284394(param_1,pcVar3,uVar4);
    if (uVar2 == 0x7fffffff) goto LAB_00edfad0;
    pcVar3 = pcVar3 + uVar4;
    uVar5 = uVar5 - uVar4;
  } while (uVar5 != 0);
  uVar5 = 1;
  pcVar3 = "}";
  while( true ) {
    uVar2 = *(uint *)(param_1 + 4);
    uVar4 = uVar2 ^ 0x7fffffff;
    if (uVar5 < uVar4) {
      uVar4 = uVar5;
    }
    FUN_01284394(param_1,pcVar3,uVar4);
    if (uVar2 == 0x7fffffff) break;
    pcVar3 = pcVar3 + uVar4;
    uVar5 = uVar5 - uVar4;
    if (uVar5 == 0) {
      return 0;
    }
  }
LAB_00edfad0:
  uVar1 = FUN_01966f50(2,&DAT_01d2e7b8);
  return uVar1;
}

