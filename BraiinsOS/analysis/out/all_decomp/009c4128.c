// FUN_009c4128 @ 009c4128 size=300 calls_out=7 calls_in=1
// strings: 

undefined4 * FUN_009c4128(undefined4 *param_1)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  int *piVar7;
  int *piVar8;
  undefined8 uVar9;
  
  if (*(char *)(param_1 + 1) == '\0') {
    uVar9 = thunk_FUN_016de0ee(param_1,0x248);
    uVar4 = *(uint *)((int)uVar9 + (int)((ulonglong)uVar9 >> 0x20));
    if (uVar4 < 3) {
      piVar8 = (int *)FUN_015f7ed0();
      puVar6 = (undefined4 *)thunk_FUN_016d4a50(0x10);
    }
    else {
      piVar8 = (int *)(uVar4 - 8);
      do {
        iVar5 = *piVar8;
        bVar3 = (bool)hasExclusiveAccess(piVar8);
      } while (!bVar3);
      *piVar8 = iVar5 + 1;
      if (iVar5 < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xfdee,0x9c4238);
        (*pcVar1)();
      }
      puVar6 = (undefined4 *)thunk_FUN_016d4a50(0x10);
    }
    if (puVar6 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0x10);
    }
    cVar2 = *(char *)(param_1 + 1);
    piVar7 = (int *)*param_1;
    *(undefined1 *)(puVar6 + 3) = 0;
    *puVar6 = 1;
    puVar6[1] = 1;
    puVar6[2] = piVar8;
    *(undefined1 *)(param_1 + 1) = 1;
    *param_1 = puVar6;
    if (cVar2 == '\x01') {
      DataMemoryBarrier(0xb);
      do {
        iVar5 = *piVar7;
        bVar3 = (bool)hasExclusiveAccess(piVar7);
      } while (!bVar3);
      *piVar7 = iVar5 + -1;
      if (iVar5 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0100ebe0(piVar7);
      }
    }
    else {
      if (cVar2 != '\0') {
                    /* WARNING: Subroutine does not return */
        FUN_00faa464(&DAT_00419463,0x28,&DAT_018ae210);
      }
      FUN_015e8e6c(param_1,&LAB_009c429c);
    }
  }
  else if (*(char *)(param_1 + 1) != '\x01') {
    return (undefined4 *)0x0;
  }
  return param_1;
}

