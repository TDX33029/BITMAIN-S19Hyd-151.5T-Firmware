// FUN_00a58058 @ 00a58058 size=108 calls_out=3 calls_in=2
// strings: 

undefined8 FUN_00a58058(char param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 unaff_r5;
  
  if (param_1 == '\0') {
    uVar3 = 0;
  }
  else {
    if (param_1 == '\x01') {
      piVar1 = (int *)FUN_01663bcc();
      unaff_r5 = FUN_00ab27c4(piVar1,7);
    }
    else {
      piVar1 = (int *)FUN_01663bcc();
      unaff_r5 = FUN_00ab27c4(piVar1,0x1c);
    }
    iVar2 = *piVar1;
    *piVar1 = iVar2 + -1;
    uVar3 = 1;
    if (iVar2 + -1 == 0) {
      FUN_01663bac(piVar1);
      uVar3 = 1;
    }
  }
  return CONCAT44(unaff_r5,uVar3);
}

