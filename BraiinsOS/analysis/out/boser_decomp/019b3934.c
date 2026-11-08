// FUN_019b3934 @ 019b3934 size=204 calls_out=3 calls_in=4
// strings: 

/* WARNING: Removing unreachable block (ram,0x019b39a0) */

void FUN_019b3934(uint param_1,uint param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  bool bVar10;
  undefined4 in_cr10;
  undefined4 in_cr11;
  undefined4 in_cr12;
  undefined8 uVar11;
  undefined4 *puStack_60;
  int iStack_5c;
  int iStack_58;
  undefined4 *puStack_54;
  int *piStack_50;
  uint uStack_4c;
  uint uStack_48;
  uint *puStack_44;
  undefined4 uStack_40;
  uint local_24;
  int local_20;
  int local_1c;
  
  bVar10 = param_1 == 0 && param_2 == 0;
  if (param_1 == 0 && param_2 == 0) {
    bVar10 = param_3 == 0;
  }
  if (!bVar10) {
LAB_019b395c:
    do {
      local_24 = 0x7fffffff;
      if (param_1 < 0x7fffffff) {
        local_24 = param_1;
      }
      if (param_2 != 0) {
        local_24 = 0x7fffffff;
      }
      bVar10 = param_1 < local_24;
      param_1 = param_1 - local_24;
      param_2 = param_2 - bVar10;
      local_20 = param_3;
      iVar1 = FUN_01bf060a(&local_24,&local_24);
      param_3 = 0;
      if (iVar1 == -1) {
        piVar2 = (int *)FUN_01be3244();
        local_1c = *piVar2;
        bVar10 = local_1c == 4;
        if (!bVar10) {
          piVar2 = (int *)FUN_019abc1c(&local_1c,&DAT_0056e8c0,0,&DAT_01d279f8);
          coprocessor_function2(0xe,0xb,6,in_cr10,in_cr11,in_cr12);
          if (bVar10) {
            param_2 = (uint)piVar2 ^ 0x7fffffff;
          }
          uStack_40 = 0x7fffffff;
          iVar1 = piVar2[3];
          puStack_60 = (undefined4 *)0x1;
          iStack_5c = iVar1;
          uStack_4c = param_2;
          uStack_48 = param_1;
          puStack_44 = &local_24;
          uVar11 = thunk_FUN_01bee35a(1,0x244);
          piVar5 = (int *)((int)uVar11 + (int)((ulonglong)uVar11 >> 0x20));
          if ((char)piVar5[1] != '\x01') {
            if ((char)piVar5[1] == '\x02') {
                    /* WARNING: Subroutine does not return */
              FUN_019b0950(&DAT_01d27d18,&puStack_60);
            }
            FUN_019a2bcc(piVar5,FUN_019b3c8c);
            *(undefined1 *)(piVar5 + 1) = 1;
          }
          piStack_50 = (int *)*piVar5;
          *piVar5 = iVar1;
          FUN_019b3d30(&piStack_50);
          if (piStack_50 != (int *)0x0) {
            DataMemoryBarrier(0xb);
            do {
              iVar1 = *piStack_50;
              bVar10 = (bool)hasExclusiveAccess(piStack_50);
            } while (!bVar10);
            *piStack_50 = iVar1 + -1;
            if (iVar1 == 1) {
              DataMemoryBarrier(0xb);
              FUN_019b3e50(&piStack_50);
            }
          }
          iVar1 = *piVar2;
          puVar8 = (undefined4 *)piVar2[1];
          puVar9 = puVar8 + piVar2[2] * 2;
          puVar3 = puVar8;
          puStack_60 = puVar8;
          iStack_58 = iVar1;
          puStack_54 = puVar9;
          if (piVar2[2] != 0) {
            do {
              puVar7 = puVar3 + 2;
              uVar4 = *puVar3;
              iVar6 = puVar3[1];
              (**(code **)(iVar6 + 0xc))(uVar4);
              if (*(int *)(iVar6 + 4) != 0) {
                thunk_FUN_01be4678(uVar4);
              }
              puVar3 = puVar7;
            } while (puVar7 != puVar9);
            puVar3 = puVar9;
          }
          FUN_019b3ff8(puVar3,(uint)((int)puVar9 - (int)puVar3) >> 3);
          if (iVar1 == 0) {
            return;
          }
          thunk_FUN_01be4678(puVar8);
          return;
        }
        bVar10 = CARRY4(param_1,local_24);
        param_1 = param_1 + local_24;
        param_2 = param_2 + ((int)local_24 >> 0x1f) + (uint)bVar10;
        local_1c = 4;
        param_3 = local_20;
        if (0 < local_20) goto LAB_019b395c;
      }
    } while (param_1 != 0 || param_2 != 0);
  }
  return;
}

