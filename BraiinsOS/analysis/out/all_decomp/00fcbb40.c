// FUN_00fcbb40 @ 00fcbb40 size=160 calls_out=1 calls_in=1
// strings: 

byte FUN_00fcbb40(int *param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = param_1[1];
  uVar5 = param_1[2];
  bVar1 = 2;
  uVar3 = uVar5;
  if (uVar4 < uVar5) {
    uVar3 = uVar4;
  }
  while( true ) {
    uVar2 = uVar5;
    if (uVar3 == uVar2) {
      return 2;
    }
    uVar5 = uVar2 - 1;
    param_1[2] = uVar5;
    if (0x100 < uVar2) break;
    param_2 = param_2 + -1;
    if (param_2 == 0) {
      if (uVar4 < uVar5) {
        uVar2 = uVar2 - 2;
        param_1[2] = uVar2;
        if (0x100 < uVar5) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa4a4(uVar2 >> 3,0x20,&DAT_018814bc);
        }
        bVar1 = *(byte *)(*param_1 + (uVar2 >> 3)) >> (uVar2 & 7) & 1;
      }
      return bVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00faa4a4(uVar5 >> 3,0x20,&DAT_018814bc);
}

