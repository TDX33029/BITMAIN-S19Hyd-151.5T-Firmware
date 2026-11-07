// FUN_019ba2ec @ 019ba2ec size=244 calls_out=5 calls_in=2
// strings: 

void FUN_019ba2ec(void)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  
  if (((DAT_01d51b08 & 0x7fffffff) != 0) && (iVar3 = FUN_0197ac0c(), iVar3 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb100(&DAT_00526abd,0x69,&DAT_01d27df4);
  }
  if (DAT_01d51b14 == 0) {
    bVar1 = (bool)hasExclusiveAccess(0x1d51b14);
    if (bVar1) {
      DAT_01d51b14 = 0x3fffffff;
      DataMemoryBarrier(0xb);
      goto LAB_019ba330;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  FUN_019ae2e0(&DAT_01d51b14);
LAB_019ba330:
  puVar2 = DAT_01d51b20;
  iVar3 = DAT_01d51b1c;
  DAT_01d51b1c = 1;
  DAT_01d51b20 = (undefined4 *)&DAT_01c234e8;
  DataMemoryBarrier(0xb);
  do {
    uVar4 = DAT_01d51b14 + 0xc0000001;
    bVar1 = (bool)hasExclusiveAccess(0x1d51b14);
  } while (!bVar1);
  DAT_01d51b14 = uVar4;
  if (0x3fffffff < uVar4) {
    FUN_019a33c4(&DAT_01d51b14);
  }
  if (iVar3 != 0) {
    pcVar5 = (code *)*puVar2;
    if (pcVar5 != (code *)0x0) {
      (*pcVar5)(iVar3);
    }
    if (puVar2[1] != 0) {
      thunk_FUN_01be4678(iVar3);
      return;
    }
  }
  return;
}

