// FUN_012c22b4 @ 012c22b4 size=124 calls_out=3 calls_in=1
// strings: 

void FUN_012c22b4(int param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  
  uVar4 = *param_2;
  if (10 < uVar4) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(uVar4,10,10,&DAT_01ce29dc);
  }
  uVar5 = FUN_012c3898();
  uVar2 = (uint)((ulonglong)uVar5 >> 0x20);
  if (10 - uVar4 < uVar2) {
    uVar2 = 10 - uVar4;
  }
  if (uVar2 != 0) {
    FUN_01bed4e2((int)uVar5,(int)param_2 + uVar4 + 4,uVar2);
  }
  iVar1 = *(int *)(param_1 + 8);
  uVar3 = *(uint *)(param_1 + 0xc);
  *param_2 = uVar4 + uVar2;
  uVar2 = iVar1 + uVar2;
  if (uVar3 < uVar2) {
    uVar3 = uVar2;
  }
  *(uint *)(param_1 + 8) = uVar2;
  *(uint *)(param_1 + 0xc) = uVar3;
  return;
}

