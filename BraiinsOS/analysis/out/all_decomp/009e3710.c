// FUN_009e3710 @ 009e3710 size=160 calls_out=3 calls_in=10
// strings: 

void FUN_009e3710(int *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  
  if ((char)param_1[2] == '\0') {
    uVar8 = thunk_FUN_016de0ee(param_1,0x248);
    uVar3 = *(uint *)((int)uVar8 + (int)((ulonglong)uVar8 >> 0x20));
    if (uVar3 < 3) {
      piVar4 = (int *)FUN_015f7ed0();
    }
    else {
      piVar4 = (int *)(uVar3 - 8);
      do {
        iVar5 = *piVar4;
        bVar2 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar2);
      *piVar4 = iVar5 + 1;
      if (iVar5 < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xfdee,0x9e37ac);
        (*pcVar1)();
      }
    }
    iVar5 = piVar4[2];
    iVar7 = piVar4[3];
    DataMemoryBarrier(0xb);
    do {
      iVar6 = *piVar4;
      bVar2 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar2);
    *piVar4 = iVar6 + -1;
    if (iVar6 == 1) {
      DataMemoryBarrier(0xb);
      FUN_015e92c0();
    }
    *(undefined1 *)(param_1 + 2) = 1;
    *param_1 = iVar5;
    param_1[1] = iVar7;
  }
  return;
}

