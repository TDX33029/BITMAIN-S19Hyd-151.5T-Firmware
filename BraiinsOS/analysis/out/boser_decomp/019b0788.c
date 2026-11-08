// FUN_019b0788 @ 019b0788 size=144 calls_out=2 calls_in=1
// strings: 

void FUN_019b0788(undefined4 param_1,undefined4 param_2)

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
    iVar3 = DAT_01d51b08 + 1;
    bVar4 = (bool)hasExclusiveAccess(0x1d51b08);
  } while (!bVar4);
  bVar4 = -1 < DAT_01d51b08;
  DAT_01d51b08 = iVar3;
  if (bVar4) {
    uVar5 = thunk_FUN_01bee35a();
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
  FUN_0197a998(&local_28,&DAT_01d27dd8);
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0x19b0814);
  (*pcVar1)();
}

