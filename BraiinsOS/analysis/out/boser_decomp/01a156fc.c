// FUN_01a156fc @ 01a156fc size=292 calls_out=6 calls_in=1
// strings: max receivers

void FUN_01a156fc(int *param_1,int *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  
  do {
    iVar3 = *param_2;
    bVar2 = (bool)hasExclusiveAccess(param_2);
  } while (!bVar2);
  *param_2 = iVar3 + 1;
  if (iVar3 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x1a15820);
    (*pcVar1)();
  }
  piVar4 = param_2 + 4;
  if ((char)*piVar4 == '\0') {
    bVar2 = (bool)hasExclusiveAccess(piVar4);
    if (bVar2) {
      *(char *)piVar4 = '\x01';
      DataMemoryBarrier(0xb);
      goto LAB_01a15754;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  FUN_0164fba8(piVar4);
LAB_01a15754:
  FUN_0165098c(piVar4);
  iVar3 = param_2[10];
  if (iVar3 == 0) {
    *(undefined1 *)(param_2 + 0xb) = 0;
  }
  else {
    if (iVar3 == 0x3fffffff) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb100("max receivers",0x1b,&DAT_01d2a510);
    }
    if (iVar3 == -1) {
                    /* WARNING: Subroutine does not return */
      FUN_0130739c(&DAT_00570520,8,&DAT_01d2a520);
    }
  }
  iVar6 = param_2[6];
  iVar5 = param_2[7];
  param_2[10] = iVar3 + 1;
  FUN_01650a90(piVar4);
  if ((char)*piVar4 == '\x01') {
    DataMemoryBarrier(0xb);
    do {
      bVar2 = (bool)hasExclusiveAccess(piVar4);
      if (bVar2) {
        *(char *)piVar4 = '\0';
        goto LAB_01a157f0;
      }
    } while ((char)*piVar4 == '\x01');
  }
  ClearExclusiveLocal();
  FUN_0164f86c(piVar4);
LAB_01a157f0:
  *param_1 = iVar6;
  param_1[1] = iVar5;
  param_1[2] = (int)param_2;
  return;
}

