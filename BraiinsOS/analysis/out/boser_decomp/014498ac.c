// FUN_014498ac @ 014498ac size=160 calls_out=0 calls_in=1
// strings: 

undefined4 FUN_014498ac(int param_1,uint param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  
  bVar4 = false;
  uVar2 = 0;
  if (param_2 != 0) {
    bVar3 = *(char *)(param_1 + (param_2 - 1)) == '.';
    uVar2 = param_2 - 1;
    if (!bVar3) {
      uVar2 = param_2;
    }
    if (bVar3 && param_3 == 0) {
      return 0;
    }
    if (0xfd < uVar2) {
      return 0;
    }
  }
  do {
    if (bVar4) {
      return 1;
    }
    if (uVar2 == 0) {
      return 0;
    }
    uVar1 = 0;
    do {
      bVar4 = *(char *)(param_1 + uVar1) != '.';
      if (!bVar4) {
        param_1 = param_1 + uVar1 + 1;
        uVar2 = uVar2 - (uVar1 + 1);
        goto LAB_0144992c;
      }
      uVar1 = uVar1 + 1;
    } while (uVar2 != uVar1);
    uVar1 = uVar2;
LAB_0144992c:
    if (uVar1 - 0x40 < 0xffffffc0 || uVar1 == 0) {
      return 0;
    }
  } while( true );
}

