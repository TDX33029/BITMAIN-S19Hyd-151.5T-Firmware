// FUN_007789a8 @ 007789a8 size=420 calls_out=11 calls_in=0
// strings: 

int * FUN_007789a8(undefined4 *param_1,int *param_2)

{
  code *pcVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  
  do {
    iVar4 = *param_2;
    bVar2 = (bool)hasExclusiveAccess(param_2);
  } while (!bVar2);
  *param_2 = iVar4 + 0x40;
  if (iVar4 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0197a954();
  }
  piVar6 = (int *)*param_1;
  param_1[1] = param_1[1] + 1;
  do {
    iVar4 = *piVar6;
    bVar2 = (bool)hasExclusiveAccess(piVar6);
  } while (!bVar2);
  *piVar6 = iVar4 + 1;
  if (iVar4 < 0) goto LAB_00778b48;
  piVar3 = (int *)thunk_FUN_01be5118(0x1c);
  if (piVar3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x1c);
  }
  *(undefined1 *)(piVar3 + 6) = 1;
  piVar5 = piVar6 + 2;
  piVar3[3] = 0;
  piVar3[4] = 0;
  piVar3[5] = (int)param_2;
  *piVar3 = 1;
  piVar3[1] = 1;
  piVar3[2] = (int)piVar6;
  if ((char)*piVar5 == '\0') {
    bVar2 = (bool)hasExclusiveAccess(piVar5);
    if (!bVar2) goto LAB_00778a54;
    *(char *)piVar5 = '\x01';
    DataMemoryBarrier(0xb);
  }
  else {
    ClearExclusiveLocal();
LAB_00778a54:
    FUN_0164fba8(piVar5);
  }
  FUN_0165098c(piVar5);
  do {
    iVar4 = *piVar3;
    bVar2 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar2);
  *piVar3 = iVar4 + 1;
  if (-1 < iVar4) {
    FUN_013d5a8c(piVar6 + 5,piVar3);
    FUN_01650a90(piVar5);
    if ((char)*piVar5 == '\x01') {
      DataMemoryBarrier(0xb);
      do {
        bVar2 = (bool)hasExclusiveAccess(piVar5);
        if (bVar2) {
          *(char *)piVar5 = '\0';
          goto LAB_00778acc;
        }
      } while ((char)*piVar5 == '\x01');
    }
    ClearExclusiveLocal();
    FUN_0164f86c(piVar5);
LAB_00778acc:
    iVar4 = piVar3[5];
    iVar4 = FUN_019d72c4(iVar4,iVar4 + *(int *)(*(int *)(iVar4 + 8) + 0x1c),&DAT_01cf2c28,piVar3 + 2
                        );
    if (iVar4 != 0) {
      FUN_013e2520(piVar3);
    }
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar2 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar2);
    *piVar3 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_013cf470(piVar3);
    }
    return param_2;
  }
LAB_00778b48:
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0x778b48);
  (*pcVar1)();
}

