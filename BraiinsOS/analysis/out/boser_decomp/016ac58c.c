// FUN_016ac58c @ 016ac58c size=140 calls_out=2 calls_in=2
// strings: 

void FUN_016ac58c(int *param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined1 uStack_11;
  
  piVar3 = (int *)*param_2;
  if (piVar3 == (int *)param_2[1]) {
    *(undefined1 *)param_1 = 2;
  }
  else {
    iVar4 = *piVar3;
    uVar1 = param_2[2];
    *param_2 = piVar3 + 1;
    param_2[2] = uVar1 + 1;
    if (uVar1 + 1 == param_2[3]) {
      iVar2 = FUN_016c2c08();
    }
    else {
      if (0xff < uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_013073dc(&DAT_004ce5d4,0x23,&uStack_11,&DAT_01d0887c,&DAT_01d0856c);
      }
      iVar2 = uVar1 << 8;
    }
    *param_1 = iVar2;
    param_1[1] = iVar4;
  }
  return;
}

