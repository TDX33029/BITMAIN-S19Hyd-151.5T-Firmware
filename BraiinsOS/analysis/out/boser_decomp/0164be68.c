// FUN_0164be68 @ 0164be68 size=516 calls_out=5 calls_in=17
// strings: 

void FUN_0164be68(uint *param_1,undefined4 param_2,int param_3)

{
  code *pcVar1;
  uint uVar2;
  int *piVar3;
  bool bVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined8 uVar8;
  int *local_2c;
  uint local_28;
  char local_24;
  
  uVar8 = thunk_FUN_01bee35a(param_1,0x240);
  DataMemoryBarrier(0xb);
  uVar7 = *param_1;
LAB_0164be9c:
  do {
    switch(uVar7 & 3) {
    case 1:
switchD_0164bea8_caseD_1:
      uVar2 = *(uint *)((int)uVar8 + (int)((ulonglong)uVar8 >> 0x20));
      if (uVar2 < 3) {
        piVar3 = (int *)FUN_019b03e8();
      }
      else {
        piVar3 = (int *)(uVar2 - 8);
        do {
          iVar5 = *piVar3;
          bVar4 = (bool)hasExclusiveAccess(piVar3);
        } while (!bVar4);
        *piVar3 = iVar5 + 1;
        if (iVar5 < 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xfdee,0x164c078);
          (*pcVar1)();
        }
      }
      local_28 = uVar7 & 0xfffffffc;
      local_24 = '\0';
      uVar2 = *param_1;
      if (uVar2 == uVar7) {
        DataMemoryBarrier(0xb);
        do {
          bVar4 = (bool)hasExclusiveAccess(param_1);
          if (bVar4) {
            *param_1 = (uint)&local_2c | 1;
            bVar4 = true;
            goto LAB_0164bf54;
          }
          uVar2 = *param_1;
        } while (uVar2 == uVar7);
      }
      bVar4 = false;
      ClearExclusiveLocal();
LAB_0164bf54:
      local_2c = piVar3;
      if (bVar4) goto LAB_0164bfb4;
      if ((uVar2 & 3) == 1) {
        uVar7 = uVar2;
        if (piVar3 != (int *)0x0) {
          DataMemoryBarrier(0xb);
          do {
            iVar5 = *piVar3;
            bVar4 = (bool)hasExclusiveAccess(piVar3);
          } while (!bVar4);
          *piVar3 = iVar5 + -1;
          if (iVar5 == 1) {
            DataMemoryBarrier(0xb);
            FUN_019a2ffc(piVar3);
          }
        }
        goto switchD_0164bea8_caseD_1;
      }
      if (piVar3 != (int *)0x0) {
        DataMemoryBarrier(0xb);
        do {
          iVar5 = *piVar3;
          bVar4 = (bool)hasExclusiveAccess(piVar3);
        } while (!bVar4);
        *piVar3 = iVar5 + -1;
        goto LAB_0164c02c;
      }
      goto LAB_0164c040;
    case 2:
      goto switchD_0164bea8_caseD_2;
    case 3:
      do {
      } while( true );
    }
    do {
      uVar2 = *param_1;
      if (uVar2 != uVar7) {
        bVar4 = false;
        ClearExclusiveLocal();
        goto LAB_0164bff4;
      }
      bVar4 = (bool)hasExclusiveAccess(param_1);
    } while (!bVar4);
    *param_1 = uVar7 + 1;
    bVar4 = true;
LAB_0164bff4:
    DataMemoryBarrier(0xb);
    uVar7 = uVar2;
  } while (!bVar4);
  iVar5 = (**(code **)(param_3 + 0x10))(param_2);
  uVar6 = 0;
  if (iVar5 != 0) {
    uVar6 = 2;
  }
  FUN_0164bd64(param_1,uVar6);
switchD_0164bea8_caseD_2:
  return;
LAB_0164bfb4:
  while (DataMemoryBarrier(0xb), local_24 == '\0') {
    FUN_019b37f8();
  }
  if (local_2c != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *local_2c;
      bVar4 = (bool)hasExclusiveAccess(local_2c);
    } while (!bVar4);
    *local_2c = iVar5 + -1;
LAB_0164c02c:
    if (iVar5 == 1) {
      DataMemoryBarrier(0xb);
      FUN_019a2ffc(local_2c);
    }
  }
LAB_0164c040:
  DataMemoryBarrier(0xb);
  uVar7 = *param_1;
  goto LAB_0164be9c;
}

