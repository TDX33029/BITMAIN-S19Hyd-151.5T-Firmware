// FUN_011ea9f8 @ 011ea9f8 size=192 calls_out=4 calls_in=4
// strings: 

int FUN_011ea9f8(void)

{
  code *pcVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  undefined4 in_stack_00000000;
  undefined4 local_88;
  undefined8 local_84;
  undefined1 *local_68;
  undefined2 local_64;
  undefined1 local_30;
  undefined4 local_2c;
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = FUN_0123ab30();
  piVar3 = (int *)local_10;
  do {
    iVar4 = *piVar3;
    bVar2 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar2);
  *piVar3 = iVar4 + 1;
  if (-1 < iVar4) {
    do {
      iVar4 = *piVar3;
      bVar2 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar2);
    *piVar3 = iVar4 + 1;
    if (-1 < iVar4) {
      local_30 = 6;
      local_64 = 0x4000;
      local_88 = 1;
      local_2c = in_stack_00000000;
      local_68 = &DAT_80000028;
      local_18 = local_10;
      local_84 = local_10;
      iVar4 = thunk_FUN_016d4a50(0x80);
      if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(8,0x80);
      }
      FUN_016dd1aa(iVar4,&local_88,0x80);
      return iVar4;
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0x11eaab4);
  (*pcVar1)();
}

