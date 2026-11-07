// FUN_0162f050 @ 0162f050 size=108 calls_out=1 calls_in=1
// strings: 

void FUN_0162f050(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  int iVar5;
  
  if (param_2 == 0) {
    return;
  }
  puVar4 = (uint *)(param_1 + 4);
  iVar5 = 0;
  do {
    uVar1 = puVar4[-1];
    uVar2 = 6;
    if ((int)uVar1 < 0) {
      uVar2 = uVar1 ^ 0x80000000;
    }
    if (uVar2 < 6) {
      if (uVar2 == 2) {
        uVar1 = *puVar4;
        puVar3 = puVar4;
        goto LAB_0162f09c;
      }
    }
    else {
      puVar3 = (uint *)(param_1 + iVar5 * 0x10);
LAB_0162f09c:
      FUN_0134bd64(uVar1,puVar3[1]);
    }
    iVar5 = iVar5 + 1;
    puVar4 = puVar4 + 4;
    param_2 = param_2 + -1;
    if (param_2 == 0) {
      return;
    }
  } while( true );
}

