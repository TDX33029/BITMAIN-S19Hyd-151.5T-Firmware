// FUN_01a19224 @ 01a19224 size=172 calls_out=3 calls_in=0
// strings: 

undefined8 FUN_01a19224(undefined4 *param_1,undefined4 param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  int *local_60;
  int *local_5c;
  undefined1 auStack_58 [28];
  undefined1 local_3c;
  
  local_60 = (int *)param_1[1];
  do {
    iVar3 = *local_60;
    bVar2 = (bool)hasExclusiveAccess(local_60);
  } while (!bVar2);
  *local_60 = iVar3 + 1;
  if (-1 < iVar3) {
    piVar4 = (int *)*param_1;
    do {
      iVar3 = *piVar4;
      bVar2 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar2);
    *piVar4 = iVar3 + 1;
    if (-1 < iVar3) {
      FUN_01bed4e2(auStack_58,param_2,0x10);
      local_3c = 0;
      local_5c = piVar4;
      iVar3 = thunk_FUN_01be5118(0x58);
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(4,0x58);
      }
      FUN_01bed4e2(iVar3,&local_60,0x58);
      return CONCAT44(&UNK_01d2a5a0,iVar3);
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0x1a192cc);
  (*pcVar1)();
}

