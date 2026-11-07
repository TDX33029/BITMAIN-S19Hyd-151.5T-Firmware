// FUN_013c45cc @ 013c45cc size=192 calls_out=4 calls_in=1
// strings: 

undefined8 FUN_013c45cc(int *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined1 auStack_320 [776];
  
  do {
    iVar3 = *param_1;
    bVar2 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar2);
  *param_1 = iVar3 + 1;
  if (-1 < iVar3) {
    piVar4 = (int *)param_1[2];
    do {
      iVar3 = *piVar4;
      bVar2 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar2);
    *piVar4 = iVar3 + 1;
    if (-1 < iVar3) {
      iVar3 = param_1[2];
      iVar5 = param_1[3];
      piVar4 = (int *)thunk_FUN_016d4a50(8);
      if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,8);
      }
      *piVar4 = iVar3;
      piVar4[1] = iVar5;
      FUN_013bfd28(auStack_320,piVar4,&DAT_01894100);
      iVar3 = thunk_FUN_016d4a50(0x308);
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(8,0x308);
      }
      FUN_016dd1aa(iVar3,auStack_320,0x308);
      return CONCAT44(iVar3,param_1);
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0x13c468c);
  (*pcVar1)();
}

