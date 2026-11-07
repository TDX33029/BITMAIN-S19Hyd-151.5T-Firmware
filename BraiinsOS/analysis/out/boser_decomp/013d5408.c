// FUN_013d5408 @ 013d5408 size=128 calls_out=3 calls_in=0
// strings: 

undefined4 FUN_013d5408(undefined4 *param_1)

{
  short *psVar1;
  code *pcVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined1 auStack_58 [80];
  
  iVar3 = *(int *)*param_1;
  *(int *)*param_1 = 0;
  pcVar2 = *(code **)(iVar3 + 0x50);
  *(undefined4 *)(iVar3 + 0x50) = 0;
  if (pcVar2 == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb100(&DAT_005314ef,0x55,&DAT_01d2eb84);
  }
  (*pcVar2)(auStack_58);
  puVar4 = (undefined4 *)param_1[1];
  psVar1 = (short *)*puVar4;
  if (*psVar1 != 2) {
    FUN_013d1724();
    psVar1 = (short *)*puVar4;
  }
  FUN_01bed4e2(psVar1,auStack_58,0x4c);
  return 1;
}

