// FUN_010e0a78 @ 010e0a78 size=300 calls_out=8 calls_in=0
// strings: 

void FUN_010e0a78(undefined4 *param_1)

{
  char cVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  undefined *puVar5;
  bool bVar6;
  
  cVar1 = *(char *)*param_1;
  *(char *)*param_1 = '\0';
  if (cVar1 != '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_00faa444(&DAT_018ac42c);
  }
  if (((DAT_018dd988 & 0x7fffffff) != 0) && (iVar4 = FUN_015bf3f8(), iVar4 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_00410a8c,0x69,&DAT_018ab1f8);
  }
  if (DAT_018dd9c4 == 0) {
    bVar6 = (bool)hasExclusiveAccess(0x18dd9c4);
    if (bVar6) {
      DAT_018dd9c4 = 0x3fffffff;
      DataMemoryBarrier(0xb);
      goto LAB_010e0adc;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  FUN_015f5ff4(&DAT_018dd9c4);
LAB_010e0adc:
  puVar5 = DAT_018dd9d0;
  iVar4 = DAT_018dd9cc;
  DAT_018dd9cc = 0;
  DataMemoryBarrier(0xb);
  do {
    uVar3 = DAT_018dd9c4 + 0xc0000001;
    bVar6 = (bool)hasExclusiveAccess(0x18dd9c4);
  } while (!bVar6);
  DAT_018dd9c4 = uVar3;
  if (0x3fffffff < uVar3) {
    FUN_015e9814(&DAT_018dd9c4);
  }
  bVar6 = iVar4 == 0;
  if (bVar6) {
    iVar4 = 1;
  }
  if (bVar6) {
    puVar5 = &DAT_018ab1e0;
  }
  piVar2 = (int *)thunk_FUN_016d4a50(8);
  if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,8);
  }
  *piVar2 = iVar4;
  piVar2[1] = (int)puVar5;
  FUN_01603064(piVar2,&DAT_01885938);
  return;
}

