// FUN_005e4e58 @ 005e4e58 size=968 calls_out=6 calls_in=3
// strings: 

undefined1 FUN_005e4e58(int param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  undefined4 *puVar7;
  uint *puVar8;
  int local_300;
  int iStack_2fc;
  
  if (*(uint *)(param_1 + 8) != 2) {
    iVar3 = *(int *)(param_1 + 0xc);
    if ((*(uint *)(param_1 + 8) & 1) != 0) {
      iVar3 = iVar3 + (*(int *)(*(int *)(param_1 + 0x10) + 8) - 1U & 0xfffffff8) + 8;
    }
    (**(code **)(*(int *)(param_1 + 0x10) + 0x30))(iVar3,param_1);
  }
  puVar7 = (undefined4 *)(param_1 + 0xb0);
  cVar1 = *(char *)(param_1 + 0xab);
  if (cVar1 == '\x04') {
    if (*(char *)(param_1 + 0xe4) == '\0') {
      puVar7 = (undefined4 *)(param_1 + 200);
      iVar3 = **(int **)(param_1 + 0xd0);
joined_r0x005e50a4:
      if (iVar3 != 0) {
        puVar8 = (uint *)(iVar3 + 0x2f8);
        do {
          uVar4 = *puVar8;
          bVar2 = (bool)hasExclusiveAccess(puVar8);
        } while (!bVar2);
        *puVar8 = uVar4 | 4;
        DataMemoryBarrier(0xb);
        if ((uVar4 & 10) == 8) {
          (**(code **)(*(int *)(iVar3 + 0x2e8) + 8))(*(undefined4 *)(iVar3 + 0x2ec));
        }
      }
      if (*(char *)(puVar7 + 4) == '\x01') {
        FUN_0162766c(&local_300,puVar7[3],*puVar7,puVar7[1]);
      }
    }
    else if (*(char *)(param_1 + 0xe4) == '\x03') {
      iVar3 = **(int **)(param_1 + 0xb8);
      goto joined_r0x005e50a4;
    }
    iVar3 = *(int *)(param_1 + 0xa0);
    if (iVar3 != 0) {
      puVar8 = (uint *)(iVar3 + 0x2f8);
      do {
        uVar4 = *puVar8;
        bVar2 = (bool)hasExclusiveAccess(puVar8);
      } while (!bVar2);
      *puVar8 = uVar4 | 4;
      DataMemoryBarrier(0xb);
      if ((uVar4 & 10) == 8) {
        (**(code **)(*(int *)(iVar3 + 0x2e8) + 8))(*(undefined4 *)(iVar3 + 0x2ec));
      }
      if ((uVar4 & 2) != 0) {
        FUN_016dd1aa(&local_300,(undefined4 *)(iVar3 + 8),0x2e0);
        *(undefined4 *)(iVar3 + 8) = 0x1e;
        *(undefined4 *)(iVar3 + 0xc) = 0;
        if (local_300 != 0x1e || iStack_2fc != 0) {
          FUN_00e7b808(&local_300);
        }
      }
      piVar5 = *(int **)(param_1 + 0xa0);
      if (piVar5 != (int *)0x0) {
        DataMemoryBarrier(0xb);
        do {
          iVar3 = *piVar5;
          bVar2 = (bool)hasExclusiveAccess(piVar5);
        } while (!bVar2);
        *piVar5 = iVar3 + -1;
        if (iVar3 == 1) {
          DataMemoryBarrier(0xb);
          FUN_00e457a8(*(undefined4 *)(param_1 + 0xa0));
        }
      }
    }
  }
  else {
    if (cVar1 != '\x03') {
      if (cVar1 == '\0') {
        uVar6 = 0xf;
        puVar8 = (uint *)(param_1 + 0x40);
        uVar4 = *puVar8;
        if ((int)uVar4 < 0) {
          uVar6 = uVar4 ^ 0x80000000;
        }
        if (uVar6 == 0x17) {
          if (*(int *)(param_1 + 0x44) != 0) {
            thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x48));
          }
        }
        else {
          if (uVar6 != 0xf) {
            if (uVar6 != 0xe) goto LAB_005e51c4;
            puVar8 = (uint *)(param_1 + 0x44);
            uVar4 = *puVar8;
          }
          if (uVar4 != 0) {
            thunk_FUN_016d3fb4(puVar8[1]);
          }
          if (puVar8[3] != 0) {
            thunk_FUN_016d3fb4(puVar8[4]);
          }
          if (puVar8[6] != 0x80000000 && puVar8[6] != 0) {
            thunk_FUN_016d3fb4(puVar8[7]);
          }
        }
      }
      goto LAB_005e51c4;
    }
    FUN_005c2e9c(param_1 + 200);
    iVar3 = **(int **)(param_1 + 0xb8);
    if (iVar3 != 0) {
      puVar8 = (uint *)(iVar3 + 0x2f8);
      do {
        uVar4 = *puVar8;
        bVar2 = (bool)hasExclusiveAccess(puVar8);
      } while (!bVar2);
      *puVar8 = uVar4 | 4;
      DataMemoryBarrier(0xb);
      if ((uVar4 & 10) == 8) {
        (**(code **)(*(int *)(iVar3 + 0x2e8) + 8))(*(undefined4 *)(iVar3 + 0x2ec));
      }
    }
    if (*(char *)(param_1 + 0xc0) == '\x01') {
      FUN_0162766c(&local_300,*(undefined4 *)(param_1 + 0xbc),*puVar7,
                   *(undefined4 *)(param_1 + 0xb4));
    }
    iVar3 = *(int *)(param_1 + 0xa0);
    if (iVar3 != 0) {
      puVar8 = (uint *)(iVar3 + 0x2f8);
      do {
        uVar4 = *puVar8;
        bVar2 = (bool)hasExclusiveAccess(puVar8);
      } while (!bVar2);
      *puVar8 = uVar4 | 4;
      DataMemoryBarrier(0xb);
      if ((uVar4 & 10) == 8) {
        (**(code **)(*(int *)(iVar3 + 0x2e8) + 8))(*(undefined4 *)(iVar3 + 0x2ec));
      }
      if ((uVar4 & 2) != 0) {
        FUN_016dd1aa(&local_300,(undefined4 *)(iVar3 + 8),0x2e0);
        *(undefined4 *)(iVar3 + 8) = 0x1e;
        *(undefined4 *)(iVar3 + 0xc) = 0;
        if (local_300 != 0x1e || iStack_2fc != 0) {
          FUN_00e7b808(&local_300);
        }
      }
      piVar5 = *(int **)(param_1 + 0xa0);
      if (piVar5 != (int *)0x0) {
        DataMemoryBarrier(0xb);
        do {
          iVar3 = *piVar5;
          bVar2 = (bool)hasExclusiveAccess(piVar5);
        } while (!bVar2);
        *piVar5 = iVar3 + -1;
        if (iVar3 == 1) {
          DataMemoryBarrier(0xb);
          FUN_00e457a8(*(undefined4 *)(param_1 + 0xa0));
        }
      }
    }
  }
  *(undefined2 *)(param_1 + 0xa8) = 0;
LAB_005e51c4:
  if (*(uint *)(param_1 + 8) != 2) {
    iVar3 = *(int *)(param_1 + 0xc);
    if ((*(uint *)(param_1 + 8) & 1) != 0) {
      iVar3 = iVar3 + (*(int *)(*(int *)(param_1 + 0x10) + 8) - 1U & 0xfffffff8) + 8;
    }
    (**(code **)(*(int *)(param_1 + 0x10) + 0x34))(iVar3,param_1);
  }
  return DAT_018dd947;
}

