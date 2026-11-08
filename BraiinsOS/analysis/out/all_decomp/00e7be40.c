// FUN_00e7be40 @ 00e7be40 size=288 calls_out=6 calls_in=2
// strings: max receivers

void FUN_00e7be40(int *param_1,int *param_2)

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
    pcVar1 = (code *)software_udf(0xfdee,0xe7bf60);
    (*pcVar1)();
  }
  piVar4 = param_2 + 4;
  if ((char)*piVar4 == '\0') {
    bVar2 = (bool)hasExclusiveAccess(piVar4);
    if (bVar2) {
      *(char *)piVar4 = '\x01';
      DataMemoryBarrier(0xb);
      goto LAB_00e7be98;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  FUN_01280da8(piVar4);
LAB_00e7be98:
  FUN_0128236c(piVar4);
  iVar3 = param_2[10];
  if (iVar3 == 0) {
    *(undefined1 *)(param_2 + 0xb) = 0;
  }
  else {
    if (iVar3 == 0x3fffffff) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa478("max receivers",0x1b,&DAT_0187ab30);
    }
    if (iVar3 == -1) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb74b8(&DAT_0056a0b0,8,&DAT_0187ab40);
    }
  }
  iVar6 = param_2[6];
  iVar5 = param_2[7];
  param_2[10] = iVar3 + 1;
  FUN_01282570(piVar4);
  if ((char)*piVar4 == '\x01') {
    DataMemoryBarrier(0xb);
    do {
      bVar2 = (bool)hasExclusiveAccess(piVar4);
      if (bVar2) {
        *(char *)piVar4 = '\0';
        goto LAB_00e7bf30;
      }
    } while ((char)*piVar4 == '\x01');
  }
  ClearExclusiveLocal();
  FUN_01280a5c(piVar4);
LAB_00e7bf30:
  *param_1 = iVar6;
  param_1[1] = iVar5;
  param_1[2] = (int)param_2;
  return;
}

