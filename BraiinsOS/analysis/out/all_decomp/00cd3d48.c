// FUN_00cd3d48 @ 00cd3d48 size=392 calls_out=4 calls_in=1
// strings: 

void FUN_00cd3d48(uint param_1,char *param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined1 auStack_30 [24];
  
  if (*param_2 == '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464(&DAT_00419463,0x28,&DAT_0187bf28);
  }
  puVar3 = *(undefined4 **)(param_2 + 4);
  piVar2 = (int *)*puVar3;
  if (param_2[1] != '\x01') {
    iVar1 = piVar2[2];
    if (*piVar2 == iVar1) {
      FUN_00d653ec(piVar2,iVar1,1,1,1);
      iVar1 = piVar2[2];
    }
    *(undefined1 *)(piVar2[1] + iVar1) = 0x2c;
    piVar2[2] = piVar2[2] + 1;
    piVar2 = (int *)*puVar3;
  }
  param_2[1] = '\x02';
  if ((param_1 & 0x7fffffff) < 0x7f800000) {
    iVar1 = FUN_016d14cc(auStack_30);
    uVar4 = iVar1 - (int)auStack_30;
    iVar1 = piVar2[2];
    if ((uint)(*piVar2 - iVar1) < uVar4) {
      FUN_00d653ec(piVar2,iVar1,uVar4,1,1);
      iVar1 = piVar2[2];
    }
    FUN_016dd1aa(piVar2[1] + iVar1,auStack_30,uVar4);
    piVar2[2] = piVar2[2] + uVar4;
    return;
  }
  iVar1 = piVar2[2];
  if ((uint)(*piVar2 - iVar1) < 4) {
    FUN_00d653ec(piVar2,iVar1,4,1,1);
    iVar1 = piVar2[2];
  }
  *(undefined4 *)(piVar2[1] + iVar1) = 0x6c6c756e;
  piVar2[2] = piVar2[2] + 4;
  return;
}

