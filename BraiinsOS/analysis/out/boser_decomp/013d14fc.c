// FUN_013d14fc @ 013d14fc size=328 calls_out=10 calls_in=2
// strings: 

void FUN_013d14fc(undefined4 *param_1)

{
  bool bVar1;
  int *piVar2;
  ushort uVar3;
  int iVar4;
  ushort *puVar5;
  
  puVar5 = (ushort *)*param_1;
  uVar3 = 7;
  if (1 < *puVar5) {
    uVar3 = *puVar5 - 2;
  }
  if (uVar3 < 0xf) {
    if (uVar3 == 7) {
      FUN_013d1724(puVar5);
    }
    else if (uVar3 == 8) {
      FUN_013d14fc(*(undefined4 *)(puVar5 + 0xe));
      thunk_FUN_01be4678(*(undefined4 *)(puVar5 + 0xe));
    }
  }
  else {
    switch(uVar3) {
    case 0x10:
    case 0x11:
    case 0x12:
    case 0x14:
    case 0x15:
    case 0x17:
      break;
    case 0x13:
      FUN_013d1954(puVar5 + 8);
      FUN_013d1970(puVar5 + 10);
      piVar2 = *(int **)(puVar5 + 0xc);
      if (piVar2 != (int *)0x0) {
        DataMemoryBarrier(0xb);
        do {
          iVar4 = *piVar2;
          bVar1 = (bool)hasExclusiveAccess(piVar2);
        } while (!bVar1);
        *piVar2 = iVar4 + -1;
        if (iVar4 == 1) {
          DataMemoryBarrier(0xb);
          FUN_013cdc90(*(undefined4 *)(puVar5 + 0xc),*(undefined4 *)(puVar5 + 0xe));
        }
      }
      piVar2 = *(int **)(puVar5 + 0x10);
      if (piVar2 != (int *)0x0) {
        DataMemoryBarrier(0xb);
        do {
          iVar4 = *piVar2;
          bVar1 = (bool)hasExclusiveAccess(piVar2);
        } while (!bVar1);
        *piVar2 = iVar4 + -1;
        if (iVar4 == 1) {
          DataMemoryBarrier(0xb);
          FUN_013cdd5c(*(undefined4 *)(puVar5 + 0x10),*(undefined4 *)(puVar5 + 0x12));
        }
      }
      break;
    default:
      if (uVar3 == 0x1d) {
        piVar2 = *(int **)(puVar5 + 2);
        DataMemoryBarrier(0xb);
        do {
          iVar4 = *piVar2;
          bVar1 = (bool)hasExclusiveAccess(piVar2);
        } while (!bVar1);
        *piVar2 = iVar4 + -1;
        if (iVar4 == 1) {
          DataMemoryBarrier(0xb);
          FUN_013cdbf8(*(undefined4 *)(puVar5 + 2));
        }
        break;
      }
      if (uVar3 != 0x24) break;
    case 0xf:
    case 0x16:
    case 0x18:
      FUN_019bb7e0(*(undefined4 *)(puVar5 + 2),*(undefined4 *)(puVar5 + 4));
    }
  }
  thunk_FUN_01be4678(puVar5);
  return;
}

