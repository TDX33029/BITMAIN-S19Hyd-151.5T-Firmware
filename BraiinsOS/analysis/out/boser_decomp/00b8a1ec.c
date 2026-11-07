// FUN_00b8a1ec @ 00b8a1ec size=264 calls_out=5 calls_in=4
// strings: 

void FUN_00b8a1ec(int *param_1,undefined4 *param_2)

{
  int iVar1;
  int *piVar2;
  int local_30;
  int iStack_2c;
  int iStack_28;
  int local_20;
  code *local_1c;
  int local_18;
  undefined1 uStack_11;
  
  if (*(char *)(param_2 + 1) != '\0') {
    if (*(char *)(param_2 + 1) == '\x01') {
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c13d4c);
    }
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c13d4c);
  }
  piVar2 = (int *)*param_2;
  if (*piVar2 == 2 && piVar2[1] == 0) {
    local_20 = (int)piVar2 + 0x175;
    local_1c = FUN_007b3150;
    FUN_00664898(&local_30,&DAT_005bdd25,&local_20);
  }
  else {
    local_18 = 0;
    local_1c = (code *)0x1;
    local_20 = 0;
    iVar1 = FUN_0124d2a4((char)piVar2[0x37],*(undefined1 *)((int)piVar2 + 0xdd),&local_20,
                         &DAT_01c24cec);
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_013073dc(&DAT_00533383,0x37,&uStack_11,&DAT_01c24d04,&DAT_01d30334);
    }
    local_30 = local_20;
    iStack_2c = (int)local_1c;
    iStack_28 = local_18;
  }
  *param_1 = local_30;
  param_1[1] = iStack_2c;
  param_1[2] = iStack_28;
  *(undefined1 *)(param_2 + 1) = 1;
  return;
}

