// FUN_0073256c @ 0073256c size=308 calls_out=5 calls_in=1
// strings: 

undefined8 FUN_0073256c(undefined4 param_1)

{
  bool bVar1;
  char *pcVar2;
  uint uVar3;
  int *unaff_r4;
  int *piVar4;
  undefined8 uVar5;
  int *local_20;
  undefined1 local_1c;
  undefined1 local_15;
  undefined1 *local_14;
  
  uVar5 = thunk_FUN_01bee35a(param_1,0x88);
  pcVar2 = (char *)((int)uVar5 + (int)((ulonglong)uVar5 >> 0x20));
  if (pcVar2[1] == '\0') {
    pcVar2[0] = '\0';
    pcVar2[1] = '\x01';
  }
  if (*pcVar2 == '\0') {
    *pcVar2 = '\x01';
    DataMemoryBarrier(0xb);
    if (DAT_01d4b810 != 0) {
      local_14 = &local_15;
      local_15 = 1;
      FUN_019a768c(&DAT_01d4b810,0,&local_14,&DAT_01c07900,&DAT_01c07924);
    }
    unaff_r4 = DAT_01d51148;
    piVar4 = DAT_01d51148;
    do {
      if (*DAT_01d51148 != 0) {
        ClearExclusiveLocal();
        FUN_0197ade4(DAT_01d51148);
        goto LAB_007325e8;
      }
      bVar1 = (bool)hasExclusiveAccess(DAT_01d51148);
    } while (!bVar1);
    *DAT_01d51148 = 1;
    DataMemoryBarrier(0xb);
LAB_007325e8:
    uVar3 = 0;
    if ((DAT_01d51b08 & 0x7fffffff) != 0) {
      uVar3 = FUN_0197ac0c();
      uVar3 = uVar3 ^ 1;
    }
    if ((char)unaff_r4[1] != '\0') {
      local_1c = (undefined1)uVar3;
      local_20 = piVar4;
                    /* WARNING: Subroutine does not return */
      FUN_013073dc(&DAT_00533467,0x2b,&local_20,&DAT_01c07914,&DAT_01c07934);
    }
  }
  else {
    uVar3 = 2;
  }
  return CONCAT44(uVar3,unaff_r4);
}

