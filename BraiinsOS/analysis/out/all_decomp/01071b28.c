// FUN_01071b28 @ 01071b28 size=216 calls_out=5 calls_in=4
// strings: 

void FUN_01071b28(int *param_1,int param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  bool bVar4;
  bool bVar5;
  
  if ((param_3 ^ param_3 - 1) <= param_3 - 1) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464(&DAT_00384d5e,0x2a,&DAT_01883b50);
  }
  uVar1 = param_3 * 4;
  bVar5 = 0x3ffffffe < param_3;
  bVar4 = param_3 == 0x3fffffff;
  if (param_3 < 0x40000000) {
    bVar5 = 0x7ffffffb < uVar1;
    bVar4 = uVar1 == 0x7ffffffc;
  }
  if (bVar5 && !bVar4) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0,uVar1);
  }
  if (uVar1 == 0) {
    iVar2 = 4;
  }
  else {
    iVar2 = thunk_FUN_016d4a50(uVar1);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(4,uVar1);
    }
  }
  FUN_016dd606(iVar2,0,uVar1);
  puVar3 = (undefined4 *)thunk_FUN_016d4a50(0x10);
  if (puVar3 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x10);
  }
  *(undefined1 *)(puVar3 + 3) = 0;
  *puVar3 = 1;
  puVar3[1] = 1;
  puVar3[2] = 0;
  *param_1 = iVar2;
  param_1[1] = param_3;
  param_1[2] = (int)puVar3;
  param_1[3] = 0;
  param_1[4] = param_2;
  param_1[5] = 0;
  return;
}

