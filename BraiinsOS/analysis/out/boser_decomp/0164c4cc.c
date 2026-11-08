// FUN_0164c4cc @ 0164c4cc size=140 calls_out=4 calls_in=0
// strings: 

undefined4 FUN_0164c4cc(undefined4 *param_1)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  undefined1 auStack_58 [72];
  
  iVar2 = *(int *)*param_1;
  *(int *)*param_1 = 0;
  pcVar1 = *(code **)(iVar2 + 0x50);
  *(undefined4 *)(iVar2 + 0x50) = 0;
  if (pcVar1 == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb100(&DAT_005314ef,0x55,&DAT_01d2eb84);
  }
  (*pcVar1)(auStack_58);
  piVar3 = (int *)param_1[1];
  iVar2 = *piVar3;
  if (*(int *)(iVar2 + 0x30) != 2) {
    FUN_0164c3f4();
    FUN_0164c654((int *)(iVar2 + 0x30));
    iVar2 = *piVar3;
  }
  FUN_01bed4e2(iVar2,auStack_58,0x48);
  return 1;
}

