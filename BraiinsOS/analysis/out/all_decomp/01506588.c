// FUN_01506588 @ 01506588 size=584 calls_out=4 calls_in=1
// strings: 

void FUN_01506588(undefined4 *param_1,int *param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined *puVar4;
  int iVar5;
  undefined4 *puVar6;
  byte *pbVar7;
  undefined1 *puVar8;
  undefined *puVar9;
  int iVar10;
  uint uVar11;
  undefined *puVar12;
  undefined *puVar13;
  bool bVar14;
  undefined4 local_30;
  undefined *local_2c;
  int local_28;
  
  FUN_0152d84c(&local_30,"",param_2);
  puVar1 = local_2c;
  if ((char)local_30 != '\x18') {
    *(char *)(param_1 + 1) = (char)local_30;
    *(undefined1 *)((int)param_1 + 7) = local_30._3_1_;
    *(undefined2 *)((int)param_1 + 5) = local_30._1_2_;
    param_1[2] = local_2c;
    param_1[3] = local_28;
    *param_1 = 1;
    return;
  }
  puVar9 = (undefined *)param_2[1];
  uVar11 = param_2[2];
  if (puVar9 + -uVar11 < local_2c) {
    param_1[3] = 0;
    *param_1 = 1;
    param_1[1] = 0xb;
    return;
  }
  puVar4 = local_2c + uVar11;
  param_2[2] = (int)puVar4;
  if ((CARRY4(uVar11,(uint)local_2c)) || (puVar9 < puVar4)) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(uVar11,puVar4,puVar9,&DAT_018a78f8);
  }
  iVar5 = *param_2;
  iVar10 = 0;
  puVar9 = (undefined *)0x4;
  bVar14 = local_2c != (undefined *)0x0;
  local_28 = 0;
  local_2c = (undefined *)0x4;
  local_30 = 0;
  if (bVar14) {
    puVar4 = (undefined *)0x0;
    do {
      iVar2 = local_28;
      puVar12 = local_2c;
      if ((uint)((int)puVar1 - (int)puVar4) < 3) {
        uVar3 = 3;
        puVar8 = &DAT_8000000c;
        puVar4 = &DAT_0040bf71;
LAB_01506730:
        *param_1 = 1;
        param_1[1] = puVar8;
        param_1[2] = puVar4;
        param_1[3] = uVar3;
        if (local_28 != 0) {
          puVar6 = (undefined4 *)((int)local_2c + 4);
          iVar5 = local_28;
          do {
            if ((puVar6[-1] & 0x7fffffff) != 0) {
              thunk_FUN_016d3fb4(*puVar6);
            }
            puVar6 = puVar6 + 3;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
        }
        if (local_30 == 0) {
          return;
        }
        thunk_FUN_016d3fb4(puVar12);
        return;
      }
      puVar13 = puVar4 + 3;
      if (((undefined *)0xfffffffc < puVar4) || (puVar1 < puVar13)) {
LAB_015067a8:
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(puVar4,puVar13,puVar1,&DAT_018a78f8);
      }
      pbVar7 = puVar4 + iVar5 + uVar11;
      puVar4 = (undefined *)((uint)*pbVar7 << 0x10 | (uint)pbVar7[1] << 8 | (uint)pbVar7[2]);
      if (puVar1 + -(int)puVar13 < puVar4) {
        uVar3 = 0;
        puVar8 = (undefined1 *)0xb;
        goto LAB_01506730;
      }
      puVar12 = puVar4 + (int)puVar13;
      if ((CARRY4((uint)puVar4,(uint)puVar13)) || (puVar1 < puVar12)) {
        puVar4 = puVar13;
        puVar13 = puVar12;
        goto LAB_015067a8;
      }
      if (local_28 == local_30) {
        FUN_0154e248(&local_30);
        puVar9 = local_2c;
      }
      puVar6 = (undefined4 *)((int)puVar9 + iVar10);
      *puVar6 = 0x80000000;
      local_28 = iVar2 + 1;
      iVar10 = iVar10 + 0xc;
      puVar6[1] = puVar13 + iVar5 + uVar11;
      puVar6[2] = puVar4;
      puVar4 = puVar12;
    } while (puVar12 < puVar1);
  }
  *param_1 = 0;
  param_1[1] = local_30;
  param_1[2] = local_2c;
  param_1[3] = local_28;
  return;
}

