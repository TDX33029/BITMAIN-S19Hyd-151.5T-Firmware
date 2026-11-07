// FUN_015f8374 @ 015f8374 size=144 calls_out=2 calls_in=1
// strings: 

void FUN_015f8374(undefined4 param_1,undefined4 param_2)

{
  code *pcVar1;
  int *piVar2;
  undefined4 extraout_r2;
  int extraout_r3;
  int iVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined4 local_28;
  undefined4 local_24;
  
  do {
    iVar3 = DAT_018dd988 + 1;
    bVar4 = (bool)hasExclusiveAccess(0x18dd988);
  } while (!bVar4);
  bVar4 = -1 < DAT_018dd988;
  DAT_018dd988 = iVar3;
  if (bVar4) {
    uVar5 = thunk_FUN_016de0ee();
    param_2 = (undefined4)((ulonglong)uVar5 >> 0x20);
    piVar2 = (int *)((int)uVar5 + extraout_r3);
    param_1 = extraout_r2;
    if ((char)piVar2[1] == '\0') {
      *(undefined1 *)(piVar2 + 1) = 0;
      *piVar2 = *piVar2 + 1;
    }
  }
  local_28 = param_1;
  local_24 = param_2;
  FUN_015bf270(&local_28,&DAT_018ab1b4);
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0x15f8400);
  (*pcVar1)();
}

