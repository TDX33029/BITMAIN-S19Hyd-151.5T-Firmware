// FUN_01a5fdf8 @ 01a5fdf8 size=192 calls_out=2 calls_in=0
// strings: 

void FUN_01a5fdf8(undefined4 *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined1 auStack_18 [4];
  undefined1 auStack_14 [4];
  
  if ((*(uint *)(param_2 + 8) & 0x2000000) == 0) {
    if ((*(uint *)(param_2 + 8) & 0x4000000) == 0) {
      FUN_012fcd24();
      return;
    }
    uVar3 = (uint)*(ushort *)*param_1;
    puVar5 = auStack_14;
    iVar1 = 3;
    do {
      iVar4 = iVar1;
      uVar2 = uVar3 & 0xf;
      uVar3 = uVar3 >> 4;
      puVar5[iVar4] = (&DAT_005682a8)[uVar2];
      iVar1 = iVar4 + -1;
    } while (uVar3 != 0);
  }
  else {
    uVar3 = (uint)*(ushort *)*param_1;
    puVar5 = auStack_18;
    iVar1 = 3;
    do {
      iVar4 = iVar1;
      uVar2 = uVar3 & 0xf;
      uVar3 = uVar3 >> 4;
      puVar5[iVar4] = (&DAT_005679b8)[uVar2];
      iVar1 = iVar4 + -1;
    } while (uVar3 != 0);
  }
  FUN_012fa378(param_2,1,"0x",2,puVar5 + iVar4,5 - (iVar4 + 1));
  return;
}

