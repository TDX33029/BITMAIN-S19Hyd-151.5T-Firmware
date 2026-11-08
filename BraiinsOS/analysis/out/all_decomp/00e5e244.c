// FUN_00e5e244 @ 00e5e244 size=576 calls_out=4 calls_in=2
// strings: 

void FUN_00e5e244(uint param_1,char *param_2)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined1 auStack_48 [24];
  
  if (*param_2 == '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464(&DAT_00419463,0x28,&DAT_0187bf28);
  }
  puVar5 = *(undefined4 **)(param_2 + 4);
  piVar3 = (int *)*puVar5;
  if (param_2[1] == '\x01') {
    iVar1 = piVar3[2];
    if (*piVar3 == iVar1) {
      FUN_00edff4c(piVar3,iVar1,1,1,1);
      iVar1 = piVar3[2];
    }
    iVar4 = iVar1 + 1;
    *(undefined1 *)(piVar3[1] + iVar1) = 10;
  }
  else {
    iVar1 = piVar3[2];
    if ((uint)(*piVar3 - iVar1) < 2) {
      FUN_00edff4c(piVar3,iVar1,2,1,1);
      iVar1 = piVar3[2];
    }
    iVar4 = iVar1 + 2;
    *(undefined2 *)(piVar3[1] + iVar1) = 0xa2c;
  }
  iVar1 = puVar5[3];
  uVar6 = puVar5[1];
  uVar2 = puVar5[2];
  piVar3[2] = iVar4;
  for (; iVar1 != 0; iVar1 = iVar1 + -1) {
    if ((uint)(*piVar3 - iVar4) < uVar2) {
      FUN_00edff4c(piVar3,iVar4,uVar2,1,1);
      iVar4 = piVar3[2];
    }
    FUN_016dd1aa(piVar3[1] + iVar4,uVar6,uVar2);
    iVar4 = iVar4 + uVar2;
    piVar3[2] = iVar4;
  }
  piVar3 = (int *)*puVar5;
  param_2[1] = '\x02';
  if ((param_1 & 0x7fffffff) < 0x7f800000) {
    iVar1 = FUN_016d14cc(param_1,auStack_48);
    uVar2 = iVar1 - (int)auStack_48;
    iVar1 = piVar3[2];
    if ((uint)(*piVar3 - iVar1) < uVar2) {
      FUN_00edff4c(piVar3,iVar1,uVar2,1,1);
      iVar1 = piVar3[2];
    }
    FUN_016dd1aa(piVar3[1] + iVar1,auStack_48,uVar2);
    iVar1 = iVar1 + uVar2;
  }
  else {
    iVar1 = piVar3[2];
    if ((uint)(*piVar3 - iVar1) < 4) {
      FUN_00edff4c(piVar3,iVar1,4,1,1);
      iVar1 = piVar3[2];
    }
    *(undefined4 *)(piVar3[1] + iVar1) = 0x6c6c756e;
    iVar1 = iVar1 + 4;
  }
  piVar3[2] = iVar1;
  *(undefined1 *)(puVar5 + 4) = 1;
  return;
}

