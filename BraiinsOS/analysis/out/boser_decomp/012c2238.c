// FUN_012c2238 @ 012c2238 size=120 calls_out=3 calls_in=0
// strings: 

void FUN_012c2238(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  
  uVar4 = *(uint *)(param_2 + 8);
  if (8 < uVar4) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(uVar4,8,8,&DAT_01ce29dc);
  }
  uVar5 = FUN_012c3898();
  uVar2 = (uint)((ulonglong)uVar5 >> 0x20);
  if (8 - uVar4 < uVar2) {
    uVar2 = 8 - uVar4;
  }
  if (uVar2 != 0) {
    FUN_01bed4e2((int)uVar5,param_2 + uVar4,uVar2);
  }
  iVar1 = *(int *)(param_1 + 8);
  uVar3 = *(uint *)(param_1 + 0xc);
  *(uint *)(param_2 + 8) = uVar4 + uVar2;
  uVar2 = iVar1 + uVar2;
  if (uVar3 < uVar2) {
    uVar3 = uVar2;
  }
  *(uint *)(param_1 + 8) = uVar2;
  *(uint *)(param_1 + 0xc) = uVar3;
  return;
}

