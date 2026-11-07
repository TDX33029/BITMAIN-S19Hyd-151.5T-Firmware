// FUN_013c9e60 @ 013c9e60 size=104 calls_out=1 calls_in=0
// strings: 

undefined4 FUN_013c9e60(int param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (param_2 >> (*(uint *)(param_1 + 0x3c) & 0x1f)) - 2;
  if (*(uint *)(param_1 + 0x14) <= uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(uVar2,*(uint *)(param_1 + 0x14),&DAT_01894718);
  }
  iVar1 = *(int *)(param_1 + 0x10) + uVar2 * 0xc;
  uVar2 = *(uint *)(iVar1 + 8);
  if (uVar2 <= param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(param_3,uVar2,&DAT_01894728);
  }
  return *(undefined4 *)(*(int *)(iVar1 + 4) + param_3 * 4);
}

