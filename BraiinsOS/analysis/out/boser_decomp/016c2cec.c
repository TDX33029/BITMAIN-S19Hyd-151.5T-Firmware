// FUN_016c2cec @ 016c2cec size=244 calls_out=2 calls_in=3
// strings: 

uint FUN_016c2cec(int *param_1)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined1 uStack_19;
  
  uVar6 = param_1[3];
  uVar5 = param_1[1];
  if (*param_1 == 0) {
    uVar5 = 0x100;
  }
  if (uVar5 <= uVar6) {
    uVar5 = uVar6;
  }
  uVar3 = 0x100;
  if (0x100 < uVar6) {
    uVar3 = uVar6;
  }
  do {
    uVar4 = uVar6;
    if (uVar5 == uVar4) {
      uVar4 = 2;
      uVar6 = 0;
      if ((uVar5 != 0xffffffff) && (*param_1 == 0)) {
        bVar2 = *(byte *)(param_1[2] + 0xff);
        param_1[3] = -1;
        uVar4 = FUN_016c2c08(bVar2 + 1);
        uVar6 = uVar4 & 0x1ffff00;
      }
      goto LAB_016c2da8;
    }
    if (uVar3 == uVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_013073dc(&DAT_00533467,0x2b,&uStack_19,&DAT_01d09460,&DAT_01d09260);
    }
    cVar1 = *(char *)(param_1[2] + uVar4);
    param_1[3] = uVar4 + 1;
  } while (((char)param_1[4] != '\0') &&
          (uVar6 = uVar4 + 1, *(char *)((int)param_1 + 0x11) == cVar1));
  uVar4 = uVar4 << 8;
  *(undefined1 *)(param_1 + 4) = 1;
  *(char *)((int)param_1 + 0x11) = cVar1;
  uVar6 = uVar4;
LAB_016c2da8:
  return uVar4 & 0xff | uVar6;
}

