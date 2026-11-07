// FUN_0164cf50 @ 0164cf50 size=528 calls_out=9 calls_in=5
// strings: expected `CurrentThread::Context`there is no reactor running; must be called from the context of a Tokio 1.x runtime

void FUN_0164cf50(int *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  uint *puVar8;
  undefined8 uVar9;
  
  if (*param_1 == 1) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa478("expected `CurrentThread::Context`there is no reactor running, must be called from the context of a Tokio 1.x runtime"
                 ,0x43,&DAT_018acc50);
  }
  if (param_1[2] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb715c(&DAT_018acc60);
  }
  iVar2 = param_1[3];
  iVar3 = 0;
  param_1[2] = -1;
  param_1[3] = 0;
  if (iVar2 == 0) goto LAB_0164d12c;
  DataMemoryBarrier(0xb);
  piVar4 = (int *)(param_1[8] + 0x10);
  do {
    iVar3 = *piVar4;
    bVar1 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar1);
  *piVar4 = iVar2;
  DataMemoryBarrier(0xb);
  if (iVar3 != 0) {
    FUN_0164c578(iVar3);
    thunk_FUN_016d3fb4(iVar3);
  }
  puVar8 = (uint *)param_1[8];
  uVar5 = *puVar8;
  DataMemoryBarrier(0xb);
  do {
    if ((uVar5 & 1) != 0) {
      puVar7 = puVar8 + 1;
      if ((char)*puVar7 == '\0') {
        bVar1 = (bool)hasExclusiveAccess(puVar7);
        if (!bVar1) goto LAB_0164d05c;
        *(char *)puVar7 = '\x01';
        DataMemoryBarrier(0xb);
      }
      else {
        ClearExclusiveLocal();
LAB_0164d05c:
        FUN_01280da8(puVar7);
      }
      FUN_0128236c(puVar7);
      DataMemoryBarrier(0xb);
      uVar9 = FUN_0163b4f4(puVar8 + 2,puVar8,*puVar8,0);
      if ((int)uVar9 == 0) {
        FUN_01282570(puVar7);
        if ((char)*puVar7 != '\x01') goto LAB_0164d118;
        DataMemoryBarrier(0xb);
        goto LAB_0164d100;
      }
      FUN_01282570(puVar7);
      if ((char)*puVar7 != '\x01') goto LAB_0164d0c8;
      DataMemoryBarrier(0xb);
      goto LAB_0164d0b0;
    }
    uVar6 = *puVar8;
    if (uVar6 == uVar5) {
      DataMemoryBarrier(0xb);
      do {
        bVar1 = (bool)hasExclusiveAccess(puVar8);
        if (bVar1) {
          *puVar8 = uVar5 & 0xfffffffc | 2;
          bVar1 = true;
          uVar5 = uVar6;
          goto LAB_0164cfe0;
        }
        uVar6 = *puVar8;
      } while (uVar6 == uVar5);
    }
    bVar1 = false;
    ClearExclusiveLocal();
    uVar5 = uVar6;
LAB_0164cfe0:
    DataMemoryBarrier(0xb);
  } while (!bVar1);
  goto LAB_0164d124;
  while ((char)*puVar7 == '\x01') {
LAB_0164d0b0:
    bVar1 = (bool)hasExclusiveAccess(puVar7);
    if (bVar1) {
      *(char *)puVar7 = '\0';
      goto LAB_0164d0d4;
    }
  }
LAB_0164d0c8:
  ClearExclusiveLocal();
  FUN_01280a5c(puVar7);
LAB_0164d0d4:
  (**(code **)((int)uVar9 + 4))((int)((ulonglong)uVar9 >> 0x20));
  goto LAB_0164d124;
  while ((char)*puVar7 == '\x01') {
LAB_0164d100:
    bVar1 = (bool)hasExclusiveAccess(puVar7);
    if (bVar1) {
      *(char *)puVar7 = '\0';
      goto LAB_0164d124;
    }
  }
LAB_0164d118:
  ClearExclusiveLocal();
  FUN_01280a5c(puVar7);
LAB_0164d124:
  iVar3 = param_1[2] + 1;
LAB_0164d12c:
  param_1[2] = iVar3;
  return;
}

