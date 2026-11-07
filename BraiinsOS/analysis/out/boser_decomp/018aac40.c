// FUN_018aac40 @ 018aac40 size=136 calls_out=3 calls_in=0
// strings: 

void FUN_018aac40(undefined2 *param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  undefined2 *puVar3;
  
  iVar2 = *(int *)(param_3 + 8);
  FUN_0189baf4(param_3,"",2);
  if (param_2 != 0) {
    puVar3 = param_1 + param_2 * 2;
    do {
      FUN_018d8b2c(*param_1,param_1[1],param_3);
      param_1 = param_1 + 2;
    } while (param_1 != puVar3);
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

