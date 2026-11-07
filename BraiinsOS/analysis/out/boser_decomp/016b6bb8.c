// FUN_016b6bb8 @ 016b6bb8 size=132 calls_out=2 calls_in=1
// strings: 

void FUN_016b6bb8(int param_1,undefined4 param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  
  if (param_3 != param_4) {
    FUN_016b3214(param_2,param_3,param_4);
    uVar5 = *(uint *)(param_1 + 8);
    uVar2 = *(uint *)(param_1 + 0xc) & 0x1f;
    uVar1 = param_3 >> uVar2;
    if (uVar5 <= param_3 >> uVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(uVar1,uVar5,&DAT_01d08a98);
    }
    param_4 = param_4 >> uVar2;
    if (uVar5 <= param_4) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(param_4,uVar5,&DAT_01d08a98);
    }
    iVar3 = *(int *)(param_1 + 4);
    uVar4 = *(undefined4 *)(iVar3 + uVar1 * 4);
    *(undefined4 *)(iVar3 + uVar1 * 4) = *(undefined4 *)(iVar3 + param_4 * 4);
    *(undefined4 *)(iVar3 + param_4 * 4) = uVar4;
  }
  return;
}

