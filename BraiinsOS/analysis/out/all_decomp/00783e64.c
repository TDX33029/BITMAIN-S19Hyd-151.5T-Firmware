// FUN_00783e64 @ 00783e64 size=244 calls_out=2 calls_in=3
// strings: 

void FUN_00783e64(int *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  
  iVar7 = param_1[1];
  do {
    if (iVar7 == 0) {
      return;
    }
    iVar6 = *(int *)(iVar7 + 0xfc);
    iVar3 = *(int *)(iVar7 + 0xf8);
    *(int *)(iVar7 + 0xf8) = *(int *)(*param_1 + 8) + 8;
    iVar5 = *(int *)(iVar7 + 0x100) + -1;
    *(undefined4 *)(iVar7 + 0xfc) = 0;
    if (iVar3 == 0) {
      if (iVar6 != 0) goto LAB_00783ee0;
      param_1[1] = 0;
    }
    else {
      *(int *)(iVar3 + 0xfc) = iVar6;
      if (iVar6 == 0) {
        param_1[1] = iVar3;
        *(int *)(iVar3 + 0x100) = iVar5;
      }
      else {
LAB_00783ee0:
        *(int *)(iVar6 + 0xf8) = iVar3;
        *(int *)(iVar7 + 0x100) = iVar5;
      }
    }
    pcVar4 = (char *)(iVar7 + 0x10c);
    piVar8 = (int *)(iVar7 + -8);
    DataMemoryBarrier(0xb);
    do {
      cVar1 = *pcVar4;
      bVar2 = (bool)hasExclusiveAccess(pcVar4);
    } while (!bVar2);
    *pcVar4 = '\x01';
    DataMemoryBarrier(0xb);
    FUN_00783fcc(iVar7);
    *(undefined4 *)(iVar7 + 8) = 0x3b9aca01;
    if (cVar1 == '\0') {
      DataMemoryBarrier(0xb);
      do {
        iVar7 = *piVar8;
        bVar2 = (bool)hasExclusiveAccess(piVar8);
      } while (!bVar2);
      *piVar8 = iVar7 + -1;
      if (iVar7 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00784064(piVar8);
      }
    }
    iVar7 = param_1[1];
  } while( true );
}

