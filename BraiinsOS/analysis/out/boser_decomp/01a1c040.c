// FUN_01a1c040 @ 01a1c040 size=172 calls_out=3 calls_in=0
// strings: 

undefined8 FUN_01a1c040(undefined4 *param_1,undefined4 param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  int *local_68;
  int *local_64;
  undefined1 auStack_60 [24];
  undefined1 local_48;
  
  piVar4 = (int *)*param_1;
  do {
    iVar3 = *piVar4;
    bVar2 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar2);
  *piVar4 = iVar3 + 1;
  if (-1 < iVar3) {
    local_68 = (int *)param_1[1];
    do {
      iVar3 = *local_68;
      bVar2 = (bool)hasExclusiveAccess(local_68);
    } while (!bVar2);
    *local_68 = iVar3 + 1;
    if (-1 < iVar3) {
      FUN_01bed4e2(auStack_60,param_2,0x10);
      local_48 = 0;
      local_64 = piVar4;
      iVar3 = thunk_FUN_01be5118(0x58);
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(4,0x58);
      }
      FUN_01bed4e2(iVar3,&local_68,0x58);
      return CONCAT44(&UNK_01d2a650,iVar3);
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0x1a1c0e8);
  (*pcVar1)();
}

