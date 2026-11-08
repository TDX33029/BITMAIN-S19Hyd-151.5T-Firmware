// FUN_008d6300 @ 008d6300 size=420 calls_out=1 calls_in=0
// strings: 

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_008d6300(undefined1 *param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  undefined1 *puVar5;
  char *pcVar6;
  int iVar7;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
  switch((char)param_2[6]) {
  case '\n':
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (*param_2 == 10 && param_2[1] == 0) {
    iVar4 = param_2[2];
    iVar7 = param_2[3];
    iVar2 = param_2[4];
    *param_1 = 6;
    *(undefined4 *)(param_1 + 4) = 2;
    *(int *)(param_1 + 8) = iVar4;
    *(int *)(param_1 + 0xc) = iVar7;
    *(int *)(param_1 + 0x10) = iVar2;
    return;
  }
  iVar2 = param_2[0x18];
  if (iVar2 == 0) {
    *param_1 = 0;
    return;
  }
  pcVar3 = (char *)param_2[0x17];
  iVar4 = 0;
  while (iVar2 != iVar4) {
    pcVar6 = pcVar3 + iVar4;
    iVar4 = iVar4 + 1;
    if (*pcVar6 == '\x01') {
      *param_1 = 2;
      return;
    }
  }
  iVar4 = 0;
  while (iVar2 != iVar4) {
    pcVar6 = pcVar3 + iVar4;
    iVar4 = iVar4 + 1;
    if (*pcVar6 == '\x02') {
      *param_1 = 3;
      return;
    }
  }
  if (iVar2 == 1) {
    cVar1 = *pcVar3;
    if (cVar1 == '\0') {
      *param_1 = 4;
      return;
    }
    if (cVar1 == '\x03') {
      puVar5 = &DAT_003461ed;
    }
    else {
      if (cVar1 != '\x04') {
LAB_008d6690:
                    /* WARNING: Subroutine does not return */
        FUN_00fb74b8(&DAT_003461ef,0x21,&DAT_018651ac);
      }
      puVar5 = &DAT_003461ee;
    }
  }
  else {
    puVar5 = &DAT_003461ed;
    pcVar6 = pcVar3;
    iVar4 = iVar2;
    do {
      if (iVar4 == 0) goto LAB_008d6650;
      cVar1 = *pcVar6;
      iVar4 = iVar4 + -1;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\x03');
  }
LAB_008d6678:
  param_1[1] = *puVar5;
  *param_1 = 5;
  return;
  while( true ) {
    cVar1 = *pcVar3;
    iVar2 = iVar2 + -1;
    pcVar3 = pcVar3 + 1;
    if (cVar1 == '\x04') break;
LAB_008d6650:
    if (iVar2 == 0) goto LAB_008d6690;
  }
  puVar5 = &DAT_003461ee;
  goto LAB_008d6678;
}

