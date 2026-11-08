// FUN_01055fc0 @ 01055fc0 size=472 calls_out=3 calls_in=5
// strings: 

void FUN_01055fc0(uint *param_1,undefined2 *param_2,uint param_3)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 uVar6;
  undefined2 *puVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  undefined2 *puVar11;
  uint uVar12;
  undefined2 uVar13;
  undefined8 uVar14;
  int local_58;
  int local_48;
  undefined1 local_44;
  uint local_30;
  uint local_2c;
  
  iVar1 = param_3 * 0x18;
  if (0x5555555 < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0,iVar1);
  }
  if (iVar1 == 0) {
    local_2c = 4;
    local_30 = 0;
  }
  else {
    uVar14 = thunk_FUN_016d4a50(iVar1);
    uVar8 = (undefined4)((ulonglong)uVar14 >> 0x20);
    local_2c = (uint)uVar14;
    if (local_2c == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(4,iVar1);
    }
    local_30 = param_3;
    if (param_3 != 0) {
      iVar10 = 0;
      uVar12 = 0;
      puVar11 = param_2;
      do {
        if (iVar1 == iVar10) break;
        uVar2 = *puVar11;
        uVar3 = puVar11[1];
        if (*(char *)(puVar11 + 2) == '\x01') {
          iVar9 = *(int *)((int)param_2 + iVar10 + 0x10);
          uVar4 = 0;
          if (iVar9 < 0) {
LAB_01056184:
                    /* WARNING: Subroutine does not return */
            FUN_00600af4(uVar4,local_48);
          }
          uVar4 = *(undefined4 *)((int)param_2 + iVar10 + 0xc);
          uVar13 = *(undefined2 *)((int)param_2 + iVar10 + 6);
          if (iVar9 == 0) {
            local_58 = 0;
            iVar5 = 1;
          }
          else {
            iVar5 = thunk_FUN_016d4a50(iVar9);
            if (iVar5 == 0) {
              uVar4 = 1;
              local_48 = iVar9;
              goto LAB_01056184;
            }
            local_58 = iVar9;
          }
          FUN_016dd1aa(iVar5,uVar4,iVar9);
          uVar6 = 1;
          local_48 = iVar5;
        }
        else {
          uVar6 = 0;
          local_58 = *(int *)((int)param_2 + iVar10 + 8);
          iVar5 = *(int *)((int)param_2 + iVar10 + 0xc);
          iVar9 = *(int *)((int)param_2 + iVar10 + 0x10);
          uVar8 = *(undefined4 *)((int)param_2 + iVar10 + 0x14);
          uVar13 = *(undefined2 *)((int)param_2 + iVar10 + 6);
          local_44 = *(undefined1 *)((int)param_2 + iVar10 + 5);
        }
        puVar7 = (undefined2 *)(local_2c + iVar10);
        *puVar7 = uVar2;
        uVar12 = uVar12 + 1;
        puVar11 = puVar11 + 0xc;
        iVar10 = iVar10 + 0x18;
        *(int *)(puVar7 + 8) = iVar9;
        *(int *)(puVar7 + 6) = iVar5;
        *(undefined1 *)((int)puVar7 + 5) = local_44;
        *(undefined1 *)(puVar7 + 2) = uVar6;
        *(int *)(puVar7 + 4) = local_58;
        *(undefined4 *)(puVar7 + 10) = uVar8;
        puVar7[3] = uVar13;
        puVar7[1] = uVar3;
      } while (param_3 != uVar12);
    }
  }
  *param_1 = local_30;
  param_1[1] = local_2c;
  param_1[2] = param_3;
  return;
}

