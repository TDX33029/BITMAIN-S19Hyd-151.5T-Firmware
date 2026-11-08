// FUN_019c9e34 @ 019c9e34 size=100 calls_out=1 calls_in=0
// strings: 

undefined4 FUN_019c9e34(undefined4 *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  
  iVar4 = *(int *)*param_1;
  *(int *)*param_1 = 0;
  pcVar1 = *(code **)(iVar4 + 0xc);
  *(undefined4 *)(iVar4 + 0xc) = 0;
  if (pcVar1 == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb100(&DAT_005314ef,0x55,&DAT_01d2eb84);
  }
  uVar2 = (*pcVar1)();
  puVar3 = *(undefined4 **)param_1[1];
  *puVar3 = 1;
  puVar3[1] = uVar2;
  return 1;
}

