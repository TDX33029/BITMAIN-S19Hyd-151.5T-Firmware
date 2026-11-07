// FUN_016c2b5c @ 016c2b5c size=160 calls_out=2 calls_in=2
// strings: 

uint FUN_016c2b5c(int *param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined1 uStack_9;
  
  uVar2 = param_1[1];
  bVar1 = *(byte *)(*param_1 + 0xff);
  uVar4 = uVar2 + 1;
  uVar3 = bVar1 + 2;
  if (uVar4 == uVar3) {
    param_1[1] = uVar4;
    uVar2 = FUN_016c2c08(bVar1 + 1);
    uVar3 = uVar2 & 0x1ffff00;
  }
  else if (uVar2 < uVar3) {
    if (0xff < uVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_013073dc(&DAT_00533467,0x2b,&uStack_9,&DAT_01d09460,&DAT_01d09250);
    }
    uVar2 = uVar2 << 8;
    param_1[1] = uVar4;
    uVar3 = uVar2;
  }
  else {
    uVar2 = 2;
    uVar3 = 0;
  }
  return uVar2 & 0xff | uVar3;
}

