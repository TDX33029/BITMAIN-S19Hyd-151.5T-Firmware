// FUN_0168445c @ 0168445c size=140 calls_out=3 calls_in=2
// strings: 

undefined4 FUN_0168445c(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int local_20;
  int iStack_1c;
  
  iVar4 = *(byte *)(param_1 + 599) + 1;
  uVar1 = FUN_016c2c08(iVar4);
  uVar3 = (uVar1 & 0xffff) >> 8;
  if ((uVar1 & 1) != 0) {
    uVar3 = uVar1 >> 0x10;
  }
  uVar3 = uVar3 + (param_3 & 0x7ffffff);
  if (*(uint *)(param_2 + 0x7c) <= uVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(uVar3,*(uint *)(param_2 + 0x7c),&DAT_01d084cc);
  }
  if (*(int *)(*(int *)(param_2 + 0x78) + uVar3 * 4) < 0) {
    uVar2 = FUN_016c2c08(iVar4);
    local_20 = param_1;
    iStack_1c = param_2;
    uVar2 = FUN_016c4f08(&local_20,param_3,uVar2);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

