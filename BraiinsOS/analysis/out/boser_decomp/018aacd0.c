// FUN_018aacd0 @ 018aacd0 size=140 calls_out=3 calls_in=1
// strings: 

void FUN_018aacd0(int param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar2 = *(int *)(param_3 + 8);
  FUN_0189baf4(param_3,"",2);
  if (param_2 != 0) {
    puVar3 = (undefined4 *)(param_1 + 4);
    param_2 = param_2 * 0xc;
    do {
      FUN_018c42d4(*puVar3,puVar3[1],param_3);
      puVar3 = puVar3 + 3;
      param_2 = param_2 + -0xc;
    } while (param_2 != 0);
  }
  uVar1 = *(uint *)(param_3 + 8);
  if (uVar1 < iVar2 + 2U) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(iVar2,iVar2 + 2U,uVar1,&DAT_01d22404);
  }
  uVar1 = (uVar1 - iVar2) - 2;
  *(ushort *)(*(int *)(param_3 + 4) + iVar2) =
       (ushort)((uVar1 & 0xff) << 8) | (ushort)(uVar1 >> 8) & 0xff;
  return;
}

