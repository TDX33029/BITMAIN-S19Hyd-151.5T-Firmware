// FUN_0061d4dc @ 0061d4dc size=320 calls_out=5 calls_in=1
// strings: 

undefined8 FUN_0061d4dc(undefined4 param_1)

{
  char cVar1;
  bool bVar2;
  char *pcVar3;
  uint uVar4;
  undefined4 unaff_r4;
  int *piVar5;
  undefined8 uVar6;
  int *local_20;
  undefined1 local_1c;
  undefined1 local_15;
  undefined1 *local_14;
  
  uVar6 = thunk_FUN_016de0ee(param_1,0xa8);
  pcVar3 = (char *)((int)uVar6 + (int)((ulonglong)uVar6 >> 0x20));
  if (pcVar3[1] == '\0') {
    pcVar3[0] = '\0';
    pcVar3[1] = '\x01';
  }
  if (*pcVar3 != '\0') {
    return CONCAT44(2,unaff_r4);
  }
  *pcVar3 = '\x01';
  DataMemoryBarrier(0xb);
  if (DAT_018cc638 != 0) {
    local_14 = &local_15;
    local_15 = 1;
    FUN_015eedc4(&DAT_018cc638,0,&local_14,&DAT_018578f0,&DAT_01857914);
  }
  piVar5 = DAT_018dd948;
  do {
    if (*DAT_018dd948 != 0) {
      ClearExclusiveLocal();
      FUN_015bf680(DAT_018dd948);
      goto LAB_0061d564;
    }
    bVar2 = (bool)hasExclusiveAccess(DAT_018dd948);
  } while (!bVar2);
  *DAT_018dd948 = 1;
  DataMemoryBarrier(0xb);
LAB_0061d564:
  uVar4 = 0;
  if ((DAT_018dd988 & 0x7fffffff) == 0) {
    cVar1 = (char)piVar5[1];
  }
  else {
    uVar4 = FUN_015bf3f8();
    uVar4 = uVar4 ^ 1;
    cVar1 = (char)piVar5[1];
  }
  if (cVar1 != '\0') {
    local_1c = (undefined1)uVar4;
    local_20 = piVar5;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_20,&DAT_01857904,&DAT_01857924);
  }
  return CONCAT44(uVar4,piVar5);
}

