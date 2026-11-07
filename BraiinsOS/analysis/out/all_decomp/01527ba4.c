// FUN_01527ba4 @ 01527ba4 size=216 calls_out=5 calls_in=4
// strings: 

void FUN_01527ba4(int param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  uVar2 = *(uint *)(param_1 + 8);
  FUN_0150e524(param_2,param_1,0x80000000);
  uVar1 = *(uint *)(param_1 + 8);
  if (uVar1 < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(uVar2,uVar1,uVar1,&DAT_018a7854);
  }
  uVar1 = uVar1 - uVar2;
  piVar4 = *(int **)(param_1 + 0xc);
  iVar5 = *(int *)(param_1 + 4) + uVar2;
  (**(code **)(piVar4[6] + 0x18))(piVar4[5],iVar5,uVar1);
  if (*piVar4 != -0x80000000) {
    iVar3 = piVar4[2];
    if ((uint)(*piVar4 - iVar3) < uVar1) {
      FUN_0154e5f8(piVar4,iVar3,uVar1,1,1);
      iVar3 = piVar4[2];
    }
    FUN_016dd1aa(piVar4[1] + iVar3,iVar5,uVar1);
    piVar4[2] = iVar3 + uVar1;
  }
  FUN_01522a2c(param_2);
  return;
}

