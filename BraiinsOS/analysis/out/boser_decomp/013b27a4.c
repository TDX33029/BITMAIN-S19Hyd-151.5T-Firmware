// FUN_013b27a4 @ 013b27a4 size=112 calls_out=1 calls_in=1
// strings: 

uint FUN_013b27a4(uint *param_1,uint param_2)

{
  byte bVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  
  uVar2 = *param_1;
  if (0xff < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(uVar2,0x100,&DAT_01ceff1c);
  }
  puVar3 = (uint *)(&UNK_00464f08 + (param_2 & 0xff) * 8 + uVar2 * 0x80);
  bVar1 = *(byte *)((int)puVar3 + 5);
  if ((bVar1 & 4) == 0) {
    *(byte *)(param_1 + 1) = bVar1 & 1;
    uVar4 = (uint)(byte)puVar3[1];
    *param_1 = *puVar3;
    uVar2 = (bVar1 & 3) >> 1;
  }
  else {
    uVar2 = 2;
    uVar4 = 6;
  }
  return uVar2 | uVar4 << 8;
}

