// FUN_010b16e0 @ 010b16e0 size=428 calls_out=6 calls_in=2
// strings: 

undefined4 FUN_010b16e0(int param_1,uint param_2)

{
  undefined2 *puVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  uint local_40;
  undefined2 *puStack_3c;
  uint uStack_38;
  uint local_30;
  undefined2 *local_2c;
  undefined4 local_28;
  
  uVar4 = *(uint *)(param_1 + 0x28);
  uVar5 = uVar4 + param_2;
  uVar3 = 1;
  if ((!CARRY4(uVar4,param_2)) && (uVar3 = 0, *(uint *)(param_1 + 0x1c) < uVar5)) {
    uVar6 = 0xffffffff >> LZCOUNT(uVar5 - 1);
    if (uVar5 < 2) {
      uVar6 = 0;
    }
    uVar3 = 1;
    if (uVar6 >> 0xf == 0) {
      uVar5 = uVar6 + 1;
      if (uVar4 != 0) {
        uVar3 = FUN_010b13d8(param_1,uVar5);
        return uVar3;
      }
      *(short *)(param_1 + 0x38) = (short)uVar6;
      puStack_3c = (undefined2 *)thunk_FUN_016d4a50(uVar5 * 4);
      if (puStack_3c == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(2,uVar5 * 4);
      }
      local_28 = 0;
      puVar1 = puStack_3c;
      uStack_38 = 1;
      if (1 < uVar5) {
        do {
          puVar1[1] = 0;
          uVar6 = uVar6 - 1;
          *puVar1 = 0xffff;
          puVar1 = puVar1 + 2;
        } while (uVar6 != 0);
        uStack_38 = uVar5;
      }
      puVar1[1] = 0;
      *puVar1 = 0xffff;
      local_40 = uVar5;
      local_30 = uVar5;
      local_2c = puStack_3c;
      uVar7 = FUN_00a5ee50(&local_40);
      if (*(int *)(param_1 + 0x1c) != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x18));
      }
      uVar5 = uVar5 - (uVar5 >> 2);
      *(undefined8 *)(param_1 + 0x18) = uVar7;
      if (0x2762762 < uVar5) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(0,0x2762762);
      }
      iVar2 = thunk_FUN_016d4a50(uVar5 * 0x34);
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(4,uVar5 * 0x34);
      }
      uVar3 = *(undefined4 *)(param_1 + 0x24);
      FUN_010bbc94(uVar3,*(undefined4 *)(param_1 + 0x28));
      if (*(int *)(param_1 + 0x20) != 0) {
        thunk_FUN_016d3fb4(uVar3);
      }
      *(uint *)(param_1 + 0x20) = uVar5;
      *(int *)(param_1 + 0x24) = iVar2;
      *(undefined4 *)(param_1 + 0x28) = 0;
      return 0;
    }
  }
  return uVar3;
}

