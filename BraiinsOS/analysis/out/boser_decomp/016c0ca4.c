// FUN_016c0ca4 @ 016c0ca4 size=132 calls_out=3 calls_in=2
// strings: 

undefined8 FUN_016c0ca4(int *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int *piVar6;
  
  do {
    iVar3 = *param_1;
    bVar2 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar2);
  *param_1 = iVar3 + 1;
  if (-1 < iVar3) {
    piVar6 = (int *)param_1[2];
    do {
      iVar3 = *piVar6;
      bVar2 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar2);
    *piVar6 = iVar3 + 1;
    if (-1 < iVar3) {
      iVar3 = param_1[3];
      piVar4 = (int *)thunk_FUN_01be5118(8);
      if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(4,8);
      }
      *piVar4 = (int)piVar6;
      piVar4[1] = iVar3;
      uVar5 = FUN_016bf83c(piVar4,&DAT_01d09118);
      return CONCAT44(uVar5,param_1);
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0x16c0d24);
  (*pcVar1)();
}

