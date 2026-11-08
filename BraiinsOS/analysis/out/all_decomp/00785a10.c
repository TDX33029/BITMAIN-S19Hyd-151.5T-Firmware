// FUN_00785a10 @ 00785a10 size=312 calls_out=2 calls_in=1
// strings: inconsistent in drop

void FUN_00785a10(int *param_1)

{
  code *pcVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  
  piVar7 = param_1 + 4;
  do {
    piVar5 = (int *)param_1[5];
    piVar3 = (int *)piVar5[0x41];
    DataMemoryBarrier(0xb);
    piVar8 = (int *)*param_1;
    if (piVar5 == piVar8 + 2) {
      if (piVar3 == (int *)0x0) {
        if (param_1[1] != 0) {
          (**(code **)(param_1[1] + 0xc))(param_1[2]);
        }
        DataMemoryBarrier(0xb);
        do {
          iVar4 = *piVar8;
          bVar2 = (bool)hasExclusiveAccess(piVar8);
        } while (!bVar2);
        *piVar8 = iVar4 + -1;
        if (iVar4 == 1) {
          DataMemoryBarrier(0xb);
          FUN_00784064(*param_1);
          return;
        }
        return;
      }
      param_1[5] = (int)piVar3;
      DataMemoryBarrier(0xb);
      piVar5 = piVar3;
      piVar3 = (int *)piVar3[0x41];
    }
    if (piVar3 == (int *)0x0) {
      DataMemoryBarrier(0xb);
      if ((int *)*piVar7 != piVar5) {
LAB_00785b34:
        FUN_0100ec74("inconsistent in drop",0x14);
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xfdee,0x785b44);
        (*pcVar1)();
      }
      iVar4 = *param_1;
      *(undefined4 *)(iVar4 + 0x10c) = 0;
      iVar4 = iVar4 + 8;
      DataMemoryBarrier(0xb);
      do {
        iVar6 = *piVar7;
        bVar2 = (bool)hasExclusiveAccess(piVar7);
      } while (!bVar2);
      *piVar7 = iVar4;
      DataMemoryBarrier(0xb);
      *(int *)(iVar6 + 0x104) = iVar4;
      piVar3 = (int *)piVar5[0x41];
      DataMemoryBarrier(0xb);
      if (piVar3 == (int *)0x0) goto LAB_00785b34;
    }
    piVar5 = piVar5 + -2;
    param_1[5] = (int)piVar3;
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar5;
      bVar2 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar2);
    *piVar5 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00784064();
    }
  } while( true );
}

