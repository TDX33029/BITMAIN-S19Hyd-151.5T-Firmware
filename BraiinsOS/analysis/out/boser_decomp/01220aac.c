// FUN_01220aac @ 01220aac size=140 calls_out=3 calls_in=3
// strings: 

byte FUN_01220aac(void)

{
  int *piVar1;
  int iVar2;
  byte bVar3;
  
  piVar1 = (int *)FUN_0121f8ac();
  bVar3 = 0;
  do {
    if (piVar1[7] == 2) {
LAB_01220af0:
      if ((*piVar1 != 1) || (iVar2 = FUN_0121ff68(piVar1 + 1), iVar2 == 0)) {
        FUN_00f80320(piVar1,&DAT_01c24570);
        return bVar3;
      }
    }
    else {
      if ((piVar1[7] & 1U) == 0) {
LAB_01220aec:
        piVar1[7] = 2;
        goto LAB_01220af0;
      }
      iVar2 = piVar1[8];
      piVar1[8] = 0;
      if (iVar2 == 0) goto LAB_01220aec;
    }
    if (bVar3 < *(byte *)(iVar2 + 0x4c)) {
      bVar3 = *(byte *)(iVar2 + 0x4c);
    }
  } while( true );
}

