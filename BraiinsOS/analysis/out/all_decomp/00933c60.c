// FUN_00933c60 @ 00933c60 size=424 calls_out=3 calls_in=0
// strings: 

undefined4 FUN_00933c60(double *param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  double dVar4;
  
  uVar1 = param_2[2];
  if ((uVar1 & 0x10000000) == 0) {
    dVar4 = ABS(*param_1);
    if ((1e+16 <= dVar4) || (*param_1 != 0.0 && dVar4 < 0.0001)) {
      iVar2 = FUN_00fb1b5c(param_2,(uVar1 & 0x3fffff) >> 0x15);
    }
    else {
      iVar2 = FUN_00fb1850(param_2,(uVar1 & 0x3fffff) >> 0x15,1);
    }
  }
  else {
    iVar2 = FUN_00fb1470(param_2,(uVar1 & 0x3fffff) >> 0x15,*(undefined2 *)((int)param_2 + 0xe));
  }
  uVar3 = 1;
  if (iVar2 == 0) {
    iVar2 = (**(code **)(param_2[1] + 0xc))(*param_2,"..=",3);
    uVar3 = 1;
    if (iVar2 == 0) {
      uVar1 = param_2[2];
      if ((uVar1 & 0x10000000) == 0) {
        dVar4 = ABS(param_1[1]);
        if ((1e+16 <= dVar4) || (param_1[1] != 0.0 && dVar4 < 0.0001)) {
          iVar2 = FUN_00fb1b5c(param_2,(uVar1 & 0x3fffff) >> 0x15);
        }
        else {
          iVar2 = FUN_00fb1850(param_2,(uVar1 & 0x3fffff) >> 0x15,1);
        }
      }
      else {
        iVar2 = FUN_00fb1470(param_2,(uVar1 & 0x3fffff) >> 0x15,*(undefined2 *)((int)param_2 + 0xe))
        ;
      }
      if ((iVar2 == 0) && (uVar3 = 0, *(char *)(param_1 + 2) == '\x01')) {
                    /* WARNING: Could not recover jumptable at 0x00933dfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar3 = (**(code **)(param_2[1] + 0xc))(*param_2," (exhausted)Scriptcfsclc",0xc);
        return uVar3;
      }
    }
  }
  return uVar3;
}

