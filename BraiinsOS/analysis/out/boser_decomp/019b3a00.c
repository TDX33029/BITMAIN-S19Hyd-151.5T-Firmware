// FUN_019b3a00 @ 019b3a00 size=336 calls_out=8 calls_in=1
// strings: 

void FUN_019b3a00(int *param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined8 uVar10;
  undefined4 *local_38;
  int iStack_34;
  int local_30;
  undefined4 *local_2c;
  int *local_28;
  
  iVar7 = param_1[3];
  local_38 = (undefined4 *)0x1;
  iStack_34 = iVar7;
  uVar10 = thunk_FUN_01bee35a(1,0x244);
  piVar4 = (int *)((int)uVar10 + (int)((ulonglong)uVar10 >> 0x20));
  if ((char)piVar4[1] != '\x01') {
    if ((char)piVar4[1] == '\x02') {
                    /* WARNING: Subroutine does not return */
      FUN_019b0950(&DAT_01d27d18,&local_38);
    }
    FUN_019a2bcc(piVar4,FUN_019b3c8c);
    *(undefined1 *)(piVar4 + 1) = 1;
  }
  local_28 = (int *)*piVar4;
  *piVar4 = iVar7;
  FUN_019b3d30(&local_28);
  if (local_28 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar7 = *local_28;
      bVar1 = (bool)hasExclusiveAccess(local_28);
    } while (!bVar1);
    *local_28 = iVar7 + -1;
    if (iVar7 == 1) {
      DataMemoryBarrier(0xb);
      FUN_019b3e50(&local_28);
    }
  }
  iVar7 = *param_1;
  puVar8 = (undefined4 *)param_1[1];
  puVar9 = puVar8 + param_1[2] * 2;
  puVar2 = puVar8;
  local_38 = puVar8;
  local_30 = iVar7;
  local_2c = puVar9;
  if (param_1[2] != 0) {
    do {
      puVar6 = puVar2 + 2;
      uVar3 = *puVar2;
      iVar5 = puVar2[1];
      (**(code **)(iVar5 + 0xc))(uVar3);
      if (*(int *)(iVar5 + 4) != 0) {
        thunk_FUN_01be4678(uVar3);
      }
      puVar2 = puVar6;
    } while (puVar6 != puVar9);
    puVar2 = puVar9;
  }
  FUN_019b3ff8(puVar2,(uint)((int)puVar9 - (int)puVar2) >> 3);
  if (iVar7 == 0) {
    return;
  }
  thunk_FUN_01be4678(puVar8);
  return;
}

